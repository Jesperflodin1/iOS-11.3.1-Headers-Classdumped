/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Vision/VNImageBasedRequest.h>

@class VNCoreMLModel;

@interface VNCoreMLRequest : VNImageBasedRequest {

	VNCoreMLModel* _model;
	unsigned long long _imageCropAndScaleOption;

}

@property (nonatomic,readonly) VNCoreMLModel * model;                                 //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) unsigned long long imageCropAndScaleOption;              //@synthesize imageCropAndScaleOption=_imageCropAndScaleOption - In the implementation block
-(VNCoreMLModel *)model;
-(void)applyConfigurationOfRequest:(id)arg1 ;
-(id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)observationsCacheKey;
-(id)sequencedRequestPreviousObservationsKey;
-(BOOL)internalPerformInContext:(id)arg1 error:(id*)arg2 ;
-(id)newDefaultRequestInstance;
-(id)initWithModel:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(unsigned long long)imageCropAndScaleOption;
-(void)setImageCropAndScaleOption:(unsigned long long)arg1 ;
-(id)initWithModel:(id)arg1 ;
@end
