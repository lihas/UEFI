# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdeModulePkg/Universal/CapsulePei/X64/PageFaultHandler.nasm"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdeModulePkg/Universal/CapsulePei/CapsuleX64/DEBUG/AutoGen.h" 1
# 16 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdeModulePkg/Universal/CapsulePei/CapsuleX64/DEBUG/AutoGen.h"
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
# 17 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdeModulePkg/Universal/CapsulePei/CapsuleX64/DEBUG/AutoGen.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/PiPei.h" 1
# 23 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/PiPei.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiBaseType.h" 1
# 29 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiBaseType.h"
typedef GUID EFI_GUID;



typedef RETURN_STATUS EFI_STATUS;



typedef void *EFI_HANDLE;



typedef void *EFI_EVENT;



typedef UINTN EFI_TPL;



typedef UINT64 EFI_LBA;




typedef UINT64 EFI_PHYSICAL_ADDRESS;




typedef UINT64 EFI_VIRTUAL_ADDRESS;
# 72 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiBaseType.h"
typedef struct {
  UINT16 Year;
  UINT8 Month;
  UINT8 Day;
  UINT8 Hour;
  UINT8 Minute;
  UINT8 Second;
  UINT8 Pad1;
  UINT32 Nanosecond;
  INT16 TimeZone;
  UINT8 Daylight;
  UINT8 Pad2;
} EFI_TIME;





typedef struct {
  UINT8 Addr[4];
} EFI_IPv4_ADDRESS;




typedef struct {
  UINT8 Addr[16];
} EFI_IPv6_ADDRESS;




typedef struct {
  UINT8 Addr[32];
} EFI_MAC_ADDRESS;





typedef union {
  UINT32 Addr[4];
  EFI_IPv4_ADDRESS v4;
  EFI_IPv6_ADDRESS v6;
} EFI_IP_ADDRESS;
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/PiPei.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h" 1
# 22 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h" 1
# 18 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Guid/WinCertificate.h" 1
# 30 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {




  UINT32 dwLength;




  UINT16 wRevision;





  UINT16 wCertificateType;






} WIN_CERTIFICATE;
# 64 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {
  EFI_GUID HashType;
  UINT8 PublicKey[256];
  UINT8 Signature[256];
} EFI_CERT_BLOCK_RSA_2048_SHA256;





typedef struct {




  WIN_CERTIFICATE Hdr;




  EFI_GUID CertType;






  UINT8 CertData[1];
} WIN_CERTIFICATE_UEFI_GUID;
# 103 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Guid/WinCertificate.h"
typedef struct {




  WIN_CERTIFICATE Hdr;




  EFI_GUID HashAlgorithm;
# 124 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Guid/WinCertificate.h"
} WIN_CERTIFICATE_EFI_PKCS1_15;

extern EFI_GUID gEfiCertTypeRsa2048Sha256Guid;
# 19 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h" 2



typedef enum {



  EfiReservedMemoryType,




  EfiLoaderCode,




  EfiLoaderData,



  EfiBootServicesCode,




  EfiBootServicesData,



  EfiRuntimeServicesCode,




  EfiRuntimeServicesData,



  EfiConventionalMemory,



  EfiUnusableMemory,



  EfiACPIReclaimMemory,



  EfiACPIMemoryNVS,




  EfiMemoryMappedIO,




  EfiMemoryMappedIOPortSpace,



  EfiPalCode,




  EfiPersistentMemory,
  EfiMaxMemoryType
} EFI_MEMORY_TYPE;




typedef enum {






  EfiResetCold,





  EfiResetWarm,





  EfiResetShutdown,







  EfiResetPlatformSpecific
} EFI_RESET_TYPE;




typedef struct {





  UINT64 Signature;






  UINT32 Revision;



  UINT32 HeaderSize;




  UINT32 CRC32;



  UINT32 Reserved;
} EFI_TABLE_HEADER;
# 192 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h"
typedef struct {






  UINT64 MonotonicCount;
# 208 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h"
  WIN_CERTIFICATE_UEFI_GUID AuthInfo;
} EFI_VARIABLE_AUTHENTICATION;
# 219 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Uefi/UefiMultiPhase.h"
typedef struct {




  EFI_TIME TimeStamp;



  WIN_CERTIFICATE_UEFI_GUID AuthInfo;
 } EFI_VARIABLE_AUTHENTICATION_2;
# 23 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 1
# 21 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareVolume.h" 1
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef UINT32 EFI_FV_FILE_ATTRIBUTES;
# 36 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef UINT32 EFI_FVB_ATTRIBUTES_2;
# 91 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef struct {



  UINT32 NumBlocks;



  UINT32 Length;
} EFI_FV_BLOCK_MAP_ENTRY;




typedef struct {




  UINT8 ZeroVector[16];



  EFI_GUID FileSystemGuid;



  UINT64 FvLength;



  UINT32 Signature;



  EFI_FVB_ATTRIBUTES_2 Attributes;



  UINT16 HeaderLength;



  UINT16 Checksum;




  UINT16 ExtHeaderOffset;



  UINT8 Reserved[1];




  UINT8 Revision;




  EFI_FV_BLOCK_MAP_ENTRY BlockMap[1];
} EFI_FIRMWARE_VOLUME_HEADER;
# 166 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareVolume.h"
typedef struct {



  EFI_GUID FvName;



  UINT32 ExtHeaderSize;
} EFI_FIRMWARE_VOLUME_EXT_HEADER;




typedef struct {



  UINT16 ExtEntrySize;



  UINT16 ExtEntryType;
} EFI_FIRMWARE_VOLUME_EXT_ENTRY;





typedef struct {



  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;




  UINT32 TypeMask;





} EFI_FIRMWARE_VOLUME_EXT_ENTRY_OEM_TYPE;







typedef struct {



  EFI_FIRMWARE_VOLUME_EXT_ENTRY Hdr;



  EFI_GUID FormatType;





} EFI_FIRMWARE_VOLUME_EXT_ENTRY_GUID_TYPE;
# 22 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h" 1
# 26 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef union {
  struct {





    UINT8 Header;
# 43 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
    UINT8 File;
  } Checksum;



  UINT16 Checksum16;
} EFI_FFS_INTEGRITY_CHECK;







typedef UINT8 EFI_FV_FILETYPE;
typedef UINT8 EFI_FFS_FILE_ATTRIBUTES;
typedef UINT8 EFI_FFS_FILE_STATE;
# 108 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_GUID Name;



  EFI_FFS_INTEGRITY_CHECK IntegrityCheck;



  EFI_FV_FILETYPE Type;



  EFI_FFS_FILE_ATTRIBUTES Attributes;



  UINT8 Size[3];



  EFI_FFS_FILE_STATE State;
} EFI_FFS_FILE_HEADER;

typedef struct {





  EFI_GUID Name;




  EFI_FFS_INTEGRITY_CHECK IntegrityCheck;




  EFI_FV_FILETYPE Type;




  EFI_FFS_FILE_ATTRIBUTES Attributes;
# 165 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
  UINT8 Size[3];




  EFI_FFS_FILE_STATE State;





  UINT64 ExtendedSize;
} EFI_FFS_FILE_HEADER2;
# 188 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef UINT8 EFI_SECTION_TYPE;
# 224 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {




  UINT8 Size[3];
  EFI_SECTION_TYPE Type;



} EFI_COMMON_SECTION_HEADER;

