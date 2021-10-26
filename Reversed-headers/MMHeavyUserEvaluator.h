//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMHeavyUserDataSource;
@protocol MMHeavyUserEvaluatorDelegate, OS_dispatch_queue;

@interface MMHeavyUserEvaluator : NSObject
{
    MMHeavyUserDataSource *m_dataSource;
    unsigned long long m_contactCount;
    unsigned long long m_sessionCount;
    unsigned long long m_wechatSize;
    unsigned long long m_yesterDayDumpCount;
    NSObject<OS_dispatch_queue> *m_calQueue;
    float m_pointStandard;
    id <MMHeavyUserEvaluatorDelegate> _delegate;
}

+ (float)p_getGaussianCDFWithMu:(float)arg1 withStd:(float)arg2 withValue:(float)arg3;
- (void).cxx_destruct;
@property(nonatomic) __weak id <MMHeavyUserEvaluatorDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)p_evaluateHeavyUserPoint;
- (void)p_reloadData;
- (unsigned long long)getHeavyUserPoint;
- (void)reevaluate;
- (id)initWithDataSource:(id)arg1 withQueue:(id)arg2;

@end
