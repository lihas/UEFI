	.file	"reed_solomon.c"
	.section	.text.unlikely,"ax",@progbits
.LCOLDB0:
	.text
.LHOTB0:
	.type	pol_evaluate, @function
pol_evaluate:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	movl	%ecx, %edi
	pushl	%esi
	movl	%eax, %esi
	pushl	%ebx
	xorl	%eax, %eax
	xorl	%ebx, %ebx
.L2:
	testl	%edx, %edx
	js	.L11
	movzbl	(%esi,%edx), %ecx
	testb	%cl, %cl
	je	.L3
	movzbl	1049088(%ecx), %ecx
	xorb	1048576(%ebx,%ecx), %al
.L3:
	addl	%edi, %ebx
	leal	-255(%ebx), %ecx
	cmpl	$255, %ebx
	cmovge	%ecx, %ebx
	decl	%edx
	jmp	.L2
.L11:
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.size	pol_evaluate, .-pol_evaluate
	.section	.text.unlikely
.LCOLDE0:
	.text
.LHOTE0:
	.section	.text.unlikely
.LCOLDB1:
	.text
.LHOTB1:
	.type	gf_mul, @function
gf_mul:
	pushl	%ebp
	testb	%al, %al
	movl	%esp, %ebp
	je	.L14
	testb	%dl, %dl
	je	.L14
	movzbl	%al, %eax
	movzbl	%dl, %edx
	movzbl	1049088(%eax), %ecx
	movzbl	1049088(%edx), %eax
	movb	1048576(%ecx,%eax), %al
	jmp	.L13
.L14:
	xorl	%eax, %eax
.L13:
	popl	%ebp
	ret
	.size	gf_mul, .-gf_mul
	.section	.text.unlikely
.LCOLDE1:
	.text
.LHOTE1:
	.section	.text.unlikely
.LCOLDB2:
	.text
.LHOTB2:
	.type	gauss_solve.constprop.2, @function
gauss_solve.constprop.2:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$36, %esp
	movl	%eax, -28(%ebp)
	movl	%edx, -16(%ebp)
	movl	%ecx, -32(%ebp)
	xorl	%eax, %eax
.L17:
	cmpl	-28(%ebp), %eax
	jge	.L45
	movl	$-1, 1049344(,%eax,4)
	incl	%eax
	jmp	.L17
.L45:
	xorl	%eax, %eax
.L19:
	cmpl	-16(%ebp), %eax
	jge	.L46
	movl	-32(%ebp), %edx
	movb	$0, (%edx,%eax)
	incl	%eax
	jmp	.L19
.L46:
	movl	-16(%ebp), %eax
	xorl	%edi, %edi
	movl	$0, -20(%ebp)
	incl	%eax
	movl	%eax, -24(%ebp)
	movl	%eax, -44(%ebp)
.L21:
	movl	-20(%ebp), %ecx
	cmpl	%ecx, -28(%ebp)
	jle	.L47
	xorl	%ebx, %ebx
.L33:
	cmpl	%ebx, -16(%ebp)
	jg	.L22
.L26:
	cmpl	%ebx, -16(%ebp)
	jne	.L43
	jmp	.L23
.L22:
	cmpb	$0, 1052672(%ebx,%edi)
	jne	.L26
	incl	%ebx
	jmp	.L33
.L23:
	incl	-20(%ebp)
	addl	-24(%ebp), %edi
	jmp	.L21
.L43:
	movl	-20(%ebp), %eax
	movl	$255, %edx
	xorl	%esi, %esi
	movl	%ebx, 1049344(,%eax,4)
	movzbl	1052672(%ebx,%edi), %eax
	movzbl	1049088(%eax), %eax
	subl	%eax, %edx
	movzbl	1048576(%edx), %eax
	movl	%eax, -36(%ebp)
.L27:
	cmpl	%esi, -16(%ebp)
	jl	.L48
	movzbl	1052672(%esi,%edi), %eax
	movl	-36(%ebp), %edx
	incl	%esi
	call	gf_mul
	movb	%al, 1052671(%esi,%edi)
	jmp	.L27
