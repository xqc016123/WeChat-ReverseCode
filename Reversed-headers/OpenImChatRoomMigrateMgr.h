//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "ContactsDataLogicDelegate-Protocol.h"

@class ContactsDataLogic, NSMutableDictionary, NSOperationQueue, NSRecursiveLock, NSString, OpenImChatRoomMigrateDataPB;

@interface OpenImChatRoomMigrateMgr : MMObject <ContactsDataLogicDelegate>
{
    OpenImChatRoomMigrateDataPB *m_openImChatRoomMigrateData;
    NSOperationQueue *m_queue;
    NSRecursiveLock *m_lock;
    NSMutableDictionary *m_dicMigrateOpenImChatRoom;
    NSMutableDictionary *m_dicOpenImMigrateOpenImChatRoom;
    ContactsDataLogic *m_contactsDataLogic;
}

+ (void)reportOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2 andOpenImChatRoomMigrateAction:(unsigned int)arg3;
- (void).cxx_destruct;
- (void)p_loadOpenImChatRoomMigrateInternal;
- (void)p_saveOpenImChatRoomMigrateToDataFileInternal;
- (id)p_getOpenImChatRoomMigrateDataFilePath;
- (void)reportOpenImChatRoomMigrateClickSameNameChatRoomWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)checkGetNeedOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (void)addHadGetContactDetialMigrateAssociateChatRoom:(id)arg1;
- (void)startUpGetAllNeedOpenImChatRoomMigrateAssociateChatRoom;
- (void)sendOpenImChatRoomMigrateInsertWarningSystemMessageWithGroupUserName:(id)arg1 andMessageContent:(id)arg2;
- (void)checkEnterOpenChatRoomNeedSendInsertWarningSystemMessage:(id)arg1;
- (void)removeActiveUserWaitForOpenImMigrateWithUsrName:(id)arg1;
- (void)checkChatRoomExitSessionOpenImChatRoomMigrateAssociateChatRoom:(id)arg1;
- (void)startUpAllOpenImChatRoomMigrate;
- (void)DeleteSessionWithUserName:(id)arg1;
- (void)doOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)addOpenImChatRoomMigrateWithOpenIMChatRoomUserName:(id)arg1 andAssociateChatRoomUserName:(id)arg2;
- (void)initData;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
