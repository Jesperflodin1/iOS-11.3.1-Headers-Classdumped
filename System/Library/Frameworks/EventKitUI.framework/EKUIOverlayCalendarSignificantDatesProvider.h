/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CalDateRange, NSDictionary, NSObject, NSDate;

@interface EKUIOverlayCalendarSignificantDatesProvider : NSObject {

	CalDateRange* _cachedDateRange;
	CalDateRange* _cachedCentralYear;
	NSDictionary* _cachedFirstsOfMonths;
	NSDictionary* _cachedFirstsOfYears;
	NSObject*<OS_dispatch_queue> _queue;
	unsigned long long _currentGeneration;
	NSDate* _currentRequest;
	BOOL _loadPending;
	/*^block*/id _significantDatesChangedHandler;

}

@property (nonatomic,copy) id significantDatesChangedHandler;              //@synthesize significantDatesChangedHandler=_significantDatesChangedHandler - In the implementation block
-(id)init;
-(void)dealloc;
-(void)_load;
-(id)firstOfOverlayMonthsForCalendarMonth:(id)arg1 ;
-(id)firstOfOverlayYearsForCalendarMonth:(id)arg1 ;
-(void)_invalidateCaches;
-(void)_requestDate:(id)arg1 ;
-(id)significantDatesChangedHandler;
-(void)setSignificantDatesChangedHandler:(id)arg1 ;
@end

