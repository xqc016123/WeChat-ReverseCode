//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMPageSheetBaseViewController.h"

#import "WCPayBuyCoinDetailViewDelegate-Protocol.h"

@class GetWecoinPriceListResponse, NSString, WCPayBuyCoinDetailView;
@protocol WCCoinBuyCoinViewDelegate;

@interface WCCoinBuyCoinView : MMPageSheetBaseViewController <WCPayBuyCoinDetailViewDelegate>
{
    _Bool _alwaysDarkMode;
    id <WCCoinBuyCoinViewDelegate> _delegate;
    GetWecoinPriceListResponse *_priceListsResponse;
    unsigned long long _panelShowType;
    WCPayBuyCoinDetailView *_buyCoinDetailView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayBuyCoinDetailView *buyCoinDetailView; // @synthesize buyCoinDetailView=_buyCoinDetailView;
@property(nonatomic) unsigned long long panelShowType; // @synthesize panelShowType=_panelShowType;
@property(nonatomic) _Bool alwaysDarkMode; // @synthesize alwaysDarkMode=_alwaysDarkMode;
@property(retain, nonatomic) GetWecoinPriceListResponse *priceListsResponse; // @synthesize priceListsResponse=_priceListsResponse;
@property(nonatomic) __weak id <WCCoinBuyCoinViewDelegate> delegate; // @synthesize delegate=_delegate;
- (id)makeBackButtonWithImageColor:(id)arg1;
- (id)getBalanceButton:(long long)arg1;
- (void)clickCloseButton:(id)arg1;
- (void)shouldUpdateHeight;
- (void)shouldOpenWeb:(id)arg1;
- (void)clickWithInfo:(id)arg1;
- (void)pageSheetDidClose:(_Bool)arg1;
- (long long)overrideUserInterfaceStyle;
- (void)viewDidTransitionToNewSize;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
