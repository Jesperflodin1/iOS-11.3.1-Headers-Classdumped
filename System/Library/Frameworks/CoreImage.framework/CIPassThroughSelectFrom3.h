/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface CIPassThroughSelectFrom3 : CIFilter {

	CIImage* inputImage;
	CIImage* inputImage1;
	CIImage* inputImage2;
	NSNumber* inputSelected;

}

@property (retain) CIImage * inputImage; 
@property (retain) CIImage * inputImage1; 
@property (retain) CIImage * inputImage2; 
@property (nonatomic,copy) NSNumber * inputSelected; 
-(CIImage *)inputImage2;
-(void)setInputImage2:(CIImage *)arg1 ;
-(CIImage *)inputImage1;
-(void)setInputImage1:(CIImage *)arg1 ;
-(NSNumber *)inputSelected;
-(void)setInputSelected:(NSNumber *)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
@end
