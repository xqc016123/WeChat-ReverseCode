//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "ForwardMessageLogicDelegate-Protocol.h"
#import "MMNavBarInteractiveDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"
#import "WCFinderFeedFlowLiveCellDelegate-Protocol.h"
#import "WCFinderFeedStaticCoverCollectionViewCellDelegate-Protocol.h"
#import "WCFinderNearbyFlowViewControllerDelegate-Protocol.h"
#import "WCFinderPOIRelatedStreamViewModelDelegate-Protocol.h"
#import "WCFinderPOIRelatedUICollectionReusableViewDelegate-Protocol.h"
#import "WCFinderStreamFooterViewActionDelegate-Protocol.h"
#import "WCFinderStreamLayoutDelegate-Protocol.h"
#import "WCGeneralMonitorDelegate-Protocol.h"

@class ForwardMessageLogicController, NSMutableDictionary, NSString, UILabel, UIMonitorCollectionView, UITapGestureRecognizer, WCFinderAnimationLoadingView, WCFinderPOIRelatedStreamViewModel, WCFinderStreamFooterView, WCFinderStreamLayout;

@interface WCFinderPOIRelatedStreamViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCGeneralMonitorDelegate, WCFinderStreamLayoutDelegate, WCFinderFeedStaticCoverCollectionViewCellDelegate, WCFinderStreamFooterViewActionDelegate, WCFinderPOIRelatedStreamViewModelDelegate, WCFinderPOIRelatedUICollectionReusableViewDelegate, MMNavBarInteractiveDelegate, WCActionSheetDelegate, ForwardMessageLogicDelegate, WCFinderNearbyFlowViewControllerDelegate, WCFinderFeedFlowLiveCellDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    _Bool _isEnableMarkRead;
    UIMonitorCollectionView *_collectionView;
    WCFinderStreamLayout *_streamLayout;
    WCFinderStreamFooterView *_refreshFooterView;
    WCFinderPOIRelatedStreamViewModel *_viewModel;
    unsigned long long _footerRefreshState;
    unsigned long long _appearTime;
    NSMutableDictionary *_exposeTimeDict;
    WCFinderAnimationLoadingView *_loadingView;
    UILabel *_stateTipsLabel;
    UITapGestureRecognizer *_stateRetryGesture;
    ForwardMessageLogicController *_forwardLogic;
    unsigned long long _enterTime;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(retain, nonatomic) ForwardMessageLogicController *forwardLogic; // @synthesize forwardLogic=_forwardLogic;
@property(retain, nonatomic) UITapGestureRecognizer *stateRetryGesture; // @synthesize stateRetryGesture=_stateRetryGesture;
@property(retain, nonatomic) UILabel *stateTipsLabel; // @synthesize stateTipsLabel=_stateTipsLabel;
@property(retain, nonatomic) WCFinderAnimationLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) NSMutableDictionary *exposeTimeDict; // @synthesize exposeTimeDict=_exposeTimeDict;
@property(nonatomic) unsigned long long appearTime; // @synthesize appearTime=_appearTime;
@property(nonatomic) _Bool isEnableMarkRead; // @synthesize isEnableMarkRead=_isEnableMarkRead;
@property(nonatomic) unsigned long long footerRefreshState; // @synthesize footerRefreshState=_footerRefreshState;
@property(retain, nonatomic) WCFinderPOIRelatedStreamViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) WCFinderStreamFooterView *refreshFooterView; // @synthesize refreshFooterView=_refreshFooterView;
@property(retain, nonatomic) WCFinderStreamLayout *streamLayout; // @synthesize streamLayout=_streamLayout;
@property(retain, nonatomic) UIMonitorCollectionView *collectionView; // @synthesize collectionView=_collectionView;
- (void)onClickCoverContact:(id)arg1 contentVM:(id)arg2;
- (void)onNearbyFlowViewIndexChanged:(long long)arg1;
- (void)onTriggerUnLikeAction:(id)arg1;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)onHeaderViewClickPhoneCallAction:(id)arg1;
- (void)onHeaderViewClickGoProfileAction;
- (void)onHeaderViewClickNaviAction;
- (void)poiRelatedStreamNextPageAppendData:(id)arg1;
- (void)poiRelatedStreamDataSourceChanged;
- (void)poiRelatedStreamSourceNoMoreData;
- (void)poiRelatedStreamDataSourceFetchError;
- (void)exposeMarkRead:(id)arg1;
- (void)reportFeedStreamClickWithCollectionView:(id)arg1 selectedIndexPath:(id)arg2;
- (void)scrollViewDidScrollToTop:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)onClickCoverContact:(id)arg1 dataItem:(id)arg2;
- (void)fetchNextPage;
- (_Bool)isEnableStreamFooterTrigerLoading:(id)arg1;
- (void)didClickStreamFooterRefresh:(id)arg1;
- (id)specialParamsForIndex:(id)arg1;
- (id)feedIdByIndex:(id)arg1;
- (id)getCollectionView;
- (void)reloadDataWrap;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 decorationEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 decorationHeightAtSection:(unsigned long long)arg3;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 headerEdgeInsetAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 footerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 headerHeightAtSection:(unsigned long long)arg3;
- (double)collectionView:(id)arg1 layout:(id)arg2 cellHeightAtIndexPath:(id)arg3 withWidth:(double)arg4;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 cellEdgeInsetAtSection:(unsigned long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 cellSpaceAtSection:(unsigned long long)arg3;
- (unsigned long long)collectionView:(id)arg1 layout:(id)arg2 columnCountAtSection:(unsigned long long)arg3;
- (void)OnForwardMessageCancel:(id)arg1;
- (void)OnForwardMessageSend:(id)arg1;
- (id)getCurrentViewController;
- (void)resetDetailToInitStatusWithRetry:(_Bool)arg1;
- (void)resetCurrentStatus;
- (void)loadingFinished;
- (void)startLoading;
- (void)reportPOIError;
- (void)claimPOI;
- (void)sharePOIToMoment;
- (void)sharePOIToFriend;
- (void)onAction:(id)arg1;
- (void)onReturn:(id)arg1;
- (id)fadeTintColor;
- (id)normalTintColor;
- (_Bool)isSetNormalToBlackStyle;
- (void)autoPlayLiveCell;
- (_Bool)useBlackStatusbar;
- (_Bool)useTransparentNavibar;
- (_Bool)isEmptyData;
- (double)getHeaderViewHeight;
- (void)setupLayoutAndCollectionView;
- (void)setupNavigationItem;
- (void)stateRetryGestureAction:(id)arg1;
- (void)onFeedFlowViewEnterBackground;
- (void)onFeedFlowViewEnterForeground;
- (void)exposeItemViewDisappear;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithPOIParamsModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
