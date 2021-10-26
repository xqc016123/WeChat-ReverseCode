//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ReaderMessageViewModel.h"

@interface MultiColumnReaderMessageViewModel : ReaderMessageViewModel
{
}

+ (id)getMessageFTSText:(id)arg1;
+ (_Bool)canCreateMessageViewModelWithMessageWrap:(id)arg1;
- (id)makeSearchPreview:(id)arg1;
- (double)messageNodeViewHeight;
- (double)messageNodeViewWidth;
- (_Bool)hasMoneyUnit:(id)arg1;
- (struct CGSize)muteSloganSize;
- (id)muteSloganFont;
- (id)muteSloganStr;
- (id)headerMenuImage;
- (struct CGSize)headerMenuSize;
@property(readonly, nonatomic) double readerLineLMargin;
@property(readonly, nonatomic) double readerItemLMargin;
@property(readonly, nonatomic) double readerViewWidth;
@property(readonly, nonatomic) double itemInsideWidth;
- (_Bool)isNewPaymsgType;
- (_Bool)isReaderWrapScheduleJumpType;
- (_Bool)isReaderWrapInvalidUrlJumpType;
- (_Bool)isReaderWrapWeappJumpType;
- (_Bool)isShowReadAll;
- (_Bool)isDisableEditMode;
- (double)measureScheduleContentViewHeight:(id)arg1 originY:(double)arg2;
- (struct CGSize)measureContentViewSize:(struct CGSize)arg1;
- (id)cellViewClassName;

@end
