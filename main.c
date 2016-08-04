#include <efi.h>
#include <efilib.h>

EFI_STATUS
EFIAPI
efi_main (EFI_HANDLE ImageHandle, EFI_SYSTEM_TABLE *SystemTable) {
InitializeLib(ImageHandle, SystemTable);
Print(L"Hello, world!\n");

uefi_call_wrapper(ST->ConOut->OutputString, 2, ST->ConOut, L"Hello World!\n");

return EFI_SUCCESS;
}
