/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, NSDictionary, NSString;

@interface CIPortraitBlur : CIFilter {

	CIImage* inputImage;
	CIImage* inputBlurmapImage;
	NSNumber* inputLumaNoiseScale;
	NSNumber* inputScale;
	NSDictionary* inputTuningParameters;
	NSString* inputShape;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputBlurmapImage; 
@property (nonatomic,copy) NSNumber * inputLumaNoiseScale; 
@property (nonatomic,copy) NSNumber * inputScale; 
@property (nonatomic,retain) NSDictionary * inputTuningParameters; 
@property (nonatomic,retain) NSString * inputShape; 
+(id)customAttributes;
-(id)_kernelMetal;
-(id)_kernelWithShapesMetal;
-(id)_kernelsWithShapes;
-(id)_ourBlendKernelMetal;
-(id)_ourBlendKernel;
-(id)outputImage:(BOOL)arg1 ;
-(CIImage *)inputBlurmapImage;
-(void)setInputBlurmapImage:(CIImage *)arg1 ;
-(NSNumber *)inputLumaNoiseScale;
-(void)setInputLumaNoiseScale:(NSNumber *)arg1 ;
-(NSDictionary *)inputTuningParameters;
-(void)setInputTuningParameters:(NSDictionary *)arg1 ;
-(NSString *)inputShape;
-(void)setInputShape:(NSString *)arg1 ;
-(id)outputImage;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
@end
