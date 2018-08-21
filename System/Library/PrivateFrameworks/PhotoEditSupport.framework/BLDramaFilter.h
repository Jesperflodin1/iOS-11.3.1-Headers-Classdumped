/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber, CIVector, CIFilter, NSData;

@interface BLDramaFilter : CIFilter {

	BOOL _needsReprocess;
	float _lastAmount;
	float _lastPhototone;
	float _lastNeutralGamma;
	CIImage* _inputImage;
	NSNumber* _inputAmount;
	CIVector* _inputHueStrengthArray;
	NSNumber* _inputPhototone;
	NSNumber* _inputNeutralGamma;
	CIFilter* _colorCubeFilterDrama;
	NSData* _precomputedCube;
	CIVector* _lastHueStrengthArray;

}

@property (nonatomic,retain) CIFilter * colorCubeFilterDrama;              //@synthesize colorCubeFilterDrama=_colorCubeFilterDrama - In the implementation block
@property (nonatomic,retain) NSData * precomputedCube;                     //@synthesize precomputedCube=_precomputedCube - In the implementation block
@property (nonatomic,retain) CIVector * lastHueStrengthArray;              //@synthesize lastHueStrengthArray=_lastHueStrengthArray - In the implementation block
@property (nonatomic,retain) CIImage * inputImage;                         //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,copy) NSNumber * inputAmount;                         //@synthesize inputAmount=_inputAmount - In the implementation block
@property (nonatomic,copy) CIVector * inputHueStrengthArray;               //@synthesize inputHueStrengthArray=_inputHueStrengthArray - In the implementation block
@property (nonatomic,copy) NSNumber * inputPhototone;                      //@synthesize inputPhototone=_inputPhototone - In the implementation block
@property (nonatomic,copy) NSNumber * inputNeutralGamma;                   //@synthesize inputNeutralGamma=_inputNeutralGamma - In the implementation block
-(NSNumber *)inputNeutralGamma;
-(void)setInputNeutralGamma:(NSNumber *)arg1 ;
-(id)init;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(void)setInputHueStrengthArray:(CIVector *)arg1 ;
-(void)setInputPhototone:(NSNumber *)arg1 ;
-(NSData *)precomputedCube;
-(void)setPrecomputedCube:(NSData *)arg1 ;
-(CIFilter *)colorCubeFilterDrama;
-(void)setColorCubeFilterDrama:(CIFilter *)arg1 ;
-(void)setLastHueStrengthArray:(CIVector *)arg1 ;
-(CIVector *)inputHueStrengthArray;
-(NSNumber *)inputPhototone;
-(CIVector *)lastHueStrengthArray;
-(CIImage *)inputImage;
-(NSNumber *)inputAmount;
-(void)setDefaults;
-(void)setInputAmount:(NSNumber *)arg1 ;
@end

