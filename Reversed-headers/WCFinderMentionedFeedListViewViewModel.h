//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCFinderDataItemExt-Protocol.h"

@class NSArray, NSData, NSMutableArray, NSString, WCFinderBaseCgi;
@protocol WCFinderMentionedFeedListViewViewModelDelegate, WCFinderMentionedListDataTransferDelegate;

@interface WCFinderMentionedFeedListViewViewModel : NSObject <WCFinderDataItemExt>
{
    _Bool _continueFlag;
    _Bool _isAuthorPerspective;
    id <WCFinderMentionedFeedListViewViewModelDelegate> _delegate;
    id <WCFinderMentionedListDataTransferDelegate> _dataTransferDelegate;
    NSArray *_contentVMS;
    NSData *_lastBuffer;
    unsigned long long _refreshTime;
    long long _firstViewedIdx;
    long long _currentSelectedCount;
    unsigned long long _commentScene;
    long long _fetchType;
    NSMutableArray *_mutableContentVMS;
    WCFinderBaseCgi *_loadingCGI;
    NSString *_username;
    NSString *_dataScene;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *dataScene; // @synthesize dataScene=_dataScene;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) WCFinderBaseCgi *loadingCGI; // @synthesize loadingCGI=_loadingCGI;
@property(retain, nonatomic) NSMutableArray *mutableContentVMS; // @synthesize mutableContentVMS=_mutableContentVMS;
@property(nonatomic) long long fetchType; // @synthesize fetchType=_fetchType;
@property(nonatomic) unsigned long long commentScene; // @synthesize commentScene=_commentScene;
@property(nonatomic) long long currentSelectedCount; // @synthesize currentSelectedCount=_currentSelectedCount;
@property(nonatomic) long long firstViewedIdx; // @synthesize firstViewedIdx=_firstViewedIdx;
@property(nonatomic) unsigned long long refreshTime; // @synthesize refreshTime=_refreshTime;
@property(nonatomic) _Bool isAuthorPerspective; // @synthesize isAuthorPerspective=_isAuthorPerspective;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(nonatomic) _Bool continueFlag; // @synthesize continueFlag=_continueFlag;
@property(retain, nonatomic) NSArray *contentVMS; // @synthesize contentVMS=_contentVMS;
@property(nonatomic) __weak id <WCFinderMentionedListDataTransferDelegate> dataTransferDelegate; // @synthesize dataTransferDelegate=_dataTransferDelegate;
@property(nonatomic) __weak id <WCFinderMentionedFeedListViewViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)notifyMentionedSelectedFeedChanged;
- (void)onFinderDataItemMentiondDisplayStatusChanged:(id)arg1;
- (id)mapDataItems:(id)arg1;
- (void)requestNextPageData;
- (long long)contentIndexWithTid:(id)arg1;
- (id)contentWithTid:(id)arg1;
@property(readonly, nonatomic) _Bool loading;
- (void)dealloc;
- (id)initWithUsername:(id)arg1 isAuthorPerspective:(_Bool)arg2 pageSection:(id)arg3 firstViewedIdx:(long long)arg4 dataScene:(id)arg5;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
