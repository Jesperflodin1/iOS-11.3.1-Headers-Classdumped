/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage;

@interface PIInverseFakeBoost : CIFilter {

	double _inputBoost;
	CIImage* _inputImage;

}

@property (assign) double inputBoost;                 //@synthesize inputBoost=_inputBoost - In the implementation block
@property (retain) CIImage * inputImage;              //@synthesize inputImage=_inputImage - In the implementation block
+(id)kernel;
-(void)setInputBoost:(double)arg1 ;
-(id)outputImage;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(double)inputBoost;
@end

