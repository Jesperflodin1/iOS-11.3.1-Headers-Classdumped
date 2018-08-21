/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeriesBlockCoordinateList.h>

@class NSArray, HKValueRange;

@interface _HKCompoundBlockCoordinateList : HKGraphSeriesBlockCoordinateList {

	NSArray* _subCoordinates;
	HKValueRange* _chartableValueRange;

}
-(id)coordinates;
-(void)enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 block:(/*^block*/id)arg3 ;
-(long long)numCoordinates;
-(void)_enumerateCoordinatesWithTransform:(CGAffineTransform)arg1 chartableValueRange:(id)arg2 roundToViewScale:(BOOL)arg3 block:(/*^block*/id)arg4 ;
-(id)_coordinatesInChartableRange:(id)arg1 ;
-(long long)_numCoordinatesInChartableRange:(id)arg1 ;
-(SCD_Struct_HK9)blockPathStart;
-(SCD_Struct_HK9)blockPathEnd;
-(id)firstCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)lastCoordinateWithTransform:(CGAffineTransform)arg1 roundToViewScale:(BOOL)arg2 ;
-(id)initWithSubCoordinates:(id)arg1 chartableValueRange:(id)arg2 ;
@end

