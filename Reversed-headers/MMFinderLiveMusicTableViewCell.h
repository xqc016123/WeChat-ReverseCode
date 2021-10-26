//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMFinderLiveMultiSelectTableViewCell.h"

@class MMFinderLiveMusicDataItem, MMUILabel, PAGView, UIImageView;
@protocol MMFinderLiveMusicTableViewCellDelegate;

@interface MMFinderLiveMusicTableViewCell : MMFinderLiveMultiSelectTableViewCell
{
    MMFinderLiveMusicDataItem *_musicDataItem;
    id <MMFinderLiveMusicTableViewCellDelegate> _musicTableCellDelegate;
    MMUILabel *_musicNameLabel;
    MMUILabel *_musicAnchorLabel;
    PAGView *_playingAnimatedView;
    UIImageView *_playingStateImg;
}

+ (id)identifier;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *playingStateImg; // @synthesize playingStateImg=_playingStateImg;
@property(retain, nonatomic) PAGView *playingAnimatedView; // @synthesize playingAnimatedView=_playingAnimatedView;
@property(retain, nonatomic) MMUILabel *musicAnchorLabel; // @synthesize musicAnchorLabel=_musicAnchorLabel;
@property(retain, nonatomic) MMUILabel *musicNameLabel; // @synthesize musicNameLabel=_musicNameLabel;
@property(nonatomic) __weak id <MMFinderLiveMusicTableViewCellDelegate> musicTableCellDelegate; // @synthesize musicTableCellDelegate=_musicTableCellDelegate;
@property(retain, nonatomic) MMFinderLiveMusicDataItem *musicDataItem; // @synthesize musicDataItem=_musicDataItem;
- (void)updatePlayingStateImg;
- (void)createPlayingAnimatedView;
- (void)pausePlayingAnimatedView;
- (void)stopPlayingAnimatedView;
- (void)playPlayingAnimatedView;
- (void)updatePlayingAnimatedViewState;
- (void)updateMusicLabel;
- (void)onTapGesture:(id)arg1;
- (void)refreshUI;
- (void)layoutPlayingStateImg;
- (void)layoutPlayingIconView;
- (void)layoutMusicAnchorLabel;
- (void)layoutMusicNameLabel;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
