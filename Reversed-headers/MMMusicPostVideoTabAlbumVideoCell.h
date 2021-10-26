//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CAGradientLayer, MMAssetSelectCheckButton, MMMusicAlbumVideoCellModel, UIImageView, UILabel, UIView;
@protocol MMMusicPostVideoTabAlbumVideoCellDelegate;

@interface MMMusicPostVideoTabAlbumVideoCell : UICollectionViewCell
{
    MMMusicAlbumVideoCellModel *dataModel;
    UIImageView *_imageView;
    UILabel *_timeLabel;
    CAGradientLayer *_timeLayer;
    MMAssetSelectCheckButton *m_selectCheckButton;
    id <MMMusicPostVideoTabAlbumVideoCellDelegate> _delegate;
    UIView *_selectCoverView;
    struct UIEdgeInsets _checkButtonHitTetsSlop;
}

+ (id)reuseKey;
- (void).cxx_destruct;
@property(nonatomic) struct UIEdgeInsets checkButtonHitTetsSlop; // @synthesize checkButtonHitTetsSlop=_checkButtonHitTetsSlop;
@property(retain, nonatomic) UIView *selectCoverView; // @synthesize selectCoverView=_selectCoverView;
@property(nonatomic) __weak id <MMMusicPostVideoTabAlbumVideoCellDelegate> delegate; // @synthesize delegate=_delegate;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;
- (void)onSelectBtnClicked;
- (void)udpateCheckBtnSelection:(_Bool)arg1;
- (id)getImage;
- (void)updateTimeLabelAndTimeLayer;
- (id)timeStringBySeconds:(double)arg1;
- (void)layoutSubviews;
- (void)updateIsSelectedStatus:(_Bool)arg1;
- (void)updateMinDuration:(double)arg1;
- (void)updateCanMultiSelect:(_Bool)arg1;
- (void)updateModel:(id)arg1 canMultiSelect:(_Bool)arg2 minDuration:(double)arg3 isSelected:(_Bool)arg4;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
