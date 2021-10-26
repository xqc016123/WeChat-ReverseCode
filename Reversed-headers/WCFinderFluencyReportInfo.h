//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface WCFinderFluencyReportInfo : NSObject
{
    long long _startScene;
    unsigned long long _finishScene;
    unsigned long long _enterTimestamp;
    unsigned long long _pullStreamCGITimestamp;
    unsigned long long _pullHistoryCGITimestamp;
    unsigned long long _pullCGIFinishTimestamp;
    NSData *_debugMessage;
    unsigned long long _localOperationFinishTimestamp;
    unsigned long long _showUIFinishTimestamp;
    NSString *_mediaId;
    unsigned long long _preloadStartTimestamp;
    unsigned long long _preloadFinishTimestamp;
    unsigned long long _startPlayTimestamp;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long startPlayTimestamp; // @synthesize startPlayTimestamp=_startPlayTimestamp;
@property(nonatomic) unsigned long long preloadFinishTimestamp; // @synthesize preloadFinishTimestamp=_preloadFinishTimestamp;
@property(nonatomic) unsigned long long preloadStartTimestamp; // @synthesize preloadStartTimestamp=_preloadStartTimestamp;
@property(copy, nonatomic) NSString *mediaId; // @synthesize mediaId=_mediaId;
@property(nonatomic) unsigned long long showUIFinishTimestamp; // @synthesize showUIFinishTimestamp=_showUIFinishTimestamp;
@property(nonatomic) unsigned long long localOperationFinishTimestamp; // @synthesize localOperationFinishTimestamp=_localOperationFinishTimestamp;
@property(copy, nonatomic) NSData *debugMessage; // @synthesize debugMessage=_debugMessage;
@property(nonatomic) unsigned long long pullCGIFinishTimestamp; // @synthesize pullCGIFinishTimestamp=_pullCGIFinishTimestamp;
@property(nonatomic) unsigned long long pullHistoryCGITimestamp; // @synthesize pullHistoryCGITimestamp=_pullHistoryCGITimestamp;
@property(nonatomic) unsigned long long pullStreamCGITimestamp; // @synthesize pullStreamCGITimestamp=_pullStreamCGITimestamp;
@property(nonatomic) unsigned long long enterTimestamp; // @synthesize enterTimestamp=_enterTimestamp;
@property(nonatomic) unsigned long long finishScene; // @synthesize finishScene=_finishScene;
@property(nonatomic) long long startScene; // @synthesize startScene=_startScene;
- (_Bool)setFirstVideoWithMediaId:(id)arg1 startPlayTimeIfCan:(unsigned long long)arg2;
- (_Bool)setFirstVideoWithMediaId:(id)arg1 preloadFinishTimeIfCan:(unsigned long long)arg2;
- (_Bool)setFirstVideoWithMediaId:(id)arg1 preloadStartTimeIfCan:(unsigned long long)arg2;
- (_Bool)setFirstVideoMediaIdIfCan:(id)arg1;
- (_Bool)setShowUIFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setLocalOperationFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setPullCGIFinishTimeIfCan:(unsigned long long)arg1;
- (_Bool)setPullHistoryCGITimeIfCan:(unsigned long long)arg1;
- (_Bool)setPullStreamCGITimeIfCan:(unsigned long long)arg1;
- (_Bool)setEnterTimestampIfCan:(unsigned long long)arg1;
- (_Bool)setFinishSceneIfCan:(unsigned long long)arg1;
- (_Bool)setStartSceneIfCan:(long long)arg1;
- (unsigned long long)dataHandleTime;
- (unsigned long long)preloadTime;
- (unsigned long long)showUITime;
- (unsigned long long)localOperationTime;
- (_Bool)setDebugMessageIfCan:(id)arg1;
- (unsigned long long)pullCGITime;
- (unsigned long long)globalInitTime;
- (void)clear;
- (_Bool)isReadyForReporting;
- (id)genFluencyInfo;

@end
