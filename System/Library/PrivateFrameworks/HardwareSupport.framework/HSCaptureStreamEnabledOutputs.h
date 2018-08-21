/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareSupport.framework/HardwareSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface HSCaptureStreamEnabledOutputs : NSObject {

	BOOL _primaryScalar;
	BOOL _secondaryScalar;
	BOOL _intermediateTap;
	BOOL _stillImage;
	BOOL _stillImageQuadra;
	BOOL _stillImageIntermediateTap;
	BOOL _depth;

}

@property (assign,nonatomic) BOOL primaryScalar;                          //@synthesize primaryScalar=_primaryScalar - In the implementation block
@property (assign,nonatomic) BOOL secondaryScalar;                        //@synthesize secondaryScalar=_secondaryScalar - In the implementation block
@property (assign,nonatomic) BOOL intermediateTap;                        //@synthesize intermediateTap=_intermediateTap - In the implementation block
@property (assign,nonatomic) BOOL stillImage;                             //@synthesize stillImage=_stillImage - In the implementation block
@property (assign,nonatomic) BOOL stillImageQuadra;                       //@synthesize stillImageQuadra=_stillImageQuadra - In the implementation block
@property (assign,nonatomic) BOOL stillImageIntermediateTap;              //@synthesize stillImageIntermediateTap=_stillImageIntermediateTap - In the implementation block
@property (assign,nonatomic) BOOL depth;                                  //@synthesize depth=_depth - In the implementation block
-(BOOL)depth;
-(BOOL)stillImage;
-(void)setStillImage:(BOOL)arg1 ;
-(BOOL)primaryScalar;
-(void)setPrimaryScalar:(BOOL)arg1 ;
-(BOOL)secondaryScalar;
-(void)setSecondaryScalar:(BOOL)arg1 ;
-(BOOL)intermediateTap;
-(void)setIntermediateTap:(BOOL)arg1 ;
-(BOOL)stillImageQuadra;
-(void)setStillImageQuadra:(BOOL)arg1 ;
-(BOOL)stillImageIntermediateTap;
-(void)setStillImageIntermediateTap:(BOOL)arg1 ;
-(void)setDepth:(BOOL)arg1 ;
@end
