/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_55D460DB_8FEA_415a_B95D_70145AE0675C
#define _AUTOGENH_55D460DB_8FEA_415a_B95D_70145AE0675C

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gEfiPrint2ProtocolGuid;

EFI_STATUS
EFIAPI
PrintLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
