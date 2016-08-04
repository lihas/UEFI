/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_ecebcb00_d9c8_11e4_af3d_8cdcd426c973
#define _AUTOGENH_ecebcb00_d9c8_11e4_af3d_8cdcd426c973

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xecebcb00, 0xd9c8, 0x11e4, {0xaf, 0x3d, 0x8c, 0xdc, 0xd4, 0x26, 0xc9, 0x73}}

// Guids
extern EFI_GUID gHttpBootConfigGuid;
extern EFI_GUID gEfiVirtualCdGuid;
extern EFI_GUID gEfiVirtualDiskGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;
extern EFI_GUID gEfiSmbiosTableGuid;
extern EFI_GUID gEfiSmbios3TableGuid;
extern EFI_GUID gEfiFileInfoGuid;
extern EFI_GUID gEfiDxeServicesTableGuid;
extern EFI_GUID gEfiMemoryTypeInformationGuid;
extern EFI_GUID gPerformanceProtocolGuid;
extern EFI_GUID gEdkiiStatusCodeDataTypeVariableGuid;
extern EFI_GUID gEfiDiskInfoAhciInterfaceGuid;
extern EFI_GUID gEfiDiskInfoIdeInterfaceGuid;
extern EFI_GUID gEfiDiskInfoScsiInterfaceGuid;
extern EFI_GUID gZeroGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiLoadFileProtocolGuid;
extern EFI_GUID gEfiHttpServiceBindingProtocolGuid;
extern EFI_GUID gEfiHttpProtocolGuid;
extern EFI_GUID gEfiDhcp4ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp4ProtocolGuid;
extern EFI_GUID gEfiIp4Config2ProtocolGuid;
extern EFI_GUID gEfiDhcp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDhcp6ProtocolGuid;
extern EFI_GUID gEfiDns6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiDns6ProtocolGuid;
extern EFI_GUID gEfiIp6ServiceBindingProtocolGuid;
extern EFI_GUID gEfiIp6ProtocolGuid;
extern EFI_GUID gEfiIp6ConfigProtocolGuid;
extern EFI_GUID gEfiNetworkInterfaceIdentifierProtocolGuid_31;
extern EFI_GUID gEfiRamDiskProtocolGuid;
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
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
extern EFI_GUID gEfiHiiStringProtocolGuid;
extern EFI_GUID gEfiHiiImageProtocolGuid;
extern EFI_GUID gEfiHiiDatabaseProtocolGuid;
extern EFI_GUID gEfiHiiConfigRoutingProtocolGuid;
extern EFI_GUID gEfiSimpleNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkProtocolGuid;
extern EFI_GUID gEfiManagedNetworkServiceBindingProtocolGuid;
extern EFI_GUID gEfiFirmwareVolume2ProtocolGuid;
extern EFI_GUID gEfiLoadedImageProtocolGuid;
extern EFI_GUID gEfiLoadFile2ProtocolGuid;
extern EFI_GUID gEfiSimpleFileSystemProtocolGuid;
extern EFI_GUID gEfiFormBrowser2ProtocolGuid;
extern EFI_GUID gEfiHttpUtilitiesProtocolGuid;
extern EFI_GUID gEfiPciRootBridgeIoProtocolGuid;
extern EFI_GUID gEfiPciIoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInProtocolGuid;
extern EFI_GUID gEfiBlockIoProtocolGuid;
extern EFI_GUID gEfiBootLogoProtocolGuid;
extern EFI_GUID gEfiSimpleTextInputExProtocolGuid;
extern EFI_GUID gEdkiiVariableLockProtocolGuid;
extern EFI_GUID gEfiUsbIoProtocolGuid;
extern EFI_GUID gEfiDiskInfoProtocolGuid;
extern EFI_GUID gEfiDriverHealthProtocolGuid;

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
HttpBootDxeDriverEntryPoint (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );



EFI_STATUS
EFIAPI
NetLibDefaultUnload (
  IN EFI_HANDLE        ImageHandle
  );

#include "HttpBootDxeStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
