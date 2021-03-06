#ifndef WEBSERVER_H_INCLUDED
#define WEBSERVER_H_INCLUDED
#include "conf.h"
#include "mount.h"
#include "misc.h"
#include <FS.h>
#define BUTT ".button_red {text-align: right; background-color:#100000;color:yellow;border-color:red; border-radius:5px}"
#define TEXTT  ".text_red {text-align: right;height:20px; width:95px; background-color:black;color: red;border:0}"
#define TEXTT1  ".text_red {text-align: right;height:20px; width:45px; background-color:black;color: red;border:0}"
#define AUTO_SIZE "<meta name=\"viewport\" content=\"width=device-width, initial-scale=1.0\">"
//#define NO_CACHE "<head><meta http-equiv=\"Cache-Control\" content=\"no-cache, no-store, must-revalidate\" /><meta http-equiv=\"Pragma\" content=\"no-cache\" /><meta http-equiv=\"Expires\" content=\"0\" /></head>"
#ifdef esp8266
extern ESP8266WebServer serverweb;
#else
extern WebServer serverweb;
#endif
extern mount_t *telescope;
extern String ssi;
extern String pwd;
extern byte napt;
//void handleConfig();
//String getContentType(String filename);
//bool handleFileRead(String path);
void initwebserver(void);

#endif // WEBSERVER_H_INCLUDED//
