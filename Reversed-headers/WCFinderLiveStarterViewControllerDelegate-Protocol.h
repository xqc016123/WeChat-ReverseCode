//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveStarterViewControllerDelegate-Protocol.h"

@class MMFinderGameLiveStarterViewModel, NSArray, NSMutableArray;
@protocol MMFinderLiveFansGroupOperationReportDelegate, MMFinderLiveMusicSettingReportDelegate;

@protocol WCFinderLiveStarterViewControllerDelegate <MMLiveStarterViewControllerDelegate>

@optional
- (void)onMMLiveStarterViewControllerShowFansGroupPanel:(id <MMFinderLiveFansGroupOperationReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerShowMusicSettingPanelWithDelegate:(id <MMFinderLiveMusicSettingReportDelegate>)arg1;
- (void)onMMLiveStarterViewControllerSelectRoomsForRedPacket:(NSArray *)arg1;
- (void)onMMLiveStarterViewControllerShowGameList:(NSMutableArray *)arg1 showSearch:(_Bool)arg2;
- (void)onMMLiveStarterViewControllerStartGameLiveWithViewModel:(MMFinderGameLiveStarterViewModel *)arg1;
- (void)onMMLiveStarterViewControllerAddGoods;
- (void)onMMLiveStarterViewControllerEditDesc;
@end
