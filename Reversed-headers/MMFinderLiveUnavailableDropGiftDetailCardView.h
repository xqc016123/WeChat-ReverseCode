//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveDetailCardView.h"

@class MMUILabel, UIColor, UIFont;

@interface MMFinderLiveUnavailableDropGiftDetailCardView : MMFinderLiveDetailCardView
{
    MMUILabel *_titleLabel;
    UIFont *_titleFont;
    UIColor *_titleColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor=_titleColor;
@property(retain, nonatomic) UIFont *titleFont; // @synthesize titleFont=_titleFont;
@property(retain, nonatomic) MMUILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (void)refreshLayout;
- (void)updateViewModel:(id)arg1;
- (void)layoutSubviews;
- (void)setup;

@end
