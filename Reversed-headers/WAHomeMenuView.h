//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCTBaseMenuView.h"

@class MMWebImageView, UILabel, UIView;

@interface WAHomeMenuView : WCTBaseMenuView
{
    MMWebImageView *_leftImageView;
    UILabel *_subTitleLabel;
    MMWebImageView *_rightImageView;
    UIView *_badgeView;
}

+ (double)viewHeightByDataModel:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *badgeView; // @synthesize badgeView=_badgeView;
@property(retain, nonatomic) MMWebImageView *rightImageView; // @synthesize rightImageView=_rightImageView;
@property(retain, nonatomic) UILabel *subTitleLabel; // @synthesize subTitleLabel=_subTitleLabel;
@property(retain, nonatomic) MMWebImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
- (void)loadUI:(id)arg1;
- (void)updateHomeMenuCellUIWithEntranceInfo:(id)arg1;
- (void)updateHomeMenuCellUIWithTipsInfo:(id)arg1;
- (void)setViewDataModel:(id)arg1;
- (id)initWithCell:(id)arg1;

@end
