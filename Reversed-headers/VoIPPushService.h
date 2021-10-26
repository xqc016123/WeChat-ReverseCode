//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMRootService.h"

#import "MMServiceProtocol-Protocol.h"
#import "PKPushRegistryDelegate-Protocol.h"

@class NSData, NSString, PKPushRegistry;

@interface VoIPPushService : MMRootService <PKPushRegistryDelegate, MMServiceProtocol>
{
    NSData *m_token;
    PKPushRegistry *m_tokenRetriver;
}

- (void).cxx_destruct;
- (void)pushRegistry:(id)arg1 didInvalidatePushTokenForType:(id)arg2;
- (void)pushRegistry:(id)arg1 didReceiveIncomingPushWithPayload:(id)arg2 forType:(id)arg3;
- (void)pushRegistry:(id)arg1 didUpdatePushCredentials:(id)arg2 forType:(id)arg3;
@property(readonly, nonatomic) NSData *voipToken;
- (void)registerVoIP;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
