//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, NSURL, NSURLRequest, UIScrollView;
@protocol YYWebViewDelegate;

@protocol YYWebViewInterface <NSObject>
@property(nonatomic) _Bool disablePreviewElement;
@property(readonly, nonatomic, getter=isLoading) _Bool loading;
@property(readonly, nonatomic, getter=canGoForward) _Bool canGoForward;
@property(readonly, nonatomic, getter=canGoBack) _Bool canGoBack;
@property(nonatomic) _Bool allowsBackForwardNavigationGestures;
@property(readonly, nonatomic) NSURLRequest *request;
@property(readonly, nonatomic) UIScrollView *scrollView;
@property(nonatomic) __weak id <YYWebViewDelegate> wvDelegate;
- (void)addScriptMessageHandlerName:(NSString *)arg1;
- (void)enableJavaScriptPopup:(_Bool)arg1;
- (void)evaluateJavaScriptFromString:(NSString *)arg1 completionBlock:(void (^)(NSString *, NSError *))arg2;
- (void)goForward;
- (void)goBack;
- (void)stopLoading;
- (void)reload;
- (void)LoadHTMLString:(NSString *)arg1 baseURL:(NSURL *)arg2;
- (void)LoadRequest:(NSURLRequest *)arg1;
- (id)initWithFrame:(struct CGRect)arg1 delegate:(id <YYWebViewDelegate>)arg2;
@end
