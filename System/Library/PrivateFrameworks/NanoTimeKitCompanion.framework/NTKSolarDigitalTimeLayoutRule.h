/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKLayoutRule.h>

@interface NTKSolarDigitalTimeLayoutRule : NTKLayoutRule {

	double _sunToTimeMinimumDistance;
	double _mininumY;
	double _maxinumY;
	CGRect _sunFrame;

}

@property (assign,nonatomic) double sunToTimeMinimumDistance;              //@synthesize sunToTimeMinimumDistance=_sunToTimeMinimumDistance - In the implementation block
@property (assign,nonatomic) double mininumY;                              //@synthesize mininumY=_mininumY - In the implementation block
@property (assign,nonatomic) double maxinumY;                              //@synthesize maxinumY=_maxinumY - In the implementation block
@property (assign,nonatomic) CGRect sunFrame;                              //@synthesize sunFrame=_sunFrame - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGRect)calculateLayoutFrameForBoundsSize:(CGSize)arg1 ;
-(void)setSunFrame:(CGRect)arg1 ;
-(void)setSunToTimeMinimumDistance:(double)arg1 ;
-(void)setMininumY:(double)arg1 ;
-(void)setMaxinumY:(double)arg1 ;
-(CGRect)sunFrame;
-(double)sunToTimeMinimumDistance;
-(BOOL)acceptTimeFrame:(CGRect)arg1 containingFrame:(CGRect)arg2 ;
-(double)mininumY;
-(double)maxinumY;
@end

