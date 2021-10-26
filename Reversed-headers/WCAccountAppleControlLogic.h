//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCAccountBaseControlLogic.h"

#import "AppleIDBindLogicDelegate-Protocol.h"
#import "WCAccountManualAuthControlLogicDelegate-Protocol.h"

@class AppleIDBindLogic, NSString, WCAccountManualAuthControlLogic;

@interface WCAccountAppleControlLogic : WCAccountBaseControlLogic <AppleIDBindLogicDelegate, WCAccountManualAuthControlLogicDelegate>
{
    WCAccountManualAuthControlLogic *_manualAuthLogic;
    AppleIDBindLogic *_appleIDBindLogic;
}

- (void).cxx_destruct;
@property(retain, nonatomic) AppleIDBindLogic *appleIDBindLogic; // @synthesize appleIDBindLogic=_appleIDBindLogic;
@property(retain, nonatomic) WCAccountManualAuthControlLogic *manualAuthLogic; // @synthesize manualAuthLogic=_manualAuthLogic;
- (void)reportAction:(unsigned long long)arg1;
- (_Bool)onManualAuthControlLogicError:(id)arg1;
- (void)onManualAuthControlLogicStop:(unsigned long long)arg1 response:(id)arg2;
- (void)startRegisterWithTicket:(id)arg1;
- (void)startManualAuthWithWrap:(id)arg1;
- (void)onAuthorizeAppleIDFailedWithError:(id)arg1;
- (void)onAuthorizeAppleIDSuceededWithWrap:(id)arg1;
- (void)onRequestAuthorizeFromAppleFinished:(_Bool)arg1;
- (id)getViewController;
- (void)startLogic;
- (id)initWithData:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
