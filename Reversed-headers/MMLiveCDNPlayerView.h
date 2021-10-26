//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ILiveTaskMgrExt-Protocol.h"
#import "MMFinderLiveCDNPlayerMicLogicDelegate-Protocol.h"
#import "MMLiveCDNPlayerItemDelegate-Protocol.h"
#import "MMLiveMorphTransitionExt-Protocol.h"
#import "WCFinderFeedImageCDNViewDelegate-Protocol.h"

@class MMFinderLiveCDNPlayerMicLogic, MMFinderLiveCDNPlayerMicUserInfoView, MMLiveCDNPlayerItem, MMWebImageView, NSString, UIImageView, WCFinderAnimationLoadingView, WCFinderDataItem, WCFinderFeedImageCDNView;
@protocol MMLiveCDNPlayerViewDelegate;

@interface MMLiveCDNPlayerView : UIView <MMLiveCDNPlayerItemDelegate, WCFinderFeedImageCDNViewDelegate, ILiveTaskMgrExt, MMFinderLiveCDNPlayerMicLogicDelegate, MMLiveMorphTransitionExt>
{
    _Bool _hiddenLoading;
    _Bool _needBlurEffect;
    _Bool _hiddenVideo;
    _Bool _isOuterMuted;
    _Bool _isUsingPreloadPlayerItem;
    _Bool _isMuted;
    _Bool _isPlayerLoading;
    _Bool _isRemoteH;
    _Bool _isAudioMode;
    _Bool _isScreenSharing;
    _Bool _isMorphTransforming;
    id <MMLiveCDNPlayerViewDelegate> _delegate;
    NSString *_url;
    WCFinderDataItem *_finderDataItem;
    WCFinderAnimationLoadingView *_loadingView;
    MMLiveCDNPlayerItem *_cdnPlayerItem;
    UIImageView *_backgroundBlurView;
    WCFinderFeedImageCDNView *_coverView;
    unsigned long long _feedScreenStyle;
    long long _renderMode;
    UIView *_micUserContainerView;
    UIImageView *_coverViewInMicMode;
    MMWebImageView *_connectMicOtherAnchorCoverView;
    MMFinderLiveCDNPlayerMicUserInfoView *_micUserInfoView;
    MMFinderLiveCDNPlayerMicLogic *_micLogic;
    struct CGSize _videoSize;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isMorphTransforming; // @synthesize isMorphTransforming=_isMorphTransforming;
@property(retain, nonatomic) MMFinderLiveCDNPlayerMicLogic *micLogic; // @synthesize micLogic=_micLogic;
@property(retain, nonatomic) MMFinderLiveCDNPlayerMicUserInfoView *micUserInfoView; // @synthesize micUserInfoView=_micUserInfoView;
@property(retain, nonatomic) MMWebImageView *connectMicOtherAnchorCoverView; // @synthesize connectMicOtherAnchorCoverView=_connectMicOtherAnchorCoverView;
@property(retain, nonatomic) UIImageView *coverViewInMicMode; // @synthesize coverViewInMicMode=_coverViewInMicMode;
@property(retain, nonatomic) UIView *micUserContainerView; // @synthesize micUserContainerView=_micUserContainerView;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) long long renderMode; // @synthesize renderMode=_renderMode;
@property(nonatomic) unsigned long long feedScreenStyle; // @synthesize feedScreenStyle=_feedScreenStyle;
@property(retain, nonatomic) WCFinderFeedImageCDNView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) UIImageView *backgroundBlurView; // @synthesize backgroundBlurView=_backgroundBlurView;
@property(nonatomic) _Bool isScreenSharing; // @synthesize isScreenSharing=_isScreenSharing;
@property(nonatomic) _Bool isAudioMode; // @synthesize isAudioMode=_isAudioMode;
@property(nonatomic) _Bool isRemoteH; // @synthesize isRemoteH=_isRemoteH;
@property(nonatomic) _Bool isPlayerLoading; // @synthesize isPlayerLoading=_isPlayerLoading;
@property(nonatomic) _Bool isMuted; // @synthesize isMuted=_isMuted;
@property(retain, nonatomic) MMLiveCDNPlayerItem *cdnPlayerItem; // @synthesize cdnPlayerItem=_cdnPlayerItem;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) WCFinderDataItem *finderDataItem; // @synthesize finderDataItem=_finderDataItem;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) __weak id <MMLiveCDNPlayerViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isUsingPreloadPlayerItem; // @synthesize isUsingPreloadPlayerItem=_isUsingPreloadPlayerItem;
@property(nonatomic) _Bool isOuterMuted; // @synthesize isOuterMuted=_isOuterMuted;
@property(nonatomic) _Bool hiddenVideo; // @synthesize hiddenVideo=_hiddenVideo;
@property(nonatomic) _Bool needBlurEffect; // @synthesize needBlurEffect=_needBlurEffect;
@property(nonatomic) _Bool hiddenLoading; // @synthesize hiddenLoading=_hiddenLoading;
- (void)transitionCanceled;
- (void)transitionStartedWithDuration:(double)arg1;
- (void)onFinderLiveCDNPlayerMicLogicMicUsersListUpdated;
- (void)updatePlayerMuted;
- (void)onMMLiveFinishedForNotifyOuter;
- (void)onMMLiveStartForNotifyOuter;
- (void)onMMLiveCDNPlayerItemWillChangeDelegate;
- (void)onNetStatus:(id)arg1;
- (void)onPlayEvent:(int)arg1 withParam:(id)arg2;
- (void)finderFeedImageLoadFinish;
- (void)updateSeiMsg:(id)arg1;
- (void)updatePlaySize:(struct CGSize)arg1;
- (void)hiddenLoadingView;
- (void)showLoadingView;
- (void)prepareForMorphTransition;
- (void)updateLoadingViewToCenter;
- (_Bool)isAlreadyConfigured;
- (void)updateImageWithMediaWrap:(id)arg1 downloadFlag:(unsigned long long)arg2 isPriority:(_Bool)arg3;
- (void)showLive;
- (void)showCover;
- (void)tryHideAudioModeImageThumb;
- (void)tryShowAudioModeImageThumb;
- (_Bool)isPlaying;
- (void)removeCoverImage;
- (void)setMute:(_Bool)arg1;
- (void)pause;
- (void)resume;
- (void)checkAndRemovePlayerItem;
- (void)stopPlayByUserTapped:(_Bool)arg1 markIsFullScreenPlaying:(_Bool)arg2;
- (void)stopPlayByUserTapped:(_Bool)arg1;
- (void)stopPlay;
- (_Bool)checkPlayerItemAndNotifyStartPlayEvent;
- (void)applyCdnPlayerItem;
- (void)realStartPlay;
- (void)silentPreloadPlayWithUrl:(id)arg1 finderDataItem:(id)arg2 andDelayStopTime:(double)arg3;
- (void)startPlayWithUrl:(id)arg1 andFinderDataItem:(id)arg2;
- (void)updateConnectMicOtherAnchorCoverViewAppearance:(_Bool)arg1;
- (void)updateCoverViewInMicModeAppearance;
- (void)layoutAllMicViews;
- (void)reconfigureAllMicViews;
- (void)configAllMicViews;
- (void)checkAndInitLoadingView;
- (void)updateCoverViewBlurStateFeedScreenStyle:(unsigned long long)arg1;
- (void)checkAndInitCoverImageView;
- (void)checkAndInitBackgroundBlurView;
- (void)layoutUI;
- (void)setFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)hideAllMicViews;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 andDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
