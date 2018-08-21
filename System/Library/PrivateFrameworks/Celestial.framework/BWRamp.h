/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface BWRamp : NSObject {

	BOOL _isRamping;
	float _currentValue;
	int _currentIteration;
	float _startValue;
	float _targetValue;
	int _durationInIterations;
	int _shape;
	BOOL _isRampingUp;
	float _exponentialConvergenceFraction;
	float _exponentialSnapFraction;

}

@property (nonatomic,readonly) BOOL isRamping;                  //@synthesize isRamping=_isRamping - In the implementation block
@property (nonatomic,readonly) float currentValue;              //@synthesize currentValue=_currentValue - In the implementation block
+(void)initialize;
-(BOOL)isRamping;
-(float)updateRampForNexIteration;
-(void)startRampFrom:(float)arg1 to:(float)arg2 iterations:(int)arg3 shape:(int)arg4 ;
-(id)init;
-(float)currentValue;
@end

