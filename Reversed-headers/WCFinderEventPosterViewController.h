//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIViewController.h"

#import "WCActionSheetDelegate-Protocol.h"
#import "WCFinderEventDescriptionViewControllerDelegate-Protocol.h"
#import "WCFinderEventHeaderViewDelegate-Protocol.h"
#import "WCFinderFeedBaseViewControllerProtocol-Protocol.h"

@class FinderEventInfo, MMUIButton, MMWebImageView, NSString, UIView, WCFinderEventHeaderView;
@protocol WCFinderEventPosterViewControllerDelegate;

@interface WCFinderEventPosterViewController : MMUIViewController <WCFinderEventHeaderViewDelegate, WCFinderEventDescriptionViewControllerDelegate, WCActionSheetDelegate, WCFinderFeedBaseViewControllerProtocol>
{
    id <WCFinderEventPosterViewControllerDelegate> _delegate;
    unsigned long long _actionType;
    NSString *_flowId;
    FinderEventInfo *_eventInfo;
    UIView *_eventBackgroundContainer;
    MMWebImageView *_backgroundImageView;
    UIView *_gradientView;
    WCFinderEventHeaderView *_headerView;
    MMUIButton *_actionButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) MMUIButton *actionButton; // @synthesize actionButton=_actionButton;
@property(retain, nonatomic) WCFinderEventHeaderView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) UIView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) MMWebImageView *backgroundImageView; // @synthesize backgroundImageView=_backgroundImageView;
@property(retain, nonatomic) UIView *eventBackgroundContainer; // @synthesize eventBackgroundContainer=_eventBackgroundContainer;
@property(retain, nonatomic) FinderEventInfo *eventInfo; // @synthesize eventInfo=_eventInfo;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(nonatomic) __weak id <WCFinderEventPosterViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)finderEventDescriptionViewController:(id)arg1 didClickUrl:(id)arg2;
- (void)onEventHeaderClickMiniAppEntranceAction;
- (void)onEventHeaderClickDescriptionDetailAction;
- (void)onEventHeaderClickAuthorInfoAction;
- (unsigned long long)feedViewerScene;
- (unsigned long long)feedViewControllerScene;
- (void)actionButtonDidClick;
- (void)onClickBackItem;
- (void)genExitButton;
- (void)genJoinButton;
- (_Bool)useTransparentNavibar;
- (void)updateUI;
- (void)viewDidLoad;
- (id)initWithEventInfo:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
