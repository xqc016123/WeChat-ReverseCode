//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol WCFinderFansListViewModelDelegate;

@interface WCFinderFansListViewModel : NSObject
{
    _Bool _hasMoreFans;
    _Bool _isFetchingData;
    id <WCFinderFansListViewModelDelegate> _delegate;
    unsigned long long _lastMaxFansId;
    NSMutableArray *_contactArray;
    NSMutableArray *_addContactArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *addContactArray; // @synthesize addContactArray=_addContactArray;
@property(retain, nonatomic) NSMutableArray *contactArray; // @synthesize contactArray=_contactArray;
@property(nonatomic) unsigned long long lastMaxFansId; // @synthesize lastMaxFansId=_lastMaxFansId;
@property(nonatomic) _Bool isFetchingData; // @synthesize isFetchingData=_isFetchingData;
@property(nonatomic) _Bool hasMoreFans; // @synthesize hasMoreFans=_hasMoreFans;
@property(nonatomic) __weak id <WCFinderFansListViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)removeFans:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
- (void)addToBlackList:(id)arg1 success:(CDUnknownBlockType)arg2 failure:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) long long fansCount;
@property(readonly, nonatomic) _Bool shouldShowOldFansTips;
- (id)getContactArrayWithSection:(long long)arg1;
- (void)fetchLocalData;
- (void)fetchMoreData;
- (id)init;

@end
