//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface WCUnreadTipsViewModel : NSObject
{
    NSMutableArray *_userNames;
    NSMutableArray *_feedIds;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *feedIds; // @synthesize feedIds=_feedIds;
@property(retain, nonatomic) NSMutableArray *userNames; // @synthesize userNames=_userNames;
- (void)fetchUserName:(CDUnknownBlockType)arg1;
- (id)initWithUnreadLayer:(id)arg1;

@end
