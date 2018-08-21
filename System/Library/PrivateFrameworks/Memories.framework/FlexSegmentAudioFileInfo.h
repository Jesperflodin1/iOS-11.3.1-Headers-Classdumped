/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface FlexSegmentAudioFileInfo : NSObject {

	long long _sampleRate;
	long long _sampleCount;
	long long _bpm;
	long long _bars;
	long long _samplesPerBar;
	NSArray* _customBarMarkers;

}

@property (assign,nonatomic) long long sampleRate;                    //@synthesize sampleRate=_sampleRate - In the implementation block
@property (assign,nonatomic) long long sampleCount;                   //@synthesize sampleCount=_sampleCount - In the implementation block
@property (assign,nonatomic) long long bpm;                           //@synthesize bpm=_bpm - In the implementation block
@property (assign,nonatomic) long long bars;                          //@synthesize bars=_bars - In the implementation block
@property (assign,nonatomic) long long samplesPerBar;                 //@synthesize samplesPerBar=_samplesPerBar - In the implementation block
@property (nonatomic,retain) NSArray * customBarMarkers;              //@synthesize customBarMarkers=_customBarMarkers - In the implementation block
-(long long)sampleCount;
-(void)setSampleCount:(long long)arg1 ;
-(void)setSampleRate:(long long)arg1 ;
-(long long)sampleRate;
-(long long)bpm;
-(void)setBpm:(long long)arg1 ;
-(long long)bars;
-(void)setBars:(long long)arg1 ;
-(long long)samplesPerBar;
-(void)setSamplesPerBar:(long long)arg1 ;
-(NSArray *)customBarMarkers;
-(void)setCustomBarMarkers:(NSArray *)arg1 ;
@end

