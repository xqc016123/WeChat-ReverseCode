//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MusicLiveSearchSmartBoxRespInfo, NSIndexPath, UIScrollView, WCMusicSmartBoxViewController;

@protocol WCMusicSmartBoxViewControllerDelegate <NSObject>
- (void)musicSmartBoxViewController:(WCMusicSmartBoxViewController *)arg1 scrollViewWillBeginDragging:(UIScrollView *)arg2;
- (void)musicSmartBoxViewController:(WCMusicSmartBoxViewController *)arg1 didSelectItemWithInfo:(MusicLiveSearchSmartBoxRespInfo *)arg2 indexPath:(NSIndexPath *)arg3;
@end
