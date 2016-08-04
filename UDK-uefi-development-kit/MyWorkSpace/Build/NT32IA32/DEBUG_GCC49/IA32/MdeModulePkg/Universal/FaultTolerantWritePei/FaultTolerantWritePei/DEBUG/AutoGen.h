/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_AAC33064_9ED0_4b89_A5AD_3EA767960B22
#define _AUTOGENH_AAC33064_9ED0_4b89_A5AD_3EA767960B22

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xAAC33064, 0x9ED0, 0x4b89, {0xA5, 0xAD, 0x3E, 0xA7, 0x67, 0x96, 0x0B, 0x22}}

// Guids
extern EFI_GUID gEdkiiFaultTolerantWriteGuid;
extern EFI_GUID gEdkiiWorkingBlockSignatureGuid;
extern EFI_GUID gEfiSystemNvDataFvGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;
extern EFI_GUID gEfiFirmwareFileSystem2Guid;

// PPIs
extern EFI_GUID gPeiNtThunkPpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of PCDs used in this module

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

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingSize  58U
#define _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingSize  _PCD_SIZE_PcdFlashNvStorageFtwWorkingSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwWorkingSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwWorkingSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareSize  59U
#define _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareSize  _PCD_SIZE_PcdFlashNvStorageFtwSpareSize 
#define _PCD_VALUE_PcdFlashNvStorageFtwSpareSize  0x00010000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareSize  _gPcd_FixedAtBuild_PcdFlashNvStorageFtwSpareSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimFaultTolerantWriteInitialize (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
