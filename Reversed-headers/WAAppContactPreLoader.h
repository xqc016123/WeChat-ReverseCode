//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "WAAppTaskVersionFallBackExt-Protocol.h"

@class NSString, WAAppOpenParameter, WAAppTaskExtInfo, WAAppTaskHandlerWrapper, WAAppTrialInfoLoader;

@interface WAAppContactPreLoader : MMUserService <WAAppTaskVersionFallBackExt, MMServiceProtocol>
{
    WAAppTaskHandlerWrapper *m_handlerWrapper;
    WAAppOpenParameter *m_openInfo;
    WAAppTaskExtInfo *m_taskExtInfo;
    WAAppTrialInfoLoader *m_trialInfoLoader;
}

- (void).cxx_destruct;
- (void)reportFallbackToLocalContact:(id)arg1;
- (void)onTaskVersionFallBackTickWithUsername:(id)arg1 appid:(id)arg2;
- (void)callGetContactFailHandler;
- (void)callGetContactSuccHandler;
- (_Bool)checkContactShouldBeBlockedInLimitedModeForMinimize:(id)arg1;
- (void)checkContactShouldBeBlockedInLimitedMode:(id)arg1;
- (void)showLoadErrViewControlelrWithTitle:(id)arg1 content:(id)arg2 onNav:(id)arg3;
- (void)showErrTipsViewControllerWithTitle:(id)arg1 content:(id)arg2;
- (void)openErrWebViewControllerWithUrl:(id)arg1 navigationController:(id)arg2;
- (void)showOverSeaForbbidenWebView;
- (void)showDeviceForbbidenWebView;
- (id)queryParamDictFromFullUrl:(id)arg1;
- (void)registOpenAppStatInfo:(id)arg1;
- (id)topNavOnMainWindow;
- (void)initTaskExtInfoIfNeed:(id)arg1;
- (void)dealloc;
- (void)clearState;
- (void)cancelReqeustInfo;
- (void)finalyOpenAppWithContact:(id)arg1;
- (void)checkAndTriggerPreCheckCacheVersionIfNeeded:(id)arg1;
- (void)enterRDMModeWeApp:(id)arg1;
- (void)enterDevelopModeWeApp:(id)arg1;
- (void)enterAppWithContact:(id)arg1;
- (void)checkContactValidAndEnterApp:(id)arg1;
- (void)firstLoadWeAppContact;
- (_Bool)isPagePathInvalid:(id)arg1;
- (_Bool)isPkgExistForContact:(id)arg1;
- (_Bool)isContactExpired:(id)arg1;
- (_Bool)isNeedSyncUpdateContact:(id)arg1 getReason:(unsigned long long *)arg2;
- (_Bool)checkTaskShouldReOpenedAndDoReport:(id)arg1;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)reOpenApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 handlerWrapper:(id)arg3;
- (void)openApp:(id)arg1 taskExtInfo:(id)arg2 onSuccess:(CDUnknownBlockType)arg3 onFailed:(CDUnknownBlockType)arg4;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(_Bool)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 extraParams:(id)arg8 onSuccess:(CDUnknownBlockType)arg9 onFailed:(CDUnknownBlockType)arg10;
- (void)openAppWithMPLinkString:(id)arg1 forbidAlert:(_Bool)arg2 fromScene:(unsigned long long)arg3 sceneNote:(id)arg4 preScene:(unsigned long long)arg5 preSceneNote:(id)arg6 chatType:(unsigned long long)arg7 onSuccess:(CDUnknownBlockType)arg8 onFailed:(CDUnknownBlockType)arg9;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 chatType:(unsigned long long)arg6 onSuccess:(CDUnknownBlockType)arg7 onFailed:(CDUnknownBlockType)arg8;
- (void)openAppWithMPLinkString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 preScene:(unsigned long long)arg4 preSceneNote:(id)arg5 onSuccess:(CDUnknownBlockType)arg6 onFailed:(CDUnknownBlockType)arg7;
- (void)openAppWithJSONString:(id)arg1 fromScene:(unsigned long long)arg2 sceneNote:(id)arg3 brandAppId:(id)arg4;
- (void)openDebugAppFromQRCdoe:(id)arg1 fromScene:(unsigned long long)arg2 Params:(id)arg3 UserName:(id)arg4 OpenInfo:(id)arg5 handlerWrapper:(id)arg6;
- (_Bool)checkIfNeedBandJumpAppFromLongPressCode:(id)arg1 ToAppServiceType:(unsigned int)arg2;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 FromWeAppAppid:(id)arg5 FromViwController:(id)arg6 extraParams:(id)arg7 handlerWrapper:(id)arg8;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 FromWeAppAppid:(id)arg5 FromViwController:(id)arg6 handlerWrapper:(id)arg7;
- (void)openAppWithQRFullUrl:(id)arg1 fromScene:(unsigned long long)arg2 preScene:(unsigned long long)arg3 preSceneNote:(id)arg4 onSuccess:(CDUnknownBlockType)arg5 onFailed:(CDUnknownBlockType)arg6;
- (void)onServiceClearData;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
