//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MMFinderLiveChooseClarityDataItem, MMUILabel, UIImageView, UIView;

@interface MMFinderLiveChooseClarityTableViewCell : UITableViewCell
{
    MMFinderLiveChooseClarityDataItem *_lotteryMethodDataItem;
    MMUILabel *_titleLabel;
    MMUILabel *_stateLabel;
    UIImageView *_selectStateImg;
    UIView *_sepelateLine;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(retain, nonatomic) UIView *sepelateLine; // @synthesize sepelateLine=_sepelateLine;
@property(retain, nonatomic) UIImageView *selectStateImg; // @synthesize selectStateImg=_selectStateImg;
@property(retain, nonatomic) MMUILabel *stateLabel; // @synthesize stateLabel=_stateLabel;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) MMFinderLiveChooseClarityDataItem *lotteryMethodDataItem; // @synthesize lotteryMethodDataItem=_lotteryMethodDataItem;
- (void)layoutNormalUI;
- (void)layoutUI;
- (void)createUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
