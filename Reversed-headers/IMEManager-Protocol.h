//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MagicEmojiMgr;

@protocol IMEManager <NSObject>
@property(nonatomic) __weak MagicEmojiMgr *meMgrWeakRef;
- (void)onEnd;
- (void)onUpdate:(float)arg1;
- (void)onStart;
@end
