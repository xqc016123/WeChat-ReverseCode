//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CRAPIClient.h"

@interface CRReportAPIClient : CRAPIClient
{
}

+ (id)clientWithSession:(id)arg1;
+ (id)client;
- (id)handleBodyData:(id)arg1;
- (id)getAMSSign:(id)arg1;
- (id)paramsGET:(id)arg1;
- (id)innerData;
- (void)reportPayload:(id)arg1 onSuccess:(CDUnknownBlockType)arg2 onFailure:(CDUnknownBlockType)arg3;

@end
