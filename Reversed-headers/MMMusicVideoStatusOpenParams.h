//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MMMusicMVSongInfo, MMMusicShareItem;

@interface MMMusicVideoStatusOpenParams : NSObject
{
    MMMusicMVSongInfo *_mvSongInfo;
    MMMusicShareItem *_shareItem;
}

+ (id)fromXML:(struct XmlReaderNode_t *)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MMMusicShareItem *shareItem; // @synthesize shareItem=_shareItem;
@property(retain, nonatomic) MMMusicMVSongInfo *mvSongInfo; // @synthesize mvSongInfo=_mvSongInfo;
- (id)toXML;

@end
