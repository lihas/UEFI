/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BDFE5FAA_2A35_44bb_B17A_8084D4E2B9E9
#define _AUTOGENH_BDFE5FAA_2A35_44bb_B17A_8084D4E2B9E9

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBDFE5FAA, 0x2A35, 0x44bb, {0xB1, 0x7A, 0x80, 0x84, 0xD4, 0xE2, 0xB9, 0xE9}}

// Guids
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiNt32PkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;

// Protocols
extern EFI_GUID gEfiFirmwareVolumeBlockProtocolGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
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

#define _PCD_TOKEN_PcdFlashNvStorageVariableSize  60U
#define _PCD_SIZE_PcdFlashNvStorageVariableSize 4
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableSize  _PCD_SIZE_PcdFlashNvStorageVariableSize 
#define _PCD_VALUE_PcdFlashNvStorageVariableSize  0x0000C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize;
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableSize  _gPcd_FixedAtBuild_PcdFlashNvStorageVariableSize
//#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdWinNtFlashFvRecoverySize  65U
#define _PCD_SIZE_PcdWinNtFlashFvRecoverySize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashFvRecoverySize  _PCD_SIZE_PcdWinNtFlashFvRecoverySize 
#define _PCD_VALUE_PcdWinNtFlashFvRecoverySize  0x00360000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoverySize  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoverySize
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoverySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFirmwareBlockSize  78U
#define _PCD_SIZE_PcdWinNtFirmwareBlockSize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFirmwareBlockSize  _PCD_SIZE_PcdWinNtFirmwareBlockSize 
#define _PCD_VALUE_PcdWinNtFirmwareBlockSize  0x10000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFirmwareBlockSize;
#define _PCD_GET_MODE_32_PcdWinNtFirmwareBlockSize  _gPcd_FixedAtBuild_PcdWinNtFirmwareBlockSize
//#define _PCD_SET_MODE_32_PcdWinNtFirmwareBlockSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogSize  67U
#define _PCD_SIZE_PcdWinNtFlashNvStorageEventLogSize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageEventLogSize  _PCD_SIZE_PcdWinNtFlashNvStorageEventLogSize 
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogSize  0x00002000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogSize
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase  1U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwWorkingBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwWorkingBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwWorkingBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwWorkingBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageFtwSpareBase  3U
#define _PCD_GET_MODE_32_PcdFlashNvStorageFtwSpareBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageFtwSpareBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageFtwSpareBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageFtwSpareBase, (Value))

#define _PCD_TOKEN_PcdFlashNvStorageVariableBase  5U
#define _PCD_GET_MODE_32_PcdFlashNvStorageVariableBase  LibPcdGet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase)
#define _PCD_GET_MODE_SIZE_PcdFlashNvStorageVariableBase  LibPcdGetSize(_PCD_TOKEN_PcdFlashNvStorageVariableBase)
#define _PCD_SET_MODE_32_PcdFlashNvStorageVariableBase(Value)  LibPcdSet32(_PCD_TOKEN_PcdFlashNvStorageVariableBase, (Value))
#define _PCD_SET_MODE_32_S_PcdFlashNvStorageVariableBase(Value)  LibPcdSet32S(_PCD_TOKEN_PcdFlashNvStorageVariableBase, (Value))

#define _PCD_TOKEN_PcdWinNtFirmwareFdSize  20U
#define _PCD_SIZE_PcdWinNtFirmwareFdSize 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFirmwareFdSize  _PCD_SIZE_PcdWinNtFirmwareFdSize 
#define _PCD_VALUE_PcdWinNtFirmwareFdSize  0x00380000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize;
#define _PCD_GET_MODE_32_PcdWinNtFirmwareFdSize  _gPcd_FixedAtBuild_PcdWinNtFirmwareFdSize
//#define _PCD_SET_MODE_32_PcdWinNtFirmwareFdSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashFvRecoveryBase  64U
#define _PCD_SIZE_PcdWinNtFlashFvRecoveryBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashFvRecoveryBase  _PCD_SIZE_PcdWinNtFlashFvRecoveryBase 
#define _PCD_VALUE_PcdWinNtFlashFvRecoveryBase  0x00000000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashFvRecoveryBase  _gPcd_FixedAtBuild_PcdWinNtFlashFvRecoveryBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashFvRecoveryBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdWinNtFlashNvStorageEventLogBase  66U
#define _PCD_SIZE_PcdWinNtFlashNvStorageEventLogBase 4
#define _PCD_GET_MODE_SIZE_PcdWinNtFlashNvStorageEventLogBase  _PCD_SIZE_PcdWinNtFlashNvStorageEventLogBase 
#define _PCD_VALUE_PcdWinNtFlashNvStorageEventLogBase  0x0036C000U
extern const  UINT32  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase;
#define _PCD_GET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  _gPcd_FixedAtBuild_PcdWinNtFlashNvStorageEventLogBase
//#define _PCD_SET_MODE_32_PcdWinNtFlashNvStorageEventLogBase  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
FvbInitialize (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
