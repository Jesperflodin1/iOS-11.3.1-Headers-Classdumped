/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIFilter;

@interface BLVintageFilter : CIFilter {

	BOOL _needsReprocess;
	int _lastAmount;
	float _lastStrength;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	NSNumber* _inputStrength;
	CIFilter* _colorCubeFilter;
	CIFilter* _maskFilter;

}

@property (nonatomic,retain) CIFilter * colorCubeFilter;              //@synthesize colorCubeFilter=_colorCubeFilter - In the implementation block
@property (nonatomic,retain) CIFilter * maskFilter;                   //@synthesize maskFilter=_maskFilter - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                    //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                    //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) NSNumber * inputStrength;                  //@synthesize inputStrength=_inputStrength - In the implementation block
-(NSNumber *)inputStrength;
-(void)setInputStrength:(NSNumber *)arg1 ;
-(id)init;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIFilter *)colorCubeFilter;
-(void)setColorCubeFilter:(CIFilter *)arg1 ;
-(void)setMaskFilter:(CIFilter *)arg1 ;
-(CIFilter *)maskFilter;
-(CIImage *)inputImage;
-(NSNumber *)inputAmount;
-(void)setDefaults;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

