/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWZoomCompletionDelegate;
#import <Celestial/Celestial-Structs.h>
@class BWZoomDelayBuffer;

@interface BWZoomCommandHandler : NSObject {

	int _zoomLock;
	float _appliedZoomFactor;
	float _lastRequestedZoomFactor;
	BOOL _zoomFactorServiced;
	BWZoomDelayBuffer* _zoomDelayBuffer;
	BOOL _clientCanCompensateForDelay;
	id<BWZoomCompletionDelegate> _zoomCompletionDelegate;
	SCD_Struct_BW2 _lastFramePTSes[2];
	SCD_Struct_BW2 _rampStartTime;
	float _rampAcceleration;
	float _rampStartFactor;
	float _rampStartVelocity;
	float _rampTargetFactor;
	float _rampTargetVelocity;
	int _rampCommandID;
	BOOL _rampActive;
	int _rampType;
	double _rampDuration;
	float _rampSnapFraction;
	float _rampCurrentVelocity;
	float _rampZoomFactorOfInterest;

}

@property (assign) float requestedZoomFactor; 
@property (readonly) float appliedZoomFactor; 
@property (readonly) float rampZoomFactorOfInterest; 
@property (assign,nonatomic) id<BWZoomCompletionDelegate> zoomCompletionDelegate;              //@synthesize zoomCompletionDelegate=_zoomCompletionDelegate - In the implementation block
+(void)initialize;
-(float)_zoomFactorForRampAtPTS:(SCD_Struct_BW2)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(void)_activateRampMode:(BOOL)arg1 ;
-(float)_zoomFactorForDurationBasedRampAtPTS:(SCD_Struct_BW2)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)_zoomFactorForRateBasedRampAtPTS:(SCD_Struct_BW2)arg1 updateCurrentZoomRampState:(BOOL)arg2 ;
-(float)requestedZoomFactor;
-(void)setRequestedZoomFactor:(float)arg1 ;
-(float)appliedZoomFactor;
-(void)rampToVideoZoomFactor:(float)arg1 withRampType:(int)arg2 rate:(float)arg3 duration:(double)arg4 snapToTargetZoomFactorWithinRampFraction:(float)arg5 commandID:(int)arg6 ;
-(void)setTypicalISPZoomDelay:(unsigned)arg1 clientCanCompensateForDelay:(BOOL)arg2 ;
-(float)predictRampZoomFactorAfterNumberOfFrames:(int)arg1 settingZoomFactorOfInterest:(float)arg2 ;
-(float)rampZoomFactorOfInterest;
-(float)updateZoomModelForNextFrameWithPTS:(SCD_Struct_BW2)arg1 ;
-(void)updateAppliedZoomFactorForDelayedISPAppliedZoomFactor:(float)arg1 ;
-(id<BWZoomCompletionDelegate>)zoomCompletionDelegate;
-(void)setZoomCompletionDelegate:(id<BWZoomCompletionDelegate>)arg1 ;
-(id)init;
-(void)dealloc;
@end

