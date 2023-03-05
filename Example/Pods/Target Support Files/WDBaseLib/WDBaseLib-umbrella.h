#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "DeviceInfo.h"
#import "WDBaseHeader.h"
#import "WDClendarManager.h"
#import "WDLocationManager.h"
#import "WindBaseManager.h"

FOUNDATION_EXPORT double WDBaseLibVersionNumber;
FOUNDATION_EXPORT const unsigned char WDBaseLibVersionString[];