typedef struct {




  UINT8 Size[3];

  EFI_SECTION_TYPE Type;





  UINT32 ExtendedSize;
} EFI_COMMON_SECTION_HEADER2;





typedef EFI_COMMON_SECTION_HEADER EFI_COMPATIBILITY16_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_COMPATIBILITY16_SECTION2;
# 268 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  UINT32 UncompressedLength;



  UINT8 CompressionType;
} EFI_COMPRESSION_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  UINT32 UncompressedLength;



  UINT8 CompressionType;
} EFI_COMPRESSION_SECTION2;
# 307 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_DISPOSABLE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_DISPOSABLE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_DXE_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_DXE_DEPEX_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_FIRMWARE_VOLUME_IMAGE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_FIRMWARE_VOLUME_IMAGE_SECTION2;




typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  EFI_GUID SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  EFI_GUID SubTypeGuid;
} EFI_FREEFORM_SUBTYPE_GUID_SECTION2;
# 355 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef struct {



  EFI_COMMON_SECTION_HEADER CommonHeader;



  EFI_GUID SectionDefinitionGuid;



  UINT16 DataOffset;



  UINT16 Attributes;
} EFI_GUID_DEFINED_SECTION;

typedef struct {



  EFI_COMMON_SECTION_HEADER2 CommonHeader;



  EFI_GUID SectionDefinitionGuid;



  UINT16 DataOffset;



  UINT16 Attributes;
} EFI_GUID_DEFINED_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_PE32_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PE32_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_PEI_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PEI_DEPEX_SECTION2;
# 414 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_PIC_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_PIC_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_TE_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_TE_SECTION2;




typedef EFI_COMMON_SECTION_HEADER EFI_RAW_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_RAW_SECTION2;
# 437 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiFirmwareFile.h"
typedef EFI_COMMON_SECTION_HEADER EFI_SMM_DEPEX_SECTION;
typedef EFI_COMMON_SECTION_HEADER2 EFI_SMM_DEPEX_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER CommonHeader;




  CHAR16 FileNameString[1];
} EFI_USER_INTERFACE_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2 CommonHeader;
  CHAR16 FileNameString[1];
} EFI_USER_INTERFACE_SECTION2;





typedef struct {
  EFI_COMMON_SECTION_HEADER CommonHeader;
  UINT16 BuildNumber;




  CHAR16 VersionString[1];
} EFI_VERSION_SECTION;

typedef struct {
  EFI_COMMON_SECTION_HEADER2 CommonHeader;




  UINT16 BuildNumber;
  CHAR16 VersionString[1];
} EFI_VERSION_SECTION2;
# 23 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiBootMode.h" 1
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiBootMode.h"
typedef UINT32 EFI_BOOT_MODE;
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h" 1
# 41 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  UINT16 HobType;



  UINT16 HobLength;



  UINT32 Reserved;
} EFI_HOB_GENERIC_HEADER;
# 66 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;





  UINT32 Version;



  EFI_BOOT_MODE BootMode;




  EFI_PHYSICAL_ADDRESS EfiMemoryTop;



  EFI_PHYSICAL_ADDRESS EfiMemoryBottom;




  EFI_PHYSICAL_ADDRESS EfiFreeMemoryTop;



  EFI_PHYSICAL_ADDRESS EfiFreeMemoryBottom;



  EFI_PHYSICAL_ADDRESS EfiEndOfHobList;
} EFI_HOB_HANDOFF_INFO_TABLE;






typedef struct {







  EFI_GUID Name;






  EFI_PHYSICAL_ADDRESS MemoryBaseAddress;




  UINT64 MemoryLength;






  EFI_MEMORY_TYPE MemoryType;




  UINT8 Reserved[4];
} EFI_HOB_MEMORY_ALLOCATION_HEADER;






typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;




} EFI_HOB_MEMORY_ALLOCATION;







typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_STACK;







typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER AllocDescriptor;
} EFI_HOB_MEMORY_ALLOCATION_BSP_STORE;




typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_HOB_MEMORY_ALLOCATION_HEADER MemoryAllocationHeader;




  EFI_GUID ModuleName;




  EFI_PHYSICAL_ADDRESS EntryPoint;
} EFI_HOB_MEMORY_ALLOCATION_MODULE;




typedef UINT32 EFI_RESOURCE_TYPE;
# 247 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h"
typedef UINT32 EFI_RESOURCE_ATTRIBUTE_TYPE;
# 311 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;




  EFI_GUID Owner;



  EFI_RESOURCE_TYPE ResourceType;



  EFI_RESOURCE_ATTRIBUTE_TYPE ResourceAttribute;



  EFI_PHYSICAL_ADDRESS PhysicalStart;



  UINT64 ResourceLength;
} EFI_HOB_RESOURCE_DESCRIPTOR;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_GUID Name;



} EFI_HOB_GUID_TYPE;




typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_PHYSICAL_ADDRESS BaseAddress;



  UINT64 Length;
} EFI_HOB_FIRMWARE_VOLUME;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  EFI_PHYSICAL_ADDRESS BaseAddress;



  UINT64 Length;



  EFI_GUID FvName;



  EFI_GUID FileName;
} EFI_HOB_FIRMWARE_VOLUME2;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;



  UINT8 SizeOfMemorySpace;



  UINT8 SizeOfIoSpace;



  UINT8 Reserved[6];
} EFI_HOB_CPU;





typedef struct {



  EFI_HOB_GENERIC_HEADER Header;
} EFI_HOB_MEMORY_POOL;
# 443 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiHob.h"
typedef struct {



  EFI_HOB_GENERIC_HEADER Header;






  EFI_PHYSICAL_ADDRESS BaseAddress;
  UINT64 Length;
} EFI_HOB_UEFI_CAPSULE;




typedef union {
  EFI_HOB_GENERIC_HEADER *Header;
  EFI_HOB_HANDOFF_INFO_TABLE *HandoffInformationTable;
  EFI_HOB_MEMORY_ALLOCATION *MemoryAllocation;
  EFI_HOB_MEMORY_ALLOCATION_BSP_STORE *MemoryAllocationBspStore;
  EFI_HOB_MEMORY_ALLOCATION_STACK *MemoryAllocationStack;
  EFI_HOB_MEMORY_ALLOCATION_MODULE *MemoryAllocationModule;
  EFI_HOB_RESOURCE_DESCRIPTOR *ResourceDescriptor;
  EFI_HOB_GUID_TYPE *Guid;
  EFI_HOB_FIRMWARE_VOLUME *FirmwareVolume;
  EFI_HOB_FIRMWARE_VOLUME2 *FirmwareVolume2;
  EFI_HOB_CPU *Cpu;
  EFI_HOB_MEMORY_POOL *Pool;
  EFI_HOB_UEFI_CAPSULE *Capsule;
  UINT8 *Raw;
} EFI_PEI_HOB_POINTERS;
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiDependency.h" 1
# 26 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiStatusCode.h" 1
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiStatusCode.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h" 1
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h" 1
# 56 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT16 e_magic;
  UINT16 e_cblp;
  UINT16 e_cp;
  UINT16 e_crlc;
  UINT16 e_cparhdr;
  UINT16 e_minalloc;
  UINT16 e_maxalloc;
  UINT16 e_ss;
  UINT16 e_sp;
  UINT16 e_csum;
  UINT16 e_ip;
  UINT16 e_cs;
  UINT16 e_lfarlc;
  UINT16 e_ovno;
  UINT16 e_res[4];
  UINT16 e_oemid;
  UINT16 e_oeminfo;
  UINT16 e_res2[10];
  UINT32 e_lfanew;
} EFI_IMAGE_DOS_HEADER;




