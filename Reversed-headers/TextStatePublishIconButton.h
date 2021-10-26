//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class MMUILabel, MMWebImageView, NSString, UIImageView;
@protocol TextStateIcon;

@interface TextStatePublishIconButton : UIControl
{
    id <TextStateIcon> _iconWrap;
    NSString *_customIconDescription;
    MMWebImageView *_iconImageView;
    MMUILabel *_iconDescriptionLabel;
    UIImageView *_arrowImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
@property(retain, nonatomic) MMUILabel *iconDescriptionLabel; // @synthesize iconDescriptionLabel=_iconDescriptionLabel;
@property(retain, nonatomic) MMWebImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) NSString *customIconDescription; // @synthesize customIconDescription=_customIconDescription;
@property(retain, nonatomic) id <TextStateIcon> iconWrap; // @synthesize iconWrap=_iconWrap;
- (void)refreshIconDescriptionLabel;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)initSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setIconWrap:(id)arg1 sourceName:(id)arg2;

@end
