//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AnimateEmojiBaseNode.h"

#import "YYModel-Protocol.h"

@class NSString, ScreenEffectNode;

@interface AnimateEmojiNode : AnimateEmojiBaseNode <YYModel>
{
    NSString *_key;
    NSString *_animFile;
    ScreenEffectNode *_screenEffect;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1 resDir:(id)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) ScreenEffectNode *screenEffect; // @synthesize screenEffect=_screenEffect;
@property(retain, nonatomic) NSString *animFile; // @synthesize animFile=_animFile;
@property(retain, nonatomic) NSString *key; // @synthesize key=_key;
@property(readonly, copy) NSString *debugDescription;
- (id)loadFramesFromDisk;
- (_Bool)isValid;

// Remaining properties
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
