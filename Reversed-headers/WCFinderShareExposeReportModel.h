//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface WCFinderShareExposeReportModel : NSObject
{
    unsigned long long _entersession;
    double _event_time;
    unsigned long long _cardType;
    NSString *_sourceusr;
    NSString *_feedid;
    NSString *_eventId;
}

+ (void)msgContentVCExpose;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
@property(copy, nonatomic) NSString *feedid; // @synthesize feedid=_feedid;
@property(copy, nonatomic) NSString *sourceusr; // @synthesize sourceusr=_sourceusr;
@property(nonatomic) unsigned long long cardType; // @synthesize cardType=_cardType;
@property(nonatomic) double event_time; // @synthesize event_time=_event_time;
@property(nonatomic) unsigned long long entersession; // @synthesize entersession=_entersession;
- (void)log;

@end
