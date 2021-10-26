//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

#import "PBCoding-Protocol.h"

@class MPPageFriendInfo, MPPagePayInfo, NSString;

@interface MPPageRelatedInfo : MMObject <PBCoding>
{
    unsigned int lastUpdatTimeStamp;
    NSString *fullUrl;
    MPPageFriendInfo *friendInfo;
    MPPagePayInfo *payInfo;
    NSString *pageIdentifier;
    NSString *wordingReportInfo;
    NSString *_originUrl;
    NSString *_title;
}

+ (void)initialize;
+ (void)PBArrayAdd_wordingReportInfo;
+ (void)PBArrayAdd_pageIdentifier;
+ (void)PBArrayAdd_lastUpdatTimeStamp;
+ (void)PBArrayAdd_payInfo;
+ (void)PBArrayAdd_friendInfo;
+ (void)PBArrayAdd_fullUrl;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSString *originUrl; // @synthesize originUrl=_originUrl;
@property(copy, nonatomic) NSString *wordingReportInfo; // @synthesize wordingReportInfo;
@property(copy, nonatomic) NSString *pageIdentifier; // @synthesize pageIdentifier;
@property(nonatomic) unsigned int lastUpdatTimeStamp; // @synthesize lastUpdatTimeStamp;
@property(retain, nonatomic) MPPagePayInfo *payInfo; // @synthesize payInfo;
@property(retain, nonatomic) MPPageFriendInfo *friendInfo; // @synthesize friendInfo;
@property(copy, nonatomic) NSString *fullUrl; // @synthesize fullUrl;
@property(readonly, copy) NSString *description;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
