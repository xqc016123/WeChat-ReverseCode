//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

@class FinderUserPrepareResponse, WCTableViewManager;

@interface WCFinderAccountSettingViewController : MMUIViewController
{
    FinderUserPrepareResponse *_prepareResponse;
    WCTableViewManager *_tableViewManager;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCTableViewManager *tableViewManager; // @synthesize tableViewManager=_tableViewManager;
@property(retain, nonatomic) FinderUserPrepareResponse *prepareResponse; // @synthesize prepareResponse=_prepareResponse;
- (id)makeSectionSeparator;
- (void)openWebWithURLString:(id)arg1;
- (void)showMiniProgramWithAcctConfig:(id)arg1;
- (void)clickCell:(id)arg1 indexPath:(id)arg2;
- (void)reloadTableView;
- (void)configureTableView;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

@end