typedef struct {
  UINT16 Machine;
  UINT16 NumberOfSections;
  UINT32 TimeDateStamp;
  UINT32 PointerToSymbolTable;
  UINT32 NumberOfSymbols;
  UINT16 SizeOfOptionalHeader;
  UINT16 Characteristics;
} EFI_IMAGE_FILE_HEADER;
# 113 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 Size;
} EFI_IMAGE_DATA_DIRECTORY;
# 146 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {



  UINT16 Magic;
  UINT8 MajorLinkerVersion;
  UINT8 MinorLinkerVersion;
  UINT32 SizeOfCode;
  UINT32 SizeOfInitializedData;
  UINT32 SizeOfUninitializedData;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;
  UINT32 BaseOfData;



  UINT32 ImageBase;
  UINT32 SectionAlignment;
  UINT32 FileAlignment;
  UINT16 MajorOperatingSystemVersion;
  UINT16 MinorOperatingSystemVersion;
  UINT16 MajorImageVersion;
  UINT16 MinorImageVersion;
  UINT16 MajorSubsystemVersion;
  UINT16 MinorSubsystemVersion;
  UINT32 Win32VersionValue;
  UINT32 SizeOfImage;
  UINT32 SizeOfHeaders;
  UINT32 CheckSum;
  UINT16 Subsystem;
  UINT16 DllCharacteristics;
  UINT32 SizeOfStackReserve;
  UINT32 SizeOfStackCommit;
  UINT32 SizeOfHeapReserve;
  UINT32 SizeOfHeapCommit;
  UINT32 LoaderFlags;
  UINT32 NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER32;
# 197 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {



  UINT16 Magic;
  UINT8 MajorLinkerVersion;
  UINT8 MinorLinkerVersion;
  UINT32 SizeOfCode;
  UINT32 SizeOfInitializedData;
  UINT32 SizeOfUninitializedData;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;



  UINT64 ImageBase;
  UINT32 SectionAlignment;
  UINT32 FileAlignment;
  UINT16 MajorOperatingSystemVersion;
  UINT16 MinorOperatingSystemVersion;
  UINT16 MajorImageVersion;
  UINT16 MinorImageVersion;
  UINT16 MajorSubsystemVersion;
  UINT16 MinorSubsystemVersion;
  UINT32 Win32VersionValue;
  UINT32 SizeOfImage;
  UINT32 SizeOfHeaders;
  UINT32 CheckSum;
  UINT16 Subsystem;
  UINT16 DllCharacteristics;
  UINT64 SizeOfStackReserve;
  UINT64 SizeOfStackCommit;
  UINT64 SizeOfHeapReserve;
  UINT64 SizeOfHeapCommit;
  UINT32 LoaderFlags;
  UINT32 NumberOfRvaAndSizes;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[16];
} EFI_IMAGE_OPTIONAL_HEADER64;






typedef struct {
  UINT32 Signature;
  EFI_IMAGE_FILE_HEADER FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER32 OptionalHeader;
} EFI_IMAGE_NT_HEADERS32;







typedef struct {
  UINT32 Signature;
  EFI_IMAGE_FILE_HEADER FileHeader;
  EFI_IMAGE_OPTIONAL_HEADER64 OptionalHeader;
} EFI_IMAGE_NT_HEADERS64;
# 279 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT8 Name[8];
  union {
    UINT32 PhysicalAddress;
    UINT32 VirtualSize;
  } Misc;
  UINT32 VirtualAddress;
  UINT32 SizeOfRawData;
  UINT32 PointerToRawData;
  UINT32 PointerToRelocations;
  UINT32 PointerToLinenumbers;
  UINT16 NumberOfRelocations;
  UINT16 NumberOfLinenumbers;
  UINT32 Characteristics;
} EFI_IMAGE_SECTION_HEADER;
# 429 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 SymbolTableIndex;
  UINT16 Type;
} EFI_IMAGE_RELOCATION;
# 477 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 VirtualAddress;
  UINT32 SizeOfBlock;
} EFI_IMAGE_BASE_RELOCATION;
# 505 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  union {
    UINT32 SymbolTableIndex;
    UINT32 VirtualAddress;
  } Type;
  UINT16 Linenumber;
} EFI_IMAGE_LINENUMBER;
# 531 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT8 Name[16];
  UINT8 Date[12];
  UINT8 UserID[6];
  UINT8 GroupID[6];
  UINT8 Mode[8];
  UINT8 Size[10];
  UINT8 EndHeader[2];
} EFI_IMAGE_ARCHIVE_MEMBER_HEADER;
# 554 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT32 Name;
  UINT32 Base;
  UINT32 NumberOfFunctions;
  UINT32 NumberOfNames;
  UINT32 AddressOfFunctions;
  UINT32 AddressOfNames;
  UINT32 AddressOfNameOrdinals;
} EFI_IMAGE_EXPORT_DIRECTORY;




typedef struct {
  UINT16 Hint;
  UINT8 Name[1];
} EFI_IMAGE_IMPORT_BY_NAME;




typedef struct {
  union {
    UINT32 Function;
    UINT32 Ordinal;
    EFI_IMAGE_IMPORT_BY_NAME *AddressOfData;
  } u1;
} EFI_IMAGE_THUNK_DATA;
# 594 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT32 ForwarderChain;
  UINT32 Name;
  EFI_IMAGE_THUNK_DATA *FirstThunk;
} EFI_IMAGE_IMPORT_DESCRIPTOR;





typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT32 Type;
  UINT32 SizeOfData;
  UINT32 RVA;
  UINT32 FileOffset;
} EFI_IMAGE_DEBUG_DIRECTORY_ENTRY;







typedef struct {
  UINT32 Signature;
  UINT32 Unknown;
  UINT32 Unknown2;
  UINT32 Unknown3;



} EFI_IMAGE_DEBUG_CODEVIEW_NB10_ENTRY;





typedef struct {
  UINT32 Signature;
  UINT32 Unknown;
  UINT32 Unknown2;
  UINT32 Unknown3;
  UINT32 Unknown4;
  UINT32 Unknown5;



} EFI_IMAGE_DEBUG_CODEVIEW_RSDS_ENTRY;






typedef struct {
  UINT32 Signature;
  GUID MachOUuid;



} EFI_IMAGE_DEBUG_CODEVIEW_MTOC_ENTRY;




typedef struct {
  UINT32 Characteristics;
  UINT32 TimeDateStamp;
  UINT16 MajorVersion;
  UINT16 MinorVersion;
  UINT16 NumberOfNamedEntries;
  UINT16 NumberOfIdEntries;



} EFI_IMAGE_RESOURCE_DIRECTORY;