.L48:
	movl	-20(%ebp), %eax
	incl	%eax
	movl	%eax, -36(%ebp)
	movl	-24(%ebp), %eax
	leal	(%edi,%eax), %ecx
.L29:
	movl	-36(%ebp), %edx
	cmpl	%edx, -28(%ebp)
	je	.L23
	movzbl	1052672(%ebx,%ecx), %eax
	xorl	%esi, %esi
	movl	%eax, -40(%ebp)
.L30:
	cmpl	%esi, -16(%ebp)
	jl	.L49
	movl	%ecx, -48(%ebp)
	movzbl	1052672(%esi,%edi), %eax
	movl	-40(%ebp), %edx
	call	gf_mul
	movl	-48(%ebp), %ecx
	xorb	%al, 1052672(%esi,%ecx)
	incl	%esi
	jmp	.L30
.L49:
	incl	-36(%ebp)
	addl	-44(%ebp), %ecx
	jmp	.L29
.L47:
	movl	-28(%ebp), %esi
	movl	-24(%ebp), %ebx
	movl	-16(%ebp), %eax
	decl	%esi
	imull	%esi, %ebx
	addl	-16(%ebp), %ebx
	notl	%eax
	movl	%eax, -28(%ebp)
.L34:
	testl	%esi, %esi
	js	.L50
	movl	1049344(,%esi,4), %eax
	movl	%eax, -20(%ebp)
	incl	%eax
	je	.L35
	movl	%ebx, %eax
	subl	-16(%ebp), %eax
	xorl	%edi, %edi
	xorl	%ecx, %ecx
	movl	%eax, -24(%ebp)
.L36:
	cmpl	%ecx, -16(%ebp)
	jle	.L51
	movl	-32(%ebp), %eax
	movzbl	(%eax,%ecx), %edx
	movl	-24(%ebp), %eax
	movzbl	1052672(%ecx,%eax), %eax
	movl	%ecx, -36(%ebp)
	call	gf_mul
	movl	-36(%ebp), %ecx
	xorl	%eax, %edi
	incl	%ecx
	jmp	.L36
.L51:
	movl	%edi, %eax
	xorb	1052672(%ebx), %al
	movl	-32(%ebp), %edx
	movl	-20(%ebp), %edi
	movb	%al, (%edx,%edi)
.L35:
	decl	%esi
	addl	-28(%ebp), %ebx
	jmp	.L34
.L50:
	addl	$36, %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.size	gauss_solve.constprop.2, .-gauss_solve.constprop.2
	.section	.text.unlikely
.LCOLDE2:
	.text
.LHOTE2:
	.section	.text.unlikely
.LCOLDB3:
	.text
.LHOTB3:
	.globl	grub_reed_solomon_recover
	.type	grub_reed_solomon_recover, @function
grub_reed_solomon_recover:
	pushl	%ebp
	movl	%esp, %ebp
	pushl	%edi
	pushl	%esi
	pushl	%ebx
	subl	$68, %esp
	testl	%ecx, %ecx
	movl	%eax, -52(%ebp)
	movl	%edx, -28(%ebp)
	movl	%ecx, -40(%ebp)
	je	.L52
	movb	$0, 1049088
	movb	$1, %al
	xorl	%edx, %edx
.L56:
	movzbl	%al, %ecx
	testb	%al, %al
	movb	%al, 1048576(%edx)
	movb	%al, 1048831(%edx)
	movb	%dl, 1049088(%ecx)
	jns	.L54
	leal	(%ecx,%ecx), %eax
	xorl	$29, %eax
	jmp	.L55
.L54:
	addl	%eax, %eax
.L55:
	incl	%edx
	cmpl	$255, %edx
	jne	.L56
	movl	-52(%ebp), %eax
	addl	-28(%ebp), %eax
	movl	%eax, -56(%ebp)
