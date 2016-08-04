/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_D3AAD8DC_3A48_46ac_B1C7_28A9D3CF6755
#define _AUTOGENH_D3AAD8DC_3A48_46ac_B1C7_28A9D3CF6755

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiPei.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xD3AAD8DC, 0x3A48, 0x46ac, {0xB1, 0xC7, 0x28, 0xA9, 0xD3, 0xCF, 0x67, 0x55}}

// Guids
extern EFI_GUID gEfiFirmwareFileSystem2Guid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiHobMemoryAllocStackGuid;
extern EFI_GUID gEfiHobMemoryAllocBspStoreGuid;
extern EFI_GUID gEfiHobMemoryAllocModuleGuid;

// Protocols
extern EFI_GUID gEfiWinNtThunkProtocolGuid;

// PPIs
extern EFI_GUID gPeiNtThunkPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern EFI_GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;
extern EFI_GUID gPcdPpiGuid;
extern EFI_GUID gEfiPeiPcdPpiGuid;
extern EFI_GUID gGetPcdInfoPpiGuid;
extern EFI_GUID gEfiGetPcdInfoPpiGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
PeimInitializeWinNtThunkPPIToProtocolPeim (
  IN       EFI_PEI_FILE_HANDLE  FileHandle,
  IN CONST EFI_PEI_SERVICES     **PeiServices
  );





#ifdef __cplusplus
}
#endif

#endif