typedef struct {
  union {
    struct {
      UINT32 NameOffset:31;
      UINT32 NameIsString:1;
    } s;
    UINT32 Id;
  } u1;
  union {
    UINT32 OffsetToData;
    struct {
      UINT32 OffsetToDirectory:31;
      UINT32 DataIsDirectory:1;
    } s;
  } u2;
} EFI_IMAGE_RESOURCE_DIRECTORY_ENTRY;




typedef struct {
  UINT16 Length;
  CHAR16 String[1];
} EFI_IMAGE_RESOURCE_DIRECTORY_STRING;




typedef struct {
  UINT32 OffsetToData;
  UINT32 Size;
  UINT32 CodePage;
  UINT32 Reserved;
} EFI_IMAGE_RESOURCE_DATA_ENTRY;




typedef struct {
  UINT16 Signature;
  UINT16 Machine;
  UINT8 NumberOfSections;
  UINT8 Subsystem;
  UINT16 StrippedSize;
  UINT32 AddressOfEntryPoint;
  UINT32 BaseOfCode;
  UINT64 ImageBase;
  EFI_IMAGE_DATA_DIRECTORY DataDirectory[2];
} EFI_TE_IMAGE_HEADER;
# 743 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/IndustryStandard/PeImage.h"
typedef union {
  EFI_IMAGE_NT_HEADERS32 Pe32;
  EFI_IMAGE_NT_HEADERS64 Pe32Plus;
  EFI_TE_IMAGE_HEADER Te;
} EFI_IMAGE_OPTIONAL_HEADER_UNION;

typedef union {
  EFI_IMAGE_NT_HEADERS32 *Pe32;
  EFI_IMAGE_NT_HEADERS64 *Pe32Plus;
  EFI_TE_IMAGE_HEADER *Te;
  EFI_IMAGE_OPTIONAL_HEADER_UNION *Union;
} EFI_IMAGE_OPTIONAL_HEADER_PTR_UNION;
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h" 2

typedef struct _EFI_DEBUG_SUPPORT_PROTOCOL EFI_DEBUG_SUPPORT_PROTOCOL;
# 40 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef INTN EFI_EXCEPTION_TYPE;
# 67 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT16 Fcw;
  UINT16 Fsw;
  UINT16 Ftw;
  UINT16 Opcode;
  UINT32 Eip;
  UINT16 Cs;
  UINT16 Reserved1;
  UINT32 DataOffset;
  UINT16 Ds;
  UINT8 Reserved2[10];
  UINT8 St0Mm0[10], Reserved3[6];
  UINT8 St1Mm1[10], Reserved4[6];
  UINT8 St2Mm2[10], Reserved5[6];
  UINT8 St3Mm3[10], Reserved6[6];
  UINT8 St4Mm4[10], Reserved7[6];
  UINT8 St5Mm5[10], Reserved8[6];
  UINT8 St6Mm6[10], Reserved9[6];
  UINT8 St7Mm7[10], Reserved10[6];
  UINT8 Xmm0[16];
  UINT8 Xmm1[16];
  UINT8 Xmm2[16];
  UINT8 Xmm3[16];
  UINT8 Xmm4[16];
  UINT8 Xmm5[16];
  UINT8 Xmm6[16];
  UINT8 Xmm7[16];
  UINT8 Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_IA32;




typedef struct {
  UINT32 ExceptionData;
  EFI_FX_SAVE_STATE_IA32 FxSaveState;
  UINT32 Dr0;
  UINT32 Dr1;
  UINT32 Dr2;
  UINT32 Dr3;
  UINT32 Dr6;
  UINT32 Dr7;
  UINT32 Cr0;
  UINT32 Cr1;
  UINT32 Cr2;
  UINT32 Cr3;
  UINT32 Cr4;
  UINT32 Eflags;
  UINT32 Ldtr;
  UINT32 Tr;
  UINT32 Gdtr[2];
  UINT32 Idtr[2];
  UINT32 Eip;
  UINT32 Gs;
  UINT32 Fs;
  UINT32 Es;
  UINT32 Ds;
  UINT32 Cs;
  UINT32 Ss;
  UINT32 Edi;
  UINT32 Esi;
  UINT32 Ebp;
  UINT32 Esp;
  UINT32 Ebx;
  UINT32 Edx;
  UINT32 Ecx;
  UINT32 Eax;
} EFI_SYSTEM_CONTEXT_IA32;
# 161 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT16 Fcw;
  UINT16 Fsw;
  UINT16 Ftw;
  UINT16 Opcode;
  UINT64 Rip;
  UINT64 DataOffset;
  UINT8 Reserved1[8];
  UINT8 St0Mm0[10], Reserved2[6];
  UINT8 St1Mm1[10], Reserved3[6];
  UINT8 St2Mm2[10], Reserved4[6];
  UINT8 St3Mm3[10], Reserved5[6];
  UINT8 St4Mm4[10], Reserved6[6];
  UINT8 St5Mm5[10], Reserved7[6];
  UINT8 St6Mm6[10], Reserved8[6];
  UINT8 St7Mm7[10], Reserved9[6];
  UINT8 Xmm0[16];
  UINT8 Xmm1[16];
  UINT8 Xmm2[16];
  UINT8 Xmm3[16];
  UINT8 Xmm4[16];
  UINT8 Xmm5[16];
  UINT8 Xmm6[16];
  UINT8 Xmm7[16];



  UINT8 Reserved11[14 * 16];
} EFI_FX_SAVE_STATE_X64;




