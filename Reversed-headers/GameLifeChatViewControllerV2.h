//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GCReportBaseVc.h"

#import "GCBaseGroupCellModelDelegate-Protocol.h"
#import "GCChatRoomImageZoomAnimationDelegate-Protocol.h"
#import "GameChatRoomExt-Protocol.h"
#import "GameLifeTabChildViewControllerProtocol-Protocol.h"
#import "IGroupServerUpdateExt-Protocol.h"
#import "ILocationMgrExt-Protocol.h"

@class CLLocation, GCCollectionViewManager, GCCollectionViewSectionModel, GCGroupSectionModel, GCGroupServer, GCViewHolderCellModel, GameChatNoticeAndMessageView, GetCanJoinChatroomResponse, GetFirstEnterInfoResponse, GetMyChatroomResponse, NSMutableDictionary, NSMutableSet, NSString, UIButton, UICollectionView, UIView;

@interface GameLifeChatViewControllerV2 : GCReportBaseVc <GameLifeTabChildViewControllerProtocol, GameChatRoomExt, ILocationMgrExt, GCChatRoomImageZoomAnimationDelegate, IGroupServerUpdateExt, GCBaseGroupCellModelDelegate>
{
    _Bool _isRecommendSectionEmpty;
    _Bool _showEntrance;
    _Bool _showInviteTipWhenViewDidAppear;
    _Bool _gcIsVisible;
    _Bool _hasServerResponse;
    unsigned int _sourceScene;
    UIView *_topContainerView;
    UICollectionView *_wholeCollectionView;
    GCCollectionViewManager *_collectionViewManager;
    GameChatNoticeAndMessageView *_noticeAndMessageView;
    GCCollectionViewSectionModel *_noticeAndMessageSectionModel;
    GCCollectionViewSectionModel *_spaceBelowMessageView;
    NSMutableDictionary *_groupCellDict;
    GCGroupSectionModel *_myGroupSectionModel;
    GCCollectionViewSectionModel *_spaceBelowMyGroupSection;
    GCGroupSectionModel *_recommendSectionModel;
    GCGroupServer *_groupServer;
    CLLocation *_groupRecommendLocation;
    UIView *_shadowView;
    GetFirstEnterInfoResponse *_firstEnterResponse;
    NSMutableSet *_didExitSet;
    GetCanJoinChatroomResponse *_canJoinGroupRespone;
    GetMyChatroomResponse *_myChatRoomResponse;
    GetCanJoinChatroomResponse *_canJoinChatRoomResponse;
    GCViewHolderCellModel *_createCellModel;
    GCViewHolderCellModel *_findMoreCellModel;
    UIButton *_createBtn;
    GetMyChatroomResponse *_needSaveResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GetMyChatroomResponse *needSaveResponse; // @synthesize needSaveResponse=_needSaveResponse;
@property(retain, nonatomic) UIButton *createBtn; // @synthesize createBtn=_createBtn;
@property(retain, nonatomic) GCViewHolderCellModel *findMoreCellModel; // @synthesize findMoreCellModel=_findMoreCellModel;
@property(retain, nonatomic) GCViewHolderCellModel *createCellModel; // @synthesize createCellModel=_createCellModel;
@property(retain, nonatomic) GetCanJoinChatroomResponse *canJoinChatRoomResponse; // @synthesize canJoinChatRoomResponse=_canJoinChatRoomResponse;
@property(nonatomic) _Bool hasServerResponse; // @synthesize hasServerResponse=_hasServerResponse;
@property(retain, nonatomic) GetMyChatroomResponse *myChatRoomResponse; // @synthesize myChatRoomResponse=_myChatRoomResponse;
@property(retain, nonatomic) GetCanJoinChatroomResponse *canJoinGroupRespone; // @synthesize canJoinGroupRespone=_canJoinGroupRespone;
@property(retain, nonatomic) NSMutableSet *didExitSet; // @synthesize didExitSet=_didExitSet;
@property(retain, nonatomic) GetFirstEnterInfoResponse *firstEnterResponse; // @synthesize firstEnterResponse=_firstEnterResponse;
@property(nonatomic) _Bool gcIsVisible; // @synthesize gcIsVisible=_gcIsVisible;
@property(nonatomic) _Bool showInviteTipWhenViewDidAppear; // @synthesize showInviteTipWhenViewDidAppear=_showInviteTipWhenViewDidAppear;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(retain, nonatomic) CLLocation *groupRecommendLocation; // @synthesize groupRecommendLocation=_groupRecommendLocation;
@property(nonatomic) _Bool showEntrance; // @synthesize showEntrance=_showEntrance;
@property(retain, nonatomic) GCGroupServer *groupServer; // @synthesize groupServer=_groupServer;
@property(nonatomic) _Bool isRecommendSectionEmpty; // @synthesize isRecommendSectionEmpty=_isRecommendSectionEmpty;
@property(retain, nonatomic) GCGroupSectionModel *recommendSectionModel; // @synthesize recommendSectionModel=_recommendSectionModel;
@property(retain, nonatomic) GCCollectionViewSectionModel *spaceBelowMyGroupSection; // @synthesize spaceBelowMyGroupSection=_spaceBelowMyGroupSection;
@property(retain, nonatomic) GCGroupSectionModel *myGroupSectionModel; // @synthesize myGroupSectionModel=_myGroupSectionModel;
@property(retain, nonatomic) NSMutableDictionary *groupCellDict; // @synthesize groupCellDict=_groupCellDict;
@property(retain, nonatomic) GCCollectionViewSectionModel *spaceBelowMessageView; // @synthesize spaceBelowMessageView=_spaceBelowMessageView;
@property(retain, nonatomic) GCCollectionViewSectionModel *noticeAndMessageSectionModel; // @synthesize noticeAndMessageSectionModel=_noticeAndMessageSectionModel;
@property(retain, nonatomic) GameChatNoticeAndMessageView *noticeAndMessageView; // @synthesize noticeAndMessageView=_noticeAndMessageView;
@property(retain, nonatomic) GCCollectionViewManager *collectionViewManager; // @synthesize collectionViewManager=_collectionViewManager;
@property(retain, nonatomic) UICollectionView *wholeCollectionView; // @synthesize wholeCollectionView=_wholeCollectionView;
@property(retain, nonatomic) UIView *topContainerView; // @synthesize topContainerView=_topContainerView;
@property(nonatomic) unsigned int sourceScene; // @synthesize sourceScene=_sourceScene;
- (void)reportSelfProfileClick;
- (void)onProfileButtonClicked;
- (id)getRightBarItem;
- (id)navigationBarBackgroundColor;
- (float)getTabBarHeight;
- (_Bool)isParentViewControllerGameLifeTabbarVc;
- (void)initRecommendGroup;
- (id)randomImageUrl;
- (void)initMyGroupSectionModel;
- (void)initTopNoticeAndMessageSection;
- (id)getNewSpaceSectionModel:(id)arg1 height:(double)arg2;
- (void)viewDidLayoutSubviews;
- (struct CGRect)collectionViewFrame;
- (void)initCollectionView;
- (void)unRegisterExtension;
- (void)onViewPopHandle;
- (void)viewDidBePoped:(_Bool)arg1;
- (void)onGameLifeTabBarPoped:(id)arg1;
- (id)chatVcBackgroudColor;
- (void)updateGroupCellModel:(id)arg1 withMyChatRoomInfo:(id)arg2;
- (id)groupCellModelFromChatRoomInfo:(id)arg1;
- (id)groupCellModelArrayFrom:(id)arg1;
- (void)onRoomStatusUpdate:(id)arg1;
- (CDUnknownBlockType)predicateMatchName:(id)arg1;
- (id)getBtnCellModel:(id)arg1 selector:(SEL)arg2;
- (void)onCreateGroupBtnClick;
- (void)onFindMoreGroupBtnClick;
- (id)getEmptyRecommendGroupView:(double)arg1;
- (void)didExitChatRoom:(id)arg1;
- (void)didJoinNewRoom:(id)arg1;
- (void)resetCollectionViewManager;
- (id)getTopFixedSectionArrary;
- (void)resetSectionModels;
- (void)doUpdateCanJoinGroupRespone:(id)arg1;
- (void)doUpdateChatRoomResponse:(id)arg1 isFromServer:(_Bool)arg2;
- (id)descAttribute;
- (id)descAttributeFromResponse:(id)arg1;
- (void)retriveLocationIfAvailableWithComplectionBlock:(CDUnknownBlockType)arg1;
- (void)updateLocationAndReloadIfNeed;
- (void)readGroupCache;
- (void)onMyChatRoomStatusUpdate:(id)arg1;
- (void)onUpdateAuthorizationStatus:(int)arg1 accuracyAuthorization:(long long)arg2;
- (struct CGRect)getImgFrameWithIdentifier:(id)arg1;
- (void)onOpenChatRoomConfig:(id)arg1 cellModel:(id)arg2;
- (void)handleAuthoriztionStatus:(int)arg1 requestNotDetermined:(_Bool)arg2;
- (void)onConfirmBtnClicked;
- (void)showGameChatInviteTipView:(id)arg1;
- (void)getRecommendGroup;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (_Bool)enableGroupPause;
- (void)viewWillAppear:(_Bool)arg1;
- (void)checkShowInviteView;
- (void)viewDidLoad;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
