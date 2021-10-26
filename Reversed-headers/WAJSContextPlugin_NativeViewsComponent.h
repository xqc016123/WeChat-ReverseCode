//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WAJSContextPlugin_NativeViewsRootViewProtocol-Protocol.h"

@class NSMutableDictionary, NSString, UIView;

@interface WAJSContextPlugin_NativeViewsComponent : NSObject <WAJSContextPlugin_NativeViewsRootViewProtocol>
{
    UIView *_rootView;
    NSMutableDictionary *_nativeViews;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *nativeViews; // @synthesize nativeViews=_nativeViews;
@property(nonatomic) __weak UIView *rootView; // @synthesize rootView=_rootView;
- (_Bool)removeChildView:(unsigned int)arg1;
- (id)getChildView:(unsigned int)arg1;
- (void)updateParentId:(unsigned int)arg1 forChild:(unsigned int)arg2;
- (unsigned int)insertChildView:(id)arg1 viewId:(unsigned int)arg2 parentId:(unsigned int)arg3;
- (id)initWithRootView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
