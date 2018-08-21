/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIExposureAdjust : CIFilter {

	CIImage* inputImage;
	NSNumber* inputEV;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,retain) NSNumber * inputEV; 
+(id)customAttributes;
-(NSNumber *)inputEV;
-(void)setInputEV:(NSNumber *)arg1 ;
-(id)outputImage;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
@end