.L57:
	cmpl	$0, -28(%ebp)
	je	.L52
	movl	-28(%ebp), %ecx
	addl	-40(%ebp), %ecx
	cmpl	$102400, %ecx
	jbe	.L88
	imull	$200, -28(%ebp), %eax
	xorl	%edx, %edx
	divl	%ecx
	xorl	%edx, %edx
	sall	$9, %eax
	movl	%eax, -24(%ebp)
	imull	$200, -40(%ebp), %eax
	divl	%ecx
	sall	$9, %eax
	movl	%eax, -44(%ebp)
	jmp	.L58
.L88:
	movl	-40(%ebp), %eax
	movl	%eax, -44(%ebp)
	movl	-28(%ebp), %eax
	movl	%eax, -24(%ebp)
.L58:
	movl	-24(%ebp), %eax
	addl	$511, %eax
	movl	%eax, -60(%ebp)
	movl	-52(%ebp), %eax
	movl	%eax, -48(%ebp)
	movl	-24(%ebp), %eax
	decl	%eax
	movl	%eax, -72(%ebp)
	movl	-60(%ebp), %eax
	movl	%eax, -36(%ebp)
	movl	-44(%ebp), %eax
	subl	-24(%ebp), %eax
	movl	%eax, -76(%ebp)
.L61:
	movl	-76(%ebp), %ebx
	addl	-36(%ebp), %ebx
	movl	%ebx, %eax
	shrl	$9, %eax
	movl	%eax, -16(%ebp)
	movl	-36(%ebp), %eax
	shrl	$9, %eax
	movl	%eax, -32(%ebp)
	je	.L59
	xorl	%eax, %eax
	cmpl	$0, -16(%ebp)
	jne	.L60
.L59:
	decl	-36(%ebp)
	incl	-48(%ebp)
	movl	-36(%ebp), %eax
	cmpl	-72(%ebp), %eax
	jne	.L61
	movl	-24(%ebp), %edi
	movl	-44(%ebp), %esi
	addl	%edi, -52(%ebp)
	addl	%esi, -56(%ebp)
	subl	%edi, -28(%ebp)
	subl	%esi, -40(%ebp)
	jmp	.L57
.L60:
	cmpl	-32(%ebp), %eax
	jge	.L98
	movl	-48(%ebp), %esi
	movl	%eax, %edx
	incl	%eax
	sall	$9, %edx
	movb	(%esi,%edx), %dl
	movb	%dl, 1052159(%eax)
	jmp	.L60
.L98:
	movl	-60(%ebp), %edx
	subl	-36(%ebp), %edx
	xorl	%eax, %eax
	addl	-56(%ebp), %edx
.L64:
	cmpl	-16(%ebp), %eax
	jge	.L99
	movl	%eax, %ecx
	movl	-32(%ebp), %esi
	incl	%eax
	sall	$9, %ecx
	movb	(%edx,%ecx), %cl
	movb	%cl, 1052159(%eax,%esi)
	jmp	.L64
.L99:
	shrl	$10, %ebx
	movl	-32(%ebp), %eax
	xorl	%esi, %esi
	movl	%ebx, -20(%ebp)
	movl	-16(%ebp), %ebx
	leal	-1(%eax,%ebx), %edi
.L66:
	movl	%esi, %ecx
	movl	%edi, %edx
	movl	$1052160, %eax
	call	pol_evaluate
	incl	%esi
	movb	%al, 1051903(%esi)
	cmpl	%esi, -16(%ebp)
	jg	.L66
	movl	-32(%ebp), %eax
	addl	-16(%ebp), %eax
	movl	%eax, -64(%ebp)
	decl	%eax
	movl	%eax, -68(%ebp)
	xorl	%eax, %eax
.L68:
	cmpb	$0, 1051904(%eax)
	jne	.L67
	incl	%eax
	cmpl	%eax, -16(%ebp)
	jg	.L68
.L67:
	cmpl	%eax, -16(%ebp)
	je	.L69
	movl	-20(%ebp), %eax
	xorl	%ecx, %ecx
	xorl	%edx, %edx
	leal	1(%eax), %esi
	jmp	.L70
.L69:
	xorl	%eax, %eax
	jmp	.L71
