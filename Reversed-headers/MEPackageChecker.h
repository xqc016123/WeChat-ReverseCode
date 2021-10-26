//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ExpressionMgrExt-Protocol.h"

@class NSString, WAContact;

@interface MEPackageChecker : NSObject <ExpressionMgrExt>
{
    CDUnknownBlockType finishBlock;
    NSString *_appId;
    NSString *_username;
    unsigned long long _version;
    NSString *_meBundleFilePath;
    NSString *_meHardcodeWxaPkgFilePath;
    NSString *_meLatestWxaPkgFilePath;
    WAContact *_contact;
}

- (void).cxx_destruct;
@property(nonatomic) __weak WAContact *contact; // @synthesize contact=_contact;
@property(retain, nonatomic) NSString *meLatestWxaPkgFilePath; // @synthesize meLatestWxaPkgFilePath=_meLatestWxaPkgFilePath;
@property(retain, nonatomic) NSString *meHardcodeWxaPkgFilePath; // @synthesize meHardcodeWxaPkgFilePath=_meHardcodeWxaPkgFilePath;
@property(retain, nonatomic) NSString *meBundleFilePath; // @synthesize meBundleFilePath=_meBundleFilePath;
@property(nonatomic) unsigned long long version; // @synthesize version=_version;
@property(retain, nonatomic) NSString *username; // @synthesize username=_username;
@property(retain, nonatomic) NSString *appId; // @synthesize appId=_appId;
- (_Bool)isWxapkgFileExist:(unsigned long long)arg1;
- (void)onMagicEmojiVersionChanged:(unsigned long long)arg1;
- (void)prefetchGetCodeCmd:(id)arg1 didFinishDownloadWithRet:(_Bool)arg2 infoData:(id)arg3 remainRetryCount:(unsigned long long)arg4;
- (void)forceTriggerUpdate;
- (id)getBrotiData:(id)arg1;
- (void)updateWeappLocalCache;
- (void)copyHardcodePkg;
- (void)makeWxaPkgDir:(id)arg1;
- (id)getWxaPkgFilePath;
- (id)process;
- (void)setupFinishBlock:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAppId:(id)arg1 andUsername:(id)arg2;

@end
