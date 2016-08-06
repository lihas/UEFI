/* Abstract syntax tree manipulation functions
 *
 * SOFTWARE RIGHTS
 *
 * We reserve no LEGAL rights to the Purdue Compiler Construction Tool
 * Set (PCCTS) -- PCCTS is in the public domain.  An individual or
 * company may do whatever they wish with source code distributed with
 * PCCTS or the code generated by PCCTS, including the incorporation of
 * PCCTS, or its output, into commerical software.
 *
 * We encourage users to develop software with PCCTS.  However, we do ask
 * that credit is given to us for developing PCCTS.  By "credit",
 * we mean that if you incorporate our source code into one of your
 * programs (commercial product, research project, or otherwise) that you
 * acknowledge this fact somewhere in the documentation, research report,
 * etc...  If you like PCCTS and have developed a nice tool with the
 * output, please mention that you developed it using PCCTS.  In
 * addition, we ask that this header remain intact in our source code.
 * As long as these guidelines are kept, we expect to continue enhancing
 * this system and expect to make other tools available as they are
 * completed. 
 *
 * ANTLR 1.33
 * Terence Parr
 * Parr Research Corporation
 * with Purdue University and AHPCRC, University of Minnesota
 * 1989-1998
 */

#include "pcctscfg.h"

#ifdef PCCTS_USE_STDARG
#include "pccts_stdarg.h"
#else
#include <varargs.h>
#endif

/* ensure that tree manipulation variables are current after a rule
 * reference
 */

void
#ifdef __USE_PROTOS
zzlink(AST **_root, AST **_sibling, AST **_tail)
#else
zzlink(_root, _sibling, _tail)
AST **_root, **_sibling, **_tail;
#endif
{
  if ( *_sibling == NULL ) return;
  if ( *_root == NULL ) *_root = *_sibling;
  else if ( *_root != *_sibling ) (*_root)->down = *_sibling;
  if ( *_tail==NULL ) *_tail = *_sibling;
  while ( (*_tail)->right != NULL ) *_tail = (*_tail)->right;
}

AST *
#ifdef __USE_PROTOS
zzastnew(void)
#else
zzastnew()
#endif
{
  AST *p = (AST *) calloc(1, sizeof(AST));
  if ( p == NULL ) fprintf(stderr,"%s(%d): cannot allocate AST node\n",__FILE__,__LINE__);
  return p;
}

/* add a child node to the current sibling list */
void
#ifdef __USE_PROTOS
zzsubchild(AST **_root, AST **_sibling, AST **_tail)
#else
zzsubchild(_root, _sibling, _tail)
AST **_root, **_sibling, **_tail;
#endif
{
  AST *n;
  zzNON_GUESS_MODE {
  n = zzastnew();
#ifdef DEMAND_LOOK
  zzcr_ast(n, &(zzaCur), LA(0), LATEXT(0));
#else
  zzcr_ast(n, &(zzaCur), LA(1), LATEXT(1));
#endif
  zzastPush( n );
  if ( *_tail != NULL ) (*_tail)->right = n;
  else {
    *_sibling = n;
    if ( *_root != NULL ) (*_root)->down = *_sibling;
  }
  *_tail = n;
  if ( *_root == NULL ) *_root = *_sibling;
  }
}

/* make a new AST node.  Make the newly-created
 * node the root for the current sibling list.  If a root node already
 * exists, make the newly-created node the root of the current root.
 */
void
#ifdef __USE_PROTOS
zzsubroot(AST **_root, AST **_sibling, AST **_tail)
#else
zzsubroot(_root, _sibling, _tail)
AST **_root, **_sibling, **_tail;
#endif
{
  AST *n;
  zzNON_GUESS_MODE {
  n = zzastnew();
#ifdef DEMAND_LOOK
  zzcr_ast(n, &(zzaCur), LA(0), LATEXT(0));
#else
  zzcr_ast(n, &(zzaCur), LA(1), LATEXT(1));
#endif
  zzastPush( n );
  if ( *_root != NULL )
    if ( (*_root)->down == *_sibling ) *_sibling = *_tail = *_root;
  *_root = n;
  (*_root)->down = *_sibling;
  }
}

/* Apply function to root then each sibling
 * example: print tree in child-sibling LISP-format (AST has token field)
 *
 *  void show(tree)
 *  AST *tree;
 *  {
 *    if ( tree == NULL ) return;
 *    printf(" %s", zztokens[tree->token]);
 *  }
 *
 *  void before() { printf(" ("); }
 *  void after()  { printf(" )"); }
 *
 *  LISPdump() { zzpre_ast(tree, show, before, after); }
 *
 */
void
#ifdef __USE_PROTOS
zzpre_ast(
    AST *tree,
    void (*func)(AST *),   /* apply this to each tree node */
    void (*before)(AST *), /* apply this to root of subtree before preordering it */
    void (*after)(AST *))  /* apply this to root of subtree after preordering it */
