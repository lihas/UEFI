/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_BD7E9A27_D6C5_416a_B245_5F507D95B2BD
#define _AUTOGENH_BD7E9A27_D6C5_416a_B245_5F507D95B2BD

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <Uefi.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;

#define EFI_CALLER_ID_GUID \
  {0xBD7E9A27, 0xD6C5, 0x416a, {0xB2, 0x45, 0x5F, 0x50, 0x7D, 0x95, 0xB2, 0xBD}}

// Guids
extern EFI_GUID gEfiWinNtConsoleGuid;
extern EFI_GUID gEfiWinNtGopGuid;
extern EFI_GUID gEfiWinNtSerialPortGuid;
extern EFI_GUID gEfiWinNtFileSystemGuid;
extern EFI_GUID gEfiWinNtPhysicalDisksGuid;
extern EFI_GUID gEfiWinNtVirtualDisksGuid;
extern EFI_GUID gEfiNt32PkgTokenSpaceGuid;
extern EFI_GUID gEfiStatusCodeSpecificDataGuid;
extern EFI_GUID gEfiStatusCodeDataTypeDebugGuid;
extern EFI_GUID gEfiMdePkgTokenSpaceGuid;
extern EFI_GUID gEfiEventReadyToBootGuid;
extern EFI_GUID gEfiEventLegacyBootGuid;
extern EFI_GUID gEfiGlobalVariableGuid;
extern EFI_GUID gEfiHobListGuid;
extern EFI_GUID gEfiGenericVariableGuid;

// Protocols
extern EFI_GUID gWinNtBusDriverGuid;
extern EFI_GUID gEfiDevicePathProtocolGuid;
extern EFI_GUID gEfiWinNtThunkProtocolGuid;
extern EFI_GUID gEfiWinNtIoProtocolGuid;
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

#define _PCD_TOKEN_PcdWinNtMemorySize  7U
#define _PCD_GET_MODE_PTR_PcdWinNtMemorySize  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_GET_MODE_SIZE_PcdWinNtMemorySize  LibPcdGetSize(_PCD_TOKEN_PcdWinNtMemorySize)
#define _PCD_SET_MODE_PTR_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtMemorySize(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtMemorySize, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtPhysicalDisk  8U
#define _PCD_GET_MODE_PTR_PcdWinNtPhysicalDisk  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtPhysicalDisk)
#define _PCD_GET_MODE_SIZE_PcdWinNtPhysicalDisk  LibPcdGetSize(_PCD_TOKEN_PcdWinNtPhysicalDisk)
#define _PCD_SET_MODE_PTR_PcdWinNtPhysicalDisk(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtPhysicalDisk, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtPhysicalDisk(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtPhysicalDisk, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtVirtualDisk  9U
#define _PCD_GET_MODE_PTR_PcdWinNtVirtualDisk  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtVirtualDisk)
#define _PCD_GET_MODE_SIZE_PcdWinNtVirtualDisk  LibPcdGetSize(_PCD_TOKEN_PcdWinNtVirtualDisk)
#define _PCD_SET_MODE_PTR_PcdWinNtVirtualDisk(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtVirtualDisk, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtVirtualDisk(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtVirtualDisk, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtFileSystem  10U
#define _PCD_GET_MODE_PTR_PcdWinNtFileSystem  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtFileSystem)
#define _PCD_GET_MODE_SIZE_PcdWinNtFileSystem  LibPcdGetSize(_PCD_TOKEN_PcdWinNtFileSystem)
#define _PCD_SET_MODE_PTR_PcdWinNtFileSystem(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtFileSystem, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtFileSystem(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtFileSystem, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtSerialPort  11U
#define _PCD_GET_MODE_PTR_PcdWinNtSerialPort  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtSerialPort)
#define _PCD_GET_MODE_SIZE_PcdWinNtSerialPort  LibPcdGetSize(_PCD_TOKEN_PcdWinNtSerialPort)
#define _PCD_SET_MODE_PTR_PcdWinNtSerialPort(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtSerialPort, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtSerialPort(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtSerialPort, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtGop  12U
#define _PCD_GET_MODE_PTR_PcdWinNtGop  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtGop)
#define _PCD_GET_MODE_SIZE_PcdWinNtGop  LibPcdGetSize(_PCD_TOKEN_PcdWinNtGop)
#define _PCD_SET_MODE_PTR_PcdWinNtGop(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtGop, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtGop(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtGop, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtUga  13U
#define _PCD_GET_MODE_PTR_PcdWinNtUga  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtUga)
#define _PCD_GET_MODE_SIZE_PcdWinNtUga  LibPcdGetSize(_PCD_TOKEN_PcdWinNtUga)
#define _PCD_SET_MODE_PTR_PcdWinNtUga(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtUga, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtUga(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtUga, (SizeOfBuffer), (Buffer))

#define _PCD_TOKEN_PcdWinNtConsole  14U
#define _PCD_GET_MODE_PTR_PcdWinNtConsole  LibPcdGetPtr(_PCD_TOKEN_PcdWinNtConsole)
#define _PCD_GET_MODE_SIZE_PcdWinNtConsole  LibPcdGetSize(_PCD_TOKEN_PcdWinNtConsole)
#define _PCD_SET_MODE_PTR_PcdWinNtConsole(SizeOfBuffer, Buffer)  LibPcdSetPtr(_PCD_TOKEN_PcdWinNtConsole, (SizeOfBuffer), (Buffer))
#define _PCD_SET_MODE_PTR_S_PcdWinNtConsole(SizeOfBuffer, Buffer)  LibPcdSetPtrS(_PCD_TOKEN_PcdWinNtConsole, (SizeOfBuffer), (Buffer))

// Definition of PCDs used in libraries is in AutoGen.c


EFI_STATUS
EFIAPI
InitializeWinNtBusDriver (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );





#ifdef __cplusplus
}
#endif

#endif
