/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_4b837b03_6587_4d19_b82b_edfad836c0a0
#define _AUTOGENH_4b837b03_6587_4d19_b82b_edfad836c0a0

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x4b837b03, 0x6587, 0x4d19, {0xb8, 0x2b, 0xed, 0xfa, 0xd8, 0x36, 0xc0, 0xa0}}

// Guids
extern GUID gEfiNt32PkgTokenSpaceGuid;
extern GUID gEfiFirmwareFileSystem2Guid;
extern GUID gEfiStatusCodeSpecificDataGuid;
extern GUID gEfiStatusCodeDataTypeDebugGuid;
extern GUID gEfiMdePkgTokenSpaceGuid;
extern GUID gEfiEventReadyToBootGuid;
extern GUID gEfiEventLegacyBootGuid;
extern GUID gEfiGlobalVariableGuid;
extern GUID gEfiHobListGuid;

// Protocols
extern GUID gEfiDevicePathProtocolGuid;
extern GUID gEfiDevicePathUtilitiesProtocolGuid;
extern GUID gEfiDevicePathToTextProtocolGuid;
extern GUID gEfiDevicePathFromTextProtocolGuid;
extern GUID gEfiDriverBindingProtocolGuid;
extern GUID gEfiSimpleTextOutProtocolGuid;
extern GUID gEfiGraphicsOutputProtocolGuid;
extern GUID gEfiHiiFontProtocolGuid;
extern GUID gEfiUgaDrawProtocolGuid;
extern GUID gEfiComponentNameProtocolGuid;
extern GUID gEfiComponentName2ProtocolGuid;
extern GUID gEfiDriverConfigurationProtocolGuid;
extern GUID gEfiDriverConfiguration2ProtocolGuid;
extern GUID gEfiDriverDiagnosticsProtocolGuid;
extern GUID gEfiDriverDiagnostics2ProtocolGuid;

// PPIs
extern GUID gNtPeiLoadFilePpiGuid;
extern GUID gEfiPeiStatusCodePpiGuid;
extern GUID gNtFwhPpiGuid;
extern GUID gPeiNtAutoScanPpiGuid;
extern GUID gPeiNtThunkPpiGuid;
extern GUID gEfiTemporaryRamSupportPpiGuid;
extern GUID gEfiPeiFirmwareVolumeInfoPpiGuid;
extern GUID gEfiPeiFirmwareVolumeInfo2PpiGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdWinNtBootMode  19U
#define _PCD_SIZE_PcdWinNtBootMode 4
#define _PCD_GET_MODE_SIZE_PcdWinNtBootMode  _PCD_SIZE_PcdWinNtBootMode 
#define _PCD_VALUE_PcdWinNtBootMode  1U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtBootMode;
#define _PCD_GET_MODE_32_PcdWinNtBootMode  _gPcd_FixedAtBuild_PcdWinNtBootMode
//#define _PCD_SET_MODE_32_PcdWinNtBootMode  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFirmwareFdSize  20U
#define _PCD_SIZE_PcdWinNtFirmwareFdSize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFirmwareFdSize  _PCD_SIZE_PcdWinNtFirmwareFdSize 
#define _PCD_VALUE_PcdWinNtFirmwareFdSize  0x00380000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdWinNtFirmwareFdSize  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdWinNtFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtMemorySizeForSecMain  21U
#define _PCD_VALUE_PcdWinNtMemorySizeForSecMain  _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain
extern const UINT16 _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain[6];
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySizeForSecMain  _gPcd_FixedAtBuild_PcdWinNtMemorySizeForSecMain
#define _PCD_SIZE_PcdWinNtMemorySizeForSecMain 12
#define _PCD_GET_MODE_SIZE_PcdWinNtMemorySizeForSecMain  _PCD_SIZE_PcdWinNtMemorySizeForSecMain 
//#define _PCD_SET_MODE_PTR_PcdWinNtMemorySizeForSecMain  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFirmwareVolume  22U
#define _PCD_VALUE_PcdWinNtFirmwareVolume  _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume
extern const UINT16 _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume[16];
#define _PCD_GET_MODE_PTR_PcdWinNtFirmwareVolume  _gPcd_FixedAtBuild_PcdWinNtFirmwareVolume
#define _PCD_SIZE_PcdWinNtFirmwareVolume 32
#define _PCD_GET_MODE_SIZE_PcdWinNtFirmwareVolume  _PCD_SIZE_PcdWinNtFirmwareVolume 
//#define _PCD_SET_MODE_PTR_PcdWinNtFirmwareVolume  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


#ifdef __cplusplus
}
#endif

#endif
