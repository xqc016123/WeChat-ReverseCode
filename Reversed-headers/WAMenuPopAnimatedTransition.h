//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAMenuBaseAnimatedTransition.h"

#import "MMUIViewControllerTransitionInfo-Protocol.h"

@class UIViewController;

@interface WAMenuPopAnimatedTransition : WAMenuBaseAnimatedTransition <MMUIViewControllerTransitionInfo>
{
    _Bool _isInteracting;
    UIViewController *animatedTransitionRespondViewController;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool isInteracting; // @synthesize isInteracting=_isInteracting;
@property(nonatomic) __weak UIViewController *animatedTransitionRespondViewController; // @synthesize animatedTransitionRespondViewController;
- (void)innerTransition:(id)arg1;
- (id)initWithViewController:(id)arg1;

@end
