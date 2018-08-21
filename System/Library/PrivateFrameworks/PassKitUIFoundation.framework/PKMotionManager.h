/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUIFoundation.framework/PassKitUIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMMotionManager, NSMutableArray, CADisplayLink;

@interface PKMotionManager : NSObject {

	CMMotionManager* _motion;
	NSMutableArray* _clients;
	 _currentRollPitch;
	GLKQuaternion _restingQuaternion;
	CADisplayLink* _displayLink;
	/*^block*/id _rollPitchForDeviceMotionHandler;

}

@property (nonatomic,copy) id rollPitchForDeviceMotionHandler;              //@synthesize rollPitchForDeviceMotionHandler=_rollPitchForDeviceMotionHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setRollPitchForDeviceMotionHandler:(id)arg1 ;
-(BOOL)isClientRegistered:(id)arg1 ;
-(void)updateWithMotion:(id)arg1 ;
-(id)rollPitchForDeviceMotionHandler;
-(void)registerClient:(id)arg1 ;
-(void)unregisterClient:(id)arg1 ;
@end

