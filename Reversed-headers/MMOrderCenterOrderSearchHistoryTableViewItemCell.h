//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSString, UIButton, UIImageView, UILabel, UIView;
@protocol MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate;

@interface MMOrderCenterOrderSearchHistoryTableViewItemCell : UITableViewCell
{
    NSString *_keyword;
    id <MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> _delegate;
    UIImageView *_historyIconView;
    UILabel *_keywordView;
    UIButton *_removeView;
    UIView *_separatorBarView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIView *separatorBarView; // @synthesize separatorBarView=_separatorBarView;
@property(retain, nonatomic) UIButton *removeView; // @synthesize removeView=_removeView;
@property(retain, nonatomic) UILabel *keywordView; // @synthesize keywordView=_keywordView;
@property(retain, nonatomic) UIImageView *historyIconView; // @synthesize historyIconView=_historyIconView;
@property(nonatomic) __weak id <MMOrderCenterOrderSearchHistoryTableViewItemCellDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
- (void)onRemoveTapped;
- (void)layoutSubviews;
- (void)updateWithKeyword:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
