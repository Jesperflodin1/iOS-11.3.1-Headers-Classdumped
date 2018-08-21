/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthKit/HKQueryServerConfiguration.h>

@class NSDate, NSCalendar;

@interface _HKLatestSummariesQueryServerConfiguration : HKQueryServerConfiguration {

	NSDate* _summaryDate;
	NSCalendar* _calendar;

}

@property (nonatomic,copy) NSDate * summaryDate;               //@synthesize summaryDate=_summaryDate - In the implementation block
@property (nonatomic,copy) NSCalendar * calendar;              //@synthesize calendar=_calendar - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setCalendar:(NSCalendar *)arg1 ;
-(NSCalendar *)calendar;
-(void)setSummaryDate:(NSDate *)arg1 ;
-(NSDate *)summaryDate;
@end

