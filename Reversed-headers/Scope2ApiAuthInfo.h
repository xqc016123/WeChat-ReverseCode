//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface Scope2ApiAuthInfo : NSObject
{
    unsigned int _scopeStatus;
    NSString *_scopeDesc;
    NSMutableArray *_apiList;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *apiList; // @synthesize apiList=_apiList;
@property(retain, nonatomic) NSString *scopeDesc; // @synthesize scopeDesc=_scopeDesc;
@property(nonatomic) unsigned int scopeStatus; // @synthesize scopeStatus=_scopeStatus;

@end
