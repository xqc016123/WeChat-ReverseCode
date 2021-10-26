//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveUserStateItem.h"

@class CContact, NSString;

@interface MMGroupLiveUserStateItem : MMLiveUserStateItem
{
    NSString *_identityId;
    NSString *_roomId;
    CContact *_contact;
}

+ (id)batchConvert:(id)arg1 roomId:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) CContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *identityId; // @synthesize identityId=_identityId;
- (id)headImageUrl;
- (id)displayName;
- (id)userName;
- (id)initWithRoomId:(id)arg1 identityId:(id)arg2;

@end
