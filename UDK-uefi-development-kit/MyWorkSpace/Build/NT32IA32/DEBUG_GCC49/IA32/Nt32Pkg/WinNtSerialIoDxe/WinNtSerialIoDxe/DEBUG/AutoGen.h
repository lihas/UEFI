/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6B41B553_A649_11d4_BD02_0080C73C8881
#define _AUTOGENH_6B41B553_A649_11d4_BD02_0080C73C8881

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x6B41B553, 0xA649, 0x11d4, {0xBD, 0x02, 0x00, 0x80, 0xC7, 0x3C, 0x88, 0x81}}

// Guids
extern EFI_GUID gEfiWinNtSerialPortGuid;
extern EFI_GUID gEfiUartDevicePathGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;

// Protocols
extern EFI_GUID gEfiSerialIoProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiWinNtIoProtocolGuid;
extern EFI_GUID gEfiStatusCodeRuntimeProtocolGuid;
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

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdUartDefaultBaudRate  124U
#define _PCD_SIZE_PcdUartDefaultBaudRate 8
#define _PCD_GET_MODE_SIZE_PcdUartDefaultBaudRate  _PCD_SIZE_PcdUartDefaultBaudRate 
#define _PCD_VALUE_PcdUartDefaultBaudRate  115200ULL
extern const  UINT64  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate;
#define _PCD_GET_MODE_64_PcdUartDefaultBaudRate  _gPcd_FixedAtBuild_PcdUartDefaultBaudRate
//#define _PCD_SET_MODE_64_PcdUartDefaultBaudRate  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultDataBits  125U
#define _PCD_SIZE_PcdUartDefaultDataBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultDataBits  _PCD_SIZE_PcdUartDefaultDataBits 
#define _PCD_VALUE_PcdUartDefaultDataBits  8U
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultDataBits;
#define _PCD_GET_MODE_8_PcdUartDefaultDataBits  _gPcd_FixedAtBuild_PcdUartDefaultDataBits
//#define _PCD_SET_MODE_8_PcdUartDefaultDataBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultParity  126U
#define _PCD_SIZE_PcdUartDefaultParity 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultParity  _PCD_SIZE_PcdUartDefaultParity 
#define _PCD_VALUE_PcdUartDefaultParity  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultParity;
#define _PCD_GET_MODE_8_PcdUartDefaultParity  _gPcd_FixedAtBuild_PcdUartDefaultParity
//#define _PCD_SET_MODE_8_PcdUartDefaultParity  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUartDefaultStopBits  127U
#define _PCD_SIZE_PcdUartDefaultStopBits 1
#define _PCD_GET_MODE_SIZE_PcdUartDefaultStopBits  _PCD_SIZE_PcdUartDefaultStopBits 
#define _PCD_VALUE_PcdUartDefaultStopBits  1U
extern const  UINT8  _gPcd_FixedAtBuild_PcdUartDefaultStopBits;
#define _PCD_GET_MODE_8_PcdUartDefaultStopBits  _gPcd_FixedAtBuild_PcdUartDefaultStopBits
//#define _PCD_SET_MODE_8_PcdUartDefaultStopBits  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtSerialIo (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
