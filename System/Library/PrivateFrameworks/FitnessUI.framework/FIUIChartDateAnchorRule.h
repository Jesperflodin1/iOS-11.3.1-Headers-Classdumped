/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIUIChartDateAnchorRule : NSObject {

	unsigned long long _calendarUnit;
	long long _roundingValue;

}

@property (assign,nonatomic) unsigned long long calendarUnit;              //@synthesize calendarUnit=_calendarUnit - In the implementation block
@property (assign,nonatomic) long long roundingValue;                      //@synthesize roundingValue=_roundingValue - In the implementation block
-(unsigned long long)calendarUnit;
-(void)setRoundingValue:(long long)arg1 ;
-(void)setCalendarUnit:(unsigned long long)arg1 ;
-(id)generateAnchorFromDate:(id)arg1 ;
-(id)_floorDate:(id)arg1 ;
-(id)_anchorDiffComponents;
-(BOOL)_componentsSuccessful:(id)arg1 ;
-(long long)roundingValue;
@end

