//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMImgageBrowseViewDelegate-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"

@class MMImageBrowseView, NSString, UIImage;
@protocol CommonImageBrowserDelegate;

@interface CommonImageBrowseViewController : MMUIViewController <MMImgageBrowseViewDelegate, WCActionSheetDelegate>
{
    MMImageBrowseView *m_imageView;
    UIImage *m_image;
    id m_singleTapOnNav;
    _Bool m_needDeleteAction;
    _Bool m_needActionSheet;
    id <CommonImageBrowserDelegate> m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CommonImageBrowserDelegate> m_delegate; // @synthesize m_delegate;
@property(nonatomic) _Bool needActionSheet; // @synthesize needActionSheet=m_needActionSheet;
@property(nonatomic) _Bool needDeleteAction; // @synthesize needDeleteAction=m_needDeleteAction;
@property(retain, nonatomic) id m_singleTapOnNav; // @synthesize m_singleTapOnNav;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onSingleTapImageBrowseView;
- (void)onSavedPhotosAlbum:(id)arg1;
- (void)onOperate;
- (void)onSingleTapOnNavigationBar:(id)arg1;
- (void)dealloc;
- (id)initWithImage:(id)arg1;
- (void)willAppear;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initView;
- (void)initImageView;
- (void)initNavigationBar;
- (void)exitFullScreen;
- (void)setFullScreen:(_Bool)arg1;
- (void)removeNvGestureRecognizer;
- (void)addNvGestureRecognizer;
- (void)handleViewWillDisappear;
- (void)handleViewWillAppear;
- (void)showStatusBar;
- (void)hideStatusBar;
- (void)adjustImageViewRect;
- (void)viewWillLayoutSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
