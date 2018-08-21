/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class HKWorkout, NSArray;

@interface HKLocationReadings : NSObject {

	BOOL _isSmoothed;
	HKWorkout* _workout;
	NSArray* _allValidLocations;
	NSArray* _inOrderLocationArrays;
	double _averageSpeed;
	double _topSpeed;
	double _bottomSpeed;

}

@property (nonatomic,readonly) BOOL isSmoothed;                              //@synthesize isSmoothed=_isSmoothed - In the implementation block
@property (nonatomic,readonly) HKWorkout * workout;                          //@synthesize workout=_workout - In the implementation block
@property (nonatomic,readonly) NSArray * allValidLocations;                  //@synthesize allValidLocations=_allValidLocations - In the implementation block
@property (nonatomic,readonly) NSArray * inOrderLocationArrays;              //@synthesize inOrderLocationArrays=_inOrderLocationArrays - In the implementation block
@property (nonatomic,readonly) double averageSpeed;                          //@synthesize averageSpeed=_averageSpeed - In the implementation block
@property (nonatomic,readonly) double topSpeed;                              //@synthesize topSpeed=_topSpeed - In the implementation block
@property (nonatomic,readonly) double bottomSpeed;                           //@synthesize bottomSpeed=_bottomSpeed - In the implementation block
-(id)firstObject;
-(long long)count;
-(id)lastObject;
-(id)description;
-(id)debugDescription;
-(double)averageSpeed;
-(HKWorkout *)workout;
-(void)_filterLocationsByActiveTimePeriod:(id)arg1 ;
-(void)_calculateSpeeds;
-(NSArray *)inOrderLocationArrays;
-(NSArray *)allValidLocations;
-(BOOL)isSmoothed;
-(id)initWithLocations:(id)arg1 workout:(id)arg2 isSmoothed:(BOOL)arg3 ;
-(double)topSpeed;
-(double)bottomSpeed;
@end
