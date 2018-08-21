/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, NSNumber;

@interface PINeutralGrayWhiteBalanceFilter : CIFilter {

	CIImage* _inputImage;
	NSNumber* _strength;
	NSNumber* _warmth;
	NSNumber* _y;
	NSNumber* _i;
	NSNumber* _q;

}

@property (nonatomic,retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
@property (nonatomic,retain) NSNumber * strength;               //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) NSNumber * warmth;                 //@synthesize warmth=_warmth - In the implementation block
@property (y,nonatomic,retain) NSNumber * y;                    //@synthesize y=_y - In the implementation block
@property (i,nonatomic,retain) NSNumber * i;                    //@synthesize i=_i - In the implementation block
@property (q,nonatomic,retain) NSNumber * q;                    //@synthesize q=_q - In the implementation block
+(id)customAttributes;
+(id)colorBalanceKernels;
+(id)gHDRtoPPKernel;
+(id)RGBToYIQKernel;
+(id)YIQToRGBKernel;
+(id)PPtogHDRKernel;
+(id)whiteBalanceKernel;
-(id)outputImage;
-(NSNumber *)y;
-(void)setY:(NSNumber *)arg1 ;
-(NSNumber *)strength;
-(void)setStrength:(NSNumber *)arg1 ;
-(void)setI:(NSNumber *)arg1 ;
-(NSNumber *)i;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(id)applyInputConversion:(id)arg1 ;
-(BOOL)isDefaultWarmth:(double)arg1 ;
-(id)applyOutputConversion:(id)arg1 ;
-(NSNumber *)warmth;
-(void)setWarmth:(NSNumber *)arg1 ;
-(NSNumber *)q;
-(void)setQ:(NSNumber *)arg1 ;
@end

