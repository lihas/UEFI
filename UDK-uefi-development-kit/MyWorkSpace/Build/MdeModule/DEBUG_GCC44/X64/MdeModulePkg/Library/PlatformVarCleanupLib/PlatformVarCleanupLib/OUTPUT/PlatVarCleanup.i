extern unsigned char PlatformVarCleanupLibStrings[];
typedef struct {
  UINT8 SelectAll;
  UINT8 UserVariable[0x1000];
} VARIABLE_CLEANUP_DATA;
formset
  guid = { 0x24f14d8a, 0xd7a8, 0x4991, { 0x91, 0xe0, 0x96, 0xc3, 0xb7, 0xdb, 0x84, 0x56 } },
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0004),
  varstore VARIABLE_CLEANUP_DATA,
    varid = 0x8000,
    name = VariableCleanup,
    guid = { 0x24f14d8a, 0xd7a8, 0x4991, { 0x91, 0xe0, 0x96, 0xc3, 0xb7, 0xdb, 0x84, 0x56 } };
  form formid = 0x8000,
    title = STRING_TOKEN(0x0003);
    checkbox varid = VARIABLE_CLEANUP_DATA.SelectAll,
      prompt = STRING_TOKEN(0x0005),
      help = STRING_TOKEN(0x0006),
      flags = INTERACTIVE,
      key = 0x7FFD,
    endcheckbox;
    label 0x0000;
    label 0xFFFF;
  endform;
endformset;
