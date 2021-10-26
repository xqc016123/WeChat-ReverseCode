//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMTableViewCell.h"

@class AttributeLabel, MMUIImageView, MMUILabel, MMWebImageView, UIView;
@protocol FTSWebSearchBaseResultTableViewCellDelegate;

@interface FTSWebSearchBaseResultTableViewCell : MMTableViewCell
{
    UIView *_cardContentView;
    UIView *_titleArea;
    MMUIImageView *_wsLogoView;
    MMUILabel *_wsWordingView;
    MMUILabel *_moreLabel;
    MMUIImageView *_moreArrowView;
    UIView *_gapLine;
    UIView *_infoView;
    AttributeLabel *_titleView;
    AttributeLabel *_subTitleView;
    AttributeLabel *_descView;
    MMWebImageView *_thumbView;
    id <FTSWebSearchBaseResultTableViewCellDelegate> _delegate;
}

+ (_Bool)isDescDoubleLine:(id)arg1;
+ (_Bool)checkLabelDoubleLineWithMaxWidth:(double)arg1 fontSize:(double)arg2 text:(id)arg3;
+ (id)getAttributeText:(id)arg1;
- (void).cxx_destruct;
@property(nonatomic) __weak id <FTSWebSearchBaseResultTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) MMWebImageView *thumbView; // @synthesize thumbView=_thumbView;
@property(retain, nonatomic) AttributeLabel *descView; // @synthesize descView=_descView;
@property(retain, nonatomic) AttributeLabel *subTitleView; // @synthesize subTitleView=_subTitleView;
@property(retain, nonatomic) AttributeLabel *titleView; // @synthesize titleView=_titleView;
@property(retain, nonatomic) UIView *infoView; // @synthesize infoView=_infoView;
@property(retain, nonatomic) UIView *gapLine; // @synthesize gapLine=_gapLine;
@property(retain, nonatomic) MMUIImageView *moreArrowView; // @synthesize moreArrowView=_moreArrowView;
@property(retain, nonatomic) MMUILabel *moreLabel; // @synthesize moreLabel=_moreLabel;
@property(retain, nonatomic) MMUILabel *wsWordingView; // @synthesize wsWordingView=_wsWordingView;
@property(retain, nonatomic) MMUIImageView *wsLogoView; // @synthesize wsLogoView=_wsLogoView;
@property(retain, nonatomic) UIView *titleArea; // @synthesize titleArea=_titleArea;
@property(retain, nonatomic) UIView *cardContentView; // @synthesize cardContentView=_cardContentView;
- (void)triggerClickCardArea:(id)arg1;
- (void)onClickCardArea:(id)arg1;
- (void)triggerClickMoreArea:(id)arg1;
- (void)onClickMoreArea:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addTouchEvent:(SEL)arg1 toView:(id)arg2;
- (void)setLineSpace:(double)arg1 forLabel:(id)arg2;
- (void)updateSubviewWithBaseContent:(id)arg1;
- (void)layoutCardInfoRightArea:(double)arg1 rightMidGap:(double)arg2;
- (void)layoutCardInfoView;
- (void)layoutTitleArea;
- (void)layoutSubviews;
- (id)attachImageViewWithLocalIcon:(id)arg1 toView:(id)arg2;
- (id)attachLabelWithFontSize:(double)arg1 color:(id)arg2 lineBreakMode:(long long)arg3 numberOfLines:(unsigned long long)arg4 toView:(id)arg5;
- (id)attachNormalLabelWithFontSize:(double)arg1 color:(id)arg2 lineBreakMode:(long long)arg3 numberOfLines:(unsigned long long)arg4 toView:(id)arg5;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
