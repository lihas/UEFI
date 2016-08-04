# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/X64/Thunk16.nasm"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdePkg/Library/BaseLib/BaseLib/DEBUG/AutoGen.h" 1
# 16 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdePkg/Library/BaseLib/BaseLib/DEBUG/AutoGen.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h" 1
# 28 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/X64/ProcessorBind.h" 1
# 184 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/X64/ProcessorBind.h"
  typedef unsigned long long UINT64;



  typedef long long INT64;



  typedef unsigned int UINT32;



  typedef int INT32;



  typedef unsigned short UINT16;




  typedef unsigned short CHAR16;



  typedef short INT16;




  typedef unsigned char BOOLEAN;



  typedef unsigned char UINT8;



  typedef char CHAR8;



  typedef signed char INT8;






typedef UINT64 UINTN;




typedef INT64 INTN;
# 29 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h" 2
# 54 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
extern UINT8 _VerifySizeofBOOLEAN[(sizeof(BOOLEAN) == (1)) / (sizeof(BOOLEAN) == (1))];
extern UINT8 _VerifySizeofINT8[(sizeof(INT8) == (1)) / (sizeof(INT8) == (1))];
extern UINT8 _VerifySizeofUINT8[(sizeof(UINT8) == (1)) / (sizeof(UINT8) == (1))];
extern UINT8 _VerifySizeofINT16[(sizeof(INT16) == (2)) / (sizeof(INT16) == (2))];
extern UINT8 _VerifySizeofUINT16[(sizeof(UINT16) == (2)) / (sizeof(UINT16) == (2))];
extern UINT8 _VerifySizeofINT32[(sizeof(INT32) == (4)) / (sizeof(INT32) == (4))];
extern UINT8 _VerifySizeofUINT32[(sizeof(UINT32) == (4)) / (sizeof(UINT32) == (4))];
extern UINT8 _VerifySizeofINT64[(sizeof(INT64) == (8)) / (sizeof(INT64) == (8))];
extern UINT8 _VerifySizeofUINT64[(sizeof(UINT64) == (8)) / (sizeof(UINT64) == (8))];
extern UINT8 _VerifySizeofCHAR8[(sizeof(CHAR8) == (1)) / (sizeof(CHAR8) == (1))];
extern UINT8 _VerifySizeofCHAR16[(sizeof(CHAR16) == (2)) / (sizeof(CHAR16) == (2))];
# 238 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
typedef struct {
  UINT32 Data1;
  UINT16 Data2;
  UINT16 Data3;
  UINT8 Data4[8];
} GUID;




typedef UINT64 PHYSICAL_ADDRESS;




typedef struct _LIST_ENTRY LIST_ENTRY;




struct _LIST_ENTRY {
  LIST_ENTRY *ForwardLink;
  LIST_ENTRY *BackLink;
};
# 606 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
typedef __builtin_ms_va_list VA_LIST;
# 710 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
typedef UINTN *BASE_LIST;
# 874 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
typedef UINTN RETURN_STATUS;
# 1189 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Base.h"
  void * __builtin_return_address (unsigned int level);
# 17 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdePkg/Library/BaseLib/BaseLib/DEBUG/AutoGen.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h" 1
# 1082 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdSetSku (
  UINTN SkuId
  );
# 1099 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGet8 (
  UINTN TokenNumber
  );
# 1116 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGet16 (
  UINTN TokenNumber
  );
# 1133 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGet32 (
  UINTN TokenNumber
  );
# 1150 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGet64 (
  UINTN TokenNumber
  );
# 1167 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetPtr (
  UINTN TokenNumber
  );
# 1184 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetBool (
  UINTN TokenNumber
  );
# 1199 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSize (
  UINTN TokenNumber
  );
# 1220 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdGetEx8 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1242 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdGetEx16 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1261 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdGetEx32 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1283 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdGetEx64 (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1305 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdGetExPtr (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1327 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdGetExBool (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1349 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetExSize (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 1370 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSet8 (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1390 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSet16 (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1410 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSet32 (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1430 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSet64 (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1460 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetPtr (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1481 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetBool (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1505 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT8

LibPcdSetEx8 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1530 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT16

LibPcdSetEx16 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1555 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT32

LibPcdSetEx32 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1580 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINT64

LibPcdSetEx64 (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1611 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPcdSetExPtr (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1637 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
BOOLEAN

LibPcdSetExBool (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1658 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet8S (
  UINTN TokenNumber,
  UINT8 Value
  );
# 1677 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet16S (
  UINTN TokenNumber,
  UINT16 Value
  );
# 1696 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet32S (
  UINTN TokenNumber,
  UINT32 Value
  );
# 1715 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSet64S (
  UINTN TokenNumber,
  UINT64 Value
  );
# 1744 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetPtrS (
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 1764 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetBoolS (
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1787 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx8S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT8 Value
  );
# 1811 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx16S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT16 Value
  );
# 1835 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx32S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT32 Value
  );
# 1859 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetEx64S (
  const GUID *Guid,
  UINTN TokenNumber,
  UINT64 Value
  );
# 1889 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExPtrS (
  const GUID *Guid,
  UINTN TokenNumber,
  UINTN *SizeOfBuffer,
  void *Buffer
  );
# 1914 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPcdSetExBoolS (
  const GUID *Guid,
  UINTN TokenNumber,
  BOOLEAN Value
  );
# 1938 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
typedef
void
( *PCD_CALLBACK)(
  const GUID *CallBackGuid,
  UINTN CallBackToken,
  void *TokenData,
  UINTN TokenDataSize
  );
# 1964 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCallbackOnSet (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 1986 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void

LibPcdCancelCallback (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_CALLBACK NotificationFunction
  );
# 2014 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetNextToken (
  const GUID *Guid,
  UINTN TokenNumber
  );
# 2036 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
GUID *

LibPcdGetNextTokenSpace (
  const GUID *TokenSpaceGuid
  );
