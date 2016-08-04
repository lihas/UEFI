extern EFI_GUID gHiiResourceSamleFormSetGuid;
formset
  guid = { 0x4f4ef7f0, 0xaa29, 0x4ce9, { 0xba, 0x41, 0x64, 0x3e, 0x1, 0x23, 0xa9, 0x9f }},
  title = STRING_TOKEN(0x0002),
  help = STRING_TOKEN(0x0003),
  form formid = 1,
       title = STRING_TOKEN(0x0004);
   text
      help = STRING_TOKEN(0x0006),
      text = STRING_TOKEN(0x0005),
     text = STRING_TOKEN(0x0008);
    subtitle text = STRING_TOKEN(0x0008);
    subtitle text = STRING_TOKEN(0x0007);
  endform;
endformset;
