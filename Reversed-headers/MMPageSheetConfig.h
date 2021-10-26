//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont, UIImage, UIScrollView, UIView;
@protocol MMPageSheetBottomViewDelegate, MMPageSheetConfigDelegate, MMPageSheetGestureRecognizerDelegate;

@interface MMPageSheetConfig : NSObject
{
    _Bool _enableDragToClose;
    _Bool _isAllowTapBgMaskToClose;
    _Bool _hideBgMask;
    _Bool _transferTouchEventInBgMask;
    _Bool _backgroundBlur;
    _Bool _autoAdjustAtKeyboardChange;
    _Bool _hideBottomWhenShowingKeyboard;
    _Bool _showFromRightToLeftAtLandscape;
    _Bool _showFromRightToLeftAtPortrait;
    _Bool _enableEdgeSlideToClose;
    _Bool _recognizeHorizontalWhenDragToClose;
    _Bool _navHidden;
    _Bool _showCloseButton;
    _Bool _preferredCenterTitleAlignment;
    _Bool _isConfirmButtonDisable;
    UIColor *_maskBackgroundColor;
    UIColor *_contentBackgroundColor;
    UIView *_customBackgroundView;
    UIScrollView *_dragToCloseInstallScrollView;
    NSString *_title;
    UIColor *_titleColor;
    UIFont *_titleFont;
    NSString *_subTitle;
    UIColor *_subTitleColor;
    UIFont *_subTitleFont;
    UIImage *_headIconImage;
    UIView *_titleView;
    UIView *_navLeftButton;
    UIView *_navRightButton;
    UIColor *_navButtonTintColor;
    UIColor *_navBarBackgroundColor;
    long long _bottomType;
    id <MMPageSheetBottomViewDelegate> _bottomViewDelegate;
    id <MMPageSheetGestureRecognizerDelegate> _pageSheetGestureRecognizerDelegate;
    id <MMPageSheetConfigDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMPageSheetConfigDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMPageSheetGestureRecognizerDelegate> pageSheetGestureRecognizerDelegate; // @synthesize pageSheetGestureRecognizerDelegate=_pageSheetGestureRecognizerDelegate;
@property(nonatomic) _Bool isConfirmButtonDisable; // @synthesize isConfirmButtonDisable=_isConfirmButtonDisable;
@property(nonatomic) __weak id <MMPageSheetBottomViewDelegate> bottomViewDelegate; // @synthesize bottomViewDelegate=_bottomViewDelegate;
@property(nonatomic) long long bottomType; // @synthesize bottomType=_bottomType;
@property(retain, nonatomic) UIColor *navBarBackgroundColor; // @synthesize navBarBackgroundColor=_navBarBackgroundColor;
@property(nonatomic) _Bool preferredCenterTitleAlignment; // @synthesize preferredCenterTitleAlignment=_preferredCenterTitleAlignment;
@property(retain, nonatomic) UIColor *navButtonTintColor; // @synthesize navButtonTintColor=_navButtonTintColor;
@property(retain, nonatomic) UIView *navRightButton; // @synthesize navRightButton=_navRightButton;
@property(retain, nonatomic) UIView *navLeftButton; // @synthesize navLeftButton=_navLeftButton;
@property(nonatomic) _Bool showCloseButton; // @synthesize showCloseButton=_showCloseButton;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIImage *headIconImage; // @synthesize headIconImage=_headIconImage;
@property(retain, nonatomic) UIFont *subTitleFont; // @synthesize subTitleFont=_subTitleFont;
@property(retain, nonatomic) UIColor *subTitleColor; // @synthesize subTitleColor=_subTitleColor;
@property(retain, nonatomic) NSString *subTitle; // @synthesize subTitle=_subTitle;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool navHidden; // @synthesize navHidden=_navHidden;
@property(nonatomic) __weak UIScrollView *dragToCloseInstallScrollView; // @synthesize dragToCloseInstallScrollView=_dragToCloseInstallScrollView;
@property(nonatomic) _Bool recognizeHorizontalWhenDragToClose; // @synthesize recognizeHorizontalWhenDragToClose=_recognizeHorizontalWhenDragToClose;
@property(nonatomic) _Bool enableEdgeSlideToClose; // @synthesize enableEdgeSlideToClose=_enableEdgeSlideToClose;
@property(nonatomic) _Bool showFromRightToLeftAtPortrait; // @synthesize showFromRightToLeftAtPortrait=_showFromRightToLeftAtPortrait;
@property(nonatomic) _Bool showFromRightToLeftAtLandscape; // @synthesize showFromRightToLeftAtLandscape=_showFromRightToLeftAtLandscape;
@property(nonatomic) _Bool hideBottomWhenShowingKeyboard; // @synthesize hideBottomWhenShowingKeyboard=_hideBottomWhenShowingKeyboard;
@property(nonatomic) _Bool autoAdjustAtKeyboardChange; // @synthesize autoAdjustAtKeyboardChange=_autoAdjustAtKeyboardChange;
@property(retain, nonatomic) UIView *customBackgroundView; // @synthesize customBackgroundView=_customBackgroundView;
@property(nonatomic) _Bool backgroundBlur; // @synthesize backgroundBlur=_backgroundBlur;
@property(retain, nonatomic) UIColor *contentBackgroundColor; // @synthesize contentBackgroundColor=_contentBackgroundColor;
@property(nonatomic) _Bool transferTouchEventInBgMask; // @synthesize transferTouchEventInBgMask=_transferTouchEventInBgMask;
@property(retain, nonatomic) UIColor *maskBackgroundColor; // @synthesize maskBackgroundColor=_maskBackgroundColor;
@property(nonatomic) _Bool hideBgMask; // @synthesize hideBgMask=_hideBgMask;
@property(nonatomic) _Bool isAllowTapBgMaskToClose; // @synthesize isAllowTapBgMaskToClose=_isAllowTapBgMaskToClose;
- (double)headerHeight;
- (double)footerHeight;
@property(nonatomic) _Bool enableDragToClose; // @synthesize enableDragToClose=_enableDragToClose;
- (double)defaultPageSheetContentWidth;
- (_Bool)shouldUseIPadCenterMode;
- (_Bool)shouldShowFromRightToLeftAtPortrait;
- (_Bool)shouldShowFromRightToLeftAtLandscape;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (_Bool)shouldShowFooter;
- (double)headerHeight:(_Bool)arg1;
- (_Bool)shouldShowHeader:(_Bool)arg1;

@end
