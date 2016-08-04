/**
  DO NOT EDIT
  FILE auto-generated
  Module name:
    AutoGen.h
  Abstract:       Auto-generated AutoGen.h for building module or library.
**/

#ifndef _AUTOGENH_f6b5871d_5226_41b3_a569_3ff893fdc7bc
#define _AUTOGENH_f6b5871d_5226_41b3_a569_3ff893fdc7bc

#ifdef __cplusplus
extern "C" {
#endif

#include <Base.h>
#include <PiDxe.h>

extern GUID  gEfiCallerIdGuid;
extern CHAR8 *gEfiCallerBaseName;


// Protocols
extern EFI_GUID gEfiWinNtThunkProtocolGuid;

EFI_STATUS
EFIAPI
WinNtLibConstructor (
  IN EFI_HANDLE        ImageHandle,
  IN EFI_SYSTEM_TABLE  *SystemTable
  );


#ifdef __cplusplus
}
#endif

#endif
