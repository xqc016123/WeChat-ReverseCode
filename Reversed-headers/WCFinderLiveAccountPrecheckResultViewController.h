//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMAcceptAgreementBaseViewController.h"

#import "MMLiveFaceVerifyViewControllerDelegate-Protocol.h"

@class MMAcceptAgreementCommonHeadView, MMFinderLiveTaskId, MMTableView, MMTableViewInfo, NSMutableDictionary, NSString, SpamRisk, UIButton;

@interface WCFinderLiveAccountPrecheckResultViewController : MMAcceptAgreementBaseViewController <MMLiveFaceVerifyViewControllerDelegate>
{
    _Bool _shouldShowOneTimeAgreementView;
    _Bool _hasExtraVerifyItem;
    _Bool _isFaceVerifiedSucceed;
    _Bool _isDoneButtonClicked;
    _Bool _cancelPrecheckProcess;
    unsigned int _userFlag;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
    SpamRisk *_spamJumpInfo;
    CDUnknownBlockType _enableCreateLiveCallback;
    CDUnknownBlockType _cancelledCallback;
    CDUnknownBlockType _delayEnableCreateLiveCallback;
    MMFinderLiveTaskId *_liveTaskId;
    UIButton *_doneButton;
    NSMutableDictionary *_m_cacheHeightDic;
    double _m_tableContentHeight;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool cancelPrecheckProcess; // @synthesize cancelPrecheckProcess=_cancelPrecheckProcess;
@property(nonatomic) _Bool isDoneButtonClicked; // @synthesize isDoneButtonClicked=_isDoneButtonClicked;
@property(nonatomic) _Bool isFaceVerifiedSucceed; // @synthesize isFaceVerifiedSucceed=_isFaceVerifiedSucceed;
@property(nonatomic) _Bool hasExtraVerifyItem; // @synthesize hasExtraVerifyItem=_hasExtraVerifyItem;
@property(nonatomic) _Bool shouldShowOneTimeAgreementView; // @synthesize shouldShowOneTimeAgreementView=_shouldShowOneTimeAgreementView;
@property(nonatomic) double m_tableContentHeight; // @synthesize m_tableContentHeight=_m_tableContentHeight;
@property(retain, nonatomic) NSMutableDictionary *m_cacheHeightDic; // @synthesize m_cacheHeightDic=_m_cacheHeightDic;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(nonatomic) unsigned int userFlag; // @synthesize userFlag=_userFlag;
@property(retain, nonatomic) MMFinderLiveTaskId *liveTaskId; // @synthesize liveTaskId=_liveTaskId;
@property(copy, nonatomic) CDUnknownBlockType delayEnableCreateLiveCallback; // @synthesize delayEnableCreateLiveCallback=_delayEnableCreateLiveCallback;
@property(copy, nonatomic) CDUnknownBlockType cancelledCallback; // @synthesize cancelledCallback=_cancelledCallback;
@property(copy, nonatomic) CDUnknownBlockType enableCreateLiveCallback; // @synthesize enableCreateLiveCallback=_enableCreateLiveCallback;
@property(retain, nonatomic) SpamRisk *spamJumpInfo; // @synthesize spamJumpInfo=_spamJumpInfo;
- (void)setM_tableView:(id)arg1;
- (id)m_tableView;
- (void)setM_tableViewInfo:(id)arg1;
- (id)m_tableViewInfo;
- (void)setM_commonHeadView:(id)arg1;
- (id)m_commonHeadView;
- (void)onMMLiveFaceVerifyViewControllerFaceVerifyFailed:(long long)arg1:(long long)arg2;
- (void)onMMLiveFaceVerifyViewControllerFaceVerifySucceeded:(long long)arg1;
- (void)onBackButtonClicked:(id)arg1;
- (void)showPolicyWebView;
- (void)OnDoneButtonClicked;
- (void)onPreCheckResultItemClicked;
- (void)makePreCheckResultItem:(id)arg1 cellInfo:(id)arg2;
- (void)layoutHeaderView;
- (void)reloadFootView;
- (void)reloadTableData;
- (_Bool)showOneTimeAgreementView;
- (void)layoutDoneButton;
- (void)viewDidBePopedOrDismissed:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithliveTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
