//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;
@protocol MMOpenVoiceVideoHWencDelegate, OS_dispatch_queue;

@interface MMOpenVoiceVideoHWenc : NSObject
{
    struct OpaqueVTCompressionSession *EncodingSession;
    NSObject<OS_dispatch_queue> *aQueue;
    struct opaqueCMFormatDescription *format;
    CDStruct_d2aef016 *timingInfo;
    _Bool initialized;
    int frameCount;
    NSData *sps;
    NSData *pps;
    int mWidth;
    int mHeight;
    int mBR;
    _Bool Enable;
    _Bool Started;
    int FPS;
    NSString *error;
    id <MMOpenVoiceVideoHWencDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMOpenVoiceVideoHWencDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) int frameCount; // @synthesize frameCount;
@property(nonatomic) _Bool Started; // @synthesize Started;
@property(nonatomic) _Bool Enable; // @synthesize Enable;
@property(nonatomic) int FPS; // @synthesize FPS;
@property(nonatomic) __weak NSString *error; // @synthesize error;
- (void)stop;
- (int)encode:(struct __CVBuffer *)arg1;
- (void)start:(int)arg1 height:(int)arg2 bitrate:(int)arg3 framerate:(int)arg4;
- (void)SetHWEncFPS:(int)arg1;
- (void)SetHWEncBR:(int)arg1;
- (id)init;

@end
