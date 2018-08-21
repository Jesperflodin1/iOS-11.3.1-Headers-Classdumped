/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface TIDebugValue : NSObject {

	float defaultValue;
	float sweepValue;
	float sweepMin;
	float sweepMax;
	float stepSize;

}

@property (assign,nonatomic) float defaultValue; 
@property (assign,nonatomic) float sweepValue; 
@property (assign,nonatomic) float sweepMin; 
@property (assign,nonatomic) float sweepMax; 
@property (assign,nonatomic) float stepSize; 
-(float)sweepValue;
-(float)defaultValue;
-(void)setDefaultValue:(float)arg1 ;
-(float)sweepMin;
-(float)sweepMax;
-(float)stepSize;
-(void)setSweepValue:(float)arg1 ;
-(void)setSweepMin:(float)arg1 ;
-(void)setSweepMax:(float)arg1 ;
-(void)setStepSize:(float)arg1 ;
@end

