//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSHashTable, NSLock;

@interface TXSafeArray : NSObject
{
    NSHashTable *_hashTable;
    NSLock *_lock;
}

+ (id)weakValueArray;
+ (id)strongValueArray;
- (void).cxx_destruct;
@property(retain, nonatomic) NSLock *lock; // @synthesize lock=_lock;
@property(retain, nonatomic) NSHashTable *hashTable; // @synthesize hashTable=_hashTable;
- (id)copy;
- (void)removeAllObjects;
@property(readonly, nonatomic) NSArray *allValues;
@property(readonly, nonatomic) unsigned long long count;
- (void)removeObject:(id)arg1;
- (void)addObject:(id)arg1;
- (void)safeOperate:(CDUnknownBlockType)arg1;
- (id)init;

@end
