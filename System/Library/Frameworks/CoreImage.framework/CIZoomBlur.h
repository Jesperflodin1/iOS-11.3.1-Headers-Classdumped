/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIZoomBlur : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	NSNumber* inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) NSNumber * inputAmount; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(id)_blur:(id)arg1 pass:(int)arg2 weightsFactor:(float)arg3 ;
-(id)_kernelNew;
-(void)setInputCenter:(CIVector *)arg1 ;
-(id)outputImage;
-(id)valueForUndefinedKey:(id)arg1 ;
-(BOOL)_isIdentity;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setValue:(id)arg1 forUndefinedKey:(id)arg2 ;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

