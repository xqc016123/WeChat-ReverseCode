//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class MMUILabel, MMUIViewController, NSArray, NSObject, NSString, UIEvent, UINavigationController, UIViewController, UIWindow;
@protocol IWCCTRichTextViewProtocol;

@protocol IWCViewManager <NSObject>
- (MMUILabel<IWCCTRichTextViewProtocol> *)getCTRichTextView;
- (NSObject *)showAlertWithTitle:(NSString *)arg1 message:(NSString *)arg2 btnTitle:(NSString *)arg3;
- (void)remoteControlReceivedWithEvent:(UIEvent *)arg1;
- (_Bool)isNavigationInWeAppSheetMode:(UINavigationController *)arg1;
- (_Bool)isWeAppStatusBarHidden;
- (double)tabBarHeight;
- (void)tabBarController_setMaskViewHidden:(_Bool)arg1 animated:(_Bool)arg2;
- (UIViewController *)tabBarController_currentViewController;
- (_Bool)isVCUseCustomPopTransitioning:(Class)arg1;
- (Class)WAWebViewControllerClass;
- (Class)MMTabBarBaseViewControllerClass;
- (Class)MMTabBarControllerClass;
- (void)setStatusBarStyle:(long long)arg1 viewController:(UIViewController *)arg2;
- (void)setStatusBarHidden:(_Bool)arg1 animation:(long long)arg2 viewController:(UIViewController *)arg3;
- (_Bool)isVisibleChildViewControllerOf:(UIViewController *)arg1 ToFindViewController:(UIViewController *)arg2;
- (UINavigationController *)getPrevNavigationControllerFor:(UIViewController *)arg1;
- (void)setPrimaryShown;
- (void)setPrimaryHidden;
- (void)checkColumnModeForCurOrientationIfNeeded;
- (double)getLeftColumnWidthForSplitView;
- (void)setRightViewControllerForSplitView:(UIViewController *)arg1 forPush:(_Bool)arg2;
- (UIViewController *)getRightViewControllerForSplitView;
- (_Bool)isUsingSplitView;
- (_Bool)shouldUseSplitView;
- (NSString *)ApplicationDidBecomeActiveNotificationName;
- (NSArray *)navigationControllerListWithViewController:(UIViewController *)arg1;
- (UIViewController *)topViewControllerOfMainWindow;
- (UIViewController *)getMainWindowViewController;
- (UINavigationController *)topNavigationControllerOnMainWindow;
- (unsigned long long)ParserDetectorTypeWith:(unsigned long long)arg1;
- (UIViewController *)topMostController;
- (UINavigationController *)getCurrentNavigationController;
- (UIViewController *)topViewControllerOfWindow:(UIWindow *)arg1;
- (MMUIViewController *)getTopViewController;
- (UIWindow *)getMainWindow;
- (void)removeViewController:(MMUIViewController *)arg1;
- (void)addViewController:(MMUIViewController *)arg1;
@end
