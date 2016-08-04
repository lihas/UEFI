/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B
#define _AUTOGENH_348C4D62_BFBD_4882_9ECE_C80BB1C4783B

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x348C4D62, 0xBFBD, 0x4882, {0x9E, 0xCE, 0xC8, 0x0B, 0xB1, 0xC4, 0x78, 0x3B}}

// Guids
extern EFI_GUID gEfiHiiKeyBoardLayoutGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiFontProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiConfigKeywordHandlerProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
extern EFI_GUID gPcdProtocolGuid;
extern EFI_GUID gEfiPcdProtocolGuid;
extern EFI_GUID gGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiGetPcdInfoProtocolGuid;
extern EFI_GUID gEfiDevicePathUtilitiesProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;
extern EFI_GUID gEfiDevicePathFromTextProtocolGuid;
extern EFI_GUID gEfiDriverBindingProtocolGuid;
extern EFI_GUID gEfiSimpleTextOutProtocolGuid;
extern EFI_GUID gEfiGraphicsOutputProtocolGuid;
extern EFI_GUID gEfiUgaDrawProtocolGuid;
extern EFI_GUID gEfiComponentNameProtocolGuid;
extern EFI_GUID gEfiComponentName2ProtocolGuid;
extern EFI_GUID gEfiDriverConfigurationProtocolGuid;
extern EFI_GUID gEfiDriverConfiguration2ProtocolGuid;
extern EFI_GUID gEfiDriverDiagnosticsProtocolGuid;
extern EFI_GUID gEfiDriverDiagnostics2ProtocolGuid;
extern EFI_GUID gEfiDebugMaskProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdSupportHiiImageProtocol  147U
#define _PCD_SIZE_PcdSupportHiiImageProtocol 1
#define _PCD_GET_MODE_SIZE_PcdSupportHiiImageProtocol  _PCD_SIZE_PcdSupportHiiImageProtocol 
#define _PCD_VALUE_PcdSupportHiiImageProtocol  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol;
#define _PCD_GET_MODE_BOOL_PcdSupportHiiImageProtocol  _gPcd_FixedAtBuild_PcdSupportHiiImageProtocol
//#define _PCD_SET_MODE_BOOL_PcdSupportHiiImageProtocol  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdHiiOsRuntimeSupport  148U
#define _PCD_SIZE_PcdHiiOsRuntimeSupport 1
#define _PCD_GET_MODE_SIZE_PcdHiiOsRuntimeSupport  _PCD_SIZE_PcdHiiOsRuntimeSupport 
#define _PCD_VALUE_PcdHiiOsRuntimeSupport  ((BOOLEAN)1U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdHiiOsRuntimeSupport;
#define _PCD_GET_MODE_BOOL_PcdHiiOsRuntimeSupport  _gPcd_FixedAtBuild_PcdHiiOsRuntimeSupport
//#define _PCD_SET_MODE_BOOL_PcdHiiOsRuntimeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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
InitializeHiiDatabase (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
