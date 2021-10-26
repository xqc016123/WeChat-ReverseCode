//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ILinkEventExt-Protocol.h"
#import "MMPageSheetBottomViewDelegate-Protocol.h"

@class MMPageSheetAdapter, MMUILabel, NSString, PopUpWithHalfDialog, RichTextView, UIView, WCPayWebImageView;
@protocol WCPayLQTPageSheetDelegate;

@interface WCPayLQTPageSheet : NSObject <MMPageSheetBottomViewDelegate, ILinkEventExt>
{
    id <WCPayLQTPageSheetDelegate> _delegate;
    MMPageSheetAdapter *_pageAdapter;
    UIView *_pageSheetDetailView;
    WCPayWebImageView *_mainIconImgView;
    MMUILabel *_largeContentLabel;
    MMUILabel *_contentLabel;
    RichTextView *_textView;
    PopUpWithHalfDialog *_pageData;
    NSString *_mainContent;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *mainContent; // @synthesize mainContent=_mainContent;
@property(retain, nonatomic) PopUpWithHalfDialog *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) RichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) MMUILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) MMUILabel *largeContentLabel; // @synthesize largeContentLabel=_largeContentLabel;
@property(retain, nonatomic) WCPayWebImageView *mainIconImgView; // @synthesize mainIconImgView=_mainIconImgView;
@property(retain, nonatomic) UIView *pageSheetDetailView; // @synthesize pageSheetDetailView=_pageSheetDetailView;
@property(retain, nonatomic) MMPageSheetAdapter *pageAdapter; // @synthesize pageAdapter=_pageAdapter;
@property(nonatomic) __weak id <WCPayLQTPageSheetDelegate> delegate; // @synthesize delegate=_delegate;
- (void)onLinkClicked:(id)arg1 withRect:(struct CGRect)arg2;
- (double)bottomViewBottomMargin;
- (double)bottomViewTopMargin;
- (long long)styleForPageSheetCancelButton;
- (id)titleForPageSheetCancelButton;
- (void)onClickPageSheetCancelButton;
- (long long)styleForPageSheetConfirmButton;
- (id)titleForPageSheetConfirmButton;
- (void)onClickPageSheetConfirmButton;
- (id)getAdapter;
- (void)popPageSheet;
- (void)pushPageSheet:(id)arg1;
- (void)dismissPageSheet;
- (void)closeBtnClick;
- (void)cancelBtnClick;
- (id)genCloseLeftButton;
- (id)genCancelLeftButton;
- (void)showPageSheet;
- (void)setupDetailView;
- (_Bool)shouldSetupDetailViewContent;
- (void)setupAdapter;
- (void)updateDetailViewWithPopUpDialogData:(id)arg1 popUpMainContent:(id)arg2;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
