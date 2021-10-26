//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAReportBaseItem.h"

@interface WAReportRuntimePerformanceIndexItem : WAReportBaseItem
{
    _Bool _isGame;
    unsigned int _reportScene;
    unsigned int _reportSceneCurrentCount;
    unsigned int _indexType;
    unsigned int _sampleCount;
    unsigned int _runtimeCount;
    unsigned long long _indexNumBeforeLaunch;
    unsigned long long _indexNumInCurrentScene;
    unsigned long long _indexAvgSampleNumInCurrentLifeSpan;
    unsigned long long _indexMaxSampleNumInCurrentLifeSpan;
}

@property(nonatomic) _Bool isGame; // @synthesize isGame=_isGame;
@property(nonatomic) unsigned int runtimeCount; // @synthesize runtimeCount=_runtimeCount;
@property(nonatomic) unsigned int sampleCount; // @synthesize sampleCount=_sampleCount;
@property(nonatomic) unsigned long long indexMaxSampleNumInCurrentLifeSpan; // @synthesize indexMaxSampleNumInCurrentLifeSpan=_indexMaxSampleNumInCurrentLifeSpan;
@property(nonatomic) unsigned long long indexAvgSampleNumInCurrentLifeSpan; // @synthesize indexAvgSampleNumInCurrentLifeSpan=_indexAvgSampleNumInCurrentLifeSpan;
@property(nonatomic) unsigned long long indexNumInCurrentScene; // @synthesize indexNumInCurrentScene=_indexNumInCurrentScene;
@property(nonatomic) unsigned long long indexNumBeforeLaunch; // @synthesize indexNumBeforeLaunch=_indexNumBeforeLaunch;
@property(nonatomic) unsigned int indexType; // @synthesize indexType=_indexType;
@property(nonatomic) unsigned int reportSceneCurrentCount; // @synthesize reportSceneCurrentCount=_reportSceneCurrentCount;
@property(nonatomic) unsigned int reportScene; // @synthesize reportScene=_reportScene;
- (id)reportString;
- (int)reportID;

@end
