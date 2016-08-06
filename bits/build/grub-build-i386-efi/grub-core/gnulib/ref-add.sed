/^# Packages using this file: / {
  s/# Packages using this file://
  ta
  :a
  s/ grub / grub /
  tb
  s/ $/ grub /
  :b
  s/^/# Packages using this file:/
}
