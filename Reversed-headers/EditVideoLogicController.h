//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MMObject.h"

@class NSLock, NSMutableDictionary;

@interface EditVideoLogicController : MMObject
{
    NSMutableDictionary *_dicEditAsset;
    NSLock *_lock;
}

+ (unsigned long long)composeSceneFromSightPickerScene:(unsigned long long)arg1;
+ (void)reportVideoCompressionInfoWithOutputPath:(id)arg1 inputPath:(id)arg2 compressionTime:(double)arg3 params:(id)arg4 entranceType:(unsigned long long)arg5 videoScoreParams:(id)arg6 resultCode:(long long)arg7 scene:(unsigned long long)arg8;
+ (void)reportVideoCompressionResult:(_Bool)arg1 scene:(unsigned long long)arg2;
+ (id)compressInformationsOfVideoWithParams:(id)arg1;
+ (id)adaptiveBitrateAdjustment:(id)arg1 urls:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 isEdited:(_Bool)arg5 enableABA:(_Bool)arg6 videoEncodeParams:(id)arg7;
+ (id)adaptiveBitrateAdjustment:(id)arg1 assets:(id)arg2 attr:(id)arg3 scene:(unsigned long long)arg4 videoEncodeParams:(id)arg5 isEdited:(_Bool)arg6 enableABA:(_Bool)arg7;
+ (void)adjustAudioBitrate:(id)arg1 params:(id)arg2;
+ (struct CGSize)adjustRenderSize:(struct CGSize)arg1;
+ (struct CGRect)previewFrameWithVideoSize:(id)arg1;
+ (void)genBlurHorizontalWithAnimation:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)genBlurHorizontalWithBGMVideo:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)genBlurHorizontalWithoutBGMVideo:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)genBlurHorizontalVideo:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 withCompletionHandler:(CDUnknownBlockType)arg6;
+ (void)genBlurHorizontalVideo:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)__customVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 withCompletionHandler:(CDUnknownBlockType)arg5;
+ (void)customVideoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)customVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)genAdjustVideoCompositionWithAsset:(id)arg1 attr:(id)arg2 param:(id)arg3;
+ (void)__NewVideoCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
+ (void)checkUseSWTranscoding:(unsigned long long)arg1 avAsset:(id)arg2 withAttr:(id)arg3 pathNum:(unsigned long long)arg4 assetsNum:(unsigned long long)arg5 isVCEdit:(_Bool)arg6 VideoEncodeParams:(id)arg7;
+ (void)__NewVideoBGMCompositionWithAsset:(id)arg1 inputPath:(id)arg2 withAttr:(id)arg3 withExportPath:(id)arg4 originalVideoPaths:(id)arg5 mmAssets:(id)arg6 withCompletionHandler:(CDUnknownBlockType)arg7;
+ (void)NewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;
+ (void)finderNewVideoCompostionWithAvAsset:(id)arg1 inputUrl:(id)arg2 path:(id)arg3 andThumbImage:(id)arg4 withAttr:(id)arg5 originalVideoPaths:(id)arg6 mmAssets:(id)arg7 withCompletionHandler:(CDUnknownBlockType)arg8;
+ (void)NewVideoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)getParamsForEntranceType:(unsigned long long)arg1 withAsset:(id)arg2 naturalSize:(struct CGSize)arg3;
+ (struct CGAffineTransform)getTransformFromAsset:(id)arg1;
+ (struct CGAffineTransform)adjustPreferredTransform:(struct CGAffineTransform)arg1 withNaturalSize:(struct CGSize)arg2;
+ (void)__imageCompositionWithAsset:(id)arg1 withDefaultImg:(id)arg2 withAttr:(id)arg3 toFilePath:(id)arg4;
+ (void)storyVideoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)videoCompositionAtPath:(id)arg1 andThumbImage:(id)arg2 withAttr:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (struct CGSize)adjustSizeToEvenSize:(struct CGSize)arg1;
+ (long long)adjustLenToEven:(double)arg1;
+ (void)finderVideoCompositionWithVideoComposition:(id)arg1 originVideoPaths:(id)arg2 attr:(id)arg3 emotionOffset:(struct CGPoint)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)finderVideoCompositionWithAVAsset:(id)arg1 paths:(id)arg2 assets:(id)arg3 attr:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
+ (void)videoComposition:(id)arg1 withAttr:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)informationsOfVideoWithAsset:(id)arg1 compositionAttr:(id)arg2 customLogInfo:(id)arg3;
+ (void)informationsOfVideoWithAsset:(id)arg1 compositionAttr:(id)arg2;
- (void).cxx_destruct;
- (id)getEditVideoAttr:(id)arg1;
- (void)removeEditedAsset:(id)arg1;
- (void)modifyAsset:(id)arg1 withEditImageAttr:(id)arg2 withEditedTimeRange:(CDStruct_e83c9415)arg3;
- (void)dealloc;
- (id)init;

@end