# 2066 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtr (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2098 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrS (
  void *PatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2132 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void *

LibPatchPcdSetPtrAndSize (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );
# 2167 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
RETURN_STATUS

LibPatchPcdSetPtrAndSizeS (
  void *PatchVariable,
  UINTN *SizeOfPatchVariable,
  UINTN MaximumDatumSize,
  UINTN *SizeOfBuffer,
  const void *Buffer
  );

typedef enum {
  PCD_TYPE_8,
  PCD_TYPE_16,
  PCD_TYPE_32,
  PCD_TYPE_64,
  PCD_TYPE_BOOL,
  PCD_TYPE_PTR
} PCD_TYPE;

typedef struct {




  PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} PCD_INFO;
# 2219 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfo (
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2239 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
void

LibPcdGetInfoEx (
  const GUID *Guid,
  UINTN TokenNumber,
  PCD_INFO *PcdInfo
  );
# 2254 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/PcdLib.h"
UINTN

LibPcdGetSku (
  void
  );
# 18 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdePkg/Library/BaseLib/BaseLib/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;



extern GUID gEfiMdePkgTokenSpaceGuid;



extern const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList;



extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;





extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;





extern const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;





extern const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask;
# 1 "<command-line>" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/X64/Thunk16.nasm"

# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h" 1
# 19 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h" 1
# 94 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
typedef struct {
  UINT64 Rbx;
  UINT64 Rsp;
  UINT64 Rbp;
  UINT64 Rdi;
  UINT64 Rsi;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
  UINT64 Rip;
  UINT64 MxCsr;
  UINT8 XmmBuffer[160];
} BASE_LIBRARY_JUMP_BUFFER;
# 203 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

StrnLenS (
  const CHAR16 *String,
  UINTN MaxSize
  );
# 237 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrCpyS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source
  );
# 275 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrnCpyS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source,
  UINTN Length
  );
# 314 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrCatS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source
  );
# 355 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

StrnCatS (
  CHAR16 *Destination,
  UINTN DestMax,
  const CHAR16 *Source,
  UINTN Length
  );
# 378 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrnLenS (
  const CHAR8 *String,
  UINTN MaxSize
  );
# 410 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrCpyS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source
  );
# 446 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrnCpyS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source,
  UINTN Length
  );
# 483 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrCatS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source
  );
# 522 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrnCatS (
  CHAR8 *Destination,
  UINTN DestMax,
  const CHAR8 *Source,
  UINTN Length
  );
# 559 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrCpy (
  CHAR16 *Destination,
  const CHAR16 *Source
  );
# 599 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrnCpy (
  CHAR16 *Destination,
  const CHAR16 *Source,
  UINTN Length
  );
# 625 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

StrLen (
  const CHAR16 *String
  );
# 650 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

StrSize (
  const CHAR16 *String
  );
# 685 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

StrCmp (
  const CHAR16 *FirstString,
  const CHAR16 *SecondString
  );
# 725 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

StrnCmp (
  const CHAR16 *FirstString,
  const CHAR16 *SecondString,
  UINTN Length
  );
# 770 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrCat (
  CHAR16 *Destination,
  const CHAR16 *Source
  );
# 818 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrnCat (
  CHAR16 *Destination,
  const CHAR16 *Source,
  UINTN Length
  );
# 852 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

StrStr (
  const CHAR16 *String,
  const CHAR16 *SearchString
  );
# 893 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

StrDecimalToUintn (
  const CHAR16 *String
  );
# 933 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

StrDecimalToUint64 (
  const CHAR16 *String
  );
# 975 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

StrHexToUintn (
  const CHAR16 *String
  );
# 1017 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

StrHexToUint64 (
  const CHAR16 *String
  );
# 1060 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

UnicodeStrToAsciiStr (
  const CHAR16 *Source,
  CHAR8 *Destination
  );
# 1110 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

UnicodeStrToAsciiStrS (
  const CHAR16 *Source,
  CHAR8 *Destination,
  UINTN DestMax
  );
# 1143 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrCpy (
  CHAR8 *Destination,
  const CHAR8 *Source
  );
# 1180 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrnCpy (
  CHAR8 *Destination,
  const CHAR8 *Source,
  UINTN Length
  );
# 1206 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrLen (
  const CHAR8 *String
  );
# 1230 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrSize (
  const CHAR8 *String
  );
# 1263 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStrCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString
  );
# 1300 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStriCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString
  );
# 1338 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

AsciiStrnCmp (
  const CHAR8 *FirstString,
  const CHAR8 *SecondString,
  UINTN Length
  );
# 1378 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrCat (
  CHAR8 *Destination,
  const CHAR8 *Source
  );
# 1424 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrnCat (
  CHAR8 *Destination,
  const CHAR8 *Source,
  UINTN Length
  );
# 1457 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR8 *

AsciiStrStr (
  const CHAR8 *String,
  const CHAR8 *SearchString
  );
# 1495 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrDecimalToUintn (
  const CHAR8 *String
  );
# 1532 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsciiStrDecimalToUint64 (
  const CHAR8 *String
  );
# 1573 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsciiStrHexToUintn (
  const CHAR8 *String
  );
# 1614 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsciiStrHexToUint64 (
  const CHAR8 *String
  );
# 1651 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16 *

AsciiStrToUnicodeStr (
  const CHAR8 *Source,
  CHAR16 *Destination
  );
# 1697 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
RETURN_STATUS

AsciiStrToUnicodeStrS (
  const CHAR8 *Source,
  CHAR16 *Destination,
  UINTN DestMax
  );
# 1718 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

DecimalToBcd8 (
  UINT8 Value
  );
# 1739 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BcdToDecimal8 (
  UINT8 Value
  );
# 1758 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

PathRemoveLastItem(
  CHAR16 *Path
  );
# 1777 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
CHAR16*

PathCleanUpDirectories(
  CHAR16 *Path
  );
