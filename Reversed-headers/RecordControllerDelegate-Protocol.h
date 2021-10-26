//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CMessageWrap, NSString, UIViewController;

@protocol RecordControllerDelegate <NSObject>
- (NSString *)GetContactName;
- (struct CGPoint)CheckVoiceBtnPressLocation;
- (unsigned int)CheckVoiceBtnState;
- (UIViewController *)getViewController;

@optional
- (_Bool)onRecordWillStopWhenAppWillTerminate;
- (_Bool)CanRemoteRecord;
- (void)SetButtonHighlighted:(_Bool)arg1;
- (void)SetPeakPower:(float)arg1;
- (_Bool)onRecordCountRemain:(long long)arg1;
- (void)ShowTooLongTips;
- (void)ShowStartFailTips;
- (void)ShowTooShortTips;
- (void)SetVoiceEnabled:(_Bool)arg1;
- (void)HideRecordTips;
- (void)ShowPreparing;
- (void)ShowRecording;
- (void)onRecordModMsg:(CMessageWrap *)arg1;
- (void)onRecordAddMsg:(CMessageWrap *)arg1;
- (void)onRecordTimeOut;
@end
