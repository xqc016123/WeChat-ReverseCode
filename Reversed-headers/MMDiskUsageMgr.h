//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMDiskUsageRepoterDelegate-Protocol.h"
#import "MMDiskUsageScannerDelegate-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class MMDiskUsageConfigHandler, MMDiskUsageReporter, MMDiskUsageScaner, MMDiskUsageStatus, MMTimer, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface MMDiskUsageMgr : MMUserService <MMDiskUsageScannerDelegate, MMDiskUsageRepoterDelegate, MMServiceProtocol>
{
    _Bool _shouldToScan;
    NSObject<OS_dispatch_queue> *_workQueue;
    MMTimer *_finishScanTimer;
    MMDiskUsageScaner *_scanner;
    MMDiskUsageReporter *_reporter;
    MMDiskUsageConfigHandler *_configHandler;
    MMDiskUsageStatus *_diskUsageStatus;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool shouldToScan; // @synthesize shouldToScan=_shouldToScan;
@property(retain, nonatomic) MMDiskUsageStatus *diskUsageStatus; // @synthesize diskUsageStatus=_diskUsageStatus;
@property(retain, nonatomic) MMDiskUsageConfigHandler *configHandler; // @synthesize configHandler=_configHandler;
@property(retain, nonatomic) MMDiskUsageReporter *reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMDiskUsageScaner *scanner; // @synthesize scanner=_scanner;
@property(retain, nonatomic) MMTimer *finishScanTimer; // @synthesize finishScanTimer=_finishScanTimer;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)onDiskUsageScanCancel;
- (void)onDiskUsageScanFinishedWithScanStat:(id)arg1;
- (void)onDiskUsageScanStart;
- (_Bool)p_shouldFinishScanWithUrgentLevel:(unsigned int)arg1;
- (void)stopScanDisk;
- (void)startFinishScanDiskWithUrgentLevel:(unsigned int)arg1;
- (void)finishScanPhase;
- (void)onReportFinished;
- (_Bool)p_isTimeToReport;
- (void)reportPhase;
- (void)onServiceInit;
- (void)onServiceEnterBackground;
- (void)onServiceTerminate;
- (void)onServiceClearData;
- (void)clearData;
- (void)dealloc;
- (void)asyncGetDiskScanData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
