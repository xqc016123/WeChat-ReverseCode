//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WCPayOverseaBaseCgiDelegate-Protocol.h"

@class NSString, WCPayOverseaBaseCgi;
@protocol WCPayOverseaFacingTransferOrderCgiDelegate;

@interface WCPayOverseaFacingTransferOrderCgi : NSObject <WCPayOverseaBaseCgiDelegate>
{
    id <WCPayOverseaFacingTransferOrderCgiDelegate> m_delegate;
    WCPayOverseaBaseCgi *m_cgi;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WCPayOverseaBaseCgi *m_cgi; // @synthesize m_cgi;
@property(nonatomic) __weak id <WCPayOverseaFacingTransferOrderCgiDelegate> m_delegate; // @synthesize m_delegate;
- (void)callErrorDelegateWithErrorCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaBaseCgiErrorWithRetCode:(int)arg1 ErrorMsg:(id)arg2;
- (void)onWCPayOverseaBaseCgiReturnWithErrorType:(int)arg1 ErrorMsg:(id)arg2 Dictionary:(id)arg3;
- (void)startRequestWithArgument:(id)arg1;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
