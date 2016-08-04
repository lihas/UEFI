/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_681F3771_6F1D_42DE_9AA2_F82BBCDBC5F9
#define _AUTOGENH_681F3771_6F1D_42DE_9AA2_F82BBCDBC5F9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x681F3771, 0x6F1D, 0x42DE, {0x9A, 0xA2, 0xF8, 0x2B, 0xBC, 0xDB, 0xC5, 0xF9}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiNt32PkgTokenSpaceGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

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

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  58U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  1U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64  2U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwWorkingBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwWorkingBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  59U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  3U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64  4U
#define _PCD_GET_MODE_64_PcdFlashNvStorageFtwSpareBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageFtwSpareBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase64, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  60U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  5U
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageVariableBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageVariableBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase64  6U
#define _PCD_GET_MODE_64_PcdFlashNvStorageVariableBase64  LibPcdGet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase64  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase64)
#define _PCD_SET_MODE_64_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))
#define _PCD_SET_MODE_64_S_PcdFlashNvStorageVariableBase64(Value)  LibPcdSet64S(_PCD_TOKEN_PcdFlashNvStorageVariableBase64, (Value))

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwWorkingBase  61U
#define _PCD_SIZE_PcdWinNtFlashNvStorageFtwWorkingBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageFtwWorkingBase  _PCD_SIZE_PcdWinNtFlashNvStorageFtwWorkingBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwWorkingBase  0x0036E000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwWorkingBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwWorkingBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwWorkingBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwWorkingBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageFtwSpareBase  62U
#define _PCD_SIZE_PcdWinNtFlashNvStorageFtwSpareBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageFtwSpareBase  _PCD_SIZE_PcdWinNtFlashNvStorageFtwSpareBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageFtwSpareBase  0x00370000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageFtwSpareBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageFtwSpareBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageVariableBase  63U
#define _PCD_SIZE_PcdWinNtFlashNvStorageVariableBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageVariableBase  _PCD_SIZE_PcdWinNtFlashNvStorageVariableBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageVariableBase  0x00360000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageVariableBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageVariableBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageVariableBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeFlashMap (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
