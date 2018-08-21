/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@interface HDDemoDataHeartSampleGenerator : HDDemoDataBaseSampleGenerator {

	double _nextRestingHeartRateSampleTime;
	double _nextWalkingHeartRateAverageSampleTime;
	double _lastRestingHeartRate;
	double _lastWalkingHeartRateAverage;

}

@property (assign,nonatomic) double nextRestingHeartRateSampleTime;                     //@synthesize nextRestingHeartRateSampleTime=_nextRestingHeartRateSampleTime - In the implementation block
@property (assign,nonatomic) double nextWalkingHeartRateAverageSampleTime;              //@synthesize nextWalkingHeartRateAverageSampleTime=_nextWalkingHeartRateAverageSampleTime - In the implementation block
@property (assign,nonatomic) double lastRestingHeartRate;                               //@synthesize lastRestingHeartRate=_lastRestingHeartRate - In the implementation block
@property (assign,nonatomic) double lastWalkingHeartRateAverage;                        //@synthesize lastWalkingHeartRateAverage=_lastWalkingHeartRateAverage - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(void)generateSamplesForDemoPerson:(id)arg1 atTime:(double)arg2 sampleDate:(id)arg3 objectCollection:(id)arg4 ;
-(id)restingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(id)walkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeRestingHeartRateForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)_computeWalkingHeartRateAverageForDemoPerson:(id)arg1 atTime:(double)arg2 ;
-(double)nextRestingHeartRateSampleTime;
-(void)setNextRestingHeartRateSampleTime:(double)arg1 ;
-(double)nextWalkingHeartRateAverageSampleTime;
-(void)setNextWalkingHeartRateAverageSampleTime:(double)arg1 ;
-(double)lastRestingHeartRate;
-(void)setLastRestingHeartRate:(double)arg1 ;
-(double)lastWalkingHeartRateAverage;
-(void)setLastWalkingHeartRateAverage:(double)arg1 ;
@end

