/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VTSiriPHash : NSObject {

	unsigned char _signalFractional;
	short _signalEstimate;

}

@property (assign) short signalEstimate;                        //@synthesize signalEstimate=_signalEstimate - In the implementation block
@property (assign) unsigned char signalFractional;              //@synthesize signalFractional=_signalFractional - In the implementation block
+(id)sharedPhash;
+(unsigned long long)sampleSizeForSignalEstimate;
-(id)init;
-(unsigned short)pHash:(float*)arg1 length:(int)arg2 ;
-(short)signalEstimate;
-(unsigned char)signalFractional;
-(void)setSignalEstimate:(short)arg1 ;
-(void)setSignalFractional:(unsigned char)arg1 ;
@end

