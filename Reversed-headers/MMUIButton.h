//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@interface MMUIButton : UIButton
{
    _Bool _autoExpandHitArea;
    long long _expandHitWidth;
    long long _expandHitHeight;
    id _customObject;
    struct UIEdgeInsets _touchInsets;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id customObject; // @synthesize customObject=_customObject;
@property(nonatomic) _Bool autoExpandHitArea; // @synthesize autoExpandHitArea=_autoExpandHitArea;
@property(nonatomic) long long expandHitHeight; // @synthesize expandHitHeight=_expandHitHeight;
@property(nonatomic) long long expandHitWidth; // @synthesize expandHitWidth=_expandHitWidth;
@property(nonatomic) struct UIEdgeInsets touchInsets; // @synthesize touchInsets=_touchInsets;
- (void)setNormalImage:(id)arg1 selectedImage:(id)arg2;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;

@end
