//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "UIAccelerometerDelegate-Protocol.h"

@class NSString;

@interface SDLUIAccelerationDelegate : NSObject <UIAccelerometerDelegate>
{
    double x;
    double y;
    double z;
    _Bool isRunning;
    _Bool hasNewData;
}

+ (id)sharedDelegate;
- (void)setHasNewData:(_Bool)arg1;
- (_Bool)hasNewData;
- (_Bool)isRunning;
- (void)shutdown;
- (void)startup;
- (void)dealloc;
- (id)init;
- (void)getLastOrientation:(short *)arg1;
- (void)accelerometer:(id)arg1 didAccelerate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
