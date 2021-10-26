//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IFavoritesExt-Protocol.h"
#import "IMinimizeTaskDelegateInterface-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"
#import "WCFacadeExt-Protocol.h"

@class NSRecursiveLock, NSString, OrderedDictionary;

@interface WeNoteMinimizeKeeperMgr : MMUserService <IFavoritesExt, IMsgExt, WCFacadeExt, MMServiceProtocol, IMinimizeTaskDelegateInterface>
{
    NSRecursiveLock *_lock;
    OrderedDictionary *_vcDic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OrderedDictionary *vcDic; // @synthesize vcDic=_vcDic;
@property(retain, nonatomic) NSRecursiveLock *lock; // @synthesize lock=_lock;
- (void)onHomepageUpdate:(long long)arg1 withAdded:(id)arg2 andChanged:(id)arg3 andDeleted:(id)arg4 andTip:(id)arg5;
- (void)onDataChangedWithAdded:(id)arg1 andChanged:(id)arg2 andDeleted:(id)arg3;
- (void)OnDelMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)OnDelFavoritesItems:(id)arg1;
- (void)onMemoryWarning:(id)arg1;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;
- (void)onDirectToNoteViewControllerWithMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3 bFromUsedTask:(_Bool)arg4;
- (void)onEnterRecentUsedTask:(id)arg1;
- (_Bool)onRetryAddPendingTaskAfterUserDeleteOneTask:(id)arg1;
- (void)onRemoveMinimizedTask:(id)arg1;
- (id)getLastViewControllerOnLeaveTaskBeforeEnterAnother:(id)arg1;
- (void)presentMinimizeViewController:(id)arg1 key:(id)arg2 openContext:(id)arg3;
- (void)onEnterMinimizedTask:(id)arg1 openContext:(id)arg2 taskEnterScene:(unsigned int)arg3;
- (void)onRecoverTaskData:(id)arg1;
- (id)minimizePendingTaskContextWithTaskBizKey:(id)arg1 generateType:(unsigned long long)arg2 weNoteVC:(id)arg3;
- (void)tryRemoveRecentHistoryForBizKey:(id)arg1;
- (void)tryRemoveMinimizeTaskForBizKey:(id)arg1;
- (void)updateMinimizedViewController:(id)arg1 ofTaskData:(id)arg2;
- (void)minimizeViewController:(id)arg1 ofTaskData:(id)arg2;
- (id)viewControllerForBizTaskKey:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
