//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WCFinderTabSwitchView, WCFinderTabSwitchViewItem;

@protocol WCFinderTabSwitchViewDelegate <NSObject>
- (_Bool)onTabSwtichViewUserSelecteItem:(WCFinderTabSwitchViewItem *)arg1 oldItem:(WCFinderTabSwitchViewItem *)arg2;

@optional
- (void)onTabSwtichView:(WCFinderTabSwitchView *)arg1 unExposeItems:(NSArray *)arg2;
- (void)onTabSwtichView:(WCFinderTabSwitchView *)arg1 exposeItems:(NSArray *)arg2;
@end
