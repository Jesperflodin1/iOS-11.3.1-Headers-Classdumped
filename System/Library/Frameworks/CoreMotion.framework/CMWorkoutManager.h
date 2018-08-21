/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CMWorkoutManagerInternal;

@interface CMWorkoutManager : NSObject {

	CMWorkoutManagerInternal* _internal;

}

@property (nonatomic,readonly) CMWorkoutManagerInternal * _internal;              //@synthesize internal=_internal - In the implementation block
@property (assign,nonatomic) id<CMWorkoutManagerDelegate> delegate; 
+(BOOL)isAvailable;
-(unsigned long long)supportedMetricsForWorkoutType:(long long)arg1 ;
-(void)setSuggestedStopTimeout:(double)arg1 ;
-(CMWorkoutManagerInternal *)_internal;
-(id)init;
-(id<CMWorkoutManagerDelegate>)delegate;
-(void)setDelegate:(id<CMWorkoutManagerDelegate>)arg1 ;
-(void)dealloc;
-(void)stopWorkout:(id)arg1 ;
-(void)startWorkout:(id)arg1 ;
@end