.L72:
	movb	1051904(%eax,%edx), %bl
	incl	%eax
	movb	%bl, 1052671(%eax,%ecx)
	cmpl	-20(%ebp), %eax
	jle	.L72
	incl	%edx
	addl	%esi, %ecx
.L70:
	xorl	%eax, %eax
	cmpl	-20(%ebp), %edx
	jl	.L72
.L73:
	cmpl	%eax, -20(%ebp)
	jle	.L100
	movb	$0, 1050368(%eax)
	incl	%eax
	jmp	.L73
.L100:
	movl	-20(%ebp), %edx
	movl	$1050368, %ecx
	xorl	%esi, %esi
	xorl	%edi, %edi
	movl	%edx, %eax
	call	gauss_solve.constprop.2
	movl	-20(%ebp), %ebx
	decl	%ebx
.L75:
	cmpl	-64(%ebp), %esi
	jge	.L101
	movl	$255, %ecx
	movl	%ebx, %edx
	movl	$1050368, %eax
	subl	%esi, %ecx
	call	pol_evaluate
	cmpb	1048576(%esi), %al
	jne	.L76
	movb	%al, 1050624(%edi)
	movl	-68(%ebp), %eax
	movl	%edi, %edx
	incl	%edi
	subl	%esi, %eax
	movl	%eax, 1050880(,%edx,4)
.L76:
	incl	%esi
	jmp	.L75
.L101:
	xorl	%eax, %eax
.L78:
	cmpl	%eax, %edi
	je	.L102
	movb	$1, 1052672(%eax)
	incl	%eax
	jmp	.L78
.L102:
	movb	1051904, %al
	xorl	%ecx, %ecx
	movl	$1, %esi
	movb	%al, 1052672(%edi)
	leal	1(%edi), %eax
	movl	%eax, -64(%ebp)
	leal	(%edi,%edi), %eax
	movl	%eax, -20(%ebp)
.L80:
	cmpl	%esi, -16(%ebp)
	jle	.L82
	movl	-64(%ebp), %eax
	xorl	%ebx, %ebx
	addl	%ecx, %eax
	movl	%eax, -68(%ebp)
.L83:
	cmpl	%ebx, %edi
	je	.L103
	movzbl	1052672(%ebx,%ecx), %edx
	movl	%ecx, -80(%ebp)
	incl	%ebx
	movzbl	1050623(%ebx), %eax
	call	gf_mul
	movl	-68(%ebp), %ecx
	movb	%al, 1052671(%ebx,%ecx)
	movl	-80(%ebp), %ecx
	jmp	.L83
.L103:
	movb	1051904(%esi), %al
	movl	-20(%ebp), %ebx
	incl	%esi
	movb	%al, 1052673(%ebx)
	movl	-64(%ebp), %ebx
	movl	-68(%ebp), %ecx
	addl	%ebx, -20(%ebp)
	jmp	.L80
.L82:
	movl	-16(%ebp), %eax
	movl	$1052416, %ecx
	movl	%edi, %edx
	call	gauss_solve.constprop.2
	xorl	%eax, %eax
.L84:
	cmpl	%eax, %edi
	je	.L69
	movl	1050880(,%eax,4), %edx
	movb	1052416(%eax), %cl
	incl	%eax
	xorb	%cl, 1052160(%edx)
	jmp	.L84
.L71:
	movl	%eax, %edx
	movb	1052160(%eax), %cl
	incl	%eax
	sall	$9, %edx
	cmpl	%eax, -32(%ebp)
	movl	-48(%ebp), %edi
	movb	%cl, (%edi,%edx)
	jg	.L71
	jmp	.L59
.L52:
	addl	$68, %esp
	popl	%ebx
	popl	%esi
	popl	%edi
	popl	%ebp
	ret
	.size	grub_reed_solomon_recover, .-grub_reed_solomon_recover
	.section	.text.unlikely
.LCOLDE3:
	.text
.LHOTE3:
	.ident	"GCC: (Ubuntu 5.4.0-6ubuntu1~16.04.1) 5.4.0 20160609"
	.section	.note.GNU-stack,"",@progbits
