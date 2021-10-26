//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMLimitedModeVerifyPasswordUtilLogicDelegate-Protocol.h"
#import "UITextFieldDelegate-Protocol.h"

@class MMLimitedModeVerifyPasswordUtilLogic, MMUIButton, MMUILabel, NSString, UIImageView, WCFinderMaskButton;

@interface WCFinderCheckAntiAddictViewController : MMUIViewController <UITextFieldDelegate, MMLimitedModeVerifyPasswordUtilLogicDelegate>
{
    _Bool _controlExitState;
    UIImageView *_limitedIconImageView;
    MMUILabel *_titleAntiAddictLabel;
    MMUILabel *_descAntiAddictLabel;
    MMUIButton *_checkPwdButton;
    WCFinderMaskButton *_exitButton;
    CDUnknownBlockType _didAppearBlock;
    CDUnknownBlockType _verifySucBlock;
    CDUnknownBlockType _exitBlock;
    long long _antiAddictStyle;
    unsigned long long _enterTime;
    MMLimitedModeVerifyPasswordUtilLogic *_verifyPwdLogic;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool controlExitState; // @synthesize controlExitState=_controlExitState;
@property(retain, nonatomic) MMLimitedModeVerifyPasswordUtilLogic *verifyPwdLogic; // @synthesize verifyPwdLogic=_verifyPwdLogic;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) long long antiAddictStyle; // @synthesize antiAddictStyle=_antiAddictStyle;
@property(copy, nonatomic) CDUnknownBlockType exitBlock; // @synthesize exitBlock=_exitBlock;
@property(copy, nonatomic) CDUnknownBlockType verifySucBlock; // @synthesize verifySucBlock=_verifySucBlock;
@property(copy, nonatomic) CDUnknownBlockType didAppearBlock; // @synthesize didAppearBlock=_didAppearBlock;
@property(retain, nonatomic) WCFinderMaskButton *exitButton; // @synthesize exitButton=_exitButton;
@property(retain, nonatomic) MMUIButton *checkPwdButton; // @synthesize checkPwdButton=_checkPwdButton;
@property(retain, nonatomic) MMUILabel *descAntiAddictLabel; // @synthesize descAntiAddictLabel=_descAntiAddictLabel;
@property(retain, nonatomic) MMUILabel *titleAntiAddictLabel; // @synthesize titleAntiAddictLabel=_titleAntiAddictLabel;
@property(retain, nonatomic) UIImageView *limitedIconImageView; // @synthesize limitedIconImageView=_limitedIconImageView;
- (void)onVerifyPasswordSuccessTicket:(id)arg1;
- (void)onClickExitFinderAction;
- (void)onClickCheckPwdBtn;
- (void)viewWillLayoutSubviews;
- (void)layoutSubViewsConstraint;
- (void)setUpUI;
- (long long)preferredInterfaceOrientationForPresentation;
- (_Bool)useTransparentNavibar;
- (unsigned long long)feedViewControllerScene;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (CDUnknownBlockType)exit;
- (CDUnknownBlockType)verifySuc;
- (CDUnknownBlockType)didAppear;
- (id)initWithStyle:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
