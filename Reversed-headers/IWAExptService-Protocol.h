//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol IWAExptService <NSObject>
+ (_Bool)shouldCloseAdDeviceInfoReport;
+ (_Bool)shouldEnableScrollViewEnhancement;
+ (_Bool)canShowShareTimelineItem:(_Bool)arg1;
+ (NSString *)checkVideoContentTypeArr;
+ (NSString *)checkVideoContentTypeTimeOut;
+ (NSString *)checkVideoContentTypeSwitch;
+ (double)videlPlayBufferTime;
+ (_Bool)isOpenLaunchTimeAxisKV;
+ (_Bool)isWeAppShouldShowLiveAppMenu;
+ (_Bool)isWeAppUsePkgEncrypt:(_Bool)arg1;
+ (_Bool)isOpenWeGameGfxRenderMode;
+ (_Bool)isOpenWeAppJSMemoryStat;
+ (_Bool)isOpenLaunchDownloadInPrecheckerThread;
+ (_Bool)isWeAppUseSkiaCanvas;
+ (_Bool)shouldOpenMiniProgramABTestCheck;
+ (_Bool)shouldOpenIsolatePluginCheck;
+ (_Bool)shouldCloseWeGameMultiSplitPlugin;
+ (_Bool)shouldAllowMultiSplitPluginCode;
+ (_Bool)shouldAllowWeAppSplitPlugin;
+ (_Bool)shouldAllowWeGameSplitPlugin;
+ (_Bool)shouldAllowWeGamePreloadTask;
+ (unsigned int)getWeAppPreloadTaskDegradeType;
+ (_Bool)shouldUseSetCustomAgent;
+ (double)splashADTimeThreshold;
+ (_Bool)isSplashADAllowNoPreload;
+ (_Bool)isSplashADUseWorker;
+ (_Bool)shouldShowSplashAD;
+ (_Bool)shouldShowCommentEntryInMenu;
+ (_Bool)shouldInsertToWebLayer:(long long)arg1;
+ (_Bool)shouldClosePubLibDelayUnpack;
+ (_Bool)shouldCloseSearchEntryInMainList;
+ (_Bool)shouldAllowBatchAttrSyncInMainFrameTaskBar;
+ (_Bool)shouldShowMainFrameTaskBar;
+ (_Bool)shouldShowGameEntryInFTSSearch;
+ (_Bool)shouldShowGameEntryInMainList;
+ (_Bool)shouldReportCommandBufferPerformanceInWeGame;
+ (_Bool)shouldUseCommandBufferInWeGame;
+ (_Bool)shouldReportWebglCmd;
+ (_Bool)shouldOpenWeGameSplashScreen;
+ (_Bool)shouldOpenWeGamePredownload;
+ (_Bool)shouldOpenImageSearchEntry;
+ (_Bool)shouldUseSkiaCanvas;
+ (_Bool)shouldSystemInfoRemoveBlue;
+ (_Bool)shouldUseNewAdapter;

@optional
+ (NSString *)exptValueForExperimentId:(NSString *)arg1;
+ (_Bool)isOpenPluginPermissionBytes;
+ (_Bool)isOpenBatchGetDownloadUrlFallback;
+ (_Bool)isOpenTemplatePgkReuse;
+ (_Bool)isOpenUsrSpaceTrace;
+ (_Bool)isOpenShoppingCartEntry;
+ (_Bool)shouldAllowHandoff:(_Bool)arg1 withGameCheck:(_Bool)arg2 withDeviceType:(unsigned int)arg3 withClientVersion:(unsigned int)arg4;
+ (double)splashADNoPreloadTimeInterval;
+ (double)splashADTimeInterval:(_Bool)arg1;
+ (NSArray *)splashADEnterSceneArray;
+ (_Bool)isOpenMiniTask;
+ (NSString *)weappQRCodePrefix;
+ (_Bool)isOpenWalletPrefetch;
+ (_Bool)isCloseSilentOpen;
+ (_Bool)isOpenCameraScanWxCodePreload;
+ (_Bool)isOpenCdnPreConnect;
+ (_Bool)isOpenMPShortLinkGlobalHighLight;
+ (_Bool)isOpenMPShortLinkMenuEntry;
+ (_Bool)shouldShowWxaOfficialTag;
+ (_Bool)isOpenLocalVersionFallback;
+ (_Bool)isOpenPerformanceIndexReport;
+ (_Bool)isColdLaunchUseWeakLoading;
+ (_Bool)canAddWeAppPageToWCFavorite;
+ (long long)weAppPublicResCacheNum;
+ (long long)weAppPublicResCleanPeriod;
+ (long long)weakNetNotifyInterval;
+ (_Bool)shouldUseWegameHttpDns;
+ (_Bool)shouldUseWegameWxAudio;
+ (_Bool)shouldUseWegameCronetDownload;
+ (_Bool)shouldUseWegameCronetRequest;
@end
