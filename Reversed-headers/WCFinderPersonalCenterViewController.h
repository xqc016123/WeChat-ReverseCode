//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "MMAcceptAgreementResultViewControllerDelegate-Protocol.h"
#import "MMCommonActionSheetPickerDelegate-Protocol.h"
#import "MMFinderLiveCreateNoticeViewControllerDelegate-Protocol.h"
#import "MMImagePickerManagerDelegate-Protocol.h"
#import "MMSightCameraViewControllerDelegate-Protocol.h"
#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"
#import "UICollectionViewDelegateFlowLayout-Protocol.h"
#import "WCActionSheetDelegate-Protocol.h"
#import "WCCoinGetIncomePageInfoCgiDelegate-Protocol.h"
#import "WCFinderCameraViewControllerDelegate-Protocol.h"
#import "WCFinderContactExt-Protocol.h"
#import "WCFinderCreateCoordinatorDelegate-Protocol.h"
#import "WCFinderPersonalCenterCollectionViewCellDelegate-Protocol.h"
#import "WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate-Protocol.h"
#import "WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate-Protocol.h"
#import "WCFinderPostViewControllerDelegate-Protocol.h"
#import "WCFinderRedDotExt-Protocol.h"
#import "WCFinderRedDotNotifyExt-Protocol.h"
#import "WCFinderUserPrepareCgiDelegate-Protocol.h"

@class FinderUserPrepareResponse, MMCommonActionSheetPicker, MMLoadingView, MMWebViewController, NSString, UICollectionView, UICollectionViewFlowLayout, UINavigationController, WCActionSheet, WCActionSheetWithHeadAvatar, WCFinderContact, WCFinderCreateCoordinator, WCFinderCreateLiveViewModel, WCFinderPersonalCenterCollectionViewCell, WCFinderPersonalCenterTakePhotoCollectionViewCell, WCFinderPersonalCenterViewModel, WCFinderPersonalCenterWeixinContactCollectionViewCell, WCFinderPostActionSheetConfigArray;

