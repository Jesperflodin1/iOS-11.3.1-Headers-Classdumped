/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface SwapRedAndGreenFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _inputAmount;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;              //@synthesize inputAmount=_inputAmount - In the implementation block
+(id)customAttributes;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)myKernel;
-(NSNumber *)inputAmount;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

