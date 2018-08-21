/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber, CIColor;

@interface CUIInnerGlowOrShadowFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputOffset;
	NSNumber* inputRange;
	NSNumber* inputRadius;
	CIColor* inputColor;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) CIVector * inputOffset; 
@property (nonatomic,retain) NSNumber * inputRange; 
@property (nonatomic,retain) NSNumber * inputRadius; 
@property (nonatomic,retain) CIColor * inputColor; 
+(id)customAttributes;
-(CIVector *)inputOffset;
-(void)setInputOffset:(CIVector *)arg1 ;
-(id)outputImage;
-(void)setInputColor:(CIColor *)arg1 ;
-(CIColor *)inputColor;
-(NSNumber *)inputRange;
-(void)setInputRange:(NSNumber *)arg1 ;
-(id)_kernel;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setInputRadius:(NSNumber *)arg1 ;
-(NSNumber *)inputRadius;
@end

