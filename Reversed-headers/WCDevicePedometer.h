//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCDevice;

@interface WCDevicePedometer : NSObject
{
    WCDevice *device;
    NSString *ticket;
    NSString *displayName;
    NSString *iconUrl;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *iconUrl; // @synthesize iconUrl;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName;
@property(retain, nonatomic) NSString *ticket; // @synthesize ticket;
@property(retain, nonatomic) WCDevice *device; // @synthesize device;

@end
