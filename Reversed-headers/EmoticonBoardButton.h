//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EmoticonViewWithPreview.h"

@class MMBadgeView, UIImage, UIImageView;

@interface EmoticonBoardButton : EmoticonViewWithPreview
{
    MMBadgeView *m_badgeView;
    UIImageView *m_effectView;
    UIImage *m_buttonImage;
    unsigned long long m_type;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long type; // @synthesize type=m_type;
@property(retain, nonatomic) UIImage *buttonImage; // @synthesize buttonImage=m_buttonImage;
- (void)hideNewYearEffect;
- (void)showNewYearEffect;
- (void)updateAccessibilityLabelWithDes:(id)arg1;
- (void)updateDesc;
- (void)configBadgeWithNeedShowNew:(_Bool)arg1;
- (void)hidePreview;
- (void)hideFocusView;
- (void)showFocusView;
- (void)showPreview;
- (void)initView;

@end
