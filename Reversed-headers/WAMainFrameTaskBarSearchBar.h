//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIImageView, UILabel;

@interface WAMainFrameTaskBarSearchBar : UIView
{
    NSString *_placeHolder;
    UIView *_backgroundView;
    UIView *_contentView;
    UIImageView *_searchBarImageView;
    UILabel *_searchHintLabel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UILabel *searchHintLabel; // @synthesize searchHintLabel=_searchHintLabel;
@property(retain, nonatomic) UIImageView *searchBarImageView; // @synthesize searchBarImageView=_searchBarImageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(copy, nonatomic) NSString *placeHolder; // @synthesize placeHolder=_placeHolder;
- (void)setSearchBarBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)init;

@end
