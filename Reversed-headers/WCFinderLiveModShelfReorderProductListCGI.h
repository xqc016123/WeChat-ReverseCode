//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCFinderLiveBaseCgi.h"

@class NSArray;

@interface WCFinderLiveModShelfReorderProductListCGI : WCFinderLiveBaseCgi
{
    unsigned int _modCmdId;
    unsigned long long _productId;
    NSArray *_reorderedShelfProductList;
    CDUnknownBlockType _successBlock;
    CDUnknownBlockType _failBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType failBlock; // @synthesize failBlock=_failBlock;
@property(copy, nonatomic) CDUnknownBlockType successBlock; // @synthesize successBlock=_successBlock;
@property(retain, nonatomic) NSArray *reorderedShelfProductList; // @synthesize reorderedShelfProductList=_reorderedShelfProductList;
@property(nonatomic) unsigned long long productId; // @synthesize productId=_productId;
@property(nonatomic) unsigned int modCmdId; // @synthesize modCmdId=_modCmdId;
- (void)finderCgiDidFailWithError:(id)arg1 response:(id)arg2;
- (void)didGetResponse:(id)arg1;
- (void)createRequest;
- (id)initWithFinderTaskId:(id)arg1 reorderedShelfProductList:(id)arg2 successBlock:(CDUnknownBlockType)arg3 failBlock:(CDUnknownBlockType)arg4;

@end
