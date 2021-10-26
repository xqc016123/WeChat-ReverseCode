//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class BizProfileV2Resp, BrandProfileEnterInfo, CContact, NSString;

@interface BrandProfileReporter : NSObject
{
    unsigned int _enterTimestamp;
    unsigned int _enterScene;
    NSString *_enterSearchID;
    CContact *_brandContact;
    BizProfileV2Resp *_cacheItem;
    NSString *_searchClickId;
    BrandProfileEnterInfo *_profileEnterInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) BrandProfileEnterInfo *profileEnterInfo; // @synthesize profileEnterInfo=_profileEnterInfo;
@property(retain, nonatomic) NSString *searchClickId; // @synthesize searchClickId=_searchClickId;
@property(retain, nonatomic) BizProfileV2Resp *cacheItem; // @synthesize cacheItem=_cacheItem;
@property(retain, nonatomic) CContact *brandContact; // @synthesize brandContact=_brandContact;
@property(retain, nonatomic) NSString *enterSearchID; // @synthesize enterSearchID=_enterSearchID;
@property(nonatomic) unsigned int enterScene; // @synthesize enterScene=_enterScene;
- (void)report22118WhenClick;
- (void)report22118WhenExposure;
- (void)report21648WhenUnfold;
- (void)report21648WhenClick:(id)arg1;
- (void)report21647WhenClick:(long long)arg1;
- (void)report21647WhenExposure:(long long)arg1;
- (void)report17748WhenRejectRecieveMsg;
- (void)report17523WhenClick:(id)arg1;
- (void)report17523WhenExposure:(id)arg1;
- (void)report13307WithOpType:(unsigned int)arg1 subOpType:(unsigned int)arg2;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2 subFuwu:(id)arg3 subFuwuIdx:(unsigned long long)arg4;
- (void)report10809WithFuwu:(id)arg1 fuwuIdx:(unsigned long long)arg2;
- (id)reportShowFuwuList;
- (unsigned int)reportBrandType;
- (void)report10298WhenExit;
- (void)report10298WhenEnter;
- (unsigned int)enterTimestamp;
- (id)initWithEnterTimeStamp:(unsigned int)arg1;

@end
