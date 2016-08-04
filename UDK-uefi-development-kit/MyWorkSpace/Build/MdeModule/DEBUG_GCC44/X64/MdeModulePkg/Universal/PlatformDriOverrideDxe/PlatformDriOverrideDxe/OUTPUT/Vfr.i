extern unsigned char PlatDriOverrideDxeStrings[];
extern EFI_GUID { 0x8614567d, 0x35be, 0x4415, { 0x8d, 0x88, 0xbd, 0x7d, 0xc, 0x9c, 0x70, 0xc0 }};
typedef struct {
  UINT8 DriOrder[0x00FF];
  UINT8 PciDeviceFilter;
} PLAT_OVER_MNGR_DATA;
formset
  guid = { 0x8614567d, 0x35be, 0x4415, {0x8d, 0x88, 0xbd, 0x7d, 0xc, 0x9c, 0x70, 0xc0} },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0004),
  varstore PLAT_OVER_MNGR_DATA,
    varid = 0x1000,
    name = Data,
    guid = { 0x8614567d, 0x35be, 0x4415, {0x8d, 0x88, 0xbd, 0x7d, 0xc, 0x9c, 0x70, 0xc0} };
  form formid = 0x1100,
       title = STRING_TOKEN(0x0003);
    text
      help = STRING_TOKEN(0x0008),
      text = STRING_TOKEN(0x0007),
      flags = INTERACTIVE,
      key = 0x1234;
    checkbox varid = Data.PciDeviceFilter,
      prompt = STRING_TOKEN(0x000B),
      help = STRING_TOKEN(0x000C),
      flags = INTERACTIVE,
      key = 0x1235,
    endcheckbox;
    label 0x1100;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x000F);
    goto 0x1100,
      prompt = STRING_TOKEN(0x0012),
      help = STRING_TOKEN(0x0013),
      flags = INTERACTIVE | RESET_REQUIRED,
      key = 0x1236;
  endform;
  form formid = 0x1200,
       title = STRING_TOKEN(0x0003);
    goto 0x1100,
      prompt = STRING_TOKEN(0x0010),
      help = STRING_TOKEN(0x000F),
      flags = INTERACTIVE,
      key = 0x1300;
    goto 0x1500,
      prompt = STRING_TOKEN(0x0005),
      help = STRING_TOKEN(0x0006),
      flags = INTERACTIVE,
      key = 0x1301;
    label 0x1200;
    label 0xffff;
  endform;
  form formid = 0x1500,
       title = STRING_TOKEN(0x0003);
    goto 0x1200,
      prompt = STRING_TOKEN(0x0010),
      help = STRING_TOKEN(0x000F),
      flags = INTERACTIVE,
      key = 0x2000;
    label 0x1500;
    label 0xffff;
    subtitle text = STRING_TOKEN(0x000F);
    text
      help = STRING_TOKEN (0x000F),
      text = STRING_TOKEN (0x0011),
      flags = INTERACTIVE | RESET_REQUIRED,
      key = 0x1800;
  endform;
endformset;