# 1820 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InitializeListHead (
  LIST_ENTRY *ListHead
  );
# 1849 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InsertHeadList (
  LIST_ENTRY *ListHead,
  LIST_ENTRY *Entry
  );
# 1879 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

InsertTailList (
  LIST_ENTRY *ListHead,
  LIST_ENTRY *Entry
  );
# 1907 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetFirstNode (
  const LIST_ENTRY *List
  );
# 1935 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetNextNode (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 1964 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

GetPreviousNode (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 1991 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsListEmpty (
  const LIST_ENTRY *ListHead
  );
# 2024 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsNull (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 2055 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

IsNodeAtEnd (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 2089 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

SwapListEntries (
  LIST_ENTRY *FirstEntry,
  LIST_ENTRY *SecondEntry
  );
# 2118 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
LIST_ENTRY *

RemoveEntryList (
  const LIST_ENTRY *Entry
  );
# 2143 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

LShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 2166 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

RShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 2189 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

ARShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 2213 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

LRotU32 (
  UINT32 Operand,
  UINTN Count
  );
# 2237 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

RRotU32 (
  UINT32 Operand,
  UINTN Count
  );
# 2261 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

LRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 2285 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

RRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 2306 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

LowBitSet32 (
  UINT32 Operand
  );
# 2327 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

LowBitSet64 (
  UINT64 Operand
  );
# 2348 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

HighBitSet32 (
  UINT32 Operand
  );
# 2369 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INTN

HighBitSet64 (
  UINT64 Operand
  );
# 2389 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

GetPowerOfTwo32 (
  UINT32 Operand
  );
# 2409 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

GetPowerOfTwo64 (
  UINT64 Operand
  );
# 2428 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

SwapBytes16 (
  UINT16 Value
  );
# 2447 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

SwapBytes32 (
  UINT32 Value
  );
# 2466 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

SwapBytes64 (
  UINT64 Value
  );
# 2487 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

MultU64x32 (
  UINT64 Multiplicand,
  UINT32 Multiplier
  );
# 2509 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

MultU64x64 (
  UINT64 Multiplicand,
  UINT64 Multiplier
  );
# 2531 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INT64

MultS64x64 (
  INT64 Multiplicand,
  INT64 Multiplier
  );
# 2555 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 2579 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

ModU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 2606 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x32Remainder (
  UINT64 Dividend,
  UINT32 Divisor,
  UINT32 *Remainder
  );
# 2634 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

DivU64x64Remainder (
  UINT64 Dividend,
  UINT64 Divisor,
  UINT64 *Remainder
  );
# 2666 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
INT64

DivS64x64Remainder (
  INT64 Dividend,
  INT64 Divisor,
  INT64 *Remainder
  );
# 2688 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

ReadUnaligned16 (
  const UINT16 *Buffer
  );
# 2710 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

WriteUnaligned16 (
  UINT16 *Buffer,
  UINT16 Value
  );
# 2731 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

ReadUnaligned24 (
  const UINT32 *Buffer
  );
# 2753 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

WriteUnaligned24 (
  UINT32 *Buffer,
  UINT32 Value
  );
# 2774 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

ReadUnaligned32 (
  const UINT32 *Buffer
  );
# 2796 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

WriteUnaligned32 (
  UINT32 *Buffer,
  UINT32 Value
  );
# 2817 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

ReadUnaligned64 (
  const UINT64 *Buffer
  );
# 2839 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

WriteUnaligned64 (
  UINT64 *Buffer,
  UINT64 Value
  );
# 2870 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldRead8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 2902 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldWrite8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 Value
  );
# 2936 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldOr8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 OrData
  );
# 2970 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldAnd8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 AndData
  );
# 3007 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

BitFieldAndThenOr8 (
  UINT8 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT8 AndData,
  UINT8 OrData
  );
# 3037 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldRead16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 3069 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldWrite16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 Value
  );
# 3103 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldOr16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 OrData
  );
# 3137 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldAnd16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 AndData
  );
# 3174 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

BitFieldAndThenOr16 (
  UINT16 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT16 AndData,
  UINT16 OrData
  );
# 3204 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldRead32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 3236 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldWrite32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 Value
  );
# 3270 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldOr32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 OrData
  );
# 3304 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldAnd32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData
  );
# 3341 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

BitFieldAndThenOr32 (
  UINT32 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData,
  UINT32 OrData
  );
# 3371 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldRead64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 3403 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldWrite64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 Value
  );
# 3437 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldOr64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 OrData
  );
# 3471 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldAnd64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData
  );
# 3508 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

BitFieldAndThenOr64 (
  UINT64 Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData,
  UINT64 OrData
  );
# 3540 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

CalculateSum8 (
  const UINT8 *Buffer,
  UINTN Length
  );
# 3566 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT8

CalculateCheckSum8 (
  const UINT8 *Buffer,
  UINTN Length
  );
# 3593 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

CalculateSum16 (
  const UINT16 *Buffer,
  UINTN Length
  );
# 3621 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

CalculateCheckSum16 (
  const UINT16 *Buffer,
  UINTN Length
  );
# 3648 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

CalculateSum32 (
  const UINT32 *Buffer,
  UINTN Length
  );
# 3676 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

CalculateCheckSum32 (
  const UINT32 *Buffer,
  UINTN Length
  );
# 3703 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

CalculateSum64 (
  const UINT64 *Buffer,
  UINTN Length
  );
# 3731 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

CalculateCheckSum64 (
  const UINT64 *Buffer,
  UINTN Length
  );
# 3750 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
typedef
void
( *SWITCH_STACK_ENTRY_POINT)(
  void *Context1,
  void *Context2
  );
# 3765 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

MemoryFence (
  void
  );
# 3793 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

SetJump (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer
  );
# 3816 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

LongJump (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer,
  UINTN Value
  );






void

EnableInterrupts (
  void
  );






void

DisableInterrupts (
  void
  );
