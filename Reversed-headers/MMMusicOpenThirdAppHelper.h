//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@protocol MMMusicOpenThirdAppHelperDataSource, MMMusicOpenThirdAppHelperDelegate;

@interface MMMusicOpenThirdAppHelper : MMObject
{
    id <MMMusicOpenThirdAppHelperDataSource> _dataSource;
    id <MMMusicOpenThirdAppHelperDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MMMusicOpenThirdAppHelperDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MMMusicOpenThirdAppHelperDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void)open3rdAppToAppStore:(unsigned long long)arg1 downloadURL:(id)arg2;
- (void)open3rdAppByReqWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)openQQMusicAppWithMusicInfo:(id)arg1 source:(unsigned long long)arg2 downloadURL:(id)arg3;
- (void)tryOpenThirdAppWithMusicInfo:(id)arg1 andSource:(unsigned long long)arg2;

@end
