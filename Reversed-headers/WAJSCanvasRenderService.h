//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WAJSCanvasBaseService.h"

#import "MMWebJSContextWasmDelegate-Protocol.h"

@class JSVirtualMachine, MMWebJSContext, MMWebJsBasePkgInfo, NSMutableDictionary, NSString, WACanvasFrameView;
@protocol WAJSCanvasRenderServiceDelegate;

@interface WAJSCanvasRenderService : WAJSCanvasBaseService <MMWebJSContextWasmDelegate>
{
    NSString *_sessionId;
    MMWebJsBasePkgInfo *_basePkg;
    JSVirtualMachine *_jsVM;
    MMWebJSContext *_mainJSContext;
    WACanvasFrameView *_mainFrameViewContext;
    NSMutableDictionary *_noRetainDicFrameSetView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *noRetainDicFrameSetView; // @synthesize noRetainDicFrameSetView=_noRetainDicFrameSetView;
@property(retain) WACanvasFrameView *mainFrameViewContext; // @synthesize mainFrameViewContext=_mainFrameViewContext;
@property(retain) MMWebJSContext *mainJSContext; // @synthesize mainJSContext=_mainJSContext;
@property(retain) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
@property(retain, nonatomic) MMWebJsBasePkgInfo *basePkg; // @synthesize basePkg=_basePkg;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (id)getFileData:(id)arg1;
- (_Bool)isCanvasViewExistForId:(id)arg1;
- (id)canvasViewForCanvasId:(id)arg1;
- (id)frameSetViewForId:(id)arg1;
- (_Bool)isFrameSetExistForId:(id)arg1;
- (void)removeCanvasView:(id)arg1;
- (id)allFrameSetView;
- (void)initWeixinCanvas;
- (id)genCanvasId;
- (void)initRenderWeixinWorker;
- (void)injectFrameSetExtensionJs:(id)arg1;
- (void)__handleLogicServicePostMsg:(id)arg1;
- (void)handleLogicServicePostMsg:(id)arg1;
- (void)__evaluateJavascript:(id)arg1 path:(id)arg2;
- (void)mainThread_sendEvaluateJavascript:(id)arg1 path:(id)arg2;
- (void)mainThread_sendEvaluateJavascript:(id)arg1;
- (void)weAppJsApiCallbackWithScript:(id)arg1;
- (void)initRenderVM;
- (void)removeFrameSetView:(id)arg1;
- (void)addFrameSetView:(id)arg1;
- (void)stopService;
- (void)startService;
- (id)initWithBasePkg:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <WAJSCanvasRenderServiceDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
