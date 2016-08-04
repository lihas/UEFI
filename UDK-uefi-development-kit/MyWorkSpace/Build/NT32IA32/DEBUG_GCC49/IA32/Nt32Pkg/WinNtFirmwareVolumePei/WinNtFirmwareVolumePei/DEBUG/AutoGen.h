/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_F0384FFD_8633_452f_9010_F6B7D2EAE2F1
#define _AUTOGENH_F0384FFD_8633_452f_9010_F6B7D2EAE2F1

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xF0384FFD, 0x8633, 0x452f, {0x90, 0x10, 0xF6, 0xB7, 0xD2, 0xEA, 0xE2, 0xF1}}

// Guids
extern EFI_GUID gEfiNt32PkgTokenSpaceGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;

// PPIs
extern EFI_GUID gNtFwhPpiGuid;
extern EFI_GUID gPeiNtThunkPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdWinNtFlashFvRecoveryBase  64U
#define _PCD_SIZE_PcdWinNtFlashFvRecoveryBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashFvRecoveryBase  _PCD_SIZE_PcdWinNtFlashFvRecoveryBase 
#define _PCD_VALUE_PcdWinNtFlashFvRecoveryBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoveryBase  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoveryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashFvRecoverySize  65U
#define _PCD_SIZE_PcdWinNtFlashFvRecoverySize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashFvRecoverySize  _PCD_SIZE_PcdWinNtFlashFvRecoverySize 
#define _PCD_VALUE_PcdWinNtFlashFvRecoverySize  0x00360000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoverySize  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoverySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogBase  66U
#define _PCD_SIZE_PcdWinNtFlashNvStorageEventLogBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageEventLogBase  _PCD_SIZE_PcdWinNtFlashNvStorageEventLogBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogBase  0x0036C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogSize  67U
#define _PCD_SIZE_PcdWinNtFlashNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageEventLogSize  _PCD_SIZE_PcdWinNtFlashNvStorageEventLogSize 
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageVariableBase  63U
#define _PCD_SIZE_PcdWinNtFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageVariableBase  _PCD_SIZE_PcdWinNtFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageVariableBase  0x00360000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwSpareBase  62U
#define _PCD_SIZE_PcdWinNtFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdWinNtFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwSpareBase  0x00370000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  58U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  59U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  60U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeWinNtFwh (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
