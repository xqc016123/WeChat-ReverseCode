//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class FinderClientDraftExtInfo, FinderExtendedReading, FinderFromAppInfo, FinderLiveDesc, FinderLocation, FinderLongVideoDesc, FinderMVInfo, FinderMediaExtra, FinderMusicInfo, FinderObjectBGMInfo, FinderObjectEventDesc, FinderTemplateInfo, FinderTopic, NSMutableArray, NSString;

@interface FinderObjectDesc : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) FinderClientDraftExtInfo *clientDraftExtInfo; // @dynamic clientDraftExtInfo;
@property(retain, nonatomic) NSString *description; // @dynamic description;
@property(nonatomic) unsigned long long draftObjectId; // @dynamic draftObjectId;
@property(retain, nonatomic) FinderObjectEventDesc *event; // @dynamic event;
@property(retain, nonatomic) FinderExtendedReading *extReading; // @dynamic extReading;
@property(retain, nonatomic) FinderMediaExtra *extra; // @dynamic extra;
@property(retain, nonatomic) FinderLocation *feedLocation; // @dynamic feedLocation;
@property(retain, nonatomic) FinderObjectBGMInfo *followPostInfo; // @dynamic followPostInfo;
@property(retain, nonatomic) FinderFromAppInfo *fromApp; // @dynamic fromApp;
@property(retain, nonatomic) FinderMusicInfo *imgFeedBgmInfo; // @dynamic imgFeedBgmInfo;
@property(retain, nonatomic) FinderLiveDesc *liveDesc; // @dynamic liveDesc;
@property(retain, nonatomic) FinderLocation *location; // @dynamic location;
@property(retain, nonatomic) FinderLongVideoDesc *longVideoDesc; // @dynamic longVideoDesc;
@property(retain, nonatomic) NSMutableArray *media; // @dynamic media;
@property(nonatomic) unsigned int mediaType; // @dynamic mediaType;
@property(retain, nonatomic) NSMutableArray *mentionedMusics; // @dynamic mentionedMusics;
@property(retain, nonatomic) NSMutableArray *mentionedUser; // @dynamic mentionedUser;
@property(retain, nonatomic) FinderMusicInfo *musicInfo; // @dynamic musicInfo;
@property(retain, nonatomic) FinderMVInfo *mvInfo; // @dynamic mvInfo;
@property(retain, nonatomic) FinderTemplateInfo *tmplInfo; // @dynamic tmplInfo;
@property(retain, nonatomic) FinderTopic *topic; // @dynamic topic;

@end
