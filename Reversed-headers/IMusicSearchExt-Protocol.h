//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ShakeMusicInfo;

@protocol IMusicSearchExt <NSObject>

@optional
- (void)OnMusicError:(int)arg1 andSessionId:(unsigned int)arg2;
- (void)OnGetMusicItem:(ShakeMusicInfo *)arg1 andSessionId:(unsigned int)arg2;
- (void)OnPeakPowerChange:(float)arg1;
- (void)OnEndRecord;
- (void)OnStartRecord;
@end
