//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSThread;
@protocol MMGameAudioMixDelegate;

@interface MMGameAudioMixWrapper : NSObject
{
    id <MMGameAudioMixDelegate> delegate;
    int _outputSampleRate;
    int _outputChannel;
    long long _outputFormat;
    void *_mixerHandler;
    int _outputSize;
    NSMutableDictionary *_nsDic;
    struct shared_ptr<WAGameThreadWaitReady> _wait;
    _Bool _ready;
    _Bool _terminal;
    NSThread *_thread;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property _Bool terminal; // @synthesize terminal=_terminal;
@property _Bool ready; // @synthesize ready=_ready;
@property(retain, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(nonatomic) __weak id <MMGameAudioMixDelegate> delegate; // @synthesize delegate;
- (int)getInputSampleCount:(int)arg1 sampleRate:(int)arg2;
- (int)getInputSampleSize:(int)arg1 sampleRate:(int)arg2 format:(long long)arg3;
- (void)onMixThread;
- (void)destroy;
- (id)getData;
- (_Bool)putData:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4 data:(void *)arg5 size:(int)arg6;
- (id)getStream:(int)arg1 channel:(int)arg2 sampleRate:(int)arg3 format:(long long)arg4;
- (_Bool)create:(int)arg1 channel:(int)arg2 format:(long long)arg3;
- (void)dealloc;
- (id)init;

@end