#else
zzpre_ast(tree, func, before, after)
AST *tree;
void (*func)(),   /* apply this to each tree node */
   (*before)(), /* apply this to root of subtree before preordering it */
   (*after)();  /* apply this to root of subtree after preordering it */
#endif
{
  while ( tree!= NULL )
  {
    if ( tree->down != NULL ) (*before)(tree);
    (*func)(tree);
    zzpre_ast(tree->down, func, before, after);
    if ( tree->down != NULL ) (*after)(tree);
    tree = tree->right;
  }
}

/* free all AST nodes in tree; apply func to each before freeing */

#if 0
////void
////#ifdef __USE_PROTOS
////zzfree_ast(AST *tree)
////#else
////zzfree_ast(tree)
////AST *tree;
////#endif
////{
////  if ( tree == NULL ) return;
////  zzfree_ast( tree->down );
////  zzfree_ast( tree->right );
////  zztfree( tree );
////}
#endif

/*
   MR19 Optimize freeing of the following structure to limit recursion
   SAKAI Kiyotaka (ksakai@isr.co.jp)
*/

/*
         NULL o
             / \
           NULL o
               / \
            NULL NULL
*/

/*
   MR21 Another refinement to replace recursion with iteration
   NAKAJIMA Mutsuki (muc@isr.co.jp).
*/

void
#ifdef __USE_PROTOS
zzfree_ast(AST *tree)
#else
zzfree_ast(tree)
AST *tree;
#endif
{

    AST *otree;

    if (tree == NULL) return;

    while (tree->down == NULL || tree->right == NULL) {

        if (tree->down == NULL && tree->right == NULL) {
            zztfree(tree);
            return;
        }

        otree = tree;
        if (tree->down == NULL) {
            tree = tree->right;
        } else {
            tree = tree->down;
        }
        zztfree( otree );
    }

    while (tree != NULL) {
        zzfree_ast(tree->down);
        otree = tree;
        tree = otree->right;
        zztfree(otree);
    }
}

/* build a tree (root child1 child2 ... NULL)
 * If root is NULL, simply make the children siblings and return ptr
 * to 1st sibling (child1).  If root is not single node, return NULL.
 *
 * Siblings that are actually siblins lists themselves are handled
 * correctly.  For example #( NULL, #( NULL, A, B, C), D) results
 * in the tree ( NULL A B C D ).
 *
 * Requires at least two parameters with the last one being NULL.  If
 * both are NULL, return NULL.
 */
#ifdef PCCTS_USE_STDARG
AST *zztmake(AST *rt, ...)
#else
AST *zztmake(va_alist)
va_dcl
#endif
{
  va_list ap;
  register AST *child, *sibling=NULL, *tail=NULL /* MR20 */, *w;
  AST *root;

#ifdef PCCTS_USE_STDARG
  va_start(ap, rt);
  root = rt;
#else
  va_start(ap);
  root = va_arg(ap, AST *);
#endif

  if ( root != NULL )
    if ( root->down != NULL ) return NULL;
  child = va_arg(ap, AST *);
  while ( child != NULL )
  {
    for (w=child; w->right!=NULL; w=w->right) {;} /* find end of child */
    if ( sibling == NULL ) {sibling = child; tail = w;}
    else {tail->right = child; tail = w;}
    child = va_arg(ap, AST *);
  }
  if ( root==NULL ) root = sibling;
  else root->down = sibling;
  va_end(ap);
  return root;
}

/* tree duplicate */
AST *
#ifdef __USE_PROTOS
zzdup_ast(AST *t)
#else
zzdup_ast(t)
AST *t;
#endif
{
  AST *u;
  
  if ( t == NULL ) return NULL;
  u = zzastnew();
  *u = *t;
#ifdef zzAST_DOUBLE
  u->up = NULL;    /* set by calling invocation */
  u->left = NULL;
#endif
  u->right = zzdup_ast(t->right);
  u->down = zzdup_ast(t->down);
#ifdef zzAST_DOUBLE
  if ( u->right!=NULL ) u->right->left = u;
  if ( u->down!=NULL ) u->down->up = u;
#endif
  return u;
}

void
#ifdef __USE_PROTOS
zztfree(AST *t)
#else
zztfree(t)
AST *t;
#endif
{
#ifdef zzd_ast
  zzd_ast( t );
#endif
  free( t );
}

#ifdef zzAST_DOUBLE
/*
 * Set the 'up', and 'left' pointers of all nodes in 't'.
 * Initial call is double_link(your_tree, NULL, NULL).
 */
void
#ifdef __USE_PROTOS
zzdouble_link(AST *t, AST *left, AST *up)
#else
zzdouble_link(t, left, up)
AST *t, *left, *up;
#endif
{
  if ( t==NULL ) return;
  t->left = left;
  t->up = up;
  zzdouble_link(t->down, NULL, t);
  zzdouble_link(t->right, t, up);
}
#endif
