//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface V2TXRTMPVideoQualityParam : NSObject
{
    _Bool _enableAdjustResolution;
    _Bool _enableAdjustBitrate;
    int _qualityIndex;
}

@property(nonatomic) _Bool enableAdjustBitrate; // @synthesize enableAdjustBitrate=_enableAdjustBitrate;
@property(nonatomic) _Bool enableAdjustResolution; // @synthesize enableAdjustResolution=_enableAdjustResolution;
@property(nonatomic) int qualityIndex; // @synthesize qualityIndex=_qualityIndex;
- (id)description;
- (id)init;

@end
