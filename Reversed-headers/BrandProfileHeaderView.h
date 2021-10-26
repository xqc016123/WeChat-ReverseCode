//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class BizProfileV2Resp, BrandLiveStatusButton, BrandProfileRichTextTagView, CContact, MMBrandHeadImageView, MMUIButton, MMUILabel, UIImageView;
@protocol BrandProfileHeaderViewDelegate;

@interface BrandProfileHeaderView : UIView
{
    CContact *_brandContact;
    MMBrandHeadImageView *_brandAvatarView;
    BrandProfileRichTextTagView *_nameLabel;
    MMUIButton *_descButton;
    UIImageView *_arrowView;
    MMUIButton *_focusButton;
    MMUIButton *_enterButton;
    MMUIButton *_unfocusButton;
    MMUILabel *_overviewLabel;
    MMUIButton *_finderButton;
    double _cachedAvatarViewBottom;
    double _cachedHeaderViewHeight;
    BrandLiveStatusButton *_liveButton;
    _Bool _isForceButtonHidden;
    _Bool _isBrandLiving;
    id <BrandProfileHeaderViewDelegate> _delegate;
    BizProfileV2Resp *_cacheItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isBrandLiving; // @synthesize isBrandLiving=_isBrandLiving;
@property(nonatomic) _Bool isForceButtonHidden; // @synthesize isForceButtonHidden=_isForceButtonHidden;
@property(retain, nonatomic) BizProfileV2Resp *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(nonatomic) __weak id <BrandProfileHeaderViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityElements;
- (void)onLiveStatusBtnClicked;
- (id)getOverviewStringWithSeparator:(id)arg1;
- (id)getNameLabelAccessibilityLabel;
- (id)getNameSuffixInfo;
- (void)layoutHeaderViewSubviews;
- (void)layoutSubviews;
- (void)onFinderButtonClicked;
- (void)onFoldButtonClicked;
- (void)onUnfocusButtonClicked;
- (void)onEnterButtonClicked;
- (void)onFocusButtonClicked;
- (void)onPersonalVerifiedLabelClicked;
- (void)onBrandAvatarClicked;
- (void)onHDHeadImageDidDisappear;
- (void)onHDHeadImageWillAppear;
- (double)calcuteHeaderViewHeight;
- (double)calcuteAvatarViewBottom;
- (void)livingStatusUpdate;
- (void)focusButtonTitleUsingFocus;
- (void)focusButtonTitleUsingBindDevice;
- (id)getFocusButton;
- (void)setBrandContact:(id)arg1;
- (void)setupSubviews;
- (id)init;

@end
