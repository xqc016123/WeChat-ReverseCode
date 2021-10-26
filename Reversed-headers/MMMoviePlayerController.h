//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCDragToCloseViewController.h"

#import "FullScreenGestureDelegate-Protocol.h"
#import "IMsgExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "SessionSelectControllerDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCPlayerConfigDelegate-Protocol.h"
#import "WindowDelegate-Protocol.h"
#import "scrollViewDelegate-Protocol.h"

@class CMessageWrap, MMProgressView, MMScrollView, NSString, NSURL, UIImageView, UILabel, UIView, WCActionSheet, WCPlayerConfigControlView, WCPlayerView, WXFullScreenGestureRecognizer;

@interface MMMoviePlayerController : WCDragToCloseViewController <FullScreenGestureDelegate, UIGestureRecognizerDelegate, WCPlayerConfigDelegate, WCActionSheetDelegate, IMsgExt, scrollViewDelegate, WindowDelegate, SessionSelectControllerDelegate, IMsgRevokeExt>
{
    NSURL *m_url;
    NSString *m_videoPath;
    unsigned int m_uiVideoTime;
    _Bool m_bIsFullScreen;
    _Bool m_bLoadFinished;
    _Bool m_bIsPlaying;
    _Bool m_bRestart;
    UIView *m_loadingView;
    UIImageView *imageView;
    MMProgressView *m_progressView;
    UILabel *m_percentageLabel;
    CMessageWrap *m_msgWrap;
    MMScrollView *m_scrollView;
    UIView *m_maskView;
    struct CGSize m_size;
    _Bool m_isFromFav;
    long long curOrientation;
    double curScreenWith;
    double curScreenHeight;
    _Bool m_bIsStatusBarHidden;
    _Bool m_bSaveMode;
    _Bool m_bDownloadExpired;
    WCActionSheet *m_actionSheet;
    _Bool m_autoRepeat;
    WXFullScreenGestureRecognizer *m_gesture;
    WCPlayerConfigControlView *m_playerControlView;
    _Bool m_disableSave;
    _Bool _m_fromAppMsg;
    _Bool _m_fromFavAppMsg;
    WCPlayerView *m_moviePlayer;
    UIImageView *_thumbImageView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool m_fromFavAppMsg; // @synthesize m_fromFavAppMsg=_m_fromFavAppMsg;
@property(nonatomic) _Bool m_fromAppMsg; // @synthesize m_fromAppMsg=_m_fromAppMsg;
@property(retain, nonatomic) UIImageView *thumbImageView; // @synthesize thumbImageView=_thumbImageView;
@property(nonatomic) _Bool m_disableSave; // @synthesize m_disableSave;
@property(nonatomic) _Bool autoRepeated; // @synthesize autoRepeated=m_autoRepeat;
@property(nonatomic) _Bool m_bSaveMode; // @synthesize m_bSaveMode;
@property(nonatomic) _Bool m_isFromFav; // @synthesize m_isFromFav;
@property(retain, nonatomic) CMessageWrap *m_msgWrap; // @synthesize m_msgWrap;
@property(retain, nonatomic) NSString *m_videoPath; // @synthesize m_videoPath;
@property(retain, nonatomic) WCPlayerView *m_moviePlayer; // @synthesize m_moviePlayer;
@property(copy, nonatomic) NSURL *m_url; // @synthesize m_url;
- (void)onTapSightIconView;
- (void)onPlayToEnd;
- (void)onVideoPause;
- (void)onVideoPlay;
- (void)onFullScreenLongPressEnd;
- (void)onFullScreenBackgroundColorAlphaChange:(double)arg1;
- (void)onFullScreenDragEnd;
- (void)onFullScreenDragCancel;
- (void)onFullScreenDragBegin;
- (void)onFullScreenDragToRect:(struct CGRect)arg1;
- (void)onFullScreenClose;
- (void)onFullScreenSingleTap;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)stopPlaying;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (unsigned long long)supportedInterfaceOrientations;
- (id)createPlayerViewWithUrl:(id)arg1;
- (void)viewWillBeInteractivePoped;
- (void)updateSubViewsRect;
- (void)willAppear;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (id)initWithMsgWrap:(id)arg1 VideoPath:(id)arg2;
- (id)initWithCaptureVideoInfo:(id)arg1;
- (void)OnMsgDownloadVideoExpiredFail:(id)arg1 MsgWrap:(id)arg2;
- (void)OnUpdateVideoStatus:(id)arg1 MsgWrap:(id)arg2;
- (void)OnModMsg:(id)arg1 MsgWrap:(id)arg2;
- (void)InternalUpdateVideo:(id)arg1;
- (void)changePlayerStatus;
- (void)autoPlay;
- (void)viewDidTransitionToNewSize;
- (void)didAppear;
- (void)viewDidLoad;
- (void)initView;
- (void)initVideoPlayerView;
- (void)openPlayer;
- (void)onOperate:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)OnSelectSessionCancel:(id)arg1;
- (void)OnSelectSession:(id)arg1 SessionSelectController:(id)arg2;
- (void)onSave:(id)arg1;
- (void)onReturn:(id)arg1;
- (void)initData;
- (void)systemActived:(id)arg1;
- (void)systemResigned:(id)arg1;
- (void)hideLoadingView;
- (void)showLoadingView;
- (void)initLoadingView;
- (void)handleDownloadFail;
- (void)updateProgress:(unsigned int)arg1;
- (void)startPlayingWithURL:(id)arg1 at:(id)arg2;
- (void)clearPlaying;
- (void)setFullScreen;
- (void)setStandardScreen;
- (void)updateTitle;
- (struct CGPoint)getScrollViewOffsetWhenNavBarShowing;
- (void)hideToolBar:(_Bool)arg1;
- (void)viewWillPresent:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (struct CGRect)getFullscreenRect;
- (struct CGRect)getStandardRect;
- (struct CGRect)getLabelRect;
- (struct CGRect)getImageViewRect;
- (struct CGRect)getImageViewRectFullAndShowBar;
- (struct CGRect)getMaskViewFrameFullAndHideBar;
- (struct CGRect)getMaskViewFrameFullAndShowBar;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
