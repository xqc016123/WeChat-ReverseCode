//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSIndexPath;
@protocol BTItemCellViewModelVideoPlayProtocol;

@interface BTVideoExposureItem : MMObject
{
    NSIndexPath *_cellViewIndexPath;
    double _exposureRatio;
    id <BTItemCellViewModelVideoPlayProtocol> _itemCellViewModelVideoPlay;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <BTItemCellViewModelVideoPlayProtocol> itemCellViewModelVideoPlay; // @synthesize itemCellViewModelVideoPlay=_itemCellViewModelVideoPlay;
@property(nonatomic) double exposureRatio; // @synthesize exposureRatio=_exposureRatio;
@property(retain, nonatomic) NSIndexPath *cellViewIndexPath; // @synthesize cellViewIndexPath=_cellViewIndexPath;
- (void)calcExposureRatioWithExposureRect:(struct CGRect)arg1 videoRect:(struct CGRect)arg2;

@end
