//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface MMLiveCommentDataRefreshConfig : NSObject
{
    unsigned int _maxMsgTempCacheCnt;
    unsigned int _maxRefreshMsgCntOnce;
    unsigned int _refreshMsgInterval;
    unsigned int _maxRefreshHistoryMsgCntOnce;
    unsigned int _refreshHistoryMsgInterval;
}

+ (unsigned int)defaultRefreshHistoryMsgIntervalForTaskId:(id)arg1;
+ (unsigned int)defaultMaxRefreshHistoryMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultRefreshMsgIntervalForTaskId:(id)arg1;
+ (unsigned int)defaultMaxRefreshMsgCntOnceForTaskId:(id)arg1;
+ (unsigned int)defaultMaxMsgTempCacheCntForTaskId:(id)arg1;
@property(nonatomic) unsigned int refreshHistoryMsgInterval; // @synthesize refreshHistoryMsgInterval=_refreshHistoryMsgInterval;
@property(nonatomic) unsigned int maxRefreshHistoryMsgCntOnce; // @synthesize maxRefreshHistoryMsgCntOnce=_maxRefreshHistoryMsgCntOnce;
@property(nonatomic) unsigned int refreshMsgInterval; // @synthesize refreshMsgInterval=_refreshMsgInterval;
@property(nonatomic) unsigned int maxRefreshMsgCntOnce; // @synthesize maxRefreshMsgCntOnce=_maxRefreshMsgCntOnce;
@property(nonatomic) unsigned int maxMsgTempCacheCnt; // @synthesize maxMsgTempCacheCnt=_maxMsgTempCacheCnt;
- (id)initWithTaskId:(id)arg1;

@end
