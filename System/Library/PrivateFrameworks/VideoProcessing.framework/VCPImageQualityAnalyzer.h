/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoProcessing.framework/VideoProcessing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoProcessing/VideoProcessing-Structs.h>
#import <VideoProcessing/VCPImageAnalyzer.h>

@class NSArray;

@interface VCPImageQualityAnalyzer : VCPImageAnalyzer {

	float _irisPhotoOffsetSec;
	float _qualityScore;
	NSArray* _obstruction;

}

@property (retain) NSArray * obstruction;                 //@synthesize obstruction=_obstruction - In the implementation block
@property (assign) float irisPhotoOffsetSec;              //@synthesize irisPhotoOffsetSec=_irisPhotoOffsetSec - In the implementation block
@property (readonly) float qualityScore;                  //@synthesize qualityScore=_qualityScore - In the implementation block
-(NSArray *)obstruction;
-(void)setObstruction:(NSArray *)arg1 ;
-(int)analyzePixelBuffer:(CVBufferRef)arg1 flags:(unsigned long long*)arg2 results:(id*)arg3 cancel:(/*^block*/id)arg4 ;
-(float)computeRegionNoise:(char*)arg1 blkTextureness:(char*)arg2 average:(char*)arg3 width:(int)arg4 height:(int)arg5 stride:(long long)arg6 ;
-(float)computeNoiseLevel:(char*)arg1 width:(int)arg2 height:(int)arg3 stride:(long long)arg4 textureness:(char*)arg5 ;
-(float)irisPhotoOffsetSec;
-(void)setIrisPhotoOffsetSec:(float)arg1 ;
-(float)qualityScore;
@end

