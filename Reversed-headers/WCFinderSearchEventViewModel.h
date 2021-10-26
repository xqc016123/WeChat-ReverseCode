//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSMutableArray, NSString, WCFinderBaseCgi, WCFinderFlowEventReportInfo;
@protocol WCFinderSearchEventViewModelDelegate;

@interface WCFinderSearchEventViewModel : NSObject
{
    _Bool _hasNoMoreData;
    id <WCFinderSearchEventViewModelDelegate> _delegate;
    NSString *_flowId;
    NSString *_requestId;
    NSString *_queryText;
    NSData *_lastBuffer;
    NSMutableArray *_eventArray;
    WCFinderBaseCgi *_requestCgi;
    WCFinderFlowEventReportInfo *_reportInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCFinderFlowEventReportInfo *reportInfo; // @synthesize reportInfo=_reportInfo;
@property(retain, nonatomic) WCFinderBaseCgi *requestCgi; // @synthesize requestCgi=_requestCgi;
@property(retain, nonatomic) NSMutableArray *eventArray; // @synthesize eventArray=_eventArray;
@property(nonatomic) _Bool hasNoMoreData; // @synthesize hasNoMoreData=_hasNoMoreData;
@property(retain, nonatomic) NSData *lastBuffer; // @synthesize lastBuffer=_lastBuffer;
@property(copy, nonatomic) NSString *queryText; // @synthesize queryText=_queryText;
@property(copy, nonatomic) NSString *requestId; // @synthesize requestId=_requestId;
@property(copy, nonatomic) NSString *flowId; // @synthesize flowId=_flowId;
@property(nonatomic) __weak id <WCFinderSearchEventViewModelDelegate> delegate; // @synthesize delegate=_delegate;
- (void)reportFlowEventIfNeed;
- (_Bool)isEqualWithLastQueryText:(id)arg1;
- (void)searchNextPage;
- (void)searchEventWithText:(id)arg1;

@end
