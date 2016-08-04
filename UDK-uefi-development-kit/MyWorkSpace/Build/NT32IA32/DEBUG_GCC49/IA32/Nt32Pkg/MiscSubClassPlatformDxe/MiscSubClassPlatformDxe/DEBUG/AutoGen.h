/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4A9B9DB8_EC62_4A92_818F_8AA0246D246E
#define _AUTOGENH_4A9B9DB8_EC62_4A92_818F_8AA0246D246E

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4A9B9DB8, 0xEC62, 0x4A92, {0x81, 0x8F, 0x8A, 0xA0, 0x24, 0x6D, 0x24, 0x6E}}

// Guids
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiNt32PkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;

// Protocols
extern EFI_GUID gEfiWinNtIoProtocolGuid;
extern EFI_GUID gEfiSmbiosProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdFirmwareReleaseDateString  83U
#define _PCD_VALUE_PcdFirmwareReleaseDateString  _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString[1];
#define _PCD_GET_MODE_PTR_PcdFirmwareReleaseDateString  _gPcd_FixedAtBuild_PcdFirmwareReleaseDateString
#define _PCD_SIZE_PcdFirmwareReleaseDateString 2
#define _PCD_GET_MODE_SIZE_PcdFirmwareReleaseDateString  _PCD_SIZE_PcdFirmwareReleaseDateString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareReleaseDateString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFirmwareVersionString  84U
#define _PCD_VALUE_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
extern const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVersionString[1];
#define _PCD_GET_MODE_PTR_PcdFirmwareVersionString  _gPcd_FixedAtBuild_PcdFirmwareVersionString
#define _PCD_SIZE_PcdFirmwareVersionString 2
#define _PCD_GET_MODE_SIZE_PcdFirmwareVersionString  _PCD_SIZE_PcdFirmwareVersionString 
//#define _PCD_SET_MODE_PTR_PcdFirmwareVersionString  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtMemorySize  7U
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySize  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_GET_MODE_SIZE_PcdWinNtMemorySize  LibPcdGetSize(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_SET_MODE_PTR_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdUefiVariableDefaultPlatformLang  85U
#define _PCD_VALUE_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
extern const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[6];
#define _PCD_GET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang
#define _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 6
#define _PCD_GET_MODE_SIZE_PcdUefiVariableDefaultPlatformLang  _PCD_SIZE_PcdUefiVariableDefaultPlatformLang 
//#define _PCD_SET_MODE_PTR_PcdUefiVariableDefaultPlatformLang  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
MiscSubclassDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



#include "MiscSubclassStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
