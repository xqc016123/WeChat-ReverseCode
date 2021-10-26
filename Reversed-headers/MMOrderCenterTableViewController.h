//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMOrderCenterTableViewModularCellDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class MMOrderCenterTableView, NSMutableArray, NSString, UIImage, UIImageView, UILabel, UIView;
@protocol MMOrderCenterOrderDataProvider, MMOrderCenterReporter;

@interface MMOrderCenterTableViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate, MMOrderCenterTableViewModularCellDelegate>
{
    _Bool _loading;
    MMOrderCenterTableView *_tableView;
    id <MMOrderCenterReporter> _reporter;
    id <MMOrderCenterOrderDataProvider> _dataProvider;
    NSMutableArray *_orders;
    UILabel *_listEmptyView;
    UIImage *_listLoadingImage;
    UIImageView *_listLoadingView;
    UIView *_loadErrorView;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool loading; // @synthesize loading=_loading;
@property(retain, nonatomic) UIView *loadErrorView; // @synthesize loadErrorView=_loadErrorView;
@property(retain, nonatomic) UIImageView *listLoadingView; // @synthesize listLoadingView=_listLoadingView;
@property(retain, nonatomic) UIImage *listLoadingImage; // @synthesize listLoadingImage=_listLoadingImage;
@property(retain, nonatomic) UILabel *listEmptyView; // @synthesize listEmptyView=_listEmptyView;
@property(retain, nonatomic) NSMutableArray *orders; // @synthesize orders=_orders;
@property(retain, nonatomic) id <MMOrderCenterOrderDataProvider> dataProvider; // @synthesize dataProvider=_dataProvider;
@property(retain, nonatomic) id <MMOrderCenterReporter> reporter; // @synthesize reporter=_reporter;
@property(retain, nonatomic) MMOrderCenterTableView *tableView; // @synthesize tableView=_tableView;
- (void)reportEnteringReferrerFinderProfileOfOrder:(id)arg1;
- (void)reportEnteringShippingDetailsOfOrder:(id)arg1;
- (void)reportEnteringStoreOfOrder:(id)arg1;
- (void)reportEnteringDetailsOfOrder:(id)arg1;
- (void)removeRotationAnimationFromView:(id)arg1;
- (void)addRotationAnimationToView:(id)arg1;
- (void)navigateToWeAppWithId:(id)arg1 path:(id)arg2;
- (double)cellHeightForOrder:(id)arg1 estimate:(_Bool)arg2;
- (id)cellTypeForOrder:(id)arg1;
- (void)registerCellTypes;
- (void)fetchMoreOrderListItems;
- (id)newErrorView;
- (void)configureLoadErrorViewForShowing:(_Bool)arg1;
- (void)configureListEmptyViewForShowing:(_Bool)arg1;
- (void)configureOrderListForShowing:(_Bool)arg1;
- (void)configureLoadingViewForShowing:(_Bool)arg1;
- (void)configureViewHidingForStatus:(long long)arg1;
- (void)checkAndConfigureListEmptyView;
- (void)fetchOrderListFailedWithErrorType:(int)arg1 message:(id)arg2;
- (void)fetchOrderListSucceededWithOrders:(id)arg1 startover:(_Bool)arg2;
- (void)onTrackingViewTappedForOrder:(id)arg1;
- (void)onSkuListExpandTappedForOrder:(id)arg1;
- (void)onHeaderStoreTappedForOrder:(id)arg1;
- (void)onFinderRefererTappedForOrder:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)didMoveToParentViewController:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)fetchOrderListForcingRefresh:(_Bool)arg1;
- (id)initWithOrderDataProvider:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
