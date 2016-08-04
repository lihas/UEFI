/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_CCB2DCE1_4FC8_41CB_88C5_D349E134C9FC
#define _AUTOGENH_CCB2DCE1_4FC8_41CB_88C5_D349E134C9FC

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>
#include <Library/PcdLib.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Guids
extern EFI_GUID gEfiIfrTianoGuid;
extern EFI_GUID gEfiIfrFrontPageGuid;
extern EFI_GUID gEfiMdeModulePkgTokenSpaceGuid;

// Protocols
extern EFI_GUID gEfiHiiConfigAccessProtocolGuid;
extern EFI_GUID gEfiDevicePathToTextProtocolGuid;

// PCD definitions
#define _PCD_TOKEN_PcdConOutRow  103U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdConOutRow;
#define _PCD_GET_MODE_32_PcdConOutRow  _gPcd_BinaryPatch_PcdConOutRow
#define _PCD_SET_MODE_32_PcdConOutRow(Value)  (_gPcd_BinaryPatch_PcdConOutRow = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutRow(Value)  ((_gPcd_BinaryPatch_PcdConOutRow = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdConOutRow_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutRow _gPcd_BinaryPatch_Size_PcdConOutRow
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutRow; 
#define _PCD_TOKEN_PcdConOutColumn  104U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdConOutColumn;
#define _PCD_GET_MODE_32_PcdConOutColumn  _gPcd_BinaryPatch_PcdConOutColumn
#define _PCD_SET_MODE_32_PcdConOutColumn(Value)  (_gPcd_BinaryPatch_PcdConOutColumn = (Value))
#define _PCD_SET_MODE_32_S_PcdConOutColumn(Value)  ((_gPcd_BinaryPatch_PcdConOutColumn = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdConOutColumn_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdConOutColumn _gPcd_BinaryPatch_Size_PcdConOutColumn
extern UINTN _gPcd_BinaryPatch_Size_PcdConOutColumn; 
#define _PCD_TOKEN_PcdVideoHorizontalResolution  106U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdVideoHorizontalResolution  _gPcd_BinaryPatch_PcdVideoHorizontalResolution
#define _PCD_SET_MODE_32_PcdVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoHorizontalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoHorizontalResolution _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoHorizontalResolution; 
#define _PCD_TOKEN_PcdVideoVerticalResolution  107U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdVideoVerticalResolution  _gPcd_BinaryPatch_PcdVideoVerticalResolution
#define _PCD_SET_MODE_32_PcdVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdVideoVerticalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdVideoVerticalResolution _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdVideoVerticalResolution; 
#define _PCD_TOKEN_PcdSetupConOutColumn  17U
#define _PCD_GET_MODE_32_PcdSetupConOutColumn  LibPcdGet32(_PCD_TOKEN_PcdSetupConOutColumn)
#define _PCD_GET_MODE_SIZE_PcdSetupConOutColumn  LibPcdGetSize(_PCD_TOKEN_PcdSetupConOutColumn)
#define _PCD_SET_MODE_32_PcdSetupConOutColumn(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupConOutColumn, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutColumn(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupConOutColumn, (Value))
#define _PCD_TOKEN_PcdSetupConOutRow  18U
#define _PCD_GET_MODE_32_PcdSetupConOutRow  LibPcdGet32(_PCD_TOKEN_PcdSetupConOutRow)
#define _PCD_GET_MODE_SIZE_PcdSetupConOutRow  LibPcdGetSize(_PCD_TOKEN_PcdSetupConOutRow)
#define _PCD_SET_MODE_32_PcdSetupConOutRow(Value)  LibPcdSet32(_PCD_TOKEN_PcdSetupConOutRow, (Value))
#define _PCD_SET_MODE_32_S_PcdSetupConOutRow(Value)  LibPcdSet32S(_PCD_TOKEN_PcdSetupConOutRow, (Value))
#define _PCD_TOKEN_PcdSetupVideoHorizontalResolution  145U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoHorizontalResolution  _gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution
#define _PCD_SET_MODE_32_PcdSetupVideoHorizontalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoHorizontalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoHorizontalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupVideoHorizontalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoHorizontalResolution _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoHorizontalResolution; 
#define _PCD_TOKEN_PcdSetupVideoVerticalResolution  146U
extern volatile  UINT32  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution;
#define _PCD_GET_MODE_32_PcdSetupVideoVerticalResolution  _gPcd_BinaryPatch_PcdSetupVideoVerticalResolution
#define _PCD_SET_MODE_32_PcdSetupVideoVerticalResolution(Value)  (_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value))
#define _PCD_SET_MODE_32_S_PcdSetupVideoVerticalResolution(Value)  ((_gPcd_BinaryPatch_PcdSetupVideoVerticalResolution = (Value)), RETURN_SUCCESS)
#define _PCD_PATCHABLE_PcdSetupVideoVerticalResolution_SIZE 4
#define _PCD_GET_MODE_SIZE_PcdSetupVideoVerticalResolution _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution
extern UINTN _gPcd_BinaryPatch_Size_PcdSetupVideoVerticalResolution; 

EFI_STATUS
EFIAPI
BootManagerUiLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );

EFI_STATUS
EFIAPI
BootManagerUiLibDestructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );
#include "BootManagerUiLibStrDefs.h"


#ifdef __cplusplus
}
#endif

#endif
