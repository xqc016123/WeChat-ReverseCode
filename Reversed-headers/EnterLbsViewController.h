//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "FriendAsistSessionExt-Protocol.h"

@class MMSayHelloButton, UIButton, UILabel;

@interface EnterLbsViewController : MMUIViewController <FriendAsistSessionExt>
{
    UIButton *m_btnLbs;
    MMSayHelloButton *m_btnSayHello;
    UILabel *m_labNoHello;
}

- (void).cxx_destruct;
- (void)onFriendAssistUnreadCountChanged;
- (void)UpdateView;
- (void)OnOpenLbs;
- (void)OnOpenSayHello;
- (_Bool)shouldInteractivePop;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)initView;
- (void)initData;

@end
