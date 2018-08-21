/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HKGraphSeriesBlockCoordinate;
@interface HKGraphSeriesVisibleBlockCoordinates : NSObject {

	id<HKGraphSeriesBlockCoordinate> _minimum;
	id<HKGraphSeriesBlockCoordinate> _maximum;
	id<HKGraphSeriesBlockCoordinate> _last;

}

@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> minimum;              //@synthesize minimum=_minimum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> maximum;              //@synthesize maximum=_maximum - In the implementation block
@property (nonatomic,readonly) id<HKGraphSeriesBlockCoordinate> last;                 //@synthesize last=_last - In the implementation block
-(id<HKGraphSeriesBlockCoordinate>)minimum;
-(id<HKGraphSeriesBlockCoordinate>)maximum;
-(id)initWithMinimum:(id)arg1 maximum:(id)arg2 last:(id)arg3 ;
-(id<HKGraphSeriesBlockCoordinate>)last;
@end