# 3854 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

SaveAndDisableInterrupts (
  void
  );







void

EnableDisableInterrupts (
  void
  );
# 3883 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

GetInterruptState (
  void
  );
# 3904 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

SetInterruptState (
  BOOLEAN InterruptState
  );
# 3918 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

CpuPause (
  void
  );
# 3954 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

SwitchStack (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack,
  ...
  );
# 3972 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

CpuBreakpoint (
  void
  );
# 3988 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

CpuDeadLoop (
  void
  );
# 5391 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
typedef union {
  struct {
    UINT32 CF:1;
    UINT32 Reserved_0:1;
    UINT32 PF:1;
    UINT32 Reserved_1:1;
    UINT32 AF:1;
    UINT32 Reserved_2:1;
    UINT32 ZF:1;
    UINT32 SF:1;
    UINT32 TF:1;
    UINT32 IF:1;
    UINT32 DF:1;
    UINT32 OF:1;
    UINT32 IOPL:2;
    UINT32 NT:1;
    UINT32 Reserved_3:1;
  } Bits;
  UINT16 Uint16;
} IA32_FLAGS16;






typedef union {
  struct {
    UINT32 CF:1;
    UINT32 Reserved_0:1;
    UINT32 PF:1;
    UINT32 Reserved_1:1;
    UINT32 AF:1;
    UINT32 Reserved_2:1;
    UINT32 ZF:1;
    UINT32 SF:1;
    UINT32 TF:1;
    UINT32 IF:1;
    UINT32 DF:1;
    UINT32 OF:1;
    UINT32 IOPL:2;
    UINT32 NT:1;
    UINT32 Reserved_3:1;
    UINT32 RF:1;
    UINT32 VM:1;
    UINT32 AC:1;
    UINT32 VIF:1;
    UINT32 VIP:1;
    UINT32 ID:1;
    UINT32 Reserved_4:10;
  } Bits;
  UINTN UintN;
} IA32_EFLAGS32;






typedef union {
  struct {
    UINT32 PE:1;
    UINT32 MP:1;
    UINT32 EM:1;
    UINT32 TS:1;
    UINT32 ET:1;
    UINT32 NE:1;
    UINT32 Reserved_0:10;
    UINT32 WP:1;
    UINT32 Reserved_1:1;
    UINT32 AM:1;
    UINT32 Reserved_2:10;
    UINT32 NW:1;
    UINT32 CD:1;
    UINT32 PG:1;
  } Bits;
  UINTN UintN;
} IA32_CR0;






typedef union {
  struct {
    UINT32 VME:1;
    UINT32 PVI:1;
    UINT32 TSD:1;
    UINT32 DE:1;
    UINT32 PSE:1;
    UINT32 PAE:1;
    UINT32 MCE:1;
    UINT32 PGE:1;
    UINT32 PCE:1;

    UINT32 OSFXSR:1;

    UINT32 OSXMMEXCPT:1;


    UINT32 Reserved_0:2;
    UINT32 VMXE:1;
    UINT32 Reserved_1:18;
  } Bits;
  UINTN UintN;
} IA32_CR4;




typedef union {
  struct {
    UINT32 LimitLow:16;
    UINT32 BaseLow:16;
    UINT32 BaseMid:8;
    UINT32 Type:4;
    UINT32 S:1;
    UINT32 DPL:2;
    UINT32 P:1;
    UINT32 LimitHigh:4;
    UINT32 AVL:1;
    UINT32 L:1;
    UINT32 DB:1;
    UINT32 G:1;
    UINT32 BaseHigh:8;
  } Bits;
  UINT64 Uint64;
} IA32_SEGMENT_DESCRIPTOR;





typedef struct {
  UINT16 Limit;
  UINTN Base;
} IA32_DESCRIPTOR;
# 5559 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
typedef union {
  struct {
    UINT32 OffsetLow:16;
    UINT32 Selector:16;
    UINT32 Reserved_0:8;
    UINT32 GateType:8;
    UINT32 OffsetHigh:16;
    UINT32 OffsetUpper:32;
    UINT32 Reserved_1:32;
  } Bits;
  struct {
    UINT64 Uint64;
    UINT64 Uint64_1;
  } Uint128;
} IA32_IDT_GATE_DESCRIPTOR;






typedef struct {
  UINT8 Buffer[512];
} IA32_FX_BUFFER;




typedef struct {
  UINT32 Reserved1;
  UINT32 Reserved2;
  UINT32 Reserved3;
  UINT32 Reserved4;
  UINT8 BL;
  UINT8 BH;
  UINT16 Reserved5;
  UINT8 DL;
  UINT8 DH;
  UINT16 Reserved6;
  UINT8 CL;
  UINT8 CH;
  UINT16 Reserved7;
  UINT8 AL;
  UINT8 AH;
  UINT16 Reserved8;
} IA32_BYTE_REGS;

typedef struct {
  UINT16 DI;
  UINT16 Reserved1;
  UINT16 SI;
  UINT16 Reserved2;
  UINT16 BP;
  UINT16 Reserved3;
  UINT16 SP;
  UINT16 Reserved4;
  UINT16 BX;
  UINT16 Reserved5;
  UINT16 DX;
  UINT16 Reserved6;
  UINT16 CX;
  UINT16 Reserved7;
  UINT16 AX;
  UINT16 Reserved8;
} IA32_WORD_REGS;

typedef struct {
  UINT32 EDI;
  UINT32 ESI;
  UINT32 EBP;
  UINT32 ESP;
  UINT32 EBX;
  UINT32 EDX;
  UINT32 ECX;
  UINT32 EAX;
  UINT16 DS;
  UINT16 ES;
  UINT16 FS;
  UINT16 GS;
  IA32_EFLAGS32 EFLAGS;
  UINT32 Eip;
  UINT16 CS;
  UINT16 SS;
} IA32_DWORD_REGS;

