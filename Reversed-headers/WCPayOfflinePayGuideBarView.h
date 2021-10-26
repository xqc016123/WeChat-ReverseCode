//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MMUILabel, UIButton, WCPayOfflinePayGuideBar, WCPayWebImageView;
@protocol WCPayOfflinePayGuideBarViewDelegate;

@interface WCPayOfflinePayGuideBarView : UIView
{
    WCPayOfflinePayGuideBar *_viewData;
    id <WCPayOfflinePayGuideBarViewDelegate> _delegate;
    WCPayWebImageView *_logoImgView;
    MMUILabel *_contentLabel;
    UIButton *_clickBtn;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *clickBtn; // @synthesize clickBtn=_clickBtn;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) WCPayWebImageView *logoImgView; // @synthesize logoImgView=_logoImgView;
@property(nonatomic) __weak id <WCPayOfflinePayGuideBarViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WCPayOfflinePayGuideBar *viewData; // @synthesize viewData=_viewData;
- (void)onBtnClick;
- (void)setupContentView;
- (id)initWithContiainerWidth:(double)arg1 delegate:(id)arg2 viewData:(id)arg3;

@end
