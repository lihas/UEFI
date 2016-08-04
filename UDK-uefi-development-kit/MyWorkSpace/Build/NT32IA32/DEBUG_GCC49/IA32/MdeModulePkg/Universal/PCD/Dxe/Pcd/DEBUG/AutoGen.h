/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541
#define _AUTOGENH_80CF7257_87AB_47f9_A3FE_D50B76D89541

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}}

// Guids
extern EFI_GUID gPcdDataBaseHobGuid;
extern EFI_GUID gPcdDataBaseSignatureGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;
extern EFI_GUID gEfiFileInfoGuid;

// Protocols
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiDebugMaskProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdVpdBaseAddress  53U
#define _PCD_SIZE_PcdVpdBaseAddress 4
#define _PCD_GET_MODE_SIZE_PcdVpdBaseAddress  _PCD_SIZE_PcdVpdBaseAddress 
#define _PCD_VALUE_PcdVpdBaseAddress  0x0U
extern const  UINT32  _gPcd_FixedAtBuild_PcdVpdBaseAddress;
#define _PCD_GET_MODE_32_PcdVpdBaseAddress  _gPcd_FixedAtBuild_PcdVpdBaseAddress
//#define _PCD_SET_MODE_32_PcdVpdBaseAddress  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c

#define PCD_PEI_SERVICE_DRIVER_VERSION         5

//
// External PCD database debug information
//
#if 0
#define PEI_GUID_TABLE_SIZE                1U
#define PEI_STRING_TABLE_SIZE              222U
#define PEI_SKUID_TABLE_SIZE               1U
#define PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE  6
#define PEI_LOCAL_TOKEN_NUMBER             6
#define PEI_EXMAPPING_TABLE_SIZE           1U
#define PEI_EX_TOKEN_NUMBER                0U
#define PEI_SIZE_TABLE_SIZE                2U
#define PEI_SKU_HEAD_SIZE                  1U
#define PEI_GUID_TABLE_EMPTY               TRUE
#define PEI_STRING_TABLE_EMPTY             FALSE
#define PEI_SKUID_TABLE_EMPTY              TRUE
#define PEI_DATABASE_EMPTY                 FALSE
#define PEI_EXMAP_TABLE_EMPTY              TRUE

typedef struct {





  DYNAMICEX_MAPPING  ExMapTable[PEI_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[PEI_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[PEI_GUID_TABLE_SIZE];


  SKU_HEAD           SkuHead[PEI_SKU_HEAD_SIZE];


  SIZE_INFO          SizeTable[PEI_SIZE_TABLE_SIZE];






  UINT8              SkuIdTable[PEI_SKUID_TABLE_SIZE];
  SKU_ID             SystemSkuId;
} PEI_PCD_DATABASE_INIT;

typedef struct {

  UINT64   PcdFlashNvStorageFtwWorkingBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdFlashNvStorageFtwSpareBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT64   PcdFlashNvStorageVariableBase64_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];

  UINT32   PcdFlashNvStorageFtwWorkingBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdFlashNvStorageFtwSpareBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];
  UINT32   PcdFlashNvStorageVariableBase_a1aff049_fdeb_442a_b320_13ab4cb72bbc[1];




} PEI_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                Length;
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;     
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset; 
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //SKU_ID                SystemSkuId;      // Current SkuId value.
  //UINT8                 Pad;
  PEI_PCD_DATABASE_INIT    Init;
  PEI_PCD_DATABASE_UNINIT  Uninit;
} PEI_PCD_DATABASE;

#define PEI_NEX_TOKEN_NUMBER (PEI_LOCAL_TOKEN_NUMBER - PEI_EX_TOKEN_NUMBER)
#endif

#define PCD_DXE_SERVICE_DRIVER_VERSION         5

//
// External PCD database debug information
//
#if 0
#define DXE_GUID_TABLE_SIZE                2U
#define DXE_STRING_TABLE_SIZE              824U
#define DXE_SKUID_TABLE_SIZE               1U
#define DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE  12
#define DXE_LOCAL_TOKEN_NUMBER             12
#define DXE_EXMAPPING_TABLE_SIZE           1U
#define DXE_EX_TOKEN_NUMBER                0U
#define DXE_SIZE_TABLE_SIZE                16U
#define DXE_SKU_HEAD_SIZE                  1U
#define DXE_GUID_TABLE_EMPTY               FALSE
#define DXE_STRING_TABLE_EMPTY             FALSE
#define DXE_SKUID_TABLE_EMPTY              TRUE
#define DXE_DATABASE_EMPTY                 FALSE
#define DXE_EXMAP_TABLE_EMPTY              TRUE

typedef struct {



  UINT32             PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;
  UINT32             PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2;


  DYNAMICEX_MAPPING  ExMapTable[DXE_EXMAPPING_TABLE_SIZE];
  UINT32             LocalTokenNumberTable[DXE_LOCAL_TOKEN_NUMBER_TABLE_SIZE];
  GUID               GuidTable[DXE_GUID_TABLE_SIZE];
  STRING_HEAD        PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];
  STRING_HEAD        PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4[1];

  VARIABLE_HEAD      PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1];
  VARIABLE_HEAD      PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1];
  VARIABLE_HEAD      PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];
  VARIABLE_HEAD      PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1];

  SKU_HEAD           SkuHead[DXE_SKU_HEAD_SIZE];

  UINT8              StringTable[12]; /* PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_1[100]; /* PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_2[26]; /* PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_3[106]; /* PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_4[20]; /* PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_5[52]; /* PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_6[52]; /* PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_7[52]; /* PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  UINT8              StringTable_8[32]; /* PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10 */
  UINT8              StringTable_9[16]; /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10 */
  UINT8              StringTable_10[38]; /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  SIZE_INFO          SizeTable[DXE_SIZE_TABLE_SIZE];

  UINT16             PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2;
  UINT16             PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2;





  UINT8              SkuIdTable[DXE_SKUID_TABLE_SIZE];
  SKU_ID             SystemSkuId;
} DXE_PCD_DATABASE_INIT;

typedef struct {
  UINT8  dummy; /* PCD_DATABASE_UNINIT is emptry */





} DXE_PCD_DATABASE_UNINIT;

typedef struct {
  //GUID                  Signature;  // PcdDataBaseGuid
  //UINT32                Length;
  //UINT32                UninitDataBaseSize;// Total size for PCD those default value with 0.
  //TABLE_OFFSET          LocalTokenNumberTableOffset;
  //TABLE_OFFSET          ExMapTableOffset;
  //TABLE_OFFSET          GuidTableOffset;     
  //TABLE_OFFSET          StringTableOffset;
  //TABLE_OFFSET          SizeTableOffset;
  //TABLE_OFFSET          SkuIdTableOffset; 
  //UINT16                LocalTokenCount;  // LOCAL_TOKEN_NUMBER for all
  //UINT16                ExTokenCount;     // EX_TOKEN_NUMBER for DynamicEx
  //UINT16                GuidTableCount;   // The Number of Guid in GuidTable
  //SKU_ID                SystemSkuId;      // Current SkuId value.
  //UINT8                 Pad;
  DXE_PCD_DATABASE_INIT    Init;
  DXE_PCD_DATABASE_UNINIT  Uninit;
} DXE_PCD_DATABASE;

#define DXE_NEX_TOKEN_NUMBER (DXE_LOCAL_TOKEN_NUMBER - DXE_EX_TOKEN_NUMBER)
#endif


EFI_STATUS
EFIAPI
PcdDxeInit (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
