/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HSCaptureStreamOutputConfig, HSCaptureStreamStillOutputConfig;

@interface HSCaptureStreamOutputConfigs : NSObject {

	HSCaptureStreamOutputConfig* _primaryScalar;
	HSCaptureStreamOutputConfig* _secondaryScalar;
	HSCaptureStreamOutputConfig* _intermediateTap;
	HSCaptureStreamStillOutputConfig* _stillImage;
	HSCaptureStreamStillOutputConfig* _stillImageQuadra;
	HSCaptureStreamStillOutputConfig* _stillImageIntermediateTap;

}

@property (nonatomic,retain) HSCaptureStreamOutputConfig * primaryScalar;                               //@synthesize primaryScalar=_primaryScalar - In the implementation block
@property (nonatomic,retain) HSCaptureStreamOutputConfig * secondaryScalar;                             //@synthesize secondaryScalar=_secondaryScalar - In the implementation block
@property (nonatomic,retain) HSCaptureStreamOutputConfig * intermediateTap;                             //@synthesize intermediateTap=_intermediateTap - In the implementation block
@property (nonatomic,retain) HSCaptureStreamStillOutputConfig * stillImage;                             //@synthesize stillImage=_stillImage - In the implementation block
@property (nonatomic,retain) HSCaptureStreamStillOutputConfig * stillImageQuadra;                       //@synthesize stillImageQuadra=_stillImageQuadra - In the implementation block
@property (nonatomic,retain) HSCaptureStreamStillOutputConfig * stillImageIntermediateTap;              //@synthesize stillImageIntermediateTap=_stillImageIntermediateTap - In the implementation block
-(id)description;
-(HSCaptureStreamStillOutputConfig *)stillImage;
-(void)setStillImage:(HSCaptureStreamStillOutputConfig *)arg1 ;
-(HSCaptureStreamOutputConfig *)primaryScalar;
-(void)setPrimaryScalar:(HSCaptureStreamOutputConfig *)arg1 ;
-(HSCaptureStreamOutputConfig *)secondaryScalar;
-(void)setSecondaryScalar:(HSCaptureStreamOutputConfig *)arg1 ;
-(HSCaptureStreamOutputConfig *)intermediateTap;
-(void)setIntermediateTap:(HSCaptureStreamOutputConfig *)arg1 ;
-(HSCaptureStreamStillOutputConfig *)stillImageQuadra;
-(void)setStillImageQuadra:(HSCaptureStreamStillOutputConfig *)arg1 ;
-(HSCaptureStreamStillOutputConfig *)stillImageIntermediateTap;
-(void)setStillImageIntermediateTap:(HSCaptureStreamStillOutputConfig *)arg1 ;
@end
