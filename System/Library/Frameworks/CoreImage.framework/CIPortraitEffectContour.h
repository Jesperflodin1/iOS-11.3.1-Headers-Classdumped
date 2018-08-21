/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreImage.framework/CoreImage
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreImage/CIPortraitEffect.h>

@class NSNumber, CIImage;

@interface CIPortraitEffectContour : CIPortraitEffect {

	NSNumber* inputContour;
	NSNumber* inputDepthThreshold;
	CIImage* inputDepthMap;
	NSNumber* inputKickLight;
	NSNumber* inputFaceLight;

}

@property (nonatomic,retain) NSNumber * inputContour; 
@property (nonatomic,retain) NSNumber * inputDepthThreshold; 
@property (nonatomic,retain) CIImage * inputDepthMap; 
@property (nonatomic,retain) NSNumber * inputFaceLight; 
@property (nonatomic,retain) NSNumber * inputKickLight; 
-(id)previewCubeName;
-(id)backgroundPreviewCubeName;
-(id)_mixKernel;
-(void)setInputKickLight:(NSNumber *)arg1 ;
-(void)setInputFaceLight:(NSNumber *)arg1 ;
-(void)setInputDepthThreshold:(NSNumber *)arg1 ;
-(id)_prepareDepth;
-(NSNumber *)inputKickLight;
-(NSNumber *)inputFaceLight;
-(CIImage *)inputDepthMap;
-(void)setInputDepthMap:(CIImage *)arg1 ;
-(NSNumber *)inputDepthThreshold;
-(void)setInputContour:(NSNumber *)arg1 ;
-(id)_faceVignette;
-(id)_applyVignette;
-(id)_blendSingleChannelMask;
-(NSNumber *)inputContour;
-(id)outputImage;
-(void)setDefaults;
@end

