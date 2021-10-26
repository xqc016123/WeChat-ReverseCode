//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveLogic.h"

#import "MMFinderLiveConnectMicActionDelegate-Protocol.h"
#import "MMFinderLiveRedPacketLogicDelegate-Protocol.h"
#import "MMLiveCommentViewDelegate-Protocol.h"
#import "MMLiveScreenSharingLogicOperationDelegate-Protocol.h"
#import "MMLiveScreenSharingLogicUIDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderLiveExt-Protocol.h"

@class MMFinderLiveConnectMicLogic, MMFinderLiveRedPacketLogic, MMFinderLiveRedPacketMessage, MMFinderLiveTask, MMFinderLiveTaskId, MMLiveScreenSharingLogic, NSString, WCFinderLiveInfo;
@protocol MMFinderLiveLogicDelegate;

@interface MMFinderLiveLogic : MMLiveLogic <WCFinderLiveExt, WCFinderContactExt, MMFinderLiveConnectMicActionDelegate, MMFinderLiveRedPacketLogicDelegate, MMLiveCommentViewDelegate, MMLiveScreenSharingLogicOperationDelegate, MMLiveScreenSharingLogicUIDelegate>
{
    _Bool _isKeyRequesting;
    _Bool _isLiveClosed;
    _Bool _isLiveJoined;
    _Bool _hasCancelledByUser;
    _Bool _joinLiveAfterGetLiveMsgInvalid;
    _Bool _isEnableRewardAnchorStatusRequesting;
    _Bool _isEnableLikeAnchorStatusRequesting;
    id <MMFinderLiveLogicDelegate> _liveLogicDelegate;
    MMFinderLiveRedPacketLogic *_redPacketLogic;
    MMLiveScreenSharingLogic *_screenSharingLogic;
    NSString *_finderUserName;
    long long _roleType;
    WCFinderLiveInfo *_lastFinderLiveInfo;
    long long _currEntryScene;
    NSString *_lastJumpGameInfoContent;
    MMFinderLiveRedPacketMessage *_taggedRedPacketMessage;
    unsigned long long _enableRewardAnchorStatusRequestSeq;
    double _lastEnableRewardAnchorStatusRequestResultTime;
    unsigned long long _enableLikeAnchorStatusRequestSeq;
    double _lastEnableLikeAnchorStatusRequestResultTime;
}

