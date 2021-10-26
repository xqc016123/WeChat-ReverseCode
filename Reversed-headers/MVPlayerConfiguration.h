//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MVPlayerTimeRange;

@interface MVPlayerConfiguration : NSObject
{
    _Bool _shouldShowAlbumImage;
    _Bool _resetWhileEpisodeIndexChanged;
    unsigned long long _actionAfterDurationAvailable;
    MVPlayerTimeRange *_loopTimeRange;
    double _initalTime;
    unsigned long long _minimizationWindowUIStyle;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long minimizationWindowUIStyle; // @synthesize minimizationWindowUIStyle=_minimizationWindowUIStyle;
@property(nonatomic) double initalTime; // @synthesize initalTime=_initalTime;
@property(retain, nonatomic) MVPlayerTimeRange *loopTimeRange; // @synthesize loopTimeRange=_loopTimeRange;
@property(nonatomic) _Bool resetWhileEpisodeIndexChanged; // @synthesize resetWhileEpisodeIndexChanged=_resetWhileEpisodeIndexChanged;
@property(nonatomic) _Bool shouldShowAlbumImage; // @synthesize shouldShowAlbumImage=_shouldShowAlbumImage;
@property(nonatomic) unsigned long long actionAfterDurationAvailable; // @synthesize actionAfterDurationAvailable=_actionAfterDurationAvailable;
- (id)init;

@end
