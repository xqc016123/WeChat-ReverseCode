//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString;

@interface WCFinderItemEventReportInfo : NSObject
{
    unsigned long long _commentScene;
    long long _eventCode;
    unsigned long long _eventTime;
    NSString *_eId;
    NSDictionary *_udfKV;
    unsigned long long _refCommentScene;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long refCommentScene; // @synthesize refCommentScene=_refCommentScene;
@property(retain, nonatomic) NSDictionary *udfKV; // @synthesize udfKV=_udfKV;
@property(copy, nonatomic) NSString *eId; // @synthesize eId=_eId;
@property(nonatomic) unsigned long long eventTime; // @synthesize eventTime=_eventTime;
@property(nonatomic) long long eventCode; // @synthesize eventCode=_eventCode;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;

@end
