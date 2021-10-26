//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtobufLite/WXPBGeneratedMessage.h>

@class BaseRequest, FinderBaseRequest, FinderSyncClientInfo, NSData, NSMutableArray, NSString, SKBuiltinBuffer_t;

@interface FinderSyncRequest : WXPBGeneratedMessage
{
}

+ (void)initialize;

// Remaining properties
@property(retain, nonatomic) BaseRequest *baseRequest; // @dynamic baseRequest;
@property(retain, nonatomic) NSData *clientAiInfo; // @dynamic clientAiInfo;
@property(retain, nonatomic) FinderSyncClientInfo *clientInfo; // @dynamic clientInfo;
@property(nonatomic) unsigned int clientSyncType; // @dynamic clientSyncType;
@property(retain, nonatomic) NSMutableArray *contacts; // @dynamic contacts;
@property(retain, nonatomic) NSMutableArray *ctrlInfoList; // @dynamic ctrlInfoList;
@property(retain, nonatomic) NSString *entranceTipsId; // @dynamic entranceTipsId;
@property(retain, nonatomic) FinderBaseRequest *finderBasereq; // @dynamic finderBasereq;
@property(retain, nonatomic) NSString *finderUsername; // @dynamic finderUsername;
@property(nonatomic) unsigned int fredDeleted; // @dynamic fredDeleted;
@property(nonatomic) unsigned long long freqctrlSet; // @dynamic freqctrlSet;
@property(retain, nonatomic) SKBuiltinBuffer_t *keyBuf; // @dynamic keyBuf;
@property(retain, nonatomic) NSMutableArray *nearbyCtrlInfoList; // @dynamic nearbyCtrlInfoList;
@property(retain, nonatomic) NSString *nearbyEntranceTipsId; // @dynamic nearbyEntranceTipsId;
@property(nonatomic) unsigned int scene; // @dynamic scene;
@property(nonatomic) unsigned int selector; // @dynamic selector;
@property(retain, nonatomic) NSMutableArray *self; // @dynamic self;
@property(nonatomic) unsigned int stayDisplayTabType; // @dynamic stayDisplayTabType;

@end
