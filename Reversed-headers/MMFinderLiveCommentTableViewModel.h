//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMLiveCommentTableViewModel.h"

@interface MMFinderLiveCommentTableViewModel : MMLiveCommentTableViewModel
{
    CDUnknownBlockType _actionInvokeBlock;
    CDUnknownBlockType _getSingleEnableCommentCallback;
    CDUnknownBlockType _tableVMDidDoubleTapBlock;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType tableVMDidDoubleTapBlock; // @synthesize tableVMDidDoubleTapBlock=_tableVMDidDoubleTapBlock;
@property(copy, nonatomic) CDUnknownBlockType getSingleEnableCommentCallback; // @synthesize getSingleEnableCommentCallback=_getSingleEnableCommentCallback;
@property(copy, nonatomic) CDUnknownBlockType actionInvokeBlock; // @synthesize actionInvokeBlock=_actionInvokeBlock;
- (void)loopMetricsCollection:(id)arg1 didFinishCollectingMetrics:(id)arg2;
- (id)appendCommentContentFromMySelf:(id)arg1 toUser:(id)arg2 postType:(unsigned long long)arg3;
- (void)prepareTableViewCellForReuse:(id)arg1;
- (id)createCommentPubbleViewWithCommentItem:(id)arg1;
- (Class)commentTableViewCellFrameClass;
- (id)commentDataMgr;
- (id)initWithTaskId:(id)arg1;

@end
