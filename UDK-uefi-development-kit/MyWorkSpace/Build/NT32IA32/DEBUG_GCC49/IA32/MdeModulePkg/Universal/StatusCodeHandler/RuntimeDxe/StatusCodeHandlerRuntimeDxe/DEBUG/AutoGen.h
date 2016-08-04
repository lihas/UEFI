/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_6C2004EF_4E0E_4BE4_B14C_340EB4AA5891
#define _AUTOGENH_6C2004EF_4E0E_4BE4_B14C_340EB4AA5891

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0x6C2004EF, 0x4E0E, 0x4BE4, {0xB1, 0x4C, 0x34, 0x0E, 0xB4, 0xAA, 0x58, 0x91}}

// Guids
extern EFI_GUID gMemoryStatusCodeRecordGuid;
extern EFI_GUID gEfiStatusCodeDataTypeStringGuid;
extern EFI_GUID gEfiEventVirtualAddressChangeGuid;
extern EFI_GUID gEfiEventExitBootServicesGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;

// Protocols
extern EFI_GUID gEfiRscHandlerProtocolGuid;
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
extern EFI_GUID gEfiLoadedImageProtocolGuid;

// Definition of PCDs used in this module

#define _PCD_TOKEN_PcdStatusCodeReplayIn  87U
#define _PCD_SIZE_PcdStatusCodeReplayIn 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeReplayIn  _PCD_SIZE_PcdStatusCodeReplayIn 
#define _PCD_VALUE_PcdStatusCodeReplayIn  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeReplayIn;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeReplayIn  _gPcd_FixedAtBuild_PcdStatusCodeReplayIn
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeReplayIn  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeUseMemory  55U
#define _PCD_SIZE_PcdStatusCodeUseMemory 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseMemory  _PCD_SIZE_PcdStatusCodeUseMemory 
#define _PCD_VALUE_PcdStatusCodeUseMemory  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseMemory  _gPcd_FixedAtBuild_PcdStatusCodeUseMemory
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseMemory  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeUseSerial  56U
#define _PCD_SIZE_PcdStatusCodeUseSerial 1
#define _PCD_GET_MODE_SIZE_PcdStatusCodeUseSerial  _PCD_SIZE_PcdStatusCodeUseSerial 
#define _PCD_VALUE_PcdStatusCodeUseSerial  ((BOOLEAN)0U)
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial;
#define _PCD_GET_MODE_BOOL_PcdStatusCodeUseSerial  _gPcd_FixedAtBuild_PcdStatusCodeUseSerial
//#define _PCD_SET_MODE_BOOL_PcdStatusCodeUseSerial  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdStatusCodeMemorySize  57U
#define _PCD_SIZE_PcdStatusCodeMemorySize 2
#define _PCD_GET_MODE_SIZE_PcdStatusCodeMemorySize  _PCD_SIZE_PcdStatusCodeMemorySize 
#define _PCD_VALUE_PcdStatusCodeMemorySize  128U
extern const  UINT16  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize;
#define _PCD_GET_MODE_16_PcdStatusCodeMemorySize  _gPcd_FixedAtBuild_PcdStatusCodeMemorySize
//#define _PCD_SET_MODE_16_PcdStatusCodeMemorySize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
StatusCodeHandlerRuntimeDxeEntry (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
