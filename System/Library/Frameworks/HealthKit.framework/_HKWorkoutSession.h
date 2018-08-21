/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue, _HKWorkoutSessionDelegate;
@class NSObject, HKWorkoutConfiguration, NSDate, NSUUID;

@interface _HKWorkoutSession : NSObject <NSSecureCoding> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _connectedToFitnessMachine;
	HKWorkoutConfiguration* _workoutConfiguration;
	id<_HKWorkoutSessionDelegate> _delegate;
	long long _state;
	NSDate* _startDate;
	NSDate* _endDate;
	NSUUID* _UUID;

}

@property (nonatomic,copy,readonly) HKWorkoutConfiguration * workoutConfiguration;              //@synthesize workoutConfiguration=_workoutConfiguration - In the implementation block
@property (assign,nonatomic,__weak) id<_HKWorkoutSessionDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long state;                                                   //@synthesize state=_state - In the implementation block
@property (readonly) NSDate * startDate;                                                        //@synthesize startDate=_startDate - In the implementation block
@property (readonly) NSDate * endDate;                                                          //@synthesize endDate=_endDate - In the implementation block
@property (setter=_setUUID:,nonatomic,retain) NSUUID * UUID;                                    //@synthesize UUID=_UUID - In the implementation block
@property (assign,nonatomic) BOOL connectedToFitnessMachine;                                    //@synthesize connectedToFitnessMachine=_connectedToFitnessMachine - In the implementation block
+(BOOL)supportsSecureCoding;
+(BOOL)areSwimmingSessionsAvailable;
-(id<_HKWorkoutSessionDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setDelegate:(id<_HKWorkoutSessionDelegate>)arg1 ;
-(id)description;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(NSUUID *)UUID;
-(BOOL)_validateWorkoutConfiguration:(id)arg1 errorOut:(id*)arg2 ;
-(id)initWithActivityType:(unsigned long long)arg1 locationType:(long long)arg2 ;
-(void)didChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(void)didFailWithError:(id)arg1 ;
-(void)didGenerateEvent:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(HKWorkoutConfiguration *)workoutConfiguration;
-(void)_setUUID:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 error:(id*)arg2 ;
-(void)setConnectedToFitnessMachine:(BOOL)arg1 ;
-(BOOL)connectedToFitnessMachine;
@end

