/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.c
  Abstract:       Auto-generated AutoGen.c for building module or library.
**/
#include <PiDxe.h>
#include <Library/BaseLib.h>
#include <Library/DebugLib.h>
#include <Library/UefiBootServicesTableLib.h>
#include <Library/UefiDriverEntryPoint.h>

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x80CF7257, 0x87AB, 0x47f9, {0xA3, 0xFE, 0xD5, 0x0B, 0x76, 0xD8, 0x95, 0x41}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "PcdDxe";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseHobGuid = { 0xEA296D92, 0x0B69, 0x423C, { 0x8C, 0x28, 0x33, 0xB4, 0xE0, 0xA9, 0x12, 0x68 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdDataBaseSignatureGuid = { 0x3c7d193c, 0x682c, 0x4c14, { 0xa6, 0x8f, 0x55, 0x2d, 0xea, 0x4f, 0x43, 0x7e }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGenericVariableGuid = { 0x59d1c24f, 0x50f1, 0x401a, {0xb1, 0x01, 0xf3, 0x3e, 0x0d, 0xae, 0xd4, 0x43} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdProtocolGuid = { 0x11B34006, 0xD85B, 0x4D0A, { 0xA2, 0x90, 0xD5, 0xA5, 0x71, 0x31, 0x0E, 0xF7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478,  0xefd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeRuntimeProtocolGuid = { 0xD2B2B828, 0x0826, 0x48A7, { 0xB3, 0xDF, 0x98, 0x3C, 0x00, 0x60, 0x24, 0xF0 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathProtocolGuid = { 0x09576E91, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathUtilitiesProtocolGuid = { 0x0379BE4E, 0xD706, 0x437D, { 0xB0, 0x37, 0xED, 0xB8, 0x2F, 0xB7, 0x72, 0xA4 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathToTextProtocolGuid = { 0x8B843E20, 0x8132, 0x4852, { 0x90, 0xCC, 0x55, 0x1A, 0x4E, 0x4A, 0x7F, 0x1C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDevicePathFromTextProtocolGuid = { 0x05C99A21, 0xC70F, 0x4AD2, { 0x8A, 0x5F, 0x35, 0xDF, 0x33, 0x43, 0xF5, 0x1E }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverBindingProtocolGuid = { 0x18A031AB, 0xB443, 0x4D1A, { 0xA5, 0xC0, 0x0C, 0x09, 0x26, 0x1E, 0x9F, 0x71 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextOutProtocolGuid = { 0x387477C2, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGraphicsOutputProtocolGuid = { 0x9042A9DE, 0x23DC, 0x4A38, { 0x96, 0xFB, 0x7A, 0xDE, 0xD0, 0x80, 0x51, 0x6A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiFontProtocolGuid = {0xe9ca4775, 0x8657, 0x47fc, {0x97, 0xe7, 0x7e, 0xd6, 0x5a, 0x08, 0x43, 0x24}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUgaDrawProtocolGuid = { 0x982C298B, 0xF4FA, 0x41CB, { 0xB8, 0x38, 0x77, 0xAA, 0x68, 0x8F, 0xB8, 0x39 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentNameProtocolGuid = { 0x107A772C, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiComponentName2ProtocolGuid = { 0x6A7A5CFF, 0xE8D9, 0x4F70, { 0xBA, 0xDA, 0x75, 0xAB, 0x30, 0x25, 0xCE, 0x14 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfigurationProtocolGuid = { 0x107A772B, 0xD5E1, 0x11D4, { 0x9A, 0x46, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverConfiguration2ProtocolGuid = { 0xBFD7DC1D, 0x24F1, 0x40D9, { 0x82, 0xE7, 0x2E, 0x09, 0xBB, 0x6B, 0x4E, 0xBE }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnosticsProtocolGuid = { 0x0784924F, 0xE296, 0x11D4, { 0x9A, 0x49, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverDiagnostics2ProtocolGuid = { 0x4D330321, 0x025F, 0x4AAC, { 0x90, 0xD8, 0x5E, 0xD9, 0x00, 0x17, 0x3B, 0x63 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDebugMaskProtocolGuid = { 0x4c8a2451, 0xc207, 0x405b, {0x96, 0x94, 0x99, 0xea, 0x13, 0x25, 0x13, 0x41} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdVpdBaseAddress = _PCD_VALUE_PcdVpdBaseAddress;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdReportStatusCodePropertyMask  23U
#define _PCD_SIZE_PcdReportStatusCodePropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdReportStatusCodePropertyMask  _PCD_SIZE_PcdReportStatusCodePropertyMask 
#define _PCD_VALUE_PcdReportStatusCodePropertyMask  0x0fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask = _PCD_VALUE_PcdReportStatusCodePropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask;
#define _PCD_GET_MODE_8_PcdReportStatusCodePropertyMask  _gPcd_FixedAtBuild_PcdReportStatusCodePropertyMask
//#define _PCD_SET_MODE_8_PcdReportStatusCodePropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdVerifyNodeInList  24U
#define _PCD_SIZE_PcdVerifyNodeInList 1
#define _PCD_GET_MODE_SIZE_PcdVerifyNodeInList  _PCD_SIZE_PcdVerifyNodeInList 
#define _PCD_VALUE_PcdVerifyNodeInList  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdVerifyNodeInList = _PCD_VALUE_PcdVerifyNodeInList;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdVerifyNodeInList;
#define _PCD_GET_MODE_BOOL_PcdVerifyNodeInList  _gPcd_FixedAtBuild_PcdVerifyNodeInList
//#define _PCD_SET_MODE_BOOL_PcdVerifyNodeInList  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumLinkedListLength  25U
#define _PCD_SIZE_PcdMaximumLinkedListLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumLinkedListLength  _PCD_SIZE_PcdMaximumLinkedListLength 
#define _PCD_VALUE_PcdMaximumLinkedListLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumLinkedListLength = _PCD_VALUE_PcdMaximumLinkedListLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength;
#define _PCD_GET_MODE_32_PcdMaximumLinkedListLength  _gPcd_FixedAtBuild_PcdMaximumLinkedListLength
//#define _PCD_SET_MODE_32_PcdMaximumLinkedListLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumAsciiStringLength  26U
#define _PCD_SIZE_PcdMaximumAsciiStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumAsciiStringLength  _PCD_SIZE_PcdMaximumAsciiStringLength 
#define _PCD_VALUE_PcdMaximumAsciiStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength = _PCD_VALUE_PcdMaximumAsciiStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength;
#define _PCD_GET_MODE_32_PcdMaximumAsciiStringLength  _gPcd_FixedAtBuild_PcdMaximumAsciiStringLength
//#define _PCD_SET_MODE_32_PcdMaximumAsciiStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumUnicodeStringLength  27U
#define _PCD_SIZE_PcdMaximumUnicodeStringLength 4
#define _PCD_GET_MODE_SIZE_PcdMaximumUnicodeStringLength  _PCD_SIZE_PcdMaximumUnicodeStringLength 
#define _PCD_VALUE_PcdMaximumUnicodeStringLength  1000000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength = _PCD_VALUE_PcdMaximumUnicodeStringLength;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength;
#define _PCD_GET_MODE_32_PcdMaximumUnicodeStringLength  _gPcd_FixedAtBuild_PcdMaximumUnicodeStringLength
//#define _PCD_SET_MODE_32_PcdMaximumUnicodeStringLength  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  28U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x1fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugClearMemoryValue  49U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  50U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaximumDevicePathNodeCount  29U
#define _PCD_SIZE_PcdMaximumDevicePathNodeCount 4
#define _PCD_GET_MODE_SIZE_PcdMaximumDevicePathNodeCount  _PCD_SIZE_PcdMaximumDevicePathNodeCount 
#define _PCD_VALUE_PcdMaximumDevicePathNodeCount  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount = _PCD_VALUE_PcdMaximumDevicePathNodeCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount;
#define _PCD_GET_MODE_32_PcdMaximumDevicePathNodeCount  _gPcd_FixedAtBuild_PcdMaximumDevicePathNodeCount
//#define _PCD_SET_MODE_32_PcdMaximumDevicePathNodeCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnosticsDisable  30U
#define _PCD_SIZE_PcdDriverDiagnosticsDisable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnosticsDisable  _PCD_SIZE_PcdDriverDiagnosticsDisable 
#define _PCD_VALUE_PcdDriverDiagnosticsDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable = _PCD_VALUE_PcdDriverDiagnosticsDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnosticsDisable  _gPcd_FixedAtBuild_PcdDriverDiagnosticsDisable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnosticsDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentNameDisable  31U
#define _PCD_SIZE_PcdComponentNameDisable 1
#define _PCD_GET_MODE_SIZE_PcdComponentNameDisable  _PCD_SIZE_PcdComponentNameDisable 
#define _PCD_VALUE_PcdComponentNameDisable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentNameDisable = _PCD_VALUE_PcdComponentNameDisable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentNameDisable;
#define _PCD_GET_MODE_BOOL_PcdComponentNameDisable  _gPcd_FixedAtBuild_PcdComponentNameDisable
//#define _PCD_SET_MODE_BOOL_PcdComponentNameDisable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverDiagnostics2Disable  32U
#define _PCD_SIZE_PcdDriverDiagnostics2Disable 1
#define _PCD_GET_MODE_SIZE_PcdDriverDiagnostics2Disable  _PCD_SIZE_PcdDriverDiagnostics2Disable 
#define _PCD_VALUE_PcdDriverDiagnostics2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable = _PCD_VALUE_PcdDriverDiagnostics2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable;
#define _PCD_GET_MODE_BOOL_PcdDriverDiagnostics2Disable  _gPcd_FixedAtBuild_PcdDriverDiagnostics2Disable
//#define _PCD_SET_MODE_BOOL_PcdDriverDiagnostics2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdComponentName2Disable  33U
#define _PCD_SIZE_PcdComponentName2Disable 1
#define _PCD_GET_MODE_SIZE_PcdComponentName2Disable  _PCD_SIZE_PcdComponentName2Disable 
#define _PCD_VALUE_PcdComponentName2Disable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdComponentName2Disable = _PCD_VALUE_PcdComponentName2Disable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdComponentName2Disable;
#define _PCD_GET_MODE_BOOL_PcdComponentName2Disable  _gPcd_FixedAtBuild_PcdComponentName2Disable
//#define _PCD_SET_MODE_BOOL_PcdComponentName2Disable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUgaConsumeSupport  34U
#define _PCD_SIZE_PcdUgaConsumeSupport 1
#define _PCD_GET_MODE_SIZE_PcdUgaConsumeSupport  _PCD_SIZE_PcdUgaConsumeSupport 
#define _PCD_VALUE_PcdUgaConsumeSupport  ((BOOLEAN)1U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUgaConsumeSupport = _PCD_VALUE_PcdUgaConsumeSupport;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdUgaConsumeSupport;
#define _PCD_GET_MODE_BOOL_PcdUgaConsumeSupport  _gPcd_FixedAtBuild_PcdUgaConsumeSupport
//#define _PCD_SET_MODE_BOOL_PcdUgaConsumeSupport  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdUefiLibMaxPrintBufferSize  35U
#define _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 4
#define _PCD_GET_MODE_SIZE_PcdUefiLibMaxPrintBufferSize  _PCD_SIZE_PcdUefiLibMaxPrintBufferSize 
#define _PCD_VALUE_PcdUefiLibMaxPrintBufferSize  320U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize = _PCD_VALUE_PcdUefiLibMaxPrintBufferSize;
extern const  UINT32  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize;
#define _PCD_GET_MODE_32_PcdUefiLibMaxPrintBufferSize  _gPcd_FixedAtBuild_PcdUefiLibMaxPrintBufferSize
//#define _PCD_SET_MODE_32_PcdUefiLibMaxPrintBufferSize  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPrintErrorLevel  48U
#define _PCD_SIZE_PcdDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdDebugPrintErrorLevel  _PCD_SIZE_PcdDebugPrintErrorLevel 
#define _PCD_VALUE_PcdDebugPrintErrorLevel  0x80000040U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel = _PCD_VALUE_PcdDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

//
// External PCD database debug information
//
#if 0
DXE_PCD_DATABASE_INIT gDXEPcdDbInit = {



  80U, /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */
  25U, /* PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2 */

  /* VPD */

  /* ExMapTable */
  {
    { 0U, 0U, 0U },

  },
  /* LocalTokenNumberTable */
  {
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING,
    offsetof(DXE_PCD_DATABASE, Init.PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT16,
    offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT16,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_DATUM_TYPE_UINT32 | PCD_TYPE_HII,
    offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_DATUM_TYPE_UINT32 | PCD_TYPE_HII,

  },
  /* GuidTable */
  {
    { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }},
    { 0x0D79A645, 0x1D91, 0x40a6, { 0xA8, 0x1F, 0x61, 0xE6, 0x98, 0x2B, 0x32, 0xB4 }},

  },
  { 0U }, /* PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 12U }, /* PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 112U }, /* PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 138U }, /* PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 244U }, /* PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 264U }, /* PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 316U }, /* PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */
  { 368U }, /* PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4[1] */

  /* PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1] */
  {
    { 420U, offsetof(DXE_PCD_DATABASE, Init.PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2), 0U, 0x0U },
    { 0U, 420U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2) }

  },
  /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header[1] */
  {
    { 452U, offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2), 0U, 0x0U },
    { 0U, 452U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2) }

  },
  /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 468U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 1U, 0x0U },
    { 1U, 468U, 0x0U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },
  /* PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header[1] */
  {
    { 468U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2), 1U, 0x4U },
    { 1U, 468U, 0x4U, offsetof(DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_VariableDefault_2) }

  },

/* SkuHead */
  {
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4) | PCD_TYPE_STRING, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT16, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_Variable_Header) | PCD_TYPE_HII | PCD_DATUM_TYPE_UINT16, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_DATUM_TYPE_UINT32 | PCD_TYPE_HII, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
   offsetof (DXE_PCD_DATABASE, Init.PcdSetupConOutRow_a1aff049_fdeb_442a_b320_13ab4cb72bbc_Variable_Header) | PCD_DATUM_TYPE_UINT32 | PCD_TYPE_HII, /* */
           offsetof (DXE_PCD_DATABASE, Init.SkuHead)  /* */
  
  },
 /* StringTable */
  {0x36, 0x00, 0x34, 0x00, 0x21, 0x00, 0x36, 0x00, 0x34, 0x00, 0x00, 0x00}, /* PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x61, 0x00, 0x3a, 0x00, 0x52, 0x00, 0x57, 0x00, 0x3b, 0x00, 0x32, 0x00, 0x38, 0x00, 0x38, 0x00, 0x30, 0x00, 0x3b, 0x00, 0x35, 0x00, 0x31, 0x00, 0x32, 0x00, 0x21, 0x00, 0x64, 0x00, 0x3a, 0x00, 0x52, 0x00, 0x4f, 0x00, 0x3b, 0x00, 0x33, 0x00, 0x30, 0x00, 0x37, 0x00, 0x32, 0x00, 0x30, 0x00, 0x30, 0x00, 0x3b, 0x00, 0x32, 0x00, 0x30, 0x00, 0x34, 0x00, 0x38, 0x00, 0x21, 0x00, 0x6a, 0x00, 0x3a, 0x00, 0x52, 0x00, 0x57, 0x00, 0x3b, 0x00, 0x32, 0x00, 0x36, 0x00, 0x32, 0x00, 0x31, 0x00, 0x34, 0x00, 0x34, 0x00, 0x3b, 0x00, 0x35, 0x00, 0x31, 0x00, 0x32, 0x00, 0x00, 0x00}, /* PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x46, 0x00, 0x57, 0x00, 0x3b, 0x00, 0x34, 0x00, 0x30, 0x00, 0x39, 0x00, 0x36, 0x00, 0x30, 0x00, 0x3b, 0x00, 0x35, 0x00, 0x31, 0x00, 0x32, 0x00, 0x00, 0x00}, /* PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x2e, 0x00, 0x21, 0x00, 0x2e, 0x00, 0x2e, 0x00, 0x5c, 0x00, 0x2e, 0x00, 0x2e, 0x00, 0x5c, 0x00, 0x2e, 0x00, 0x2e, 0x00, 0x5c, 0x00, 0x2e, 0x00, 0x2e, 0x00, 0x5c, 0x00, 0x45, 0x00, 0x64, 0x00, 0x6b, 0x00, 0x53, 0x00, 0x68, 0x00, 0x65, 0x00, 0x6c, 0x00, 0x6c, 0x00, 0x42, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x50, 0x00, 0x6b, 0x00, 0x67, 0x00, 0x5c, 0x00, 0x42, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x5c, 0x00, 0x49, 0x00, 0x61, 0x00, 0x33, 0x00, 0x32, 0x00, 0x5c, 0x00, 0x41, 0x00, 0x70, 0x00, 0x70, 0x00, 0x73, 0x00, 0x00, 0x00}, /* PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x43, 0x00, 0x4f, 0x00, 0x4d, 0x00, 0x31, 0x00, 0x21, 0x00, 0x43, 0x00, 0x4f, 0x00, 0x4d, 0x00, 0x32, 0x00, 0x00, 0x00}, /* PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x55, 0x00, 0x47, 0x00, 0x41, 0x00, 0x20, 0x00, 0x57, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x20, 0x00, 0x31, 0x00, 0x21, 0x00, 0x55, 0x00, 0x47, 0x00, 0x41, 0x00, 0x20, 0x00, 0x57, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x20, 0x00, 0x32, 0x00, 0x00, 0x00}, /* PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x55, 0x00, 0x47, 0x00, 0x41, 0x00, 0x20, 0x00, 0x57, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x20, 0x00, 0x31, 0x00, 0x21, 0x00, 0x55, 0x00, 0x47, 0x00, 0x41, 0x00, 0x20, 0x00, 0x57, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x20, 0x00, 0x32, 0x00, 0x00, 0x00}, /* PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x42, 0x00, 0x75, 0x00, 0x73, 0x00, 0x20, 0x00, 0x44, 0x00, 0x72, 0x00, 0x69, 0x00, 0x76, 0x00, 0x65, 0x00, 0x72, 0x00, 0x20, 0x00, 0x43, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x73, 0x00, 0x6f, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x20, 0x00, 0x57, 0x00, 0x69, 0x00, 0x6e, 0x00, 0x64, 0x00, 0x6f, 0x00, 0x77, 0x00, 0x00, 0x00}, /* PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
  {0x48, 0x00, 0x77, 0x00, 0x45, 0x00, 0x72, 0x00, 0x72, 0x00, 0x52, 0x00, 0x65, 0x00, 0x63, 0x00, 0x53, 0x00, 0x75, 0x00, 0x70, 0x00, 0x70, 0x00, 0x6f, 0x00, 0x72, 0x00, 0x74, 0x00, 0x00, 0x00}, /* PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10 */
  {0x54, 0x00, 0x69, 0x00, 0x6d, 0x00, 0x65, 0x00, 0x6f, 0x00, 0x75, 0x00, 0x74, 0x00, 0x00, 0x00}, /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10 */
  {0x53, 0x00, 0x65, 0x00, 0x74, 0x00, 0x75, 0x00, 0x70, 0x00, 0x43, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x73, 0x00, 0x6f, 0x00, 0x6c, 0x00, 0x65, 0x00, 0x43, 0x00, 0x6f, 0x00, 0x6e, 0x00, 0x66, 0x00, 0x69, 0x00, 0x67, 0x00, 0x00, 0x00}, /* PcdSetupConOutColumn_a1aff049_fdeb_442a_b320_13ab4cb72bbc */

  /* SizeTable */
  {
    12U, ['12U'], /* PcdWinNtMemorySize_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    100U, ['94U'], /* PcdWinNtPhysicalDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    26U, ['26U'], /* PcdWinNtVirtualDisk_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    106U, ['86U'], /* PcdWinNtFileSystem_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    20U, ['20U'], /* PcdWinNtSerialPort_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    52U, ['52U'], /* PcdWinNtGop_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    52U, ['52U'], /* PcdWinNtUga_0d79a645_1d91_40a6_a81f_61e6982b32b4 */
    52U, ['52U'], /* PcdWinNtConsole_0d79a645_1d91_40a6_a81f_61e6982b32b4 */

  },

  1U, /* PcdHardwareErrorRecordLevel_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2 */
  10U, /* PcdPlatformBootTimeOut_914aebe7_4635_459b_aa1c_11e219b03a10_VariableDefault_2 */





  /* SkuIdTable */
  { 1, 0U,  },
  0
};
#endif


EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DevicePathLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiRuntimeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
UefiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
HobLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeDebugPrintErrorLevelLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryConstructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = UefiBootServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DevicePathLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = HobLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeDebugPrintErrorLevelLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}


EFI_STATUS
EFIAPI
DxeDebugPrintErrorLevelLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


VOID
EFIAPI
ProcessLibraryDestructorList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )
{
  EFI_STATUS  Status;

  Status = DxeDebugPrintErrorLevelLibDestructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

}

const UINT32 _gUefiDriverRevision = 0x00000000U;
const UINT32 _gDxeRevision = 0x00000000U;


EFI_STATUS
EFIAPI
ProcessModuleEntryPointList (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  )

{
  return PcdDxeInit (ImageHandle, SystemTable);
}

VOID
EFIAPI
ExitDriver (
  IN EFI_STATUS  Status
  )
{
  if (EFI_ERROR (Status)) {
    ProcessLibraryDestructorList (gImageHandle, gST);
  }
  gBS->Exit (gImageHandle, Status, 0, NULL);
}

GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gDriverUnloadImageCount = 0U;

EFI_STATUS
EFIAPI
ProcessModuleUnloadList (
  IN EFI_HANDLE        ImageHandle
  )
{
  return EFI_SUCCESS;
}
