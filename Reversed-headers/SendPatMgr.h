//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "IMsgExt-Protocol.h"
#import "IMsgRevokeExt-Protocol.h"
#import "MMServiceProtocol-Protocol.h"

@class NSMutableDictionary, NSMutableSet, NSString, OrderedDictionary, RevokePatReportObject, SendPatToastViewController, SendPatWrap;

@interface SendPatMgr : MMUserService <IMsgExt, IMsgRevokeExt, MMServiceProtocol>
{
    _Bool _needRevokeLastPat;
    NSMutableDictionary *_userNameToPatTimeMap;
    SendPatWrap *_lastSendPatWrap;
    OrderedDictionary *_availableSendPatWraps;
    NSMutableDictionary *_serverIdToReceivePatWrapMap;
    RevokePatReportObject *_revokePatReportObject;
    SendPatToastViewController *_toastViewController;
    NSMutableSet *_onGoingTimerSet;
}

+ (void)updateMessageWrap:(id)arg1 fromWrap:(id)arg2;
+ (id)generatePatMessageFromWrap:(id)arg1;
+ (_Bool)isMessageWrapPatMessage:(id)arg1;
+ (id)patMessageServerIdSetInChat:(id)arg1;
+ (id)compoundMessageWrapsForPatMessage:(id)arg1;
+ (id)decompoundMessageWrapForPatMessage:(id)arg1;
+ (id)filePathForServerIdToReceivePatWrapMap;
+ (_Bool)isValidChatContact:(id)arg1;
+ (_Bool)isValidContact:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableSet *onGoingTimerSet; // @synthesize onGoingTimerSet=_onGoingTimerSet;
@property(retain, nonatomic) SendPatToastViewController *toastViewController; // @synthesize toastViewController=_toastViewController;
@property(retain, nonatomic) RevokePatReportObject *revokePatReportObject; // @synthesize revokePatReportObject=_revokePatReportObject;
@property(retain, nonatomic) NSMutableDictionary *serverIdToReceivePatWrapMap; // @synthesize serverIdToReceivePatWrapMap=_serverIdToReceivePatWrapMap;
@property(retain, nonatomic) OrderedDictionary *availableSendPatWraps; // @synthesize availableSendPatWraps=_availableSendPatWraps;
@property(retain, nonatomic) SendPatWrap *lastSendPatWrap; // @synthesize lastSendPatWrap=_lastSendPatWrap;
@property(nonatomic) _Bool needRevokeLastPat; // @synthesize needRevokeLastPat=_needRevokeLastPat;
@property(retain, nonatomic) NSMutableDictionary *userNameToPatTimeMap; // @synthesize userNameToPatTimeMap=_userNameToPatTimeMap;
- (void)OnMsgRevoked:(id)arg1 n64MsgId:(long long)arg2;
- (void)OnRevokeMsg:(id)arg1 MsgWrap:(id)arg2 ResultCode:(unsigned int)arg3 ResultMsg:(id)arg4 EducationMsg:(id)arg5;
- (void)OnGetNewXmlMsg:(id)arg1 Type:(id)arg2 MsgWrap:(id)arg3;
- (void)updatePatSuffix:(id)arg1 serverId:(long long)arg2 forSendPatWrap:(id)arg3;
- (void)updatePatSuffixWrap:(id)arg1 forUserName:(id)arg2;
- (id)patSuffixWrapForUserName:(id)arg1;
- (unsigned long long)numberOfPatsShowAfterFold;
- (unsigned long long)minNumberOfContinousPatsToFold;
- (unsigned long long)maxNumberOfContinousPats;
- (id)createSendPatTempleteFromPattedUserName:(id)arg1 withSuffix:(id)arg2 andVersion:(unsigned long long)arg3;
- (id)getLastAppPatMessageWrapForChat:(id)arg1 createTime:(unsigned int)arg2;
- (id)getLastAppPatMessageWrapForChat:(id)arg1;
- (_Bool)deletePatWrap:(id)arg1 inMessageWrap:(id)arg2;
- (unsigned int)addPatWrap:(id)arg1 toChat:(id)arg2 newXMLMessageWrap:(id)arg3 index:(unsigned long long *)arg4;
- (id)messageWrapForPatMessageWithChatUserName:(id)arg1 andMessageLocalID:(unsigned int)arg2;
- (void)showToastForPat:(id)arg1 headImageView:(id)arg2 scene:(unsigned long long)arg3 andCompletionBlock:(CDUnknownBlockType)arg4;
- (unsigned int)getMinFrequencyLimitInterval;
- (void)updatePatTimeForUsername:(id)arg1;
- (_Bool)hitFrequencyLimitForUserName:(id)arg1;
- (_Bool)isServerIdCorrespondToReceivePat:(long long)arg1;
- (void)saveServerIdToReceivePatWrapMap;
- (void)loadServerIdToReceivePatWrapMap;
- (unsigned int)receivePatWrapCacheInterval;
- (void)callRevokePatExtension:(id)arg1 fromChat:(id)arg2 isSuccess:(_Bool)arg3;
- (void)onRevokePat:(id)arg1 fromChat:(id)arg2 isSuccess:(_Bool)arg3;
- (void)onRevokeSendPat:(id)arg1 isSuccess:(_Bool)arg2 isCancelSending:(_Bool)arg3;
- (_Bool)normalRevokePatMessageForRevokeOnly:(id)arg1 fromChat:(id)arg2;
- (void)normalRevokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3;
- (void)normalRevokeSendPat:(id)arg1;
- (void)fastRevokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3;
- (void)fastRevokeSendPat:(id)arg1;
- (void)revokeSendPat:(id)arg1;
- (_Bool)needRevokeLastPatForSendPat:(id)arg1;
- (id)sendPatForPat:(id)arg1 fromChat:(id)arg2;
- (unsigned int)patSendLongPressRevokeInterval;
- (unsigned int)patSendDoubleTapRevokeInterval;
- (_Bool)needShowChangeSuffixRemind;
- (unsigned int)minIntervalBetweenChangePatSuffixReminds;
- (unsigned int)maxAccumulateChangePatSuffixRemindCount;
- (void)updateModifyPatSuffixTime:(unsigned int)arg1 count:(unsigned int)arg2;
- (void)updateModifyPatSuffixTimeAndCount;
- (void)modifyPatSuffix;
- (_Bool)checkAndShowRevokeGuideForSendPat:(id)arg1;
- (void)handleSendPat:(id)arg1;
- (void)delaySendPat:(id)arg1;
- (unsigned int)patSendDelayInterval;
- (void)beforeSendPat;
- (void)cancelRevokePat:(id)arg1 fromChat:(id)arg2 type:(unsigned long long)arg3;
- (void)revokePat:(id)arg1 fromChat:(id)arg2 patMessage:(id)arg3 type:(unsigned long long)arg4;
- (id)getLastPatWrap;
- (_Bool)sendPat:(id)arg1;
- (_Bool)sendPatToUser:(id)arg1 inGroup:(id)arg2 scene:(unsigned long long)arg3;
- (_Bool)sendPatToUser:(id)arg1 scene:(unsigned long long)arg2;
- (_Bool)sendPatWithMessageWrap:(id)arg1;
- (unsigned long long)getPatMessageShowStyle;
- (_Bool)canRevokePat;
- (_Bool)canSendPat;
- (void)dealloc;
- (void)onServiceClearData;
- (void)onServiceInit;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
