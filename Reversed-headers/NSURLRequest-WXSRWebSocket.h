//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSURLRequest.h>

@class NSArray;

@interface NSURLRequest (WXSRWebSocket)
@property(readonly, nonatomic) _Bool WX_TLSSkipHostnameCheck;
@property(readonly, nonatomic) NSArray *WX_SR_SSLPinnedCertificates;
- (id)URLByRemoveQBPostSuffix;
- (id)requestByRemovingPostCheckKey;
- (_Bool)isQBPostSuffixURL;
@end