typedef struct {
  UINT64 ExceptionData;
  EFI_FX_SAVE_STATE_X64 FxSaveState;
  UINT64 Dr0;
  UINT64 Dr1;
  UINT64 Dr2;
  UINT64 Dr3;
  UINT64 Dr6;
  UINT64 Dr7;
  UINT64 Cr0;
  UINT64 Cr1;
  UINT64 Cr2;
  UINT64 Cr3;
  UINT64 Cr4;
  UINT64 Cr8;
  UINT64 Rflags;
  UINT64 Ldtr;
  UINT64 Tr;
  UINT64 Gdtr[2];
  UINT64 Idtr[2];
  UINT64 Rip;
  UINT64 Gs;
  UINT64 Fs;
  UINT64 Es;
  UINT64 Ds;
  UINT64 Cs;
  UINT64 Ss;
  UINT64 Rdi;
  UINT64 Rsi;
  UINT64 Rbp;
  UINT64 Rsp;
  UINT64 Rbx;
  UINT64 Rdx;
  UINT64 Rcx;
  UINT64 Rax;
  UINT64 R8;
  UINT64 R9;
  UINT64 R10;
  UINT64 R11;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
} EFI_SYSTEM_CONTEXT_X64;
# 287 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {




  UINT64 Reserved;
  UINT64 R1;
  UINT64 R2;
  UINT64 R3;
  UINT64 R4;
  UINT64 R5;
  UINT64 R6;
  UINT64 R7;
  UINT64 R8;
  UINT64 R9;
  UINT64 R10;
  UINT64 R11;
  UINT64 R12;
  UINT64 R13;
  UINT64 R14;
  UINT64 R15;
  UINT64 R16;
  UINT64 R17;
  UINT64 R18;
  UINT64 R19;
  UINT64 R20;
  UINT64 R21;
  UINT64 R22;
  UINT64 R23;
  UINT64 R24;
  UINT64 R25;
  UINT64 R26;
  UINT64 R27;
  UINT64 R28;
  UINT64 R29;
  UINT64 R30;
  UINT64 R31;

  UINT64 F2[2];
  UINT64 F3[2];
  UINT64 F4[2];
  UINT64 F5[2];
  UINT64 F6[2];
  UINT64 F7[2];
  UINT64 F8[2];
  UINT64 F9[2];
  UINT64 F10[2];
  UINT64 F11[2];
  UINT64 F12[2];
  UINT64 F13[2];
  UINT64 F14[2];
  UINT64 F15[2];
  UINT64 F16[2];
  UINT64 F17[2];
  UINT64 F18[2];
  UINT64 F19[2];
  UINT64 F20[2];
  UINT64 F21[2];
  UINT64 F22[2];
  UINT64 F23[2];
  UINT64 F24[2];
  UINT64 F25[2];
  UINT64 F26[2];
  UINT64 F27[2];
  UINT64 F28[2];
  UINT64 F29[2];
  UINT64 F30[2];
  UINT64 F31[2];

  UINT64 Pr;

  UINT64 B0;
  UINT64 B1;
  UINT64 B2;
  UINT64 B3;
  UINT64 B4;
  UINT64 B5;
  UINT64 B6;
  UINT64 B7;




  UINT64 ArRsc;
  UINT64 ArBsp;
  UINT64 ArBspstore;
  UINT64 ArRnat;

  UINT64 ArFcr;

  UINT64 ArEflag;
  UINT64 ArCsd;
  UINT64 ArSsd;
  UINT64 ArCflg;
  UINT64 ArFsr;
  UINT64 ArFir;
  UINT64 ArFdr;

  UINT64 ArCcv;

  UINT64 ArUnat;

  UINT64 ArFpsr;

  UINT64 ArPfs;
  UINT64 ArLc;
  UINT64 ArEc;




  UINT64 CrDcr;
  UINT64 CrItm;
  UINT64 CrIva;
  UINT64 CrPta;
  UINT64 CrIpsr;
  UINT64 CrIsr;
  UINT64 CrIip;
  UINT64 CrIfa;
  UINT64 CrItir;
  UINT64 CrIipa;
  UINT64 CrIfs;
  UINT64 CrIim;
  UINT64 CrIha;




  UINT64 Dbr0;
  UINT64 Dbr1;
  UINT64 Dbr2;
  UINT64 Dbr3;
  UINT64 Dbr4;
  UINT64 Dbr5;
  UINT64 Dbr6;
  UINT64 Dbr7;

  UINT64 Ibr0;
  UINT64 Ibr1;
  UINT64 Ibr2;
  UINT64 Ibr3;
  UINT64 Ibr4;
  UINT64 Ibr5;
  UINT64 Ibr6;
  UINT64 Ibr7;




  UINT64 IntNat;

} EFI_SYSTEM_CONTEXT_IPF;
# 462 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT64 R0;
  UINT64 R1;
  UINT64 R2;
  UINT64 R3;
  UINT64 R4;
  UINT64 R5;
  UINT64 R6;
  UINT64 R7;
  UINT64 Flags;
  UINT64 ControlFlags;
  UINT64 Ip;
} EFI_SYSTEM_CONTEXT_EBC;
# 498 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {
  UINT32 R0;
  UINT32 R1;
  UINT32 R2;
  UINT32 R3;
  UINT32 R4;
  UINT32 R5;
  UINT32 R6;
  UINT32 R7;
  UINT32 R8;
  UINT32 R9;
  UINT32 R10;
  UINT32 R11;
  UINT32 R12;
  UINT32 SP;
  UINT32 LR;
  UINT32 PC;
  UINT32 CPSR;
  UINT32 DFSR;
  UINT32 DFAR;
  UINT32 IFSR;
  UINT32 IFAR;
} EFI_SYSTEM_CONTEXT_ARM;
# 536 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef struct {

  UINT64 X0;
  UINT64 X1;
  UINT64 X2;
  UINT64 X3;
  UINT64 X4;
  UINT64 X5;
  UINT64 X6;
  UINT64 X7;
  UINT64 X8;
  UINT64 X9;
  UINT64 X10;
  UINT64 X11;
  UINT64 X12;
  UINT64 X13;
  UINT64 X14;
  UINT64 X15;
  UINT64 X16;
  UINT64 X17;
  UINT64 X18;
  UINT64 X19;
  UINT64 X20;
  UINT64 X21;
  UINT64 X22;
  UINT64 X23;
  UINT64 X24;
  UINT64 X25;
  UINT64 X26;
  UINT64 X27;
  UINT64 X28;
  UINT64 FP;
  UINT64 LR;
  UINT64 SP;


  UINT64 V0[2];
  UINT64 V1[2];
  UINT64 V2[2];
  UINT64 V3[2];
  UINT64 V4[2];
  UINT64 V5[2];
  UINT64 V6[2];
  UINT64 V7[2];
  UINT64 V8[2];
  UINT64 V9[2];
  UINT64 V10[2];
  UINT64 V11[2];
  UINT64 V12[2];
  UINT64 V13[2];
  UINT64 V14[2];
  UINT64 V15[2];
  UINT64 V16[2];
  UINT64 V17[2];
  UINT64 V18[2];
  UINT64 V19[2];
  UINT64 V20[2];
  UINT64 V21[2];
  UINT64 V22[2];
  UINT64 V23[2];
  UINT64 V24[2];
  UINT64 V25[2];
  UINT64 V26[2];
  UINT64 V27[2];
  UINT64 V28[2];
  UINT64 V29[2];
  UINT64 V30[2];
  UINT64 V31[2];

  UINT64 ELR;
  UINT64 SPSR;
  UINT64 FPSR;
  UINT64 ESR;
  UINT64 FAR;
} EFI_SYSTEM_CONTEXT_AARCH64;





typedef union {
  EFI_SYSTEM_CONTEXT_EBC *SystemContextEbc;
  EFI_SYSTEM_CONTEXT_IA32 *SystemContextIa32;
  EFI_SYSTEM_CONTEXT_X64 *SystemContextX64;
  EFI_SYSTEM_CONTEXT_IPF *SystemContextIpf;
  EFI_SYSTEM_CONTEXT_ARM *SystemContextArm;
  EFI_SYSTEM_CONTEXT_AARCH64 *SystemContextAArch64;
} EFI_SYSTEM_CONTEXT;
# 636 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef
void
( *EFI_EXCEPTION_CALLBACK)(
  EFI_EXCEPTION_TYPE ExceptionType,
  EFI_SYSTEM_CONTEXT SystemContext
  );







typedef
void
( *EFI_PERIODIC_CALLBACK)(
  EFI_SYSTEM_CONTEXT SystemContext
  );




typedef enum {
  IsaIa32 = 0x014c,
  IsaX64 = 0x8664,
  IsaIpf = 0x0200,
  IsaEbc = 0x0EBC,
  IsaArm = 0x01c2,
  IsaAArch64 = 0xAA64
} EFI_INSTRUCTION_SET_ARCHITECTURE;
# 683 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_GET_MAXIMUM_PROCESSOR_INDEX)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN *MaxProcessorIndex
  );
# 705 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_REGISTER_PERIODIC_CALLBACK)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  EFI_PERIODIC_CALLBACK PeriodicCallback
  );
