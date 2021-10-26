//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MMCanvasJsApiHandlerViewDelegate-Protocol.h"
#import "MMWebCanvasViewDataDelegate-Protocol.h"
#import "MMWebCanvasViewEventDelegate-Protocol.h"
#import "MMWebJSContextWasmDelegate-Protocol.h"
#import "WAJSEventHandlerContextDelegate-Protocol.h"

@class JSVirtualMachine, MMCanvasJsApiHandler, MMCanvasMainJSContext, MMWebCanvasView, MMWebJsBasePkgInfo, NSData, NSMutableArray, NSString, WACanvasLaunchParams, WACanvasPerformaceInfo, WACanvasPluginScheduler;
@protocol WACanvasJSServiceDelegate;

@interface WACanvasJSService : NSObject <MMCanvasJsApiHandlerViewDelegate, MMWebJSContextWasmDelegate, WAJSEventHandlerContextDelegate, MMWebCanvasViewDataDelegate, MMWebCanvasViewEventDelegate>
{
    WACanvasLaunchParams *_launchParams;
    id <WACanvasJSServiceDelegate> _delegate;
    JSVirtualMachine *_jsVM;
    MMWebCanvasView *_canvasView;
    MMWebJsBasePkgInfo *_publicPkgInfo;
    MMWebJsBasePkgInfo *_bizPkgInfo;
    MMCanvasMainJSContext *_jsContext;
    MMCanvasJsApiHandler *_canvasApiHandler;
    WACanvasPluginScheduler *_pluginScheduler;
    NSData *_lastTransferData;
    NSMutableArray *_eventHandlers;
    unsigned long long _sessionId;
    WACanvasPerformaceInfo *_performanceInfo;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WACanvasPerformaceInfo *performanceInfo; // @synthesize performanceInfo=_performanceInfo;
@property(nonatomic) unsigned long long sessionId; // @synthesize sessionId=_sessionId;
@property(retain, nonatomic) NSMutableArray *eventHandlers; // @synthesize eventHandlers=_eventHandlers;
@property(retain, nonatomic) NSData *lastTransferData; // @synthesize lastTransferData=_lastTransferData;
@property(retain, nonatomic) WACanvasPluginScheduler *pluginScheduler; // @synthesize pluginScheduler=_pluginScheduler;
@property(retain, nonatomic) MMCanvasJsApiHandler *canvasApiHandler; // @synthesize canvasApiHandler=_canvasApiHandler;
@property(retain, nonatomic) MMCanvasMainJSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) MMWebJsBasePkgInfo *bizPkgInfo; // @synthesize bizPkgInfo=_bizPkgInfo;
@property(retain, nonatomic) MMWebJsBasePkgInfo *publicPkgInfo; // @synthesize publicPkgInfo=_publicPkgInfo;
@property(retain, nonatomic) MMWebCanvasView *canvasView; // @synthesize canvasView=_canvasView;
@property(retain, nonatomic) JSVirtualMachine *jsVM; // @synthesize jsVM=_jsVM;
@property(nonatomic) __weak id <WACanvasJSServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) WACanvasLaunchParams *launchParams; // @synthesize launchParams=_launchParams;
- (id)getSessionID;
- (id)GetWeAppPluginByName:(id)arg1;
- (unsigned int)getAppType;
- (unsigned int)getDebugModeType;
- (unsigned long long)getAppVersion;
- (id)getEventHandler:(id)arg1;
- (id)sourceOpenSDKAppID;
- (id)GetWebViewPluginByName:(id)arg1;
- (unsigned long long)getEnvironmentType;
- (id)getCurrentPageQuery;
- (id)getCurrentPageRelativePath;
- (id)getCurrentPagePath;
- (id)getLaunchPagePath;
- (unsigned long long)getLaunchScene;
- (id)getParentViewController;
- (id)getWAContact;
- (void)endWithResult:(id)arg1 handler:(id)arg2;
- (id)getAppId;
- (void)setupInvokeHandler:(id)arg1 param:(id)arg2 callbackId:(unsigned int)arg3;
- (void)setupWeAppJSAPI;
- (void)onFirstFrameRendered:(id)arg1;
- (void)onTouchEvent:(id)arg1 withEvent:(id)arg2 canvasView:(id)arg3;
- (id)getFileDataWithUrl:(id)arg1 canvasView:(id)arg2;
- (id)getFileData:(id)arg1 canvasView:(id)arg2;
- (_Bool)isFileExist:(id)arg1 canvasView:(id)arg2;
- (id)getFileData:(id)arg1;
- (id)getJsCanvas;
- (long long)onGetFPS:(id)arg1;
- (void)onSaveLayoutData:(id)arg1 forCanvasId:(id)arg2;
- (void)onSaveCanvasHeight:(double)arg1;
- (id)onGetLayoutDataForCanvasId:(id)arg1;
- (_Bool)isCanvasViewAppear;
- (double)getCanvasViewVisibleContainerHeight;
- (double)getCanvasViewVisibleOffsetY;
- (double)getCanvasViewHeight;
- (double)getCanvasViewWidth;
- (void)performanceReportEvent:(unsigned int)arg1;
- (double)canvasHeight;
- (double)canvasWidth;
- (void)dispatchCallback:(id)arg1 params:(id)arg2;
- (void)dispatchEvent:(id)arg1 eventInfo:(id)arg2;
- (void)repaint:(struct CGSize)arg1;
- (void)sendTransferDataEvent:(id)arg1;
- (void)injectBizJs;
- (void)injectPublicJs;
- (void)onFinishBindingCanvasView;
- (void)injectCanvasApi;
- (void)injectWxConfig;
- (void)initJsContextWasm;
- (void)initJsContext;
- (id)getJSContext;
- (void)releaseService;
- (id)getCanvasViewWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithLaunchParams:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
