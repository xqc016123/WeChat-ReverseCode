//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class NSString;

@interface NICInfo : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(nonatomic) int netType; // @dynamic netType;
@property(retain, nonatomic) NSString *nicDeviceId; // @dynamic nicDeviceId;
@property(retain, nonatomic) NSString *nicIspInfo; // @dynamic nicIspInfo;
@property(nonatomic) int nicRole; // @dynamic nicRole;
@property(retain, nonatomic) NSString *wanIp; // @dynamic wanIp;

@end