# 729 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_REGISTER_EXCEPTION_CALLBACK)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  EFI_EXCEPTION_CALLBACK ExceptionCallback,
  EFI_EXCEPTION_TYPE ExceptionType
  );
# 751 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Protocol/DebugSupport.h"
typedef
EFI_STATUS
( *EFI_INVALIDATE_INSTRUCTION_CACHE)(
  EFI_DEBUG_SUPPORT_PROTOCOL *This,
  UINTN ProcessorIndex,
  void *Start,
  UINT64 Length
  );






struct _EFI_DEBUG_SUPPORT_PROTOCOL {



  EFI_INSTRUCTION_SET_ARCHITECTURE Isa;
  EFI_GET_MAXIMUM_PROCESSOR_INDEX GetMaximumProcessorIndex;
  EFI_REGISTER_PERIODIC_CALLBACK RegisterPeriodicCallback;
  EFI_REGISTER_EXCEPTION_CALLBACK RegisterExceptionCallback;
  EFI_INVALIDATE_INSTRUCTION_CACHE InvalidateInstructionCache;
};

extern EFI_GUID gEfiDebugSupportProtocolGuid;
# 26 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiStatusCode.h" 2




typedef UINT32 EFI_STATUS_CODE_TYPE;
# 73 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiStatusCode.h"
typedef UINT32 EFI_STATUS_CODE_VALUE;
# 90 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiStatusCode.h"
typedef struct {



  UINT16 HeaderSize;



  UINT16 Size;



  EFI_GUID Type;
} EFI_STATUS_CODE_DATA;
# 27 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiS3BootScript.h" 1
# 43 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiS3BootScript.h"
typedef enum {
  EfiBootScriptWidthUint8,
  EfiBootScriptWidthUint16,
  EfiBootScriptWidthUint32,
  EfiBootScriptWidthUint64,
  EfiBootScriptWidthFifoUint8,
  EfiBootScriptWidthFifoUint16,
  EfiBootScriptWidthFifoUint32,
  EfiBootScriptWidthFifoUint64,
  EfiBootScriptWidthFillUint8,
  EfiBootScriptWidthFillUint16,
  EfiBootScriptWidthFillUint32,
  EfiBootScriptWidthFillUint64,
  EfiBootScriptWidthMaximum
} EFI_BOOT_SCRIPT_WIDTH;
# 28 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h" 2
# 111 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h"
typedef struct {





  EFI_PHYSICAL_ADDRESS PhysicalStart;




  EFI_PHYSICAL_ADDRESS CpuStart;



  UINT64 PhysicalSize;






  UINT64 RegionState;
} EFI_SMRAM_DESCRIPTOR;

typedef enum {
  EFI_PCD_TYPE_8,
  EFI_PCD_TYPE_16,
  EFI_PCD_TYPE_32,
  EFI_PCD_TYPE_64,
  EFI_PCD_TYPE_BOOL,
  EFI_PCD_TYPE_PTR
} EFI_PCD_TYPE;

typedef struct {




  EFI_PCD_TYPE PcdType;




  UINTN PcdSize;






  CHAR8 *PcdName;
} EFI_PCD_INFO;
# 173 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiMultiPhase.h"
typedef
void
( *EFI_AP_PROCEDURE)(
  void *Buffer
  );
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h" 2




typedef void *EFI_PEI_FV_HANDLE;




typedef void *EFI_PEI_FILE_HANDLE;




typedef struct _EFI_PEI_SERVICES EFI_PEI_SERVICES;




typedef struct _EFI_PEI_NOTIFY_DESCRIPTOR EFI_PEI_NOTIFY_DESCRIPTOR;


# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h" 1
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef struct _EFI_PEI_CPU_IO_PPI EFI_PEI_CPU_IO_PPI;




typedef enum {
  EfiPeiCpuIoWidthUint8,
  EfiPeiCpuIoWidthUint16,
  EfiPeiCpuIoWidthUint32,
  EfiPeiCpuIoWidthUint64,
  EfiPeiCpuIoWidthFifoUint8,
  EfiPeiCpuIoWidthFifoUint16,
  EfiPeiCpuIoWidthFifoUint32,
  EfiPeiCpuIoWidthFifoUint64,
  EfiPeiCpuIoWidthFillUint8,
  EfiPeiCpuIoWidthFillUint16,
  EfiPeiCpuIoWidthFillUint32,
  EfiPeiCpuIoWidthFillUint64,
  EfiPeiCpuIoWidthMaximum
} EFI_PEI_CPU_IO_PPI_WIDTH;
# 61 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
EFI_STATUS
( *EFI_PEI_CPU_IO_PPI_IO_MEM)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  EFI_PEI_CPU_IO_PPI_WIDTH Width,
  UINT64 Address,
  UINTN Count,
  void *Buffer
  );




typedef struct {



  EFI_PEI_CPU_IO_PPI_IO_MEM Read;



  EFI_PEI_CPU_IO_PPI_IO_MEM Write;
} EFI_PEI_CPU_IO_PPI_ACCESS;
# 97 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT8
( *EFI_PEI_CPU_IO_PPI_IO_READ8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 116 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT16
( *EFI_PEI_CPU_IO_PPI_IO_READ16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 135 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT32
( *EFI_PEI_CPU_IO_PPI_IO_READ32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 154 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT64
( *EFI_PEI_CPU_IO_PPI_IO_READ64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 172 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT8 Data
  );
# 191 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT16 Data
  );
# 210 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT32 Data
  );
# 229 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_IO_WRITE64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT64 Data
  );
# 249 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT8
( *EFI_PEI_CPU_IO_PPI_MEM_READ8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 268 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT16
( *EFI_PEI_CPU_IO_PPI_MEM_READ16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 287 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT32
( *EFI_PEI_CPU_IO_PPI_MEM_READ32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 306 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
UINT64
( *EFI_PEI_CPU_IO_PPI_MEM_READ64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address
  );
# 324 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE8)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT8 Data
  );
# 343 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE16)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT16 Data
  );
# 362 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE32)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT32 Data
  );
# 381 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/CpuIo.h"
typedef
void
( *EFI_PEI_CPU_IO_PPI_MEM_WRITE64)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_CPU_IO_PPI *This,
  UINT64 Address,
  UINT64 Data
  );






struct _EFI_PEI_CPU_IO_PPI {



  EFI_PEI_CPU_IO_PPI_ACCESS Mem;



  EFI_PEI_CPU_IO_PPI_ACCESS Io;

  EFI_PEI_CPU_IO_PPI_IO_READ8 IoRead8;
  EFI_PEI_CPU_IO_PPI_IO_READ16 IoRead16;
  EFI_PEI_CPU_IO_PPI_IO_READ32 IoRead32;
  EFI_PEI_CPU_IO_PPI_IO_READ64 IoRead64;

  EFI_PEI_CPU_IO_PPI_IO_WRITE8 IoWrite8;
  EFI_PEI_CPU_IO_PPI_IO_WRITE16 IoWrite16;
  EFI_PEI_CPU_IO_PPI_IO_WRITE32 IoWrite32;
  EFI_PEI_CPU_IO_PPI_IO_WRITE64 IoWrite64;

