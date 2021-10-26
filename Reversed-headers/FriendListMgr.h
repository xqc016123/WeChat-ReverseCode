//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUserService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PBMessageObserverDelegate-Protocol.h"

@class NSMutableSet, NSString;

@interface FriendListMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol>
{
    NSMutableSet *m_downliadingPackageLists;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onFriendListSynced:(id)arg1;
- (_Bool)downloadFriendListForType:(int)arg1 InScene:(int)arg2;
- (void)clearFriendListForType:(int)arg1;
- (id)getFriendListForType:(int)arg1;
- (void)SaveFriendListArchive:(id)arg1 packageListArchive:(id)arg2;
- (id)LoadFriendListArchive:(id)arg1;
- (id)getFriendListPath:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
