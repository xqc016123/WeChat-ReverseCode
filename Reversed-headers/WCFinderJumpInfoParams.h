//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, WCFinderFeedContentVM;
@protocol WCFinderCardWebViewControllerDelegate;

@interface WCFinderJumpInfoParams : NSObject
{
    WCFinderFeedContentVM *_contentVM;
    id <WCFinderCardWebViewControllerDelegate> _cardWebDelegate;
    unsigned long long _pos;
    unsigned long long _miniAppScene;
    NSString *_finderId;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *finderId; // @synthesize finderId=_finderId;
@property(nonatomic) unsigned long long miniAppScene; // @synthesize miniAppScene=_miniAppScene;
@property(nonatomic) unsigned long long pos; // @synthesize pos=_pos;
@property(nonatomic) __weak id <WCFinderCardWebViewControllerDelegate> cardWebDelegate; // @synthesize cardWebDelegate=_cardWebDelegate;
@property(retain, nonatomic) WCFinderFeedContentVM *contentVM; // @synthesize contentVM=_contentVM;

@end
