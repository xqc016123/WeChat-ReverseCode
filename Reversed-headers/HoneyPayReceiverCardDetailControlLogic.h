//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WCPayHoneyPayBaseControlLogic.h"

#import "HoneyPayReceiverCardDetailViewControllerDelegate-Protocol.h"
#import "WCPayGetPayPwdTokenCgiDelegate-Protocol.h"
#import "WCPayQryHoneyPayCardDetailCgiDelegate-Protocol.h"
#import "WCPayUnbindHoneyPayCardCgiDelegate-Protocol.h"

@class HoneyPayReceiverCardDetailViewController, NSString, WCPayGetPayPwdTokenCgi, WCPayQryHoneyPayCardDetailCgi, WCPayUnbindHoneyPayCardCgi;
@protocol HoneyPayReceiverCardDetailControlLogicDelegate;

@interface HoneyPayReceiverCardDetailControlLogic : WCPayHoneyPayBaseControlLogic <WCPayQryHoneyPayCardDetailCgiDelegate, WCPayUnbindHoneyPayCardCgiDelegate, HoneyPayReceiverCardDetailViewControllerDelegate, WCPayGetPayPwdTokenCgiDelegate>
{
    id <HoneyPayReceiverCardDetailControlLogicDelegate> _delegate;
    WCPayQryHoneyPayCardDetailCgi *_detailCgi;
    WCPayUnbindHoneyPayCardCgi *_unbindCgi;
    WCPayGetPayPwdTokenCgi *_getPayPwdTokenCgi;
    HoneyPayReceiverCardDetailViewController *_detailVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) HoneyPayReceiverCardDetailViewController *detailVC; // @synthesize detailVC=_detailVC;
@property(retain, nonatomic) WCPayGetPayPwdTokenCgi *getPayPwdTokenCgi; // @synthesize getPayPwdTokenCgi=_getPayPwdTokenCgi;
@property(retain, nonatomic) WCPayUnbindHoneyPayCardCgi *unbindCgi; // @synthesize unbindCgi=_unbindCgi;
@property(retain, nonatomic) WCPayQryHoneyPayCardDetailCgi *detailCgi; // @synthesize detailCgi=_detailCgi;
@property(nonatomic) __weak id <HoneyPayReceiverCardDetailControlLogicDelegate> delegate; // @synthesize delegate=_delegate;
- (void)unbindHoneyPayCardCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)unbindHoneyPayCardCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)qryHoneyPayCardDetailCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didFailWithError:(id)arg2;
- (void)getPayPwdTokenCgi:(id)arg1 didGetResponse:(id)arg2;
- (void)OnVerifyPayPassword:(id)arg1;
- (void)VerifyPayPwdNext:(id)arg1;
- (void)PayPwdRightActionBack;
- (void)PayPwdBack;
- (void)receiverCardDetailVCDidClickUnbindCard:(id)arg1;
- (void)requestDetail;
- (void)startLogic;
- (id)initWithData:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
