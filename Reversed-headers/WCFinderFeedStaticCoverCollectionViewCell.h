//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

#import "WCFinderFeedContentVMExt-Protocol.h"
#import "WCFinderFeedStaticCoverContactViewDelegate-Protocol.h"

@class NSString, RichTextView, UILabel, UIPageControl, UIView, WCFinderFeedContentVM, WCFinderFeedMediaWrap, WCFinderFeedStaticCoverContactView, WCFinderFeedStaticCoverView;
@protocol WCFinderFeedStaticCoverCollectionViewCellDelegate;

@interface WCFinderFeedStaticCoverCollectionViewCell : UICollectionViewCell <WCFinderFeedContentVMExt, WCFinderFeedStaticCoverContactViewDelegate>
{
    double _descriptionPadding;
    _Bool _isInDarkMode;
    id <WCFinderFeedStaticCoverCollectionViewCellDelegate> _delegate;
    double _contactPadding;
    NSString *_accessibilityPrefix;
    WCFinderFeedStaticCoverView *_coverView;
    WCFinderFeedStaticCoverContactView *_contactView;
    RichTextView *_descLabel;
    unsigned long long _flag;
    unsigned long long _type;
    WCFinderFeedContentVM *_contentVM;
    WCFinderFeedMediaWrap *_mediaWrap;
    UIPageControl *_pageCtrl;
    UIView *_oMaskView;
    UILabel *_maskTipsLabel;
}

+ (double)cellHeightWith:(id)arg1 width:(double)arg2 flag:(unsigned long long)arg3;
- (void).cxx_destruct;
@property(nonatomic) _Bool isInDarkMode; // @synthesize isInDarkMode=_isInDarkMode;
@property(retain, nonatomic) UILabel *maskTipsLabel; // @synthesize maskTipsLabel=_maskTipsLabel;
@property(retain, nonatomic) UIView *oMaskView; // @synthesize oMaskView=_oMaskView;
@property(retain, nonatomic) UIPageControl *pageCtrl; // @synthesize pageCtrl=_pageCtrl;
@property(retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap; // @synthesize mediaWrap=_mediaWrap;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long flag; // @synthesize flag=_flag;
@property(retain, nonatomic) RichTextView *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WCFinderFeedStaticCoverContactView *contactView; // @synthesize contactView=_contactView;
@property(retain, nonatomic) WCFinderFeedStaticCoverView *coverView; // @synthesize coverView=_coverView;
@property(retain, nonatomic) NSString *accessibilityPrefix; // @synthesize accessibilityPrefix=_accessibilityPrefix;
@property(nonatomic) double descriptionPadding; // @synthesize descriptionPadding=_descriptionPadding;
@property(nonatomic) double contactPadding; // @synthesize contactPadding=_contactPadding;
@property(nonatomic) __weak id <WCFinderFeedStaticCoverCollectionViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onClickPrivateMsgAction;
- (void)switchToDarkMode:(_Bool)arg1;
- (void)startLiveAnimation;
- (void)onFeedLiveOnlineCountChange:(long long)arg1;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onFeedContent:(id)arg1 privateStateChange:(_Bool)arg2;
- (void)onFeedContent:(id)arg1 likedDataChanged:(id)arg2;
- (void)clickContact;
- (void)updateWithCenterStyle;
- (void)adjustMargin;
- (void)setFixedCoverSize:(struct CGSize)arg1;
- (void)updateContentWith:(id)arg1 cellConfig:(id)arg2;
- (double)innerDescLabelPadding;
- (void)initSubviews;
@property(nonatomic) _Bool needCornerRadius;
- (void)prepareForReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
