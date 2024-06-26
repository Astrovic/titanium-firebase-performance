#ifdef __OBJC__
#import <Foundation/Foundation.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "GDTCORClock.h"
#import "GDTCORConsoleLogger.h"
#import "GDTCOREndpoints.h"
#import "GDTCOREvent.h"
#import "GDTCOREventDataObject.h"
#import "GDTCOREventTransformer.h"
#import "GDTCORProductData.h"
#import "GDTCORTargets.h"
#import "GDTCORTransport.h"
#import "GoogleDataTransport.h"

FOUNDATION_EXPORT double GoogleDataTransportVersionNumber;
FOUNDATION_EXPORT const unsigned char GoogleDataTransportVersionString[];

