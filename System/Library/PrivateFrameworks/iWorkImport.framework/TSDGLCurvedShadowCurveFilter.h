/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIVector, NSNumber;

@interface TSDGLCurvedShadowCurveFilter : CIFilter {

	CIImage* inputImage;
	CIVector* inputSampleExtent;
	NSNumber* inputCurveAmount;
	NSNumber* inputPadding;

}
+(id)curveKernel;
@end

