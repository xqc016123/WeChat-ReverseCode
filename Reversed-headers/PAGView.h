//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSHashTable, NSMutableDictionary, NSString, PAGFile, PAGPlayer, PAGSurface, ValueAnimator;

@interface PAGView : UIView
{
    PAGPlayer *pagPlayer;
    PAGSurface *pagSurface;
    PAGFile *pagFile;
    NSString *filePath;
    ValueAnimator *valueAnimator;
    _Bool _isPlaying;
    _Bool _isVisible;
    NSMutableDictionary *textReplacementMap;
    NSMutableDictionary *imageReplacementMap;
    NSHashTable *listeners;
    _Bool _isAsyncFlushing;
    _Bool _bufferPrepared;
    _Bool _isInBackground;
}

+ (Class)layerClass;
+ (void)RegisterFlushQueueDestoryMethod;
+ (id)FlushQueue;
@property _Bool isInBackground; // @synthesize isInBackground=_isInBackground;
@property _Bool bufferPrepared; // @synthesize bufferPrepared=_bufferPrepared;
@property _Bool isAsyncFlushing; // @synthesize isAsyncFlushing=_isAsyncFlushing;
- (void)renderTargetBufferPrepared:(id)arg1;
- (void)applicationDidEnterBackground:(id)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)applyReplacements;
- (void)replaceImage:(int)arg1 data:(id)arg2;
- (void)setTextData:(int)arg1 data:(id)arg2;
- (void)flushAsync;
- (_Bool)flush:(_Bool)arg1;
- (id)getRootComposition;
- (void)setFile:(id)arg1;
- (id)getFile;
- (void)freeCache;
- (id)getLayersUnderPoint:(struct CGPoint)arg1;
- (_Bool)flush;
- (void)setProgress:(double)arg1;
- (double)getProgress;
- (long long)duration;
- (void)setMatrix:(struct CGAffineTransform)arg1;
- (struct CGAffineTransform)matrix;
- (void)setScaleMode:(int)arg1;
- (int)scaleMode;
- (void)setMaxFrameRate:(float)arg1;
- (float)maxFrameRate;
- (void)setCacheScale:(float)arg1;
- (float)cacheScale;
- (void)setCacheEnabled:(_Bool)arg1;
- (_Bool)cacheEnabled;
- (void)setVideoEnabled:(_Bool)arg1;
- (_Bool)videoEnabled;
- (void)setComposition:(id)arg1;
- (id)getComposition;
- (_Bool)setPath:(id)arg1;
- (id)getPath;
- (void)setRepeatCount:(int)arg1;
- (void)stop;
- (void)doPlay;
- (void)play;
- (_Bool)isPlaying;
- (void)removeListener:(id)arg1;
- (void)addListener:(id)arg1;
- (void)onAnimationRepeat;
- (void)onAnimationCancel;
- (void)onAnimationEnd;
- (void)onAnimationStart;
- (void)onAnimationUpdate:(double)arg1;
- (void)initPAGSurface;
- (void)checkVisible;
- (void)setHidden:(_Bool)arg1;
- (void)setAlpha:(double)arg1;
- (void)didMoveToWindow;
- (void)setContentScaleFactor:(double)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)dealloc;
- (void)initPAG;
- (id)initWithFrame:(struct CGRect)arg1;

@end