typedef union {
  IA32_DWORD_REGS E;
  IA32_WORD_REGS X;
  IA32_BYTE_REGS H;
} IA32_REGISTER_SET;




typedef struct {
  IA32_REGISTER_SET *RealModeState;
  void *RealModeBuffer;
  UINT32 RealModeBufferSize;
  UINT32 ThunkAttributes;
} THUNK_CONTEXT;
# 5689 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmCpuid (
  UINT32 Index,
  UINT32 *Eax,
  UINT32 *Ebx,
  UINT32 *Ecx,
  UINT32 *Edx
  );
# 5732 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmCpuidEx (
  UINT32 Index,
  UINT32 SubIndex,
  UINT32 *Eax,
  UINT32 *Ebx,
  UINT32 *Ecx,
  UINT32 *Edx
  );
# 5751 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmDisableCache (
  void
  );
# 5765 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmEnableCache (
  void
  );
# 5786 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmReadMsr32 (
  UINT32 Index
  );
# 5810 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmWriteMsr32 (
  UINT32 Index,
  UINT32 Value
  );
# 5837 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrOr32 (
  UINT32 Index,
  UINT32 OrData
  );
# 5864 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrAnd32 (
  UINT32 Index,
  UINT32 AndData
  );
# 5894 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrAndThenOr32 (
  UINT32 Index,
  UINT32 AndData,
  UINT32 OrData
  );
# 5925 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrBitFieldRead32 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit
  );
# 5959 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrBitFieldWrite32 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 Value
  );
# 5996 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrBitFieldOr32 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 OrData
  );
# 6033 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrBitFieldAnd32 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData
  );
# 6074 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT32

AsmMsrBitFieldAndThenOr32 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT32 AndData,
  UINT32 OrData
  );
# 6099 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMsr64 (
  UINT32 Index
  );
# 6123 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmWriteMsr64 (
  UINT32 Index,
  UINT64 Value
  );
# 6149 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrOr64 (
  UINT32 Index,
  UINT64 OrData
  );
# 6175 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrAnd64 (
  UINT32 Index,
  UINT64 AndData
  );
# 6204 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrAndThenOr64 (
  UINT32 Index,
  UINT64 AndData,
  UINT64 OrData
  );
# 6235 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrBitFieldRead64 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit
  );
# 6268 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrBitFieldWrite64 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 Value
  );
# 6305 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrBitFieldOr64 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 OrData
  );
# 6342 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrBitFieldAnd64 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData
  );
# 6382 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmMsrBitFieldAndThenOr64 (
  UINT32 Index,
  UINTN StartBit,
  UINTN EndBit,
  UINT64 AndData,
  UINT64 OrData
  );
# 6403 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadEflags (
  void
  );
# 6420 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadCr0 (
  void
  );
# 6437 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadCr2 (
  void
  );
# 6454 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadCr3 (
  void
  );
# 6471 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadCr4 (
  void
  );
# 6489 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteCr0 (
  UINTN Cr0
  );
# 6507 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteCr2 (
  UINTN Cr2
  );
# 6525 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteCr3 (
  UINTN Cr3
  );
# 6543 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteCr4 (
  UINTN Cr4
  );
# 6560 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr0 (
  void
  );
# 6577 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr1 (
  void
  );
# 6594 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr2 (
  void
  );
# 6611 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr3 (
  void
  );
# 6628 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr4 (
  void
  );
# 6645 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr5 (
  void
  );
# 6662 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr6 (
  void
  );
# 6679 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmReadDr7 (
  void
  );
# 6697 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr0 (
  UINTN Dr0
  );
# 6715 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr1 (
  UINTN Dr1
  );
# 6733 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr2 (
  UINTN Dr2
  );
# 6751 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr3 (
  UINTN Dr3
  );
# 6769 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr4 (
  UINTN Dr4
  );
# 6787 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr5 (
  UINTN Dr5
  );
# 6805 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr6 (
  UINTN Dr6
  );
# 6823 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmWriteDr7 (
  UINTN Dr7
  );
# 6839 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadCs (
  void
  );
# 6855 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadDs (
  void
  );
# 6871 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadEs (
  void
  );
# 6887 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadFs (
  void
  );
# 6903 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadGs (
  void
  );
# 6919 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadSs (
  void
  );
# 6935 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadTr (
  void
  );
# 6953 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmReadGdtr (
  IA32_DESCRIPTOR *Gdtr
  );
# 6971 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteGdtr (
  const IA32_DESCRIPTOR *Gdtr
  );
# 6989 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmReadIdtr (
  IA32_DESCRIPTOR *Idtr
  );
# 7007 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteIdtr (
  const IA32_DESCRIPTOR *Idtr
  );
# 7023 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT16

AsmReadLdtr (
  void
  );
# 7039 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteLdtr (
  UINT16 Ldtr
  );
# 7059 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmFxSave (
  IA32_FX_BUFFER *Buffer
  );
# 7080 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmFxRestore (
  const IA32_FX_BUFFER *Buffer
  );
# 7096 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm0 (
  void
  );
# 7112 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm1 (
  void
  );
# 7128 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm2 (
  void
  );
# 7144 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm3 (
  void
  );
# 7160 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm4 (
  void
  );
# 7176 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm5 (
  void
  );
# 7192 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm6 (
  void
  );
# 7208 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadMm7 (
  void
  );
# 7224 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm0 (
  UINT64 Value
  );
# 7240 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm1 (
  UINT64 Value
  );
# 7256 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm2 (
  UINT64 Value
  );
# 7272 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm3 (
  UINT64 Value
  );
# 7288 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm4 (
  UINT64 Value
  );
# 7304 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm5 (
  UINT64 Value
  );
# 7320 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm6 (
  UINT64 Value
  );
# 7336 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWriteMm7 (
  UINT64 Value
  );
# 7352 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadTsc (
  void
  );
# 7370 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINT64

AsmReadPmc (
  UINT32 Index
  );
