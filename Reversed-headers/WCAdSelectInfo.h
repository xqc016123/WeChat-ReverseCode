//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString, WCAdCardBtnInfo;

@interface WCAdSelectInfo : NSObject <NSCoding>
{
    NSString *leftBtnTitle;
    NSString *rightBtnTitle;
    WCAdCardBtnInfo *_leftBtnClickActionInfo;
    WCAdCardBtnInfo *_rightBtnClickActionInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCAdCardBtnInfo *rightBtnClickActionInfo; // @synthesize rightBtnClickActionInfo=_rightBtnClickActionInfo;
@property(retain, nonatomic) WCAdCardBtnInfo *leftBtnClickActionInfo; // @synthesize leftBtnClickActionInfo=_leftBtnClickActionInfo;
@property(retain, nonatomic) NSString *rightBtnTitle; // @synthesize rightBtnTitle;
@property(retain, nonatomic) NSString *leftBtnTitle; // @synthesize leftBtnTitle;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
