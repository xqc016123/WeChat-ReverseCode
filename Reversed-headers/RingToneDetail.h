//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class FinderRingToneSubDetail, LocalRingToneSubDetail, MusicRingToneSubDetail, NSArray, NSString, RingTone, WCFinderDataItem;

@interface RingToneDetail : NSObject
{
    _Bool _isPlaying;
    _Bool _exposed;
    unsigned long long _type;
    MusicRingToneSubDetail *_music;
    FinderRingToneSubDetail *_finder;
    LocalRingToneSubDetail *_local;
    RingTone *_core;
}

+ (id)initFromRingBackPbDetail:(id)arg1 ringBackPbCore:(id)arg2 error:(id *)arg3;
+ (id)WeChatDefaultRing;
- (void).cxx_destruct;
@property(nonatomic) _Bool exposed; // @synthesize exposed=_exposed;
@property(nonatomic) _Bool isPlaying; // @synthesize isPlaying=_isPlaying;
@property(retain, nonatomic) RingTone *core; // @synthesize core=_core;
@property(retain, nonatomic) LocalRingToneSubDetail *local; // @synthesize local=_local;
@property(retain, nonatomic) FinderRingToneSubDetail *finder; // @synthesize finder=_finder;
@property(retain, nonatomic) MusicRingToneSubDetail *music; // @synthesize music=_music;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)concreteItem;
@property(readonly, copy, nonatomic) NSString *titleAndAuthor;
@property(readonly, copy, nonatomic) NSString *authorDesc;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) NSArray *searchHitWords;
@property(retain, nonatomic) WCFinderDataItem *finderItem;
- (id)fetchMusicRawFilePath;
- (id)fetchFinderItemRawFilePath;
- (id)promiseRingRawFilePath;
- (id)genAudioFileTransferTaskWith:(id)arg1;
- (id)cropedTempAudioFilePath;
- (double)cropedDuration;
- (long long)fullDuration;
- (id)identifier;
- (id)initAsInvalidPlaceHolder;
- (id)initFromLocalFile:(id)arg1;
- (id)initFromFinder:(id)arg1;
- (id)initFromPb:(id)arg1 core:(id)arg2;
- (id)initFromPb:(id)arg1;

@end