# 7393 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmMonitor (
  UINTN Eax,
  UINTN Ecx,
  UINTN Edx
  );
# 7416 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
UINTN

AsmMwait (
  UINTN Eax,
  UINTN Ecx
  );
# 7431 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmWbinvd (
  void
  );
# 7445 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmInvd (
  void
  );
# 7467 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void *

AsmFlushCacheLine (
  void *LinearAddress
  );
# 7511 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmEnablePaging32 (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack
  );
# 7555 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmDisablePaging32 (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack
  );
# 7597 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmEnablePaging64 (
  UINT16 Cs,
  UINT64 EntryPoint,
  UINT64 Context1,
  UINT64 Context2,
  UINT64 NewStack
  );
# 7638 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmDisablePaging64 (
  UINT16 Cs,
  UINT32 EntryPoint,
  UINT32 Context1,
  UINT32 Context2,
  UINT32 NewStack
  );
# 7674 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmGetThunk16Properties (
  UINT32 *RealModeBufferSize,
  UINT32 *ExtraStackSize
  );
# 7696 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmPrepareThunk16 (
  THUNK_CONTEXT *ThunkContext
  );
# 7756 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmThunk16 (
  THUNK_CONTEXT *ThunkContext
  );
# 7783 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
void

AsmPrepareAndThunk16 (
  THUNK_CONTEXT *ThunkContext
  );
# 7800 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

AsmRdRand16 (
  UINT16 *Rand
  );
# 7817 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

AsmRdRand32 (
  UINT32 *Rand
  );
# 7834 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseLib.h"
BOOLEAN

AsmRdRand64 (
  UINT64 *Rand
  );
# 20 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h" 1
# 39 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

CopyMem (
  void *DestinationBuffer,
  const void *SourceBuffer,
  UINTN Length
  );
# 61 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

SetMem (
  void *Buffer,
  UINTN Length,
  UINT8 Value
  );
# 88 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

SetMem16 (
  void *Buffer,
  UINTN Length,
  UINT16 Value
  );
# 115 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

SetMem32 (
  void *Buffer,
  UINTN Length,
  UINT32 Value
  );
# 142 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

SetMem64 (
  void *Buffer,
  UINTN Length,
  UINT64 Value
  );
# 169 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

SetMemN (
  void *Buffer,
  UINTN Length,
  UINTN Value
  );
# 191 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ZeroMem (
  void *Buffer,
  UINTN Length
  );
# 220 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
INTN

CompareMem (
  const void *DestinationBuffer,
  const void *SourceBuffer,
  UINTN Length
  );
# 247 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanMem8 (
  const void *Buffer,
  UINTN Length,
  UINT8 Value
  );
# 276 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanMem16 (
  const void *Buffer,
  UINTN Length,
  UINT16 Value
  );
# 305 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanMem32 (
  const void *Buffer,
  UINTN Length,
  UINT32 Value
  );
# 334 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanMem64 (
  const void *Buffer,
  UINTN Length,
  UINT64 Value
  );
# 363 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanMemN (
  const void *Buffer,
  UINTN Length,
  UINTN Value
  );
# 386 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
GUID *

CopyGuid (
  GUID *DestinationGuid,
  const GUID *SourceGuid
  );
# 409 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
BOOLEAN

CompareGuid (
  const GUID *Guid1,
  const GUID *Guid2
  );
# 438 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/BaseMemoryLib.h"
void *

ScanGuid (
  const void *Buffer,
  UINTN Length,
  const GUID *Guid
  );
# 21 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h" 1
# 95 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
void

DebugPrint (
  UINTN ErrorLevel,
  const CHAR8 *Format,
  ...
  );
# 125 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
void

DebugAssert (
  const CHAR8 *FileName,
  UINTN LineNumber,
  const CHAR8 *Description
  );
# 149 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
void *

DebugClearMemory (
  void *Buffer,
  UINTN Length
  );
# 167 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
BOOLEAN

DebugAssertEnabled (
  void
  );
# 184 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
BOOLEAN

DebugPrintEnabled (
  void
  );
# 201 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
BOOLEAN

DebugCodeEnabled (
  void
  );
# 218 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
BOOLEAN

DebugClearMemoryEnabled (
  void
  );
# 233 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Library/DebugLib.h"
BOOLEAN

DebugPrintLevelEnabled (
  const UINTN ErrorLevel
  );
# 22 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h" 2
# 41 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathLShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 61 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathRShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 81 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathARShiftU64 (
  UINT64 Operand,
  UINTN Count
  );
# 102 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathLRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 123 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathRRotU64 (
  UINT64 Operand,
  UINTN Count
  );
# 142 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathSwapBytes64 (
  UINT64 Operand
  );
# 162 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathMultU64x32 (
  UINT64 Multiplicand,
  UINT32 Multiplier
  );
# 183 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathMultU64x64 (
  UINT64 Multiplicand,
  UINT64 Multiplier
  );
# 204 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathDivU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 225 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT32

InternalMathModU64x32 (
  UINT64 Dividend,
  UINT32 Divisor
  );
# 249 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathDivRemU64x32 (
  UINT64 Dividend,
  UINT32 Divisor,
  UINT32 *Remainder
  );
# 274 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINT64

InternalMathDivRemU64x64 (
  UINT64 Dividend,
  UINT64 Divisor,
  UINT64 *Remainder
  );
# 299 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
INT64

InternalMathDivRemS64x64 (
  INT64 Dividend,
  INT64 Divisor,
  INT64 *Remainder
  );
# 331 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalSwitchStack (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack,
  VA_LIST Marker
  );
# 363 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
BOOLEAN

IsNodeInList (
  const LIST_ENTRY *List,
  const LIST_ENTRY *Node
  );
# 382 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINTN

BitFieldReadUint (
  UINTN Operand,
  UINTN StartBit,
  UINTN EndBit
  );
# 407 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINTN

BitFieldOrUint (
  UINTN Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINTN OrData
  );
