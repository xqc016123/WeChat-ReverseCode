//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCEditVideoLayoutView.h"

@class NSMutableArray;

@interface MMTextStateEditVideoLayoutView : WCEditVideoLayoutView
{
    NSMutableArray *_currentMusicLyrics;
    double _currentLyricTotalTime;
}

- (void).cxx_destruct;
@property(nonatomic) double currentLyricTotalTime; // @synthesize currentLyricTotalTime=_currentLyricTotalTime;
@property(retain, nonatomic) NSMutableArray *currentMusicLyrics; // @synthesize currentMusicLyrics=_currentMusicLyrics;
- (void)onEditSuccess:(_Bool)arg1 withTimeRange:(CDStruct_e83c9415)arg2;
- (void)initEditImageView;

@end
