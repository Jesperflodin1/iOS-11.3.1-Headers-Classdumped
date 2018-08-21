/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface CIPortraitLightingNeckContour : CIFilter {

	CIImage* inputImage;
	CIVector* inputCenter;
	CIVector* inputChin;
	NSNumber* inputWidth;
	NSNumber* inputHeight;
	NSNumber* inputStrength;
	NSNumber* inputOrientation;
	NSNumber* inputFaceOrientation;
	NSNumber* inputScale;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputCenter; 
@property (nonatomic,retain) CIVector * inputChin; 
@property (nonatomic,retain) NSNumber * inputWidth; 
@property (nonatomic,retain) NSNumber * inputHeight; 
@property (nonatomic,retain) NSNumber * inputStrength; 
@property (nonatomic,retain) NSNumber * inputOrientation; 
@property (nonatomic,retain) NSNumber * inputFaceOrientation; 
@property (nonatomic,retain) NSNumber * inputScale; 
+(id)customAttributes;
-(CIVector *)inputCenter;
-(NSNumber *)inputWidth;
-(void)setInputCenter:(CIVector *)arg1 ;
-(void)setInputWidth:(NSNumber *)arg1 ;
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(NSNumber *)inputHeight;
-(void)setInputHeight:(NSNumber *)arg1 ;
-(id)_neckContourKernel;
-(CIVector *)inputChin;
-(void)setInputChin:(CIVector *)arg1 ;
-(NSNumber *)inputFaceOrientation;
-(void)setInputFaceOrientation:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputOrientation:(NSNumber *)arg1 ;
-(NSNumber *)inputOrientation;
-(void)setInputImage:(CIImage *)arg1 ;
-(NSNumber *)inputScale;
-(void)setInputScale:(NSNumber *)arg1 ;
-(CIImage *)inputImage;
@end
