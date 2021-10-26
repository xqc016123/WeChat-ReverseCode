//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCLiveBlurButtonBackView.h"

@class UIImageView, UIView;

@interface WCFinderLiveCommentBlurButtonBackView : WCLiveBlurButtonBackView
{
    _Bool _isOpenPivateMsg;
    _Bool _isDisplayPivateMsg;
    UIView *_privateMsgAreaView;
    UIView *_seperateLineView;
    UIImageView *_privateMsgIconView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *privateMsgIconView; // @synthesize privateMsgIconView=_privateMsgIconView;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(retain, nonatomic) UIView *privateMsgAreaView; // @synthesize privateMsgAreaView=_privateMsgAreaView;
@property(nonatomic) _Bool isDisplayPivateMsg; // @synthesize isDisplayPivateMsg=_isDisplayPivateMsg;
@property(nonatomic) _Bool isOpenPivateMsg; // @synthesize isOpenPivateMsg=_isOpenPivateMsg;
- (void)forceLayoutIfNeed;
- (void)updateOpenPivateMsgWithPercent:(double)arg1;
- (void)updateUIForDisplayPrivateMsgChanged;
- (void)updateUIForOpenPrivateMsgChanged;
- (void)layoutPrivateMsgIconView;
- (void)layoutSeperateLineView;
- (void)layoutPrivateMsgAreaView;
- (void)layoutUI;

@end
