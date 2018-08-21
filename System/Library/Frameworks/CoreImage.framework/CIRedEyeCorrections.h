/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIFilter.h>
#import <libobjc.A.dylib/_CIFilterProperties.h>

@class CIImage, NSString, NSArray;

@interface CIRedEyeCorrections : CIFilter <_CIFilterProperties> {

	CIImage* inputImage;
	NSString* inputCameraModel;
	NSArray* inputCorrectionInfo;

}

@property (nonatomic,retain) CIImage * inputImage; 
@property (nonatomic,copy) NSString * inputCameraModel; 
@property (nonatomic,copy) NSArray * inputCorrectionInfo; 
-(NSString *)inputCameraModel;
-(void)setInputCameraModel:(NSString *)arg1 ;
-(NSArray *)inputCorrectionInfo;
-(void)setInputCorrectionInfo:(NSArray *)arg1 ;
-(id)outputImage;
-(id)_outputProperties;
-(id)_initFromProperties:(id)arg1 ;
-(BOOL)_isIdentity;
-(void)setInputImage:(CIImage *)arg1 ;
-(CIImage *)inputImage;
-(void)setDefaults;
@end

