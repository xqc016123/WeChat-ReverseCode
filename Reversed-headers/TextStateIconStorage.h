//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PBCoding-Protocol.h"

@class NSMutableArray, NSMutableDictionary, NSRecursiveLock, NSString, TextStatePublishIconList;

@interface TextStateIconStorage : NSObject <PBCoding>
{
    NSString *configId;
    unsigned long long key;
    NSMutableArray *groups;
    NSMutableArray *icons;
    NSRecursiveLock *_accessLock;
    NSMutableDictionary *_idToIconDict;
}

+ (void)initialize;
+ (void)PBArrayAdd_icons;
+ (void)PBArrayAdd_groups;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_configId;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *idToIconDict; // @synthesize idToIconDict=_idToIconDict;
@property(retain, nonatomic) NSRecursiveLock *accessLock; // @synthesize accessLock=_accessLock;
@property(retain, nonatomic) NSMutableArray *icons; // @synthesize icons;
@property(retain, nonatomic) NSMutableArray *groups; // @synthesize groups;
@property(nonatomic) unsigned long long key; // @synthesize key;
@property(retain, nonatomic) NSString *configId; // @synthesize configId;
- (void)clearCachedDescription;
- (id)iconForId:(id)arg1;
@property(readonly, nonatomic) TextStatePublishIconList *publishIconList;
- (void)immediateLoadData;
- (id)initWithConfig:(id)arg1;
- (id)init;
- (id)getPBPropertyTable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