  EFI_PEI_CPU_IO_PPI_MEM_READ8 MemRead8;
  EFI_PEI_CPU_IO_PPI_MEM_READ16 MemRead16;
  EFI_PEI_CPU_IO_PPI_MEM_READ32 MemRead32;
  EFI_PEI_CPU_IO_PPI_MEM_READ64 MemRead64;

  EFI_PEI_CPU_IO_PPI_MEM_WRITE8 MemWrite8;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE16 MemWrite16;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE32 MemWrite32;
  EFI_PEI_CPU_IO_PPI_MEM_WRITE64 MemWrite64;
};

extern EFI_GUID gEfiPeiCpuIoPpiInstalledGuid;
# 47 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h" 1
# 24 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h"
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
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h" 2




typedef struct _EFI_PEI_PCI_CFG2_PPI EFI_PEI_PCI_CFG2_PPI;
# 41 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h"
typedef enum {



  EfiPeiPciCfgWidthUint8 = 0,



  EfiPeiPciCfgWidthUint16 = 1,



  EfiPeiPciCfgWidthUint32 = 2,



  EfiPeiPciCfgWidthUint64 = 3,
  EfiPeiPciCfgWidthMaximum
} EFI_PEI_PCI_CFG_PPI_WIDTH;




typedef struct {




  UINT8 Register;




  UINT8 Function;



  UINT8 Device;



  UINT8 Bus;





  UINT32 ExtendedRegister;
} EFI_PEI_PCI_CFG_PPI_PCI_ADDRESS;
# 115 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h"
typedef
EFI_STATUS
( *EFI_PEI_PCI_CFG2_PPI_IO)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PCI_CFG2_PPI *This,
  EFI_PEI_PCI_CFG_PPI_WIDTH Width,
  UINT64 Address,
  void *Buffer
);
# 156 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Ppi/PciCfg2.h"
typedef
EFI_STATUS
( *EFI_PEI_PCI_CFG2_PPI_RW)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PCI_CFG2_PPI *This,
  EFI_PEI_PCI_CFG_PPI_WIDTH Width,
  UINT64 Address,
  void *SetBits,
  void *ClearBits
);





struct _EFI_PEI_PCI_CFG2_PPI {
  EFI_PEI_PCI_CFG2_PPI_IO Read;
  EFI_PEI_PCI_CFG2_PPI_IO Write;
  EFI_PEI_PCI_CFG2_PPI_RW Modify;



  UINT16 Segment;
};


extern EFI_GUID gEfiPciCfg2PpiGuid;
# 48 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h" 2
# 61 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEIM_ENTRY_POINT2)(
  EFI_PEI_FILE_HANDLE FileHandle,
  const EFI_PEI_SERVICES **PeiServices
  );
# 78 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEIM_NOTIFY_ENTRY_POINT)(
  EFI_PEI_SERVICES **PeiServices,
  EFI_PEI_NOTIFY_DESCRIPTOR *NotifyDescriptor,
  void *Ppi
  );
# 99 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef struct {




  UINTN Flags;



  EFI_GUID *Guid;



  void *Ppi;
} EFI_PEI_PPI_DESCRIPTOR;





struct _EFI_PEI_NOTIFY_DESCRIPTOR {



  UINTN Flags;



  EFI_GUID *Guid;



  EFI_PEIM_NOTIFY_ENTRY_POINT Notify;
};





typedef union {



  EFI_PEI_NOTIFY_DESCRIPTOR Notify;



  EFI_PEI_PPI_DESCRIPTOR Ppi;
} EFI_PEI_DESCRIPTOR;
# 166 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_INSTALL_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PPI_DESCRIPTOR *PpiList
  );
# 191 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REINSTALL_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_PPI_DESCRIPTOR *OldPpi,
  const EFI_PEI_PPI_DESCRIPTOR *NewPpi
  );
# 212 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_LOCATE_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_GUID *Guid,
  UINTN Instance,
  EFI_PEI_PPI_DESCRIPTOR **PpiDescriptor ,
  void **Ppi
  );
# 237 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_NOTIFY_PPI)(
  const EFI_PEI_SERVICES **PeiServices,
  const EFI_PEI_NOTIFY_DESCRIPTOR *NotifyList
  );
# 253 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_GET_BOOT_MODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_BOOT_MODE *BootMode
  );
# 269 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_SET_BOOT_MODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_BOOT_MODE BootMode
  );
# 286 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_GET_HOB_LIST)(
  const EFI_PEI_SERVICES **PeiServices,
  void **HobList
  );
# 305 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_CREATE_HOB)(
  const EFI_PEI_SERVICES **PeiServices,
  UINT16 Type,
  UINT16 Length,
  void **Hob
  );
# 333 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_NEXT_VOLUME2)(
  const EFI_PEI_SERVICES **PeiServices,
  UINTN Instance,
  EFI_PEI_FV_HANDLE *VolumeHandle
  );
# 362 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_NEXT_FILE2)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_FV_FILETYPE SearchType,
  const EFI_PEI_FV_HANDLE FvHandle,
  EFI_PEI_FILE_HANDLE *FileHandle
  );
# 390 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_SECTION_DATA2)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_SECTION_TYPE SectionType,
  EFI_PEI_FILE_HANDLE FileHandle,
  void **SectionData
  );
# 420 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_SECTION_DATA3)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_SECTION_TYPE SectionType,
  UINTN SectionInstance,
  EFI_PEI_FILE_HANDLE FileHandle,
  void **SectionData,
  UINT32 *AuthenticationStatus
  );
# 443 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_INSTALL_PEI_MEMORY)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_PHYSICAL_ADDRESS MemoryBegin,
  UINT64 MemoryLength
  );
# 468 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_ALLOCATE_PAGES)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_MEMORY_TYPE MemoryType,
  UINTN Pages,
  EFI_PHYSICAL_ADDRESS *Memory
  );
# 489 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_ALLOCATE_POOL)(
  const EFI_PEI_SERVICES **PeiServices,
  UINTN Size,
  void **Buffer
  );
# 505 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_COPY_MEM)(
  void *Destination,
  void *Source,
  UINTN Length
  );
# 521 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_SET_MEM)(
  void *Buffer,
  UINTN Size,
  UINT8 Value
  );
# 558 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REPORT_STATUS_CODE)(
  const EFI_PEI_SERVICES **PeiServices,
  EFI_STATUS_CODE_TYPE Type,
  EFI_STATUS_CODE_VALUE Value,
  UINT32 Instance,
  const EFI_GUID *CallerId ,
  const EFI_STATUS_CODE_DATA *Data
  );
# 582 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_RESET_SYSTEM)(
  const EFI_PEI_SERVICES **PeiServices
  );
# 603 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_RESET2_SYSTEM) (
  EFI_RESET_TYPE ResetType,
  EFI_STATUS ResetStatus,
  UINTN DataSize,
  void *ResetData
  );
# 632 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_FIND_BY_NAME)(
  const EFI_GUID *FileName,
  EFI_PEI_FV_HANDLE VolumeHandle,
  EFI_PEI_FILE_HANDLE *FileHandle
  );




typedef struct {



  EFI_GUID FileName;



  EFI_FV_FILETYPE FileType;



  EFI_FV_FILE_ATTRIBUTES FileAttributes;





  void *Buffer;



  UINT32 BufferSize;
} EFI_FV_FILE_INFO;




