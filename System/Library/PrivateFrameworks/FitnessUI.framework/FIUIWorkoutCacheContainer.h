/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKQuantity, NSArray, NSNumber, NSDictionary, HKUnit;

@interface FIUIWorkoutCacheContainer : NSObject {

	HKQuantity* _basalEnergy;
	NSArray* _heartRateSamples;
	NSArray* _recoveryHeartRateSamples;
	NSNumber* _averageHeartRate;
	NSArray* _distanceSamples;
	NSArray* _strokeSamples;
	NSArray* _splits;
	NSDictionary* _swimmingSplits;
	NSArray* _segments;
	NSArray* _swimmingSets;
	HKUnit* _userPreferredDistanceUnit;
	NSDictionary* _swimDistanceByStrokeStyle;

}

@property (nonatomic,retain) HKQuantity * basalEnergy;                              //@synthesize basalEnergy=_basalEnergy - In the implementation block
@property (nonatomic,retain) NSArray * heartRateSamples;                            //@synthesize heartRateSamples=_heartRateSamples - In the implementation block
@property (nonatomic,retain) NSArray * recoveryHeartRateSamples;                    //@synthesize recoveryHeartRateSamples=_recoveryHeartRateSamples - In the implementation block
@property (nonatomic,retain) NSNumber * averageHeartRate;                           //@synthesize averageHeartRate=_averageHeartRate - In the implementation block
@property (nonatomic,retain) NSArray * distanceSamples;                             //@synthesize distanceSamples=_distanceSamples - In the implementation block
@property (nonatomic,retain) NSArray * strokeSamples;                               //@synthesize strokeSamples=_strokeSamples - In the implementation block
@property (nonatomic,retain) NSArray * splits;                                      //@synthesize splits=_splits - In the implementation block
@property (nonatomic,retain) NSDictionary * swimmingSplits;                         //@synthesize swimmingSplits=_swimmingSplits - In the implementation block
@property (nonatomic,retain) NSArray * segments;                                    //@synthesize segments=_segments - In the implementation block
@property (nonatomic,retain) NSArray * swimmingSets;                                //@synthesize swimmingSets=_swimmingSets - In the implementation block
@property (nonatomic,retain) HKUnit * userPreferredDistanceUnit;                    //@synthesize userPreferredDistanceUnit=_userPreferredDistanceUnit - In the implementation block
@property (nonatomic,retain) NSDictionary * swimDistanceByStrokeStyle;              //@synthesize swimDistanceByStrokeStyle=_swimDistanceByStrokeStyle - In the implementation block
-(NSArray *)segments;
-(void)setSegments:(NSArray *)arg1 ;
-(HKQuantity *)basalEnergy;
-(void)setBasalEnergy:(HKQuantity *)arg1 ;
-(NSArray *)heartRateSamples;
-(void)setHeartRateSamples:(NSArray *)arg1 ;
-(NSArray *)recoveryHeartRateSamples;
-(void)setRecoveryHeartRateSamples:(NSArray *)arg1 ;
-(void)setAverageHeartRate:(NSNumber *)arg1 ;
-(NSArray *)distanceSamples;
-(void)setDistanceSamples:(NSArray *)arg1 ;
-(NSArray *)strokeSamples;
-(void)setStrokeSamples:(NSArray *)arg1 ;
-(NSArray *)splits;
-(void)setSplits:(NSArray *)arg1 ;
-(NSDictionary *)swimmingSplits;
-(void)setSwimmingSplits:(NSDictionary *)arg1 ;
-(NSArray *)swimmingSets;
-(void)setSwimmingSets:(NSArray *)arg1 ;
-(HKUnit *)userPreferredDistanceUnit;
-(void)setUserPreferredDistanceUnit:(HKUnit *)arg1 ;
-(NSDictionary *)swimDistanceByStrokeStyle;
-(void)setSwimDistanceByStrokeStyle:(NSDictionary *)arg1 ;
-(NSNumber *)averageHeartRate;
@end

