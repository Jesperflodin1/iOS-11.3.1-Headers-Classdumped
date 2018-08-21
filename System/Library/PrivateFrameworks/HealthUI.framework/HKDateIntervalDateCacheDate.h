/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate;

@interface HKDateIntervalDateCacheDate : NSObject {

	NSDate* _date;
	long long _dateType;

}

@property (nonatomic,readonly) NSDate * date;                   //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) long long dateType;              //@synthesize dateType=_dateType - In the implementation block
-(id)description;
-(NSDate *)date;
-(id)initWithDate:(id)arg1 dateType:(long long)arg2 ;
-(long long)dateType;
@end
