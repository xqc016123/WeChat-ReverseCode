//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QPoiInfo.h"

@class NSString;

@interface QPointEventInfo : QPoiInfo
{
    NSString *_source;
    NSString *_eventName;
    NSString *_road;
    NSString *_detail;
    double _startTime;
    double _endTime;
    double _updateTime;
}

- (void).cxx_destruct;
@property(nonatomic) double updateTime; // @synthesize updateTime=_updateTime;
@property(nonatomic) double endTime; // @synthesize endTime=_endTime;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *detail; // @synthesize detail=_detail;
@property(copy, nonatomic) NSString *road; // @synthesize road=_road;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *source; // @synthesize source=_source;
- (id)description;

@end
