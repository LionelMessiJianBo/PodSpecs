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

#import "AController.h"
#import "BController.h"
#import "CController.h"

FOUNDATION_EXPORT double PodTestVersionNumber;
FOUNDATION_EXPORT const unsigned char PodTestVersionString[];

