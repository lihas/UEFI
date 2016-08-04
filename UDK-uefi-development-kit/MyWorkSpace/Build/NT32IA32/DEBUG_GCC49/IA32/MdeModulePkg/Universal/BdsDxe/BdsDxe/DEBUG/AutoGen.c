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

GLOBAL_REMOVE_IF_UNREFERENCED GUID gEfiCallerIdGuid = {0x6D33944A, 0xEC75, 0x4855, {0xA5, 0x4D, 0x80, 0x9C, 0x75, 0x24, 0x1F, 0x6C}};

GLOBAL_REMOVE_IF_UNREFERENCED CHAR8 *gEfiCallerBaseName = "BdsDxe";

// Guids
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGlobalVariableGuid = { 0x8BE4DF61, 0x93CA, 0x11D2, { 0xAA, 0x0D, 0x00, 0xE0, 0x98, 0x03, 0x2B, 0x8C }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gConnectConInEventGuid = { 0xdb4e8151, 0x57ed, 0x4bed, { 0x88, 0x33, 0x67, 0x51, 0xb5, 0xd1, 0xa8, 0xd7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid = { 0xf6ee6dbb, 0xd67f, 0x4ea0, { 0x8b, 0x96, 0x6a, 0x71, 0xb1, 0x9d, 0x84, 0xad }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPerformanceProtocolGuid = { 0x76B6BDFA, 0x2ACD, 0x4462, { 0x9E, 0x3F, 0xCB, 0x58, 0xC9, 0x69, 0xD9, 0x37 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdePkgTokenSpaceGuid = { 0x914AEBE7, 0x4635, 0x459b, { 0xAA, 0x1C, 0x11, 0xE2, 0x19, 0xB0, 0x3A, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMdeModulePkgTokenSpaceGuid = { 0xA1AFF049, 0xFDEB, 0x442a, { 0xB3, 0x20, 0x13, 0xAB, 0x4C, 0xB7, 0x2B, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeDataTypeDebugGuid = { 0x9A4E9246, 0xD553, 0x11D5, { 0x87, 0xE2, 0x00, 0x06, 0x29, 0x45, 0xC3, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiStatusCodeSpecificDataGuid = { 0x335984BD, 0xE805, 0x409A, { 0xB8, 0xF8, 0xD2, 0x7E, 0xCE, 0x5F, 0xF7, 0xA6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventReadyToBootGuid = { 0x7CE88FB3, 0x4BD7, 0x4679, { 0x87, 0xA8, 0xA8, 0xD8, 0xDE, 0xE5, 0x0D, 0x2B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiEventLegacyBootGuid = { 0x2A571201, 0x4966, 0x47F6, { 0x8B, 0x86, 0xF3, 0x1E, 0x41, 0xF3, 0x2F, 0x10 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHobListGuid = { 0x7739F24C, 0x93D7, 0x11D4, { 0x9A, 0x3A, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGenericVariableGuid = { 0x59d1c24f, 0x50f1, 0x401a, {0xb1, 0x01, 0xf3, 0x3e, 0x0d, 0xae, 0xd4, 0x43} };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFileInfoGuid = { 0x09576E92, 0x6D3F, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDxeServicesTableGuid = { 0x05AD34BA, 0x6F02, 0x4214, { 0x95, 0x2E, 0x4D, 0xA0, 0x39, 0x8E, 0x2B, 0xB9 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiMemoryTypeInformationGuid = { 0x4C19049F, 0x4137, 0x4DD3, { 0x9C, 0x10, 0x8B, 0x97, 0xA8, 0x3F, 0xFD, 0xFA }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoAhciInterfaceGuid = { 0x9e498932, 0x4abc, 0x45af, { 0xa3, 0x4d, 0x02, 0x47, 0x78, 0x7b, 0xe7, 0xc6 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoIdeInterfaceGuid = { 0x5E948FE3, 0x26D3, 0x42B5, { 0xAF, 0x17, 0x61, 0x02, 0x87, 0x18, 0x8D, 0xEC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoScsiInterfaceGuid = { 0x08F74BAA, 0xEA36, 0x41D9, { 0x95, 0x21, 0x21, 0xA7, 0x0F, 0x87, 0x80, 0xBC }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gZeroGuid = { 0x0, 0x0, 0x0, {0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0, 0x0}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiWinNtSystemConfigGuid = { 0xb347f047, 0xaf8c, 0x490e, { 0xac, 0x07, 0x0a, 0xa9, 0xb7, 0xe5, 0x38, 0x58 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiIntelFrameworkModulePkgTokenSpaceGuid = { 0xD3705011, 0xBC19, 0x4af7, { 0xBE, 0x16, 0xF6, 0x80, 0x30, 0x37, 0x8C, 0x15 }};

// Protocols
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBdsArchProtocolGuid = { 0x665E3FF6, 0x46CC, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextInputExProtocolGuid = {0xdd9e7534, 0x7762, 0x4698, { 0x8c, 0x14, 0xf5, 0x85, 0x17, 0xa6, 0x25, 0xaa } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiVariableLockProtocolGuid = { 0xcd3d0a05, 0x9e24, 0x437c, { 0xa8, 0x91, 0x1e, 0xe0, 0x53, 0xdb, 0x76, 0x38 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gPcdProtocolGuid = { 0x11B34006, 0xD85B, 0x4D0A, { 0xA2, 0x90, 0xD5, 0xA5, 0x71, 0x31, 0x0E, 0xF7 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPcdProtocolGuid = { 0x13a3f0f6, 0x264a, 0x3ef0, { 0xf2, 0xe0, 0xde, 0xc5, 0x12, 0x34, 0x2f, 0x34 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gGetPcdInfoProtocolGuid = { 0x5be40f57, 0xfa68, 0x4610, { 0xbb, 0xbf, 0xe9, 0xc5, 0xfc, 0xda, 0xd3, 0x65 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGetPcdInfoProtocolGuid = { 0xfd0f4478,  0xefd, 0x461d, { 0xba, 0x2d, 0xe5, 0x8c, 0x45, 0xfd, 0x5f, 0x5e } };
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
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiStringProtocolGuid = {0x0fd96974, 0x23aa, 0x4cdc, {0xb9, 0xcb, 0x98, 0xd1, 0x77, 0x50, 0x32, 0x2a}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiImageProtocolGuid = {0x31a6406a, 0x6bdf, 0x4e46, {0xb2, 0xa2, 0xeb, 0xaa, 0x89, 0xc4, 0x09, 0x20}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiDatabaseProtocolGuid = {0xef9fc172, 0xa1b2, 0x4693, {0xb3, 0x27, 0x6d, 0x32, 0xfc, 0x41, 0x60, 0x42}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiHiiConfigRoutingProtocolGuid = {0x587e72d7, 0xcc50, 0x4f79, {0x82, 0x09, 0xca, 0x29, 0x1f, 0xc1, 0xa1, 0x0f}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFirmwareVolume2ProtocolGuid = { 0x220e73b6, 0x6bdb, 0x4413, { 0x84, 0x5, 0xb9, 0x74, 0xb1, 0x8, 0x61, 0x9a } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadedImageProtocolGuid = { 0x5B1B31A1, 0x9562, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFileProtocolGuid = { 0x56EC3091, 0x954C, 0x11D2, { 0x8E, 0x3F, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiLoadFile2ProtocolGuid = { 0x4006c0c1, 0xfcb3, 0x403e, {0x99, 0x6d, 0x4a, 0x6c, 0x87, 0x24, 0xe0, 0x6d }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleFileSystemProtocolGuid = { 0x964E5B22, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiFormBrowser2ProtocolGuid = {0xb9d4c360, 0xbcfb, 0x4f9b, {0x92, 0x98, 0x53, 0xc1, 0x36, 0x98, 0x22, 0x58}};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBootLogoProtocolGuid = { 0xcdea2bd3, 0xfc25, 0x4c1c, { 0xb9, 0x7c, 0xb3, 0x11, 0x86, 0x6, 0x49, 0x90 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUserManagerProtocolGuid = { 0x6fd5b00c, 0xd426, 0x4283, {0x98, 0x87, 0x6c, 0xf5, 0xcf, 0x1c, 0xb1, 0xfe }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEdkiiPlatformLogoProtocolGuid = { 0x9b517978, 0xeba1, 0x44e7, { 0xba, 0x65, 0x7c, 0x2c, 0xd0, 0x8b, 0xf8, 0xe9 } };
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPciRootBridgeIoProtocolGuid = { 0x2F707EBB, 0x4A1A, 0x11D4, { 0x9A, 0x38, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiPciIoProtocolGuid = { 0x4CF5B200, 0x68B8, 0x4CA5, { 0x9E, 0xEC, 0xB2, 0x3E, 0x3F, 0x50, 0x02, 0x9A }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleNetworkProtocolGuid = { 0xA19832B9, 0xAC25, 0x11D3, { 0x9A, 0x2D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiSimpleTextInProtocolGuid = { 0x387477C1, 0x69C7, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiBlockIoProtocolGuid = { 0x964E5B21, 0x6459, 0x11D2, { 0x8E, 0x39, 0x00, 0xA0, 0xC9, 0x69, 0x72, 0x3B }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiUsbIoProtocolGuid = { 0x2B2F68D6, 0x0CD2, 0x44CF, { 0x8E, 0x8B, 0xBB, 0xA2, 0x0B, 0x1B, 0x5B, 0x75 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDiskInfoProtocolGuid = { 0xD432A67F, 0x14DC, 0x484B, { 0xB3, 0xBB, 0x3F, 0x02, 0x91, 0x84, 0x93, 0x27 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiDriverHealthProtocolGuid = { 0x2a534210, 0x9280, 0x41d8, {0xae, 0x79, 0xca, 0xda, 0x1, 0xa2, 0xb1, 0x27 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiRamDiskProtocolGuid = { 0xab38a0df, 0x6873, 0x44a9, { 0x87, 0xe6, 0xd4, 0xeb, 0x56, 0x14, 0x84, 0x49 }};
GLOBAL_REMOVE_IF_UNREFERENCED EFI_GUID gEfiGenericMemTestProtocolGuid = { 0x309DE7F1, 0x7F5E, 0x4ACE, { 0xB4, 0x9C, 0x53, 0x1B, 0xE5, 0xAA, 0x95, 0xEF }};

// Definition of PCDs used in this module
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangDeprecate = _PCD_VALUE_PcdUefiVariableDefaultLangDeprecate;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultLangCodes[13] = {101, 110, 103, 102, 114, 97, 101, 110, 103, 102, 114, 97, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultLang[4] = {101, 110, 103, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLangCodes[18] = {101, 110, 59, 102, 114, 59, 101, 110, 45, 85, 83, 59, 102, 114, 45, 70, 82, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdUefiVariableDefaultPlatformLang[6] = {101, 110, 45, 85, 83, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINT16 _gPcd_FixedAtBuild_PcdFirmwareVendor[7] = {69, 68, 75, 32, 73, 73, 0 };
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFirmwareRevision = _PCD_VALUE_PcdFirmwareRevision;
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdConInConnectOnDemand = _PCD_VALUE_PcdConInConnectOnDemand;
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdErrorCodeSetVariable = _PCD_VALUE_PcdErrorCodeSetVariable;

// Definition of PCDs used in libraries

#define _PCD_TOKEN_PcdDebugClearMemoryValue  49U
#define _PCD_SIZE_PcdDebugClearMemoryValue 1
#define _PCD_GET_MODE_SIZE_PcdDebugClearMemoryValue  _PCD_SIZE_PcdDebugClearMemoryValue 
#define _PCD_VALUE_PcdDebugClearMemoryValue  0xAFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugClearMemoryValue = _PCD_VALUE_PcdDebugClearMemoryValue;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue;
#define _PCD_GET_MODE_8_PcdDebugClearMemoryValue  _gPcd_FixedAtBuild_PcdDebugClearMemoryValue
//#define _PCD_SET_MODE_8_PcdDebugClearMemoryValue  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDebugPropertyMask  28U
#define _PCD_SIZE_PcdDebugPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdDebugPropertyMask  _PCD_SIZE_PcdDebugPropertyMask 
#define _PCD_VALUE_PcdDebugPropertyMask  0x1fU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDebugPropertyMask = _PCD_VALUE_PcdDebugPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdDebugPropertyMask;
#define _PCD_GET_MODE_8_PcdDebugPropertyMask  _gPcd_FixedAtBuild_PcdDebugPropertyMask
//#define _PCD_SET_MODE_8_PcdDebugPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdFixedDebugPrintErrorLevel  50U
#define _PCD_SIZE_PcdFixedDebugPrintErrorLevel 4
#define _PCD_GET_MODE_SIZE_PcdFixedDebugPrintErrorLevel  _PCD_SIZE_PcdFixedDebugPrintErrorLevel 
#define _PCD_VALUE_PcdFixedDebugPrintErrorLevel  0xFFFFFFFFU
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel = _PCD_VALUE_PcdFixedDebugPrintErrorLevel;
extern const  UINT32  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel;
#define _PCD_GET_MODE_32_PcdFixedDebugPrintErrorLevel  _gPcd_FixedAtBuild_PcdFixedDebugPrintErrorLevel
//#define _PCD_SET_MODE_32_PcdFixedDebugPrintErrorLevel  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

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

#define _PCD_TOKEN_PcdPerformanceLibraryPropertyMask  51U
#define _PCD_SIZE_PcdPerformanceLibraryPropertyMask 1
#define _PCD_GET_MODE_SIZE_PcdPerformanceLibraryPropertyMask  _PCD_SIZE_PcdPerformanceLibraryPropertyMask 
#define _PCD_VALUE_PcdPerformanceLibraryPropertyMask  0U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask = _PCD_VALUE_PcdPerformanceLibraryPropertyMask;
extern const  UINT8  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask;
#define _PCD_GET_MODE_8_PcdPerformanceLibraryPropertyMask  _gPcd_FixedAtBuild_PcdPerformanceLibraryPropertyMask
//#define _PCD_SET_MODE_8_PcdPerformanceLibraryPropertyMask  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdResetOnMemoryTypeInformationChange  132U
#define _PCD_SIZE_PcdResetOnMemoryTypeInformationChange 1
#define _PCD_GET_MODE_SIZE_PcdResetOnMemoryTypeInformationChange  _PCD_SIZE_PcdResetOnMemoryTypeInformationChange 
#define _PCD_VALUE_PcdResetOnMemoryTypeInformationChange  0U
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange = _PCD_VALUE_PcdResetOnMemoryTypeInformationChange;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange;
#define _PCD_GET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  _gPcd_FixedAtBuild_PcdResetOnMemoryTypeInformationChange
//#define _PCD_SET_MODE_BOOL_PcdResetOnMemoryTypeInformationChange  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderLoad  133U
#define _PCD_SIZE_PcdProgressCodeOsLoaderLoad 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderLoad  _PCD_SIZE_PcdProgressCodeOsLoaderLoad 
#define _PCD_VALUE_PcdProgressCodeOsLoaderLoad  0x03058000U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad = _PCD_VALUE_PcdProgressCodeOsLoaderLoad;
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderLoad  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderLoad
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderLoad  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdProgressCodeOsLoaderStart  134U
#define _PCD_SIZE_PcdProgressCodeOsLoaderStart 4
#define _PCD_GET_MODE_SIZE_PcdProgressCodeOsLoaderStart  _PCD_SIZE_PcdProgressCodeOsLoaderStart 
#define _PCD_VALUE_PcdProgressCodeOsLoaderStart  0x03058001U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart = _PCD_VALUE_PcdProgressCodeOsLoaderStart;
extern const  UINT32  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart;
#define _PCD_GET_MODE_32_PcdProgressCodeOsLoaderStart  _gPcd_FixedAtBuild_PcdProgressCodeOsLoaderStart
//#define _PCD_SET_MODE_32_PcdProgressCodeOsLoaderStart  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdBootManagerMenuFile  135U
#define _PCD_VALUE_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[16] = { 0x21, 0xaa, 0x2c, 0x46, 0x14, 0x76, 0x03, 0x45, 0x83, 0x6e, 0x8a, 0xb6, 0xf4, 0x66, 0x23, 0x31 };
extern const UINT8 _gPcd_FixedAtBuild_PcdBootManagerMenuFile[16];
#define _PCD_GET_MODE_PTR_PcdBootManagerMenuFile  (VOID *)_gPcd_FixedAtBuild_PcdBootManagerMenuFile
#define _PCD_SIZE_PcdBootManagerMenuFile 16
#define _PCD_GET_MODE_SIZE_PcdBootManagerMenuFile  _PCD_SIZE_PcdBootManagerMenuFile 
//#define _PCD_SET_MODE_PTR_PcdBootManagerMenuFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdDriverHealthConfigureForm  136U
#define _PCD_VALUE_PcdDriverHealthConfigureForm  (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdDriverHealthConfigureForm[16] = { 0xf4, 0xd9, 0x96, 0x42, 0xfc, 0xf6, 0xde, 0x4d, 0x86, 0x85, 0x8c, 0xe2, 0xd7, 0x9d, 0x90, 0xf0 };
extern const UINT8 _gPcd_FixedAtBuild_PcdDriverHealthConfigureForm[16];
#define _PCD_GET_MODE_PTR_PcdDriverHealthConfigureForm  (VOID *)_gPcd_FixedAtBuild_PcdDriverHealthConfigureForm
#define _PCD_SIZE_PcdDriverHealthConfigureForm 16
#define _PCD_GET_MODE_SIZE_PcdDriverHealthConfigureForm  _PCD_SIZE_PcdDriverHealthConfigureForm 
//#define _PCD_SET_MODE_PTR_PcdDriverHealthConfigureForm  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdMaxRepairCount  137U
#define _PCD_SIZE_PcdMaxRepairCount 4
#define _PCD_GET_MODE_SIZE_PcdMaxRepairCount  _PCD_SIZE_PcdMaxRepairCount 
#define _PCD_VALUE_PcdMaxRepairCount  0x00U
GLOBAL_REMOVE_IF_UNREFERENCED const UINT32 _gPcd_FixedAtBuild_PcdMaxRepairCount = _PCD_VALUE_PcdMaxRepairCount;
extern const  UINT32  _gPcd_FixedAtBuild_PcdMaxRepairCount;
#define _PCD_GET_MODE_32_PcdMaxRepairCount  _gPcd_FixedAtBuild_PcdMaxRepairCount
//#define _PCD_SET_MODE_32_PcdMaxRepairCount  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdConOutRow  103U
#define _PCD_PATCHABLE_VALUE_PcdConOutRow  ((UINT32)25U)
volatile  UINT32 _gPcd_BinaryPatch_PcdConOutRow = _PCD_PATCHABLE_VALUE_PcdConOutRow;
extern volatile   UINT32  _gPcd_BinaryPatch_PcdConOutRow;
#define _PCD_GET_MODE_32_PcdConOutRow  _gPcd_BinaryPatch_PcdConOutRow
#define _PCD_PATCHABLE_PcdConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutRow  _gPcd_BinaryPatch_Size_PcdConOutRow 
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutRow; 
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdConOutRow = 4;
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  (_gPcd_BinaryPatch_PcdConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  ((_gPcd_BinaryPatch_PcdConOutRow = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdConOutColumn  104U
#define _PCD_PATCHABLE_VALUE_PcdConOutColumn  ((UINT32)80U)
volatile  UINT32 _gPcd_BinaryPatch_PcdConOutColumn = _PCD_PATCHABLE_VALUE_PcdConOutColumn;
extern volatile   UINT32  _gPcd_BinaryPatch_PcdConOutColumn;
#define _PCD_GET_MODE_32_PcdConOutColumn  _gPcd_BinaryPatch_PcdConOutColumn
#define _PCD_PATCHABLE_PcdConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutColumn  _gPcd_BinaryPatch_Size_PcdConOutColumn 
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn; 
GLOBAL_REMOVE_IF_UNREFERENCED UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn = 4;
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  (_gPcd_BinaryPatch_PcdConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdConOutColumn = (Value)), RETURN_SUCCESS) 

#define _PCD_TOKEN_PcdBootlogoOnlyEnable  142U
#define _PCD_SIZE_PcdBootlogoOnlyEnable 1
#define _PCD_GET_MODE_SIZE_PcdBootlogoOnlyEnable  _PCD_SIZE_PcdBootlogoOnlyEnable 
#define _PCD_VALUE_PcdBootlogoOnlyEnable  ((BOOLEAN)0U)
GLOBAL_REMOVE_IF_UNREFERENCED const BOOLEAN _gPcd_FixedAtBuild_PcdBootlogoOnlyEnable = _PCD_VALUE_PcdBootlogoOnlyEnable;
extern const  BOOLEAN  _gPcd_FixedAtBuild_PcdBootlogoOnlyEnable;
#define _PCD_GET_MODE_BOOL_PcdBootlogoOnlyEnable  _gPcd_FixedAtBuild_PcdBootlogoOnlyEnable
//#define _PCD_SET_MODE_BOOL_PcdBootlogoOnlyEnable  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdLogoFile  143U
#define _PCD_VALUE_PcdLogoFile  (VOID *)_gPcd_FixedAtBuild_PcdLogoFile
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdLogoFile[16] = { 0x99, 0x8b, 0xB2, 0x7B, 0xBB, 0x61, 0xD5, 0x11, 0x9A, 0x5D, 0x00, 0x90, 0x27, 0x3F, 0xC1, 0x4D };
extern const UINT8 _gPcd_FixedAtBuild_PcdLogoFile[16];
#define _PCD_GET_MODE_PTR_PcdLogoFile  (VOID *)_gPcd_FixedAtBuild_PcdLogoFile
#define _PCD_SIZE_PcdLogoFile 16
#define _PCD_GET_MODE_SIZE_PcdLogoFile  _PCD_SIZE_PcdLogoFile 
//#define _PCD_SET_MODE_PTR_PcdLogoFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD

#define _PCD_TOKEN_PcdShellFile  144U
#define _PCD_VALUE_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
GLOBAL_REMOVE_IF_UNREFERENCED const UINT8 _gPcd_FixedAtBuild_PcdShellFile[16] = { 0x83, 0xA5, 0x04, 0x7C, 0x3E, 0x9E, 0x1C, 0x4F, 0xAD, 0x65, 0xE0, 0x52, 0x68, 0xD0, 0xB4, 0xD1 };
extern const UINT8 _gPcd_FixedAtBuild_PcdShellFile[16];
#define _PCD_GET_MODE_PTR_PcdShellFile  (VOID *)_gPcd_FixedAtBuild_PcdShellFile
#define _PCD_SIZE_PcdShellFile 16
#define _PCD_GET_MODE_SIZE_PcdShellFile  _PCD_SIZE_PcdShellFile 
//#define _PCD_SET_MODE_PTR_PcdShellFile  ASSERT(FALSE)  // It is not allowed to set value for a FIXED_AT_BUILD PCD


EFI_STATUS
EFIAPI
UefiBootServicesTableLibConstructor (
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
DevicePathLibConstructor (
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

EFI_STATUS
EFIAPI
UefiHiiServicesLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
DxeServicesTableLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BmpImageDecoderLibConstructor (
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

  Status = UefiRuntimeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DevicePathLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = HobLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeDebugPrintErrorLevelLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = UefiHiiServicesLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = DxeServicesTableLibConstructor (ImageHandle, SystemTable);
  ASSERT_EFI_ERROR (Status);

  Status = BmpImageDecoderLibConstructor (ImageHandle, SystemTable);
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
  return BdsInitialize (ImageHandle, SystemTable);
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
