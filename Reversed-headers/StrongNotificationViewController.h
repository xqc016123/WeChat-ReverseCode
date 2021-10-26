//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMWindowViewController.h"

#import "IStrongNotificationMgrExt-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class AVAudioPlayer, MMTableView, MMTimer, MMUIButton, MMUILabel, MMUIView, NSArray, NSMutableDictionary, NSString, UIImageView, UIView;
@protocol StrongNotificationViewControllerDelegate;

@interface StrongNotificationViewController : MMWindowViewController <UISearchBarDelegate, IStrongNotificationMgrExt, UITableViewDataSource, UITableViewDelegate>
{
    MMTableView *m_tableView;
    NSArray *m_strongNotificationItemAndMessageArray;
    NSMutableDictionary *m_cellHeightDic;
    MMUIView *m_maskView;
    MMUIButton *m_closeButton;
    MMUIView *m_topView;
    MMUILabel *m_topViewTitleLabel;
    UIView *m_topViewSeperateLineView;
    UIImageView *m_logoImageView;
    MMTimer *m_stopPlaySoundAndAppVibrationTimer;
    AVAudioPlayer *m_player;
    _Bool m_isHadPlaySoundAndAppVibration;
    MMUIView *m_contentView;
    id <StrongNotificationViewControllerDelegate> _m_delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <StrongNotificationViewControllerDelegate> m_delegate; // @synthesize m_delegate=_m_delegate;
@property(retain, nonatomic) MMUIView *m_contentView; // @synthesize m_contentView;
- (void)onEnterBackground;
- (void)stopPlaySound;
- (void)playSound:(id)arg1 OfType:(id)arg2 numberOfLoops:(long long)arg3;
- (void)asyncPlaySound:(id)arg1;
- (void)stopPlaySoundAndAppVibration;
- (void)checkNeedAsyncPlaySound;
- (void)stopPlaySoundAndAppVibrationTimerAction;
- (void)startStopPlaySoundAndAppVibrationTimer;
- (void)onModifyStrongNotification:(id)arg1 contactUserName:(id)arg2;
- (void)handleContentViewPanGesture:(id)arg1;
- (void)reloadFinderLiveData;
- (void)jumpFinderViewWithMsg:(id)arg1;
- (void)jumpFinderLiveOpWrap:(id)arg1;
- (void)jumpMsgContentViewController:(id)arg1;
- (void)handleSelectIndexPath:(id)arg1 tableView:(id)arg2;
- (void)doClickClose;
- (void)onClickClose;
- (void)scrollClickClose;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)updateFinderPushTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderPushTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateFinderLiveTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getFinderLiveTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateNormalTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getNormalTableViewCellWithCellIdentifier:(id)arg1;
- (void)updateWeAppTableViewCell:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)getWeAppTableViewCellWithCellIdentifier:(id)arg1;
- (id)getLiveIDWithMessageWrap:(id)arg1;
- (id)getNonceIDWithMessageWrap:(id)arg1;
- (id)getFeedIDWithMessageWrap:(id)arg1;
- (void)reloadTableData;
- (void)reloadTopViewTitleLabel;
- (double)calculateAllCellHeight;
- (void)reloadTableView;
- (void)resetTopViewShapeLayer;
- (double)getContentWidth;
- (id)getContentView;
- (void)viewWillLayoutSubviews;
- (void)viewWillBePoped:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)initCloseButton;
- (void)initTopView;
- (void)initView;
- (void)initTableView;
- (void)setUpScrollViewGradientLayer;
- (void)initContentView;
- (void)tryUpdateResource;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