# 433 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
UINTN

BitFieldAndUint (
  UINTN Operand,
  UINTN StartBit,
  UINTN EndBit,
  UINTN AndData
  );
# 454 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalAssertJumpBuffer (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer
  );
# 472 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalLongJump (
  BASE_LIBRARY_JUMP_BUFFER *JumpBuffer,
  UINTN Value
  );
# 494 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86ReadGdtr (
  IA32_DESCRIPTOR *Gdtr
  );
# 509 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86WriteGdtr (
  const IA32_DESCRIPTOR *Gdtr
  );
# 524 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86ReadIdtr (
  IA32_DESCRIPTOR *Idtr
  );
# 539 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86WriteIdtr (
  const IA32_DESCRIPTOR *Idtr
  );
# 555 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86FxSave (
  IA32_FX_BUFFER *Buffer
  );
# 571 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86FxRestore (
  const IA32_FX_BUFFER *Buffer
  );
# 610 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86EnablePaging32 (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack
  );
# 649 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86DisablePaging32 (
  SWITCH_STACK_ENTRY_POINT EntryPoint,
  void *Context1,
  void *Context2,
  void *NewStack
  );
# 685 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86EnablePaging64 (
  UINT16 Cs,
  UINT64 EntryPoint,
  UINT64 Context1,
  UINT64 Context2,
  UINT64 NewStack
  );
# 721 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/BaseLibInternals.h"
void

InternalX86DisablePaging64 (
  UINT16 Cs,
  UINT32 EntryPoint,
  UINT32 Context1,
  UINT32 Context2,
  UINT32 NewStack
  );
# 3 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Library/BaseLib/X64/Thunk16.nasm" 2

;------------------------------------------------------------------------------
;
; Copyright (c) 2006 - 2013, Intel Corporation. All rights reserved.<BR>
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution. The full text of the license may be found at
; http:
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
; Module Name:
;
; Thunk.asm
;
; Abstract:
;
; Real mode thunk
;
;------------------------------------------------------------------------------

global m16Size
global mThunk16Attr
global m16Gdt
global m16GdtrBase
global mTransition
global m16Start

struc IA32_REGS

  ._EDI: resd 1
  ._ESI: resd 1
  ._EBP: resd 1
  ._ESP: resd 1
  ._EBX: resd 1
  ._EDX: resd 1
  ._ECX: resd 1
  ._EAX: resd 1
  ._DS: resw 1
  ._ES: resw 1
  ._FS: resw 1
  ._GS: resw 1
  ._EFLAGS: resq 1
  ._EIP: resd 1
  ._CS: resw 1
  ._SS: resw 1
  .size:

endstruc

SECTION .data

;
; These are global constant to convey information to C code.
;
m16Size DW InternalAsmThunk16 - m16Start
mThunk16Attr DW _BackFromUserCode.ThunkAttrEnd - 4 - m16Start
m16Gdt DW _NullSeg - m16Start
m16GdtrBase DW _16GdtrBase - m16Start
mTransition DW _EntryPoint - m16Start

SECTION .text

m16Start:

SavedGdt:
            dw 0
            dq 0

;------------------------------------------------------------------------------
; _BackFromUserCode() takes control in real mode after 'retf' has been executed
; by user code. It will be shadowed to somewhere in memory below 1MB.
;------------------------------------------------------------------------------
_BackFromUserCode:
    ;
    ; The order of saved registers on the stack matches the order they appears
    ; in IA32_REGS structure. This facilitates wrapper function to extract them
    ; into that structure.
    ;
BITS 16
    push ss
    push cs
    ;
    ; Note: We can't use o32 on the next instruction because of a bug
    ; in NASM 2.09.04 through 2.10rc1.
    ;
    call dword .Base ; push eip
.Base:
    push dword 0 ; reserved high order 32 bits of EFlags
    pushfd
    cli ; disable interrupts
    push gs
    push fs
    push es
    push ds
    pushad
    mov edx, strict dword 0
.ThunkAttrEnd:
    test dl, 0x00000002
    jz .1
    mov ax, 2401h
    int 15h
    cli ; disable interrupts
    jnc .2
.1:
    test dl, 0x00000004
    jz .2
    in al, 92h
    or al, 2
    out 92h, al ; deactivate A20M#
.2:
    xor eax, eax
    mov ax, ss
    lea ebp, [esp + IA32_REGS.size]
    mov [bp - IA32_REGS.size + IA32_REGS._ESP], ebp
    mov ebx, [bp - IA32_REGS.size + IA32_REGS._EIP]
    shl eax, 4 ; shl eax, 4
    add ebp, eax ; add ebp, eax
    mov eax, cs
    shl eax, 4
    lea eax, [eax + ebx + (.X64JmpEnd - .Base)]
    mov [cs:bx + (.X64JmpEnd - 6 - .Base)], eax
    mov eax, strict dword 0
.SavedCr4End:
    mov cr4, eax
o32 lgdt [cs:bx + (SavedGdt - .Base)]
    mov ecx, 0c0000080h
    rdmsr
    or ah, 1
    wrmsr
    mov eax, strict dword 0
.SavedCr0End:
    mov cr0, eax
    jmp 0:strict dword 0
.X64JmpEnd:
BITS 64
    nop
    mov rsp, strict qword 0
.SavedSpEnd:
    nop
    ret

_EntryPoint:
        DD _ToUserCode - m16Start
        DW CODE16
_16Gdtr:
        DW GDT_SIZE - 1
_16GdtrBase:
        DQ 0
_16Idtr:
        DW (1 << 10) - 1
        DD 0

