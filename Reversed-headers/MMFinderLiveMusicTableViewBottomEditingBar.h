//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, MMUIButton, MMUILabel, UIImageView;
@protocol MMFinderLiveMusicTableViewBottomEditingDelegate;

@interface MMFinderLiveMusicTableViewBottomEditingBar : UIView
{
    _Bool _isAllSelected;
    id <MMFinderLiveMusicTableViewBottomEditingDelegate> _editingDelegate;
    UIImageView *_selectedImageView;
    MMUILabel *_allSelectedTipLabel;
    MMUIButton *_deleteButton;
    CAGradientLayer *_gradientLayer;
}

+ (double)gradientMaskHeight;
+ (double)preferHeight;
- (void).cxx_destruct;
@property(nonatomic) _Bool isAllSelected; // @synthesize isAllSelected=_isAllSelected;
@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) MMUIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) MMUILabel *allSelectedTipLabel; // @synthesize allSelectedTipLabel=_allSelectedTipLabel;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(nonatomic) __weak id <MMFinderLiveMusicTableViewBottomEditingDelegate> editingDelegate; // @synthesize editingDelegate=_editingDelegate;
- (void)updateDeleteButtonEnabled:(_Bool)arg1;
- (void)clearAllSelectedState;
- (void)deleteButtonAction;
- (void)onSelectedImgTapGesture:(id)arg1;
- (void)layoutGradientLayer;
- (void)layoutDeleteButton;
- (void)layoutAllSelectedTipLabel;
- (void)layoutSelectedImageView;
- (void)layoutUI;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end
