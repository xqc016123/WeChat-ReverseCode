//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class NSString, WCSnsDelayShowInfo, WCSnsPreLoadInfo, WCSnsRepeatUrlInfo, WCSnsSocialInfluenceInfo;

@interface WCSnsOperation : MMObject <PBCoding>
{
    WCSnsSocialInfluenceInfo *socialInfluenceInfo;
    WCSnsPreLoadInfo *preloadInfo;
    WCSnsDelayShowInfo *delayShowInfo;
    WCSnsRepeatUrlInfo *repeatUrlInfo;
}

+ (void)initialize;
+ (void)PBArrayAdd_repeatUrlInfo;
+ (void)PBArrayAdd_delayShowInfo;
+ (void)PBArrayAdd_preloadInfo;
+ (void)PBArrayAdd_socialInfluenceInfo;
- (void).cxx_destruct;
@property(retain, nonatomic) WCSnsRepeatUrlInfo *repeatUrlInfo; // @synthesize repeatUrlInfo;
@property(retain, nonatomic) WCSnsDelayShowInfo *delayShowInfo; // @synthesize delayShowInfo;
@property(retain, nonatomic) WCSnsPreLoadInfo *preloadInfo; // @synthesize preloadInfo;
@property(retain, nonatomic) WCSnsSocialInfluenceInfo *socialInfluenceInfo; // @synthesize socialInfluenceInfo;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
