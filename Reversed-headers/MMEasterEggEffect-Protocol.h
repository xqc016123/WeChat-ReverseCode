//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIView;
@protocol MMEasterEggEffectDelegate;

@protocol MMEasterEggEffect <NSObject>
@property(retain, nonatomic) UIView *backgroundView;
@property(retain, nonatomic) NSString *sceneId;
@property(retain, nonatomic) NSString *sessionId;
@property(nonatomic) __weak id <MMEasterEggEffectDelegate> delegate;
- (void)endEffectWithReason:(unsigned int)arg1;
- (void)continueEffectWithInteractiveUI:(id)arg1;
- (_Bool)startEffect;
- (_Bool)isRunning;
@end
