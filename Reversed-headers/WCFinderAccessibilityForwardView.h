//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@interface WCFinderAccessibilityForwardView : UIView
{
    id _target;
    SEL _labelGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) SEL labelGenerator; // @synthesize labelGenerator=_labelGenerator;
@property(nonatomic) __weak id target; // @synthesize target=_target;
- (id)accessibilityLabel;
- (_Bool)isAccessibilityElement;

@end
