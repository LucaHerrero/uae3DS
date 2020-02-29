#ifndef UAE3DS_CIA_H
#define UAE3DS_CIA_H

#include <3ds.h>

extern void CIA_SetErrorBuffer(char *buf);
extern Result CIA_LaunchLastTitle();
Result CIA_InstallTitle(char *path, int (*progress_callback)(u32, u32));

#endif