- (void).cxx_destruct;
@property(nonatomic) double lastEnableLikeAnchorStatusRequestResultTime; // @synthesize lastEnableLikeAnchorStatusRequestResultTime=_lastEnableLikeAnchorStatusRequestResultTime;
@property(nonatomic) _Bool isEnableLikeAnchorStatusRequesting; // @synthesize isEnableLikeAnchorStatusRequesting=_isEnableLikeAnchorStatusRequesting;
@property(nonatomic) unsigned long long enableLikeAnchorStatusRequestSeq; // @synthesize enableLikeAnchorStatusRequestSeq=_enableLikeAnchorStatusRequestSeq;
@property(nonatomic) double lastEnableRewardAnchorStatusRequestResultTime; // @synthesize lastEnableRewardAnchorStatusRequestResultTime=_lastEnableRewardAnchorStatusRequestResultTime;
@property(nonatomic) _Bool isEnableRewardAnchorStatusRequesting; // @synthesize isEnableRewardAnchorStatusRequesting=_isEnableRewardAnchorStatusRequesting;
@property(nonatomic) unsigned long long enableRewardAnchorStatusRequestSeq; // @synthesize enableRewardAnchorStatusRequestSeq=_enableRewardAnchorStatusRequestSeq;
@property(retain, nonatomic) MMFinderLiveRedPacketMessage *taggedRedPacketMessage; // @synthesize taggedRedPacketMessage=_taggedRedPacketMessage;
@property(retain, nonatomic) NSString *lastJumpGameInfoContent; // @synthesize lastJumpGameInfoContent=_lastJumpGameInfoContent;
@property(nonatomic) long long currEntryScene; // @synthesize currEntryScene=_currEntryScene;
@property(retain, nonatomic) WCFinderLiveInfo *lastFinderLiveInfo; // @synthesize lastFinderLiveInfo=_lastFinderLiveInfo;
@property(nonatomic) _Bool joinLiveAfterGetLiveMsgInvalid; // @synthesize joinLiveAfterGetLiveMsgInvalid=_joinLiveAfterGetLiveMsgInvalid;
@property(nonatomic) _Bool hasCancelledByUser; // @synthesize hasCancelledByUser=_hasCancelledByUser;
@property(nonatomic) _Bool isLiveJoined; // @synthesize isLiveJoined=_isLiveJoined;
@property(nonatomic) _Bool isLiveClosed; // @synthesize isLiveClosed=_isLiveClosed;
@property(nonatomic) _Bool isKeyRequesting; // @synthesize isKeyRequesting=_isKeyRequesting;
@property(nonatomic) long long roleType; // @synthesize roleType=_roleType;
@property(retain, nonatomic) NSString *finderUserName; // @synthesize finderUserName=_finderUserName;
@property(retain, nonatomic) MMLiveScreenSharingLogic *screenSharingLogic; // @synthesize screenSharingLogic=_screenSharingLogic;
@property(retain, nonatomic) MMFinderLiveRedPacketLogic *redPacketLogic; // @synthesize redPacketLogic=_redPacketLogic;
@property(nonatomic) __weak id <MMFinderLiveLogicDelegate> liveLogicDelegate; // @synthesize liveLogicDelegate=_liveLogicDelegate;
- (void)onRealnameVerifyCancelNotification:(id)arg1;
- (void)onRealnameVerifySuccessNotification:(id)arg1;
- (void)onFinderLiveConnectMicEndWithUserInfo:(id)arg1;
- (void)onFinderLiveConnectMicStartWithUserInfo:(id)arg1;
- (void)onFinderLiveSwitchUserRoleBeforeConnectingMic;
- (void)onFinderLiveConnectedMicUserSendRedPacketWithContact:(id)arg1;
- (void)onFinderLiveConnectedMicUserListUpdated;
- (void)onFinderLiveConnectedMicUserTapBackgroundWithFinderContact:(id)arg1 liveBadgeInfo:(id)arg2 isOtherAnchor:(_Bool)arg3 highlightRect:(struct CGRect)arg4;
- (void)onFinderLiveConnectedMicUserAvatarTappedWithContact:(id)arg1 liveBadgeInfo:(id)arg2 isOtherAnchor:(_Bool)arg3 highlightRect:(struct CGRect)arg4;
- (void)onFinderLivePolicyShown;
- (void)onFinderLiveVerifyRealNameForConnectMic;
- (void)onFinderLiveVerifyRealNameForComment;
- (_Bool)checkLiveGameTeamUpEnableChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (_Bool)checkConnectMicEnableChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (_Bool)checkLiveLikeEnableChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (_Bool)checkLiveRewardEnableChanged:(id)arg1 preivousAnchorStatus:(id)arg2;
- (_Bool)checkOperationPermissionChange:(id)arg1 preivousAnchorStatus:(id)arg2;
- (void)onFinderContactFollowStatusUpdate:(id)arg1;
- (void)startWeChatPayVerifyProcess:(long long)arg1;
- (void)synchornizeJoinTeamMode:(id)arg1;
- (void)checkAndSynchornizeLiveAnchorFlag:(id)arg1;
- (_Bool)isInGamePluginLive;
- (void)onGetHandledFinderLiveMessage:(id)arg1 taskId:(id)arg2 onlineContacts:(id)arg3 msgList:(id)arg4 finderLiveInfo:(id)arg5 onlineCount:(unsigned int)arg6 liveInfoEnable:(_Bool)arg7 liveClosed:(_Bool)arg8 onlineViewCount:(unsigned int)arg9;
- (void)onGetGameLiveJumpInfo:(id)arg1;
- (void)onFinderLiveUpdateFinderCheerIcon:(id)arg1;
- (void)onFinderLiveUpdateFinderObjectInfoWithTaskId:(id)arg1 finderObjectInfo:(id)arg2;
- (void)onGetFinderLiveIssueCouponInfoWithTaskId:(id)arg1 issueCouponInfo:(id)arg2;
- (void)onGetFinderLivePromoteProductInfoWithTaskId:(id)arg1 productInfo:(id)arg2;
- (void)onGetFinderLiveGameLiveTeamUpInfoWithTaskId:(id)arg1 appMsgGameTeamInfo:(id)arg2;
- (void)onFinderLiveAnchorStatusUpdated:(id)arg1;
- (void)onGetFinderLiveNotifyApplyRandomMicInfoWithTaskId:(id)arg1 finderLiveContact:(id)arg2 randomMicBuffer:(id)arg3;
- (void)onGetFinderLiveAnchorConnectMicBattleInfoWithTaskId:(id)arg1 battleInfo:(id)arg2;
- (void)onGetFinderLiveAnchorCloseMicBattleMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 battleSessionId:(id)arg3;
- (void)onGetFinderLiveAnchorAcceptMicBattleMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 battleSessionId:(id)arg3 battleDuration:(unsigned int)arg4;
- (void)onGetFinderLiveAnchorApplyMicBattleMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 battleSessionId:(id)arg3 confirmTtl:(unsigned int)arg4 battleSeq:(unsigned long long)arg5;
- (void)onGetFinderLiveAnchorConnectMicStatusInfoWithTaskId:(id)arg1 fromFinderContact:(id)arg2 connectMicFinderContact:(id)arg3 coverImageUrlString:(id)arg4 status:(long long)arg5 sessionId:(id)arg6 sequence:(unsigned long long)arg7 sdkUserId:(id)arg8;
- (void)onGetFinderLiveAnchorCloseMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 sessionId:(id)arg3;
- (void)onGetFinderLiveAnchorAcceptMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 coverImageUrlString:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 sdkPkSign:(id)arg6 sessionId:(id)arg7 sequence:(unsigned long long)arg8;
- (void)onGetFinderLiveAnchorApplyMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 coverImageUrlString:(id)arg3 sdkUserId:(id)arg4 sdkRoomId:(unsigned int)arg5 randomMicBuffer:(id)arg6 sessionId:(id)arg7;
- (void)onGetFinderLiveCloseMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 sessionId:(id)arg3;
- (void)onGetFinderLiveAcceptMicMessageWithTaskId:(id)arg1 connectMicFinderContact:(id)arg2 liveSdkInfo:(id)arg3 withVideo:(_Bool)arg4 expiredTime:(unsigned long long)arg5 sdkUserId:(id)arg6 sessionId:(id)arg7 sequence:(unsigned long long)arg8;
- (void)onGetFinderLiveApplyMicMessageWithTaskId:(id)arg1 fromFinderContact:(id)arg2 withVideo:(_Bool)arg3 confirmTime:(unsigned int)arg4 sdkUserId:(id)arg5 sessionId:(id)arg6 micUserAttrFlag:(unsigned int)arg7;
- (void)onGetFinderLiveToastInfoWithTaskId:(id)arg1 toastInfo:(id)arg2;
- (void)onGetFinderLiveAlertInfoWithTaskId:(id)arg1 alertInfo:(id)arg2;
- (void)onGetFinderLiveError:(id)arg1 finderLiveInfo:(id)arg2;
- (void)onCancelFinderLiveError:(id)arg1 finderDataItem:(id)arg2;
- (void)onCloseFinderLiveError:(id)arg1 finderDataItem:(id)arg2 liveDurationSeconds:(unsigned int)arg3 liveAudiencesNum:(unsigned int)arg4 liveBeLikedNum:(unsigned int)arg5 liveNewFansNum:(unsigned int)arg6 maxOnlineCount:(unsigned int)arg7 audiencesAvgSeconds:(unsigned int)arg8;
- (void)checkLiveMicAnchorBattleInfoInJoinLiveResponse:(id)arg1;
- (void)checkLiveMicInfoInJoinLiveResponse:(id)arg1;
- (id)pollingFetchRequestBufferByCmdId:(long long)arg1;
- (void)onJoinFinderLiveError:(id)arg1 finderDataItem:(id)arg2 joinLiveContext:(id)arg3 errorPage:(id)arg4;
- (void)onCreateFinderLiveError:(id)arg1 finderDataItem:(id)arg2 errorPage:(id)arg3;
- (id)liveViewControllerForPresentingScreenSharing:(id)arg1;
- (void)screenSharingLogic:(id)arg1 didStopSharingInViewController:(id)arg2;
- (void)screenSharingLogic:(id)arg1 didStartSharingInViewController:(id)arg2;
- (void)selectActionsWhileSharingFiles;
- (void)selectFiles;
@property(readonly, nonatomic) _Bool isSharingFiles;
- (void)initScreenSharingLogic;
- (void)redPacketLogic:(id)arg1 didFailToOpenRedPacketWithError:(id)arg2 handled:(_Bool *)arg3;
- (id)viewControllerForRedPacketLogic:(id)arg1;
- (void)openTaggedRedPacketIfNeeded;
- (void)markTaggedRedPacketIfNeeded;
- (void)initRedPacketLogic;
- (void)addNotificationCommentForPauseStatusChanged:(_Bool)arg1;
- (void)correctAnchorLivePauseStatus:(id)arg1 preLivePauseStatus:(long long)arg2;
- (_Bool)checkCoverLivePauseStatusFromLocalFlag:(long long)arg1;
- (void)requestResumeSuspiciousVerify:(long long)arg1 successBlock:(CDUnknownBlockType)arg2;
- (void)requestResumeLive;
- (void)requestPauseLive;
- (_Bool)resumeLive;
- (_Bool)pauseLive;
- (_Bool)canPauseOrResumeLive;
- (id)finderLiveOperationView;
@property(readonly, nonatomic) _Bool isConnectingMic;
@property(readonly, nonatomic) MMFinderLiveConnectMicLogic *finderLiveConnectMicLogic;
@property(readonly, nonatomic) MMFinderLiveTask *liveTask;
@property(readonly, nonatomic) MMFinderLiveTaskId *finderTaskId;
- (void)preloadCommentsBeforeJoinLive;
- (_Bool)backToPluginLive;
- (void)switchAudienceAccount:(id)arg1;
- (void)saveLastLiveInfo;
- (void)setJoinTeamMode:(unsigned int)arg1 callback:(CDUnknownBlockType)arg2;
- (void)resetAnchorStatus;
- (void)changePureAudioModeForAnchor:(_Bool)arg1;
- (void)enableApplyConnectMic:(_Bool)arg1;
- (void)handleNotifyCommentForAppWithGameLiveJumpInfo:(id)arg1;
- (void)handleNotifyCommentForSubscribeWithBizUserInfo:(id)arg1;
- (void)handleNotifyCommentForJoinGameEnableChaned:(_Bool)arg1;
- (void)handleNotifyCommentForLikeEnableChaned:(_Bool)arg1;
- (void)handleNotifyCommentForRewardEnableChaned:(_Bool)arg1;
- (void)handleUIForLikeEnableChanged:(_Bool)arg1;
- (void)handleUIForRewardEnableChanged:(_Bool)arg1;
- (void)enableLiveLike:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)enableLiveReward:(_Bool)arg1 callback:(CDUnknownBlockType)arg2;
- (void)sysCallInterrupted:(_Bool)arg1;
- (void)enterForeground;
- (void)enterBackground;
- (void)startLiveMarketing;
- (void)enterLiveRoom;
- (void)resetJoinLiveAfterGetLiveMsgInvalid;
- (_Bool)getJoinLiveAfterGetLiveMsgInvalid;
- (void)fetchDetailDataItemWithFinderUserName:(id)arg1 completeBlock:(CDUnknownBlockType)arg2;
- (void)fetchDetailNewDataItem;
- (_Bool)fetchNewLiveSdkInfo;
- (_Bool)refreshLiveSdkInfoForConnectMicUser;
- (void)initConnectMicLogic;
- (_Bool)getLiveInfo;
- (_Bool)shareLive;
- (_Bool)realStartLive;
- (_Bool)setOffline;
- (void)clearLive;
- (_Bool)closeWait:(unsigned int)arg1;
- (_Bool)closeLiveByAssitant;
- (_Bool)closeLive;
- (_Bool)cancelLive;
- (_Bool)joinLiveInternal:(unsigned long long)arg1;
- (_Bool)joinLive:(unsigned long long)arg1;
- (_Bool)createLiveWithLiveCreateParamsModel:(id)arg1;
- (void)unRegisterExtension;
- (void)registerExtension;
- (void)dealloc;
- (id)init;
- (id)initWithTaskId:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
