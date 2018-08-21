/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CoreImage-Structs.h>
#import <CoreImage/CIImageProcessorKernel.h>

@class CIImage, NSDictionary;

@interface CIPortraitToothMaskProcessor : CIImageProcessorKernel {

	CIImage* _inputImage;
	NSDictionary* _inputFaceLandmarks;

}

@property (nonatomic,retain) CIImage * inputImage;                           //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSDictionary * inputFaceLandmarks;              //@synthesize inputFaceLandmarks=_inputFaceLandmarks - In the implementation block
+(int)outputFormat;
+(BOOL)processWithInputs:(id)arg1 arguments:(id)arg2 output:(id)arg3 error:(id*)arg4 ;
+(CGRect)roiForInput:(int)arg1 arguments:(id)arg2 outputRect:(CGRect)arg3 ;
+(int)formatForInputAtIndex:(int)arg1 ;
+(BOOL)allowPartialOutputRegion;
-(NSDictionary *)inputFaceLandmarks;
-(void)setInputFaceLandmarks:(NSDictionary *)arg1 ;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
@end

