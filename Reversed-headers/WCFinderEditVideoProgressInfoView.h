//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMUIView.h"

#import "UICollectionViewDataSource-Protocol.h"
#import "UICollectionViewDelegate-Protocol.h"

@class EditVideoAttr, NSMutableArray, NSString, UICollectionView, UIView, WCFinderEditVideoPorgressInfoViewModel;
@protocol WCFinderEditVideoProgressInfoViewDelegate;

@interface WCFinderEditVideoProgressInfoView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate>
{
    _Bool _isScrollingTriggerByPlayer;
    id <WCFinderEditVideoProgressInfoViewDelegate> _delegate;
    UICollectionView *_collectionView;
    UIView *_line;
    WCFinderEditVideoPorgressInfoViewModel *_viewModel;
    unsigned long long _triggerTime;
    EditVideoAttr *_attr;
    NSMutableArray *_videoPieceDuration;
}

+ (double)viewH;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *videoPieceDuration; // @synthesize videoPieceDuration=_videoPieceDuration;
@property(retain, nonatomic) EditVideoAttr *attr; // @synthesize attr=_attr;
@property(nonatomic) _Bool isScrollingTriggerByPlayer; // @synthesize isScrollingTriggerByPlayer=_isScrollingTriggerByPlayer;
@property(nonatomic) unsigned long long triggerTime; // @synthesize triggerTime=_triggerTime;
@property(nonatomic) __weak WCFinderEditVideoPorgressInfoViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <WCFinderEditVideoProgressInfoViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)onDrag:(id)arg1;
- (double)getProgress;
- (unsigned long long)currentPlayIndex;
- (void)generateVideoPieceDurationArray;
- (void)updateWithEditVideoAttr:(id)arg1;
- (void)reloadCollectionView;
- (void)layoutSubviews;
- (void)setProgress:(double)arg1 withAnimatedDuration:(double)arg2;
- (_Bool)isDragging;
- (void)setupWithProgressVM:(id)arg1;
- (void)setup;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
