/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>

@class CIImage, CIColor, NSNumber;

@interface CISpotColor : CIFilter {

	CIImage* inputImage;
	CIColor* inputCenterColor1;
	CIColor* inputReplacementColor1;
	NSNumber* inputCloseness1;
	NSNumber* inputContrast1;
	CIColor* inputCenterColor2;
	CIColor* inputReplacementColor2;
	NSNumber* inputCloseness2;
	NSNumber* inputContrast2;
	CIColor* inputCenterColor3;
	CIColor* inputReplacementColor3;
	NSNumber* inputCloseness3;
	NSNumber* inputContrast3;

}
+(id)customAttributes;
-(id)_CISpotColor;
-(id)outputImage;
@end

