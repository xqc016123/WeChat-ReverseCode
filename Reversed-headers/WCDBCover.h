//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCTTableCoding-Protocol.h"

@class NSData, NSString;

@interface WCDBCover : NSObject <WCTTableCoding>
{
    int _codingType;
    NSString *_username;
    NSString *_tid;
    NSData *_buffer;
}

+ (void)__wcdb_column_constraint_65:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_64:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_63:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_62:(struct WCTBinding *)arg1;
+ (void)__wcdb_column_constraint_61:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)__wcdb_synthesize_60:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)codingType;
+ (const struct WCTProperty *)__wcdb_synthesize_59:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)buffer;
+ (const struct WCTProperty *)__wcdb_synthesize_58:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)tid;
+ (const struct WCTProperty *)__wcdb_synthesize_57:(struct WCTBinding *)arg1;
+ (const struct WCTProperty *)username;
+ (id)__wcdbtyper;
+ (const SyntaxList_7f15fe8c *)allProperties;
+ (const struct WCTBinding *)objectRelationalMapping;
- (void).cxx_destruct;
@property(nonatomic) int codingType; // @synthesize codingType=_codingType;
@property(copy, nonatomic) NSData *buffer; // @synthesize buffer=_buffer;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;

// Remaining properties
@property(nonatomic) _Bool isAutoIncrement;
@property(nonatomic) long long lastInsertedRowID;

@end
