//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "BTBaseSectionData.h"

@class GetRecommendFeedsResp_RecommendCardMsg, NSMutableDictionary;

@interface BTRecoFlowSectionData : BTBaseSectionData
{
    _Bool _isExposed;
    GetRecommendFeedsResp_RecommendCardMsg *_cardMsg;
    NSMutableDictionary *_cachedRowHeightMap;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *cachedRowHeightMap; // @synthesize cachedRowHeightMap=_cachedRowHeightMap;
@property(nonatomic) _Bool isExposed; // @synthesize isExposed=_isExposed;
@property(retain, nonatomic) GetRecommendFeedsResp_RecommendCardMsg *cardMsg; // @synthesize cardMsg=_cardMsg;
- (double)heightForSectionFooter;
- (void)updateHeight:(double)arg1 forRow:(long long)arg2;
- (double)heightForRowInSection:(unsigned long long)arg1;
- (long long)numberOfRowsInSection;
- (unsigned long long)sectionType;
- (id)initWithSectionWidth:(double)arg1 cardMsg:(id)arg2;

@end