;------------------------------------------------------------------------------
; _ToUserCode() takes control in real mode before passing control to user code.
; It will be shadowed to somewhere in memory below 1MB.
;------------------------------------------------------------------------------
_ToUserCode:
BITS 16
    mov ss, dx ; set new segment selectors
    mov ds, dx
    mov es, dx
    mov fs, dx
    mov gs, dx
    mov ecx, 0c0000080h
    mov cr0, eax ; real mode starts at next instruction
    rdmsr
    and ah, ~1
    wrmsr
    mov cr4, ebp
    mov ss, si ; set up 16-bit stack segment
    mov esp, ebx ; set up 16-bit stack pointer
    call dword .Base ; push eip
.Base:
    pop ebp ; ebp <- address of .Base
    push word [dword esp + IA32_REGS.size + 2]
    lea ax, [bp + (.RealMode - .Base)]
    push ax
    retf ; execution begins at next instruction
.RealMode:

o32 lidt [cs:bp + (_16Idtr - .Base)]

    popad
    pop ds
    pop es
    pop fs
    pop gs
    popfd
    lea esp, [esp + 4] ; skip high order 32 bits of EFlags

o32 retf ; transfer control to user code

ALIGN 8

CODE16 equ _16Code - $
DATA16 equ _16Data - $
DATA32 equ _32Data - $

_NullSeg DQ 0
_16Code:
            DW -1
            DW 0
            DB 0
            DB 9bh
            DB 8fh ; 16-bit segment, 4GB limit
            DB 0
_16Data:
            DW -1
            DW 0
            DB 0
            DB 93h
            DB 8fh ; 16-bit segment, 4GB limit
            DB 0
_32Data:
            DW -1
            DW 0
            DB 0
            DB 93h
            DB 0cfh ; 16-bit segment, 4GB limit
            DB 0

GDT_SIZE equ $ - _NullSeg

;------------------------------------------------------------------------------
; IA32_REGISTER_SET *
;
; InternalAsmThunk16 (
; IA32_REGISTER_SET *RegisterSet,
; void *Transition
; );
;------------------------------------------------------------------------------
global InternalAsmThunk16
InternalAsmThunk16:
BITS 64
    push rbp
    push rbx
    push rsi
    push rdi

    mov ebx, ds
    push rbx ; Save ds segment register on the stack
    mov ebx, es
    push rbx ; Save es segment register on the stack
    mov ebx, ss
    push rbx ; Save ss segment register on the stack

    push fs
    push gs
    mov rsi, rcx
    movzx r8d, word [rsi + IA32_REGS._SS]
    mov edi, [rsi + IA32_REGS._ESP]
    lea rdi, [edi - (IA32_REGS.size + 4)]
    imul eax, r8d, 16 ; eax <- r8d(stack segment) * 16
    mov ebx, edi ; ebx <- stack for 16-bit code
    push IA32_REGS.size / 4
    add edi, eax ; edi <- linear address of 16-bit stack
    pop rcx
    rep movsd ; copy RegSet
    lea ecx, [rdx + (_BackFromUserCode.SavedCr4End - m16Start)]
    mov eax, edx ; eax <- transition code address
    and edx, 0fh
    shl eax, 12 ; segment address in high order 16 bits
    lea ax, [rdx + (_BackFromUserCode - m16Start)] ; offset address
    stosd ; [edi] <- return address of user code

    sgdt [rsp + 60h] ; save GDT stack in argument space
    movzx r10, word [rsp + 60h] ; r10 <- GDT limit
    lea r11, [rcx + (InternalAsmThunk16 - _BackFromUserCode.SavedCr4End) + 0xf]
    and r11, ~0xf ; r11 <- 16-byte aligned shadowed GDT table in real mode buffer

    mov [rcx + (SavedGdt - _BackFromUserCode.SavedCr4End)], r10w ; save the limit of shadowed GDT table
    mov [rcx + (SavedGdt - _BackFromUserCode.SavedCr4End) + 2], r11 ; save the base address of shadowed GDT table

    mov rsi, [rsp + 62h] ; rsi <- the original GDT base address
    xchg rcx, r10 ; save rcx to r10 and initialize rcx to be the limit of GDT table
    inc rcx ; rcx <- the size of memory to copy
    xchg rdi, r11 ; save rdi to r11 and initialize rdi to the base address of shadowed GDT table
    rep movsb ; perform memory copy to shadow GDT table
    mov rcx, r10 ; restore the orignal rcx before memory copy
    mov rdi, r11 ; restore the original rdi before memory copy

    sidt [rsp + 50h] ; save IDT stack in argument space
    mov rax, cr0
    mov [rcx + (_BackFromUserCode.SavedCr0End - 4 - _BackFromUserCode.SavedCr4End)], eax
    and eax, 7ffffffeh ; clear PE, PG bits
    mov rbp, cr4
    mov [rcx - 4], ebp ; save CR4 in _BackFromUserCode.SavedCr4End - 4
    and ebp, ~30h ; clear PAE, PSE bits
    mov esi, r8d ; esi <- 16-bit stack segment
    push DATA32
    pop rdx ; rdx <- 32-bit data segment selector
    lgdt [rcx + (_16Gdtr - _BackFromUserCode.SavedCr4End)]
    mov ss, edx
    pushfq
    lea edx, [rdx + DATA16 - DATA32]
    lea r8, [REL .RetFromRealMode]
    push r8
    mov r8d, cs
    mov [rcx + (_BackFromUserCode.X64JmpEnd - 2 - _BackFromUserCode.SavedCr4End)], r8w
    mov [rcx + (_BackFromUserCode.SavedSpEnd - 8 - _BackFromUserCode.SavedCr4End)], rsp
    jmp dword far [rcx + (_EntryPoint - _BackFromUserCode.SavedCr4End)]
.RetFromRealMode:
    popfq
    lgdt [rsp + 60h] ; restore protected mode GDTR
    lidt [rsp + 50h] ; restore protected mode IDTR
    lea eax, [rbp - IA32_REGS.size]
    pop gs
    pop fs
    pop rbx
    mov ss, ebx
    pop rbx
    mov es, ebx
    pop rbx
    mov ds, ebx

    pop rdi
    pop rsi
    pop rbx
    pop rbp

    ret