@interface WCFinderPersonalCenterViewController : MMUIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, WCFinderRedDotNotifyExt, WCFinderContactExt, WCFinderUserPrepareCgiDelegate, WCFinderCreateCoordinatorDelegate, WCFinderRedDotExt, WCFinderPersonalCenterCollectionViewCellDelegate, WCFinderPostViewControllerDelegate, WCFinderPersonalCenterTakePhotoCollectionViewCellDelegate, MMSightCameraViewControllerDelegate, WCActionSheetDelegate, WCFinderCameraViewControllerDelegate, MMImagePickerManagerDelegate, WCFinderPersonalCenterWeixinContactCollectionViewCellDelegate, MMAcceptAgreementResultViewControllerDelegate, MMCommonActionSheetPickerDelegate, WCCoinGetIncomePageInfoCgiDelegate, MMFinderLiveCreateNoticeViewControllerDelegate>
{
    _Bool _hasRedDotAtEnter;
    _Bool _showIncomeEntrance;
    _Bool _clickIncomeEntranceCreateFinder;
    _Bool _hasOpenUserLogoutPage;
    _Bool _pendingOpenNativeCreatorCenter;
    _Bool _openPostActionDirectly;
    WCFinderContact *_contact;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    WCFinderPersonalCenterWeixinContactCollectionViewCell *_weChatAcctCell;
    WCFinderPersonalCenterCollectionViewCell *_finderAcctCell;
    WCFinderPersonalCenterTakePhotoCollectionViewCell *_takePhotoCell;
    FinderUserPrepareResponse *_prepareResponse;
    WCFinderCreateCoordinator *_createCoordinator;
    WCActionSheetWithHeadAvatar *_publishActionSheet;
    WCActionSheet *_liveActionSheet;
    MMCommonActionSheetPicker *_datePicker;
    MMLoadingView *_createLiveNoticeLoadingView;
    UINavigationController *_imagePickerVC;
    WCFinderPersonalCenterViewModel *_viewModel;
    unsigned long long _enterTime;
    WCFinderPostActionSheetConfigArray *_postSheetConfigArray;
    WCFinderCreateLiveViewModel *_createLiveVM;
    NSString *_preloadCreatorCenterH5Url;
    MMWebViewController *_creatorCenterH5WebVC;
    unsigned long long _fromScene;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool openPostActionDirectly; // @synthesize openPostActionDirectly=_openPostActionDirectly;
@property(nonatomic) unsigned long long fromScene; // @synthesize fromScene=_fromScene;
@property(retain, nonatomic) MMWebViewController *creatorCenterH5WebVC; // @synthesize creatorCenterH5WebVC=_creatorCenterH5WebVC;
@property(retain, nonatomic) NSString *preloadCreatorCenterH5Url; // @synthesize preloadCreatorCenterH5Url=_preloadCreatorCenterH5Url;
@property(nonatomic) _Bool pendingOpenNativeCreatorCenter; // @synthesize pendingOpenNativeCreatorCenter=_pendingOpenNativeCreatorCenter;
@property(nonatomic) _Bool hasOpenUserLogoutPage; // @synthesize hasOpenUserLogoutPage=_hasOpenUserLogoutPage;
@property(nonatomic) _Bool clickIncomeEntranceCreateFinder; // @synthesize clickIncomeEntranceCreateFinder=_clickIncomeEntranceCreateFinder;
@property(nonatomic) _Bool showIncomeEntrance; // @synthesize showIncomeEntrance=_showIncomeEntrance;
@property(retain, nonatomic) WCFinderCreateLiveViewModel *createLiveVM; // @synthesize createLiveVM=_createLiveVM;
@property(retain, nonatomic) WCFinderPostActionSheetConfigArray *postSheetConfigArray; // @synthesize postSheetConfigArray=_postSheetConfigArray;
@property(nonatomic) unsigned long long enterTime; // @synthesize enterTime=_enterTime;
@property(nonatomic) _Bool hasRedDotAtEnter; // @synthesize hasRedDotAtEnter=_hasRedDotAtEnter;
@property(retain, nonatomic) WCFinderPersonalCenterViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UINavigationController *imagePickerVC; // @synthesize imagePickerVC=_imagePickerVC;
@property(retain, nonatomic) MMLoadingView *createLiveNoticeLoadingView; // @synthesize createLiveNoticeLoadingView=_createLiveNoticeLoadingView;
@property(retain, nonatomic) MMCommonActionSheetPicker *datePicker; // @synthesize datePicker=_datePicker;
@property(retain, nonatomic) WCActionSheet *liveActionSheet; // @synthesize liveActionSheet=_liveActionSheet;
@property(retain, nonatomic) WCActionSheetWithHeadAvatar *publishActionSheet; // @synthesize publishActionSheet=_publishActionSheet;
@property(retain, nonatomic) WCFinderCreateCoordinator *createCoordinator; // @synthesize createCoordinator=_createCoordinator;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
@property(retain, nonatomic) WCFinderPersonalCenterTakePhotoCollectionViewCell *takePhotoCell; // @synthesize takePhotoCell=_takePhotoCell;
@property(retain, nonatomic) WCFinderPersonalCenterCollectionViewCell *finderAcctCell; // @synthesize finderAcctCell=_finderAcctCell;
@property(retain, nonatomic) WCFinderPersonalCenterWeixinContactCollectionViewCell *weChatAcctCell; // @synthesize weChatAcctCell=_weChatAcctCell;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) WCFinderContact *contact; // @synthesize contact=_contact;
- (void)buildIncomeReddot;
- (void)getIncomePageInfoCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)viewControllerDidCancelCreateLiveNotice:(id)arg1;
- (void)viewController:(id)arg1 didFinishCreateLiveNoticeWithInfo:(id)arg2;
- (void)commonActionSheetPicker:(id)arg1 didSelectRow:(long long)arg2 inComponent:(long long)arg3 pickItem:(id)arg4;
- (void)commonPickerConfirm:(id)arg1 selectedRows:(id)arg2;
- (void)onClickMakeSureActionWithViewController:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingAssetWithDataItem:(id)arg2 GPSInfoArrayOfAsset:(id)arg3 dataReportModel:(id)arg4;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingSightWithInfo:(id)arg2;
- (void)MMImagePickerManagerDidCancel:(id)arg1;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithEditImageAttr:(id)arg2;
- (void)MMImagePickerManager:(id)arg1 didFinishPickingImageWithInfo:(id)arg2;
- (void)onSightPictureTaken:(id)arg1 imageData:(id)arg2 withFrontCamera:(_Bool)arg3 editImageAttr:(id)arg4;
- (void)showImagePicker:(long long)arg1;
- (void)presentFinderPostViewControllerWithPostStateModel:(id)arg1 GPSInfoArrayOfAsset:(id)arg2;
- (void)onShortVideoTaken:(id)arg1 thumbImg:(id)arg2 editVideoAttr:(id)arg3 paramModel:(id)arg4;
- (void)onSightCameraCancel:(id)arg1;
- (void)onCreateLiveNoticeSuceess:(_Bool)arg1 bookingTime:(id)arg2;
- (void)onCreateLiveNoticeWithInfo:(id)arg1;
- (void)showLiveNoticeWithLiveInfo:(id)arg1;
- (void)showLiveNotice;
- (void)showLiveCreate;
- (void)showFinderPublishView;
- (void)showFinderCameraViewController;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (unsigned long long)getReportPostScene;
- (void)showPostEntrance;
- (void)personalCenterColloectionViewCellClickShowIncomeAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickRedPacketEvent:(id)arg1;
- (void)personalCenterColloectionViewCellClickTakePhotoAction:(id)arg1;
- (void)showIncomVC;
- (id)appendReportArgumentToCreatorCenterUrl:(id)arg1;
- (void)openNativeCreatorCenter;
- (id)creatorCenterH5Url;
- (id)h5CreatorCenterWebView:(id *)arg1;
- (void)preloadCreatorCenterH5;
- (void)openH5CreatorCenter;
- (void)personalCenterColloectionViewCellClickCreatorCenter:(id)arg1;
- (void)personalCenterColloectionViewCellClickLiveAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickCameraAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickPrivateMSGAction:(id)arg1;
- (void)personalCenterColloectionViewCellClickMentionAction:(id)arg1;
- (void)finderRedDotDataRevokedWithPathKey:(id)arg1;
- (void)finderRedDotDataChangedWithPathKey:(id)arg1;
- (void)userPrepareCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)userPrepareCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)onFinderContactUpdate:(id)arg1;
- (void)finderRealNameSuccess:(id)arg1;
- (void)finderCreateAccountCancel:(id)arg1;
- (void)finderCreateAccountSuccess:(id)arg1;
- (unsigned long long)favCount;
- (unsigned long long)likeCount;
- (void)reportPersonCenterEvent;
- (void)onFinderLiveRedDotChanged;
- (void)onFinderNotifyFansCountNeedReload;
- (void)onFinderNotifyUnreadMentionCountNeedReload;
- (void)onFinderCreatorCenterNeedReload;
- (void)onFinderCreatorCenterRedDotChanged;
- (void)onFinderPrivateMsgRedDotNeedReload;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickBlockManager;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickOrderCenter;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickPivateMsgList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickNotificationList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFavList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickLikeListList;
- (void)WCFinderPersonalCenterWeixinContactCollectionViewCellDidClickFollowingList;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (_Bool)_showRedPacketEvent;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)openAccountLogoutingView;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)openCamera;
- (void)getFinderContactReviewStatus;
- (void)setupSubviews;
- (void)dealloc;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)shouldInteractivePop;
- (void)viewWillLayoutSubviews;
- (_Bool)didNotCreateFinder;
- (void)viewDidLoad;
- (id)initWithInitModel:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
