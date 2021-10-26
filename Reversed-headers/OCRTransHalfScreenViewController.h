//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIHalfScreenViewController.h"

#import "IMMImageDetectOCRServiceExt-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "ZoomingScrollViewDelegate-Protocol.h"

@class MMUIButton, NSString, OCRTransJSHandler, OCRTransPanGestureAnimationElement, OCRTransZoomableScrollView, UIImage, UIImageView, UILabel, UIView, WSTemplateLogicController;
@protocol OCRTransHalfScreenViewControllerDelegate;

@interface OCRTransHalfScreenViewController : MMUIHalfScreenViewController <ZoomingScrollViewDelegate, UIGestureRecognizerDelegate, IMMImageDetectOCRServiceExt>
{
    WSTemplateLogicController *m_logicController;
    OCRTransJSHandler *m_jsHandler;
    _Bool _hasAddObservers;
    _Bool _isBeDismissed;
    _Bool _bInNodifyViewTopChanging;
    unsigned int _notifyViewTopChangeCount;
    _Bool _shouldShowScrollView;
    unsigned int _svrScene;
    unsigned int _reportZoomType;
    UIImage *_sourceImage;
    NSString *_senderUserName;
    double _safeAreaInsetBottom;
    unsigned long long _contextSessionID;
    OCRTransZoomableScrollView *_scrollView;
    UIImageView *_imageView;
    MMUIButton *_crossCloseBtn;
    NSString *_titleBeforeLabelShow;
    UILabel *_titleLabel;
    UIView *_dividingView;
    MMUIButton *_zoomButton;
    NSString *_reqKey;
    OCRTransPanGestureAnimationElement *_animationElement;
    struct CGRect _imageViewMaximizedFrame;
    struct CGRect _imageViewMinimizedFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) OCRTransPanGestureAnimationElement *animationElement; // @synthesize animationElement=_animationElement;
@property(nonatomic) unsigned int reportZoomType; // @synthesize reportZoomType=_reportZoomType;
@property(retain, nonatomic) NSString *reqKey; // @synthesize reqKey=_reqKey;
@property(retain, nonatomic) MMUIButton *zoomButton; // @synthesize zoomButton=_zoomButton;
@property(retain, nonatomic) UIView *dividingView; // @synthesize dividingView=_dividingView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *titleBeforeLabelShow; // @synthesize titleBeforeLabelShow=_titleBeforeLabelShow;
@property(retain, nonatomic) MMUIButton *crossCloseBtn; // @synthesize crossCloseBtn=_crossCloseBtn;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) OCRTransZoomableScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) struct CGRect imageViewMinimizedFrame; // @synthesize imageViewMinimizedFrame=_imageViewMinimizedFrame;
@property(nonatomic) struct CGRect imageViewMaximizedFrame; // @synthesize imageViewMaximizedFrame=_imageViewMaximizedFrame;
@property(nonatomic) unsigned long long contextSessionID; // @synthesize contextSessionID=_contextSessionID;
@property(nonatomic) unsigned int svrScene; // @synthesize svrScene=_svrScene;
@property(nonatomic) _Bool shouldShowScrollView; // @synthesize shouldShowScrollView=_shouldShowScrollView;
@property(nonatomic) double safeAreaInsetBottom; // @synthesize safeAreaInsetBottom=_safeAreaInsetBottom;
@property(retain, nonatomic) NSString *senderUserName; // @synthesize senderUserName=_senderUserName;
@property(retain, nonatomic) UIImage *sourceImage; // @synthesize sourceImage=_sourceImage;
- (void)onImageDetectOCRFinish:(id)arg1 resultType:(unsigned int)arg2 jsonStr:(id)arg3 reqKey:(id)arg4;
- (void)onImageDetectUploadFinish:(unsigned int)arg1 context:(id)arg2 detectMediaInfo:(id)arg3;
- (void)onLongPressGesture:(id)arg1;
- (void)scrollViewDidZoom:(id)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setScrollViewAndImageViewMinimizedFrame;
- (void)setScrollViewAndImageViewMaximizedFrame;
- (_Bool)needCloseOnOrientationChanged;
- (void)notifyContentViewTopChangeEventStartY:(double)arg1 endY:(double)arg2 timeOnce:(double)arg3 repeatCount:(unsigned int)arg4;
- (void)setupAnimateTransitionBlocks;
- (void)onZoomingScrollViewZoomChanged;
- (void)onZoomingScrollViewDoubleTap;
- (void)onZoomButtonClicked;
- (void)doImageOCRZoomTypeReport;
- (void)updateZoomButton;
- (void)setHalfScreenTitle:(id)arg1;
- (void)onSwipClose;
- (void)onCrossCloseBtnClicked;
- (void)handleTopViewTapGesture:(id)arg1;
- (_Bool)hidesStatusBar;
- (void)disableWebViewLongPressGesture;
- (void)resumeBeforePanGesture:(double)arg1;
- (void)handlePanGesture:(id)arg1;
- (void)initView;
- (void)cancelImageUploadAndDetect;
- (void)startImageUploadAndDetect:(id)arg1;
- (id)pathForTestTemplate;
- (void)viewDidBeDismissed:(_Bool)arg1;
- (void)viewWillBeDismissed:(_Bool)arg1;
- (void)viewDidBePresented:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)layoutTopViewSubviews;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <OCRTransHalfScreenViewControllerDelegate> delegate; // @dynamic delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
