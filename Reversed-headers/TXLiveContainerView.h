//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface TXLiveContainerView : UIView
{
    _Bool _audioOnlyMode;
    UIView *_liveView;
    UIImageView *_snapshotImageView;
    UIImageView *_audioOnlyBGView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *audioOnlyBGView; // @synthesize audioOnlyBGView=_audioOnlyBGView;
@property(nonatomic) _Bool audioOnlyMode; // @synthesize audioOnlyMode=_audioOnlyMode;
@property(retain, nonatomic) UIImageView *snapshotImageView; // @synthesize snapshotImageView=_snapshotImageView;
@property(retain, nonatomic) UIView *liveView; // @synthesize liveView=_liveView;
- (void)updateSnapshot;
- (void)setFrame:(struct CGRect)arg1;
- (void)removeFromSuperview;
- (id)initWithFrame:(struct CGRect)arg1;

@end
