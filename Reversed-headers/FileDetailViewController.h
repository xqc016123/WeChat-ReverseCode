//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FileDetailLogicDelegate-Protocol.h"
#import "FullScreenGestureDelegate-Protocol.h"
#import "MMCircleProgressViewDelegate-Protocol.h"
#import "MinimizationTransitionControllerDelegate-Protocol.h"
#import "UIDocumentInteractionControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WKNavigationDelegate-Protocol.h"

@class FileDetailLogicController, ImageScrollView, MMCircleProgressView, MMLoadingIndicatorView, MMUILabel, MiniRecTransitionController, NSMutableArray, NSMutableSet, NSString, NSURL, ShareDataToOpenSDKController, UIButton, UIImageView, UIScrollView, UITapGestureRecognizer, UIViewController, WCActionSheet, WKWebView, WXFullScreenGestureRecognizer;
@protocol FileDetailCustomizedPreviewController;

@interface FileDetailViewController : MMUIViewController <WCActionSheetDelegate, FileDetailLogicDelegate, UIDocumentInteractionControllerDelegate, UIScrollViewDelegate, UIGestureRecognizerDelegate, WKNavigationDelegate, MMCircleProgressViewDelegate, MinimizationTransitionControllerDelegate, FullScreenGestureDelegate>
{
    FileDetailLogicController *m_logicController;
    _Bool m_bDownloading;
    _Bool m_bIsDelayingDownload;
    _Bool m_bFailDownload;
    UIScrollView *m_containerView;
    NSMutableArray *m_viewArray;
    NSMutableArray *m_defaultYArray;
    NSMutableSet *m_viewSet;
    UIButton *m_btnDownload;
    MMUILabel *m_labCannotOpen;
    UIButton *m_btnViewDetail;
    UIButton *m_btnOpenByApp;
    UIButton *m_btnOpenByWeApp;
    MMUILabel *m_labelFileName;
    MMUILabel *m_sizeLabel;
    MMUILabel *m_infoLabel;
    MMUILabel *m_warningLabel;
    MMUILabel *m_stateLabel;
    UIButton *m_cancelBtn;
    UIImageView *m_downloadTriggerView;
    MMCircleProgressView *m_circleProgressView;
    _Bool m_bPreview;
    unsigned int m_uiPreviewType;
    _Bool m_vcDisappear;
    _Bool m_bOpenMode;
    WCActionSheet *m_actionSheet;
    ShareDataToOpenSDKController *m_shareOpenSDKController;
    WKWebView *m_webView;
    UIViewController<FileDetailCustomizedPreviewController> *m_customizedPreviewController;
    _Bool _bIsNaviBarHide;
    UITapGestureRecognizer *_singleTapRec;
    _Bool _bIsDisableTapRec;
    struct CGPoint m_lastContentOffset;
    UIButton *m_shareToFriendBtn;
    unsigned long long _startDownloadTime;
    unsigned long long _enterTime;
    unsigned long long _quitTime;
    unsigned long long _finishDownloadTime;
    NSURL *m_tmpLinkDestURL;
    WXFullScreenGestureRecognizer *m_gesture;
    _Bool m_showInfoOnly;
    _Bool _navigationBarVisibleInteractionEnabled;
    _Bool _isPlayingAudio;
    _Bool _viewDidScrollWhenTapping;
    _Bool _hasAddHistory;
    CDUnknownBlockType _downloadStartReportBlock;
    CDUnknownBlockType _downloadSuccessReportBlock;
    unsigned long long _minimizeGenerateType;
    double _yOffsetAdjustFactor;
    ImageScrollView *_imgPreview;
    MMLoadingIndicatorView *_loadingIndicatorView;
    MiniRecTransitionController *_minimizationTransitionController;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MiniRecTransitionController *minimizationTransitionController; // @synthesize minimizationTransitionController=_minimizationTransitionController;
@property(retain, nonatomic) MMLoadingIndicatorView *loadingIndicatorView; // @synthesize loadingIndicatorView=_loadingIndicatorView;
@property(nonatomic) _Bool hasAddHistory; // @synthesize hasAddHistory=_hasAddHistory;
@property(retain, nonatomic) ImageScrollView *imgPreview; // @synthesize imgPreview=_imgPreview;
@property(nonatomic) double yOffsetAdjustFactor; // @synthesize yOffsetAdjustFactor=_yOffsetAdjustFactor;
@property(nonatomic) _Bool viewDidScrollWhenTapping; // @synthesize viewDidScrollWhenTapping=_viewDidScrollWhenTapping;
@property(nonatomic) _Bool isPlayingAudio; // @synthesize isPlayingAudio=_isPlayingAudio;
@property(nonatomic) unsigned long long minimizeGenerateType; // @synthesize minimizeGenerateType=_minimizeGenerateType;
@property(copy, nonatomic) CDUnknownBlockType downloadSuccessReportBlock; // @synthesize downloadSuccessReportBlock=_downloadSuccessReportBlock;
@property(copy, nonatomic) CDUnknownBlockType downloadStartReportBlock; // @synthesize downloadStartReportBlock=_downloadStartReportBlock;
@property(nonatomic) _Bool navigationBarVisibleInteractionEnabled; // @synthesize navigationBarVisibleInteractionEnabled=_navigationBarVisibleInteractionEnabled;
@property(nonatomic) _Bool m_bOpenMode; // @synthesize m_bOpenMode;
@property(nonatomic) _Bool m_showInfoOnly; // @synthesize m_showInfoOnly;
- (void)didMoveToNewScene:(id)arg1;
- (void)updateAppMsgState:(id)arg1 andState:(unsigned int)arg2;
- (void)genCurrentContentSnapshot:(CDUnknownBlockType)arg1;
- (void)tryUpdateTaskSnapShot;
- (void)relayoutImageContent;
- (void)reloadPDFContent;
- (void)onFullScreenSingleTap;
- (id)minimizationInteractivePopGetPendingTaskContextWithGenerateType:(unsigned long long)arg1;
- (_Bool)minimizationInteractivePopGestureRecognizerShouldBegin;
- (id)minimizationTaskData;
- (void)minimizationInteractivePopToMinimizeTask:(_Bool)arg1;
- (void)minimizationInteractivePopGestureRecognizerDidBegin;
- (id)mmNavigationController:(id)arg1 interactionControllerForAnimationController:(id)arg2;
- (id)mmNavigationController:(id)arg1 animationControllerForOperation:(long long)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (void)installMinimizationTransitionController;
- (void)removeTaskHistory;
- (void)addToTaskHistory;
- (_Bool)isMinimizeEnable;
- (void)reloadWhenMaximize;
- (void)updateToMinimize;
- (void)addToMinimize;
- (_Bool)tryAddToMinimize;
- (void)circleProgressViewDidTapped:(id)arg1;
- (void)webViewWebContentProcessDidTerminate:(id)arg1;
- (void)webView:(id)arg1 didFailNavigation:(id)arg2 withError:(id)arg3;
- (void)webView:(id)arg1 didFinishNavigation:(id)arg2;
- (void)webView:(id)arg1 didCommitNavigation:(id)arg2;
- (void)setImageScrollView:(id)arg1;
- (id)getCurrentViewController;
- (void)onCanShareToFriendByButton;
- (void)onRevoked;
- (void)onDownloadFilePartLen:(unsigned int)arg1 TotalLen:(unsigned long long)arg2;
- (void)onDownloadFileSuccess;
- (void)setFileFailText:(id)arg1;
- (void)onDownloadFileFailWithHint:(id)arg1;
- (void)initShareToFriendBtn;
- (void)onSingleTap:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)restorePdfContentOffset;
- (void)resetPdfViewFrame;
- (_Bool)hasPdfView;
- (void)setNaviBarHide:(_Bool)arg1 animation:(_Bool)arg2;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)actionSheet:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)removeCustomizedPreviewControllerIfNeeded;
- (id)customizedPreviewControllerForPreviewType:(unsigned int)arg1;
@property(readonly, nonatomic) UIViewController<FileDetailCustomizedPreviewController> *currentCustomizedPreviewController;
- (unsigned int)currentPreviewType;
- (id)getFavoritesItemData;
- (_Bool)isVideoCanPlay;
- (_Bool)isPreviewTypeVideo;
- (id)getRightBarButtonItem;
- (_Bool)isPreviewTypeAudio;
- (_Bool)isOnMinimizeState;
- (id)minimizeKey;
- (void)SetProgressPartLen:(unsigned long long)arg1 TotalLen:(unsigned long long)arg2;
- (void)HiddenIndicatorView;
- (void)ShowIndicatorView;
- (void)ShowProgressView;
- (void)ShowDownloadBtn:(id)arg1;
- (void)ShowDownloadBtn;
- (void)StopDownloadAndUpdateView;
- (void)StopDownload;
- (void)StartDownload:(id)arg1;
- (_Bool)isExceptionFileName:(id)arg1;
- (void)onSwitchScene:(id)arg1;
- (void)onRevokedReturn;
- (void)OnReturn;
- (void)OnOperate:(id)arg1;
- (_Bool)checkContinueDownloadForAppMsg;
- (void)InitDownload:(_Bool)arg1;
- (void)InitDownload;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidTransitionToNewSize;
- (unsigned long long)supportedInterfaceOrientations;
- (void)OnLookDetail;
- (void)InitLoadingIndicatorView;
- (void)InitCircleProgressView;
- (void)initCannotOpenLabelIfNeeded;
- (void)initSizeLabel;
- (void)initOpenWeAppButton;
- (void)InitInfoiew;
- (void)didLoadWebView;
- (void)didInitPreview;
- (void)InitPreview;
- (void)updateWebScrollViewInset;
@property(readonly, nonatomic) WKWebView *webView;
- (void)updateViewsInBottomTopEdge:(double)arg1;
- (void)recordView:(id)arg1;
- (void)layoutMyViews;
- (void)viewDidBePushed:(_Bool)arg1;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (id)generateExpiredText;
- (void)onCancelButtonClicked;
- (void)initCancelButton;
- (void)updateStateLabel:(id)arg1;
- (void)initStateLable;
- (void)updateWaringLabel:(id)arg1;
- (void)initWaringLabel;
- (void)initInfoLabel;
- (void)updateNavBarItems;
- (void)didBecomeActive;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)SetDownloadHide:(_Bool)arg1;
- (void)SetProgressHide:(_Bool)arg1;
- (id)GetFileDisplayName;
- (void)dealloc;
- (_Bool)isAudioPlaying;
- (void)pushSelfInNav:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) FileDetailLogicController *logicController;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