typedef struct {



  EFI_GUID FileName;



  EFI_FV_FILETYPE FileType;



  EFI_FV_FILE_ATTRIBUTES FileAttributes;





  void *Buffer;



  UINT32 BufferSize;



  UINT32 AuthenticationStatus;
} EFI_FV_FILE_INFO2;
# 718 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_FILE_INFO)(
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_FV_FILE_INFO *FileInfo
  );
# 742 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_FILE_INFO2)(
  EFI_PEI_FILE_HANDLE FileHandle,
  EFI_FV_FILE_INFO2 *FileInfo
  );




typedef struct {



  EFI_FVB_ATTRIBUTES_2 FvAttributes;



  EFI_GUID FvFormat;



  EFI_GUID FvName;





  void *FvStart;



  UINT64 FvSize;
} EFI_FV_INFO;
# 794 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_FFS_GET_VOLUME_INFO)(
  EFI_PEI_FV_HANDLE VolumeHandle,
  EFI_FV_INFO *VolumeInfo
  );
# 825 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
EFI_STATUS
( *EFI_PEI_REGISTER_FOR_SHADOW)(
  EFI_PEI_FILE_HANDLE FileHandle
  );
# 863 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
struct _EFI_PEI_SERVICES {



  EFI_TABLE_HEADER Hdr;




  EFI_PEI_INSTALL_PPI InstallPpi;
  EFI_PEI_REINSTALL_PPI ReInstallPpi;
  EFI_PEI_LOCATE_PPI LocatePpi;
  EFI_PEI_NOTIFY_PPI NotifyPpi;




  EFI_PEI_GET_BOOT_MODE GetBootMode;
  EFI_PEI_SET_BOOT_MODE SetBootMode;




  EFI_PEI_GET_HOB_LIST GetHobList;
  EFI_PEI_CREATE_HOB CreateHob;




  EFI_PEI_FFS_FIND_NEXT_VOLUME2 FfsFindNextVolume;
  EFI_PEI_FFS_FIND_NEXT_FILE2 FfsFindNextFile;
  EFI_PEI_FFS_FIND_SECTION_DATA2 FfsFindSectionData;




  EFI_PEI_INSTALL_PEI_MEMORY InstallPeiMemory;
  EFI_PEI_ALLOCATE_PAGES AllocatePages;
  EFI_PEI_ALLOCATE_POOL AllocatePool;
  EFI_PEI_COPY_MEM CopyMem;
  EFI_PEI_SET_MEM SetMem;




  EFI_PEI_REPORT_STATUS_CODE ReportStatusCode;




  EFI_PEI_RESET_SYSTEM ResetSystem;





  EFI_PEI_CPU_IO_PPI *CpuIo;
  EFI_PEI_PCI_CFG2_PPI *PciCfg;




  EFI_PEI_FFS_FIND_BY_NAME FfsFindFileByName;
  EFI_PEI_FFS_GET_FILE_INFO FfsGetFileInfo;
  EFI_PEI_FFS_GET_VOLUME_INFO FfsGetVolumeInfo;
  EFI_PEI_REGISTER_FOR_SHADOW RegisterForShadow;
  EFI_PEI_FFS_FIND_SECTION_DATA3 FindSectionData3;
  EFI_PEI_FFS_GET_FILE_INFO2 FfsGetFileInfo2;
  EFI_PEI_RESET2_SYSTEM ResetSystem2;
};







typedef struct _EFI_SEC_PEI_HAND_OFF {



  UINT16 DataSize;






  void *BootFirmwareVolumeBase;




  UINTN BootFirmwareVolumeSize;




  void *TemporaryRamBase;




  UINTN TemporaryRamSize;
# 977 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
  void *PeiTemporaryRamBase;





  UINTN PeiTemporaryRamSize;







  void *StackBase;




  UINTN StackSize;
} EFI_SEC_PEI_HAND_OFF;
# 1035 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/Pi/PiPeiCis.h"
typedef
void
( *EFI_PEI_CORE_ENTRY_POINT)(
  const EFI_SEC_PEI_HAND_OFF *SecCoreData,
  const EFI_PEI_PPI_DESCRIPTOR *PpiList
);
# 25 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdePkg/Include/PiPei.h" 2
# 18 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/Build/MdeModule/DEBUG_GCC44/X64/MdeModulePkg/Universal/CapsulePei/CapsuleX64/DEBUG/AutoGen.h" 2

extern GUID gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;





extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
# 1 "<command-line>" 2
# 1 "/home/neo/development/uefi/UDK-uefi-development-kit/MyWorkSpace/MdeModulePkg/Universal/CapsulePei/X64/PageFaultHandler.nasm"
;; @file
; This is the assembly code for page fault handler hook.
;
; Copyright (c) 2015, Intel Corporation. All rights reserved.<BR>
;
; This program and the accompanying materials
; are licensed and made available under the terms and conditions of the BSD License
; which accompanies this distribution. The full text of the license may be found at
; http:
;
; THE PROGRAM IS DISTRIBUTED UNDER THE BSD LICENSE ON AN "AS IS" BASIS,
; WITHOUT WARRANTIES OR REPRESENTATIONS OF ANY KIND, EITHER EXPRESS OR IMPLIED.
;
;;

extern PageFaultHandler

    DEFAULT REL
    SECTION .text

global PageFaultHandlerHook
PageFaultHandlerHook:
    add rsp, -0x10
    ; save rax
    mov [rsp + 0x8], rax

    ;push rax ; save all volatile registers
    push rcx
    push rdx
    push r8
    push r9
    push r10
    push r11
    ; save volatile fp registers
    ; 68h + 08h(for alignment)
    add rsp, -0x70
    stmxcsr [rsp + 0x60]
    movdqa [rsp + 0x0], xmm0
    movdqa [rsp + 0x10], xmm1
    movdqa [rsp + 0x20], xmm2
    movdqa [rsp + 0x30], xmm3
    movdqa [rsp + 0x40], xmm4
    movdqa [rsp + 0x50], xmm5

    add rsp, -0x20
    call PageFaultHandler
    add rsp, 0x20

    ; load volatile fp registers
    ldmxcsr [rsp + 0x60]
    movdqa xmm0, [rsp + 0x0]
    movdqa xmm1, [rsp + 0x10]
    movdqa xmm2, [rsp + 0x20]
    movdqa xmm3, [rsp + 0x30]
    movdqa xmm4, [rsp + 0x40]
    movdqa xmm5, [rsp + 0x50]
    add rsp, 0x70

    pop r11
    pop r10
    pop r9
    pop r8
    pop rdx
    pop rcx
    ;pop rax ; restore all volatile registers

    add rsp, 0x10

    ; rax returned from PageFaultHandler is ((void *) 0) or OriginalHandler address
    ; ((void *) 0) if the page fault is handled by PageFaultHandler
    ; OriginalHandler address if the page fault is not handled by PageFaultHandler
    test rax, rax

    ; save OriginalHandler address
    mov [rsp - 0x10], rax
    ; restore rax
    mov rax, [rsp - 0x8]

    jz .0

    ; jump to OriginalHandler
    jmp qword [rsp - 0x10]

.0:
    add rsp, 0x8 ; skip error code for PF
    iretq
