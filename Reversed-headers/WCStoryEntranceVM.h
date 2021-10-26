//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ContactsDataLogicDelegate-Protocol.h"
#import "IWCMyStoryUserStateUtilExt-Protocol.h"
#import "WCStoryFacadeExt-Protocol.h"

@class ContactsDataLogic, MMTimer, NSMutableDictionary, NSString;

@interface WCStoryEntranceVM : NSObject <ContactsDataLogicDelegate, IWCMyStoryUserStateUtilExt, WCStoryFacadeExt>
{
    _Bool _shouldShowStoryEntrace;
    ContactsDataLogic *_dataLogic;
    NSMutableDictionary *_userContactDict;
    MMTimer *_reloadNotifyThrottle;
}

+ (_Bool)hasUnreadStory;
+ (id)entranceViewModel;
- (void).cxx_destruct;
@property(nonatomic) _Bool shouldShowStoryEntrace; // @synthesize shouldShowStoryEntrace=_shouldShowStoryEntrace;
@property(retain, nonatomic) MMTimer *reloadNotifyThrottle; // @synthesize reloadNotifyThrottle=_reloadNotifyThrottle;
@property(retain, nonatomic) NSMutableDictionary *userContactDict; // @synthesize userContactDict=_userContactDict;
@property(retain, nonatomic) ContactsDataLogic *dataLogic; // @synthesize dataLogic=_dataLogic;
- (void)onPermissionsHasChanged;
- (void)onUserRelatedCommentReadWithTid:(id)arg1;
- (void)onMakeAllUserRelatedCommentRead;
- (void)onMakeAllUserRelatedCommentWithUsername:(id)arg1;
- (void)onRelatedCommentAdd:(id)arg1;
- (void)onRelatedCommentDel:(id)arg1;
- (void)updateUnreadStatus;
- (void)onMarkStoryReadWithUserName:(id)arg1 Tid:(id)arg2;
- (void)onContactHasChange;
- (void)onSetNewLastReadMaxTid;
- (_Bool)onFilterContactCandidate:(id)arg1;
- (void)onContactsDataChange;
- (void)userDeleteStoryWithUserName:(id)arg1;
- (void)onClearUnreadStoryMarkWithUserName:(id)arg1;
- (void)onSetUnreadStoryMarkWithUserName:(id)arg1;
- (id)getTimestampUnreadUserNameArray;
- (id)getStoryUnreadUserNameArray;
- (void)reloadShouldShowStoryEntrace;
- (void)sendReloadNotify;
- (void)notifyReloadEntrance;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
