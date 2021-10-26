//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TXTRTCPushURLParam : NSObject
{
    _Bool _isNumRoomId;
    _Bool _enableSmallVideo;
    _Bool _enableBlackStream;
    _Bool _isAutoRecvVideo;
    _Bool _isAutoRecvAudio;
    int _sdkAppId;
    int _appScene;
    int _env;
    int _pureAudioMode;
    int _bizType;
    NSString *_userId;
    NSString *_userSig;
    NSString *_privateMapKey;
    NSString *_roomId;
    unsigned long long _protocolType;
    NSString *_streamId;
    NSString *_recordId;
    NSString *_url;
    NSString *_logTag;
}

+ (id)parseURL:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *logTag; // @synthesize logTag=_logTag;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(nonatomic) _Bool isAutoRecvAudio; // @synthesize isAutoRecvAudio=_isAutoRecvAudio;
@property(nonatomic) _Bool isAutoRecvVideo; // @synthesize isAutoRecvVideo=_isAutoRecvVideo;
@property(nonatomic) _Bool enableBlackStream; // @synthesize enableBlackStream=_enableBlackStream;
@property(nonatomic) _Bool enableSmallVideo; // @synthesize enableSmallVideo=_enableSmallVideo;
@property(retain, nonatomic) NSString *recordId; // @synthesize recordId=_recordId;
@property(retain, nonatomic) NSString *streamId; // @synthesize streamId=_streamId;
@property(nonatomic) int bizType; // @synthesize bizType=_bizType;
@property(nonatomic) int pureAudioMode; // @synthesize pureAudioMode=_pureAudioMode;
@property(nonatomic) int env; // @synthesize env=_env;
@property(nonatomic) unsigned long long protocolType; // @synthesize protocolType=_protocolType;
@property(nonatomic) _Bool isNumRoomId; // @synthesize isNumRoomId=_isNumRoomId;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *privateMapKey; // @synthesize privateMapKey=_privateMapKey;
@property(retain, nonatomic) NSString *userSig; // @synthesize userSig=_userSig;
@property(retain, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(nonatomic) int appScene; // @synthesize appScene=_appScene;
@property(nonatomic) int sdkAppId; // @synthesize sdkAppId=_sdkAppId;
- (id)description;
- (id)generateEnterRoomParam;
@property(readonly, nonatomic) _Bool isRoomProtocol;
@property(readonly, nonatomic) _Bool isTrtcProtocol;
- (id)getErrorMessage:(long long)arg1;
- (long long)isValid;
- (id)init;

@end
