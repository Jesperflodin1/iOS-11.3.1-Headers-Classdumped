/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <CalendarDatabase/CDBRecurrenceGenerator.h>

@interface EKRecurrenceGenerator : CDBRecurrenceGenerator
+(int)_convertEKRecurrenceFrequencyToCalRecurrenceFrequency:(long long)arg1 ;
-(void)_setupForEKEvent:(id)arg1 adjustDatesForAllDayEvents:(BOOL)arg2 ;
-(void)_prepareForEKRecurrence:(id)arg1 forCalendarItem:(id)arg2 ;
-(id)_copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK2)arg3 endDate:(SCD_Struct_EK2)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 adjustDatesForAllDayEvents:(BOOL)arg8 ;
-(BOOL)occurrenceDate:(id)arg1 matchesRecurrenceRule:(id)arg2 forEvent:(id)arg3 includeDetachedEventsInSeries:(BOOL)arg4 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 exceptionDates:(id)arg3 initialDate:(id)arg4 afterDate:(id)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 startDate:(SCD_Struct_EK2)arg2 endDate:(SCD_Struct_EK2)arg3 timeZone:(id)arg4 limit:(long long)arg5 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK2)arg3 endDate:(SCD_Struct_EK2)arg4 timeZone:(id)arg5 limit:(long long)arg6 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK2)arg3 endDate:(SCD_Struct_EK2)arg4 timeZone:(id)arg5 limit:(long long)arg6 adjustDatesForAllDayEvents:(BOOL)arg7 ;
-(id)copyOccurrenceDatesWithEKEvent:(id)arg1 recurrenceRule:(id)arg2 startDate:(SCD_Struct_EK2)arg3 endDate:(SCD_Struct_EK2)arg4 timeZone:(id)arg5 exceptionDates:(id)arg6 limit:(long long)arg7 ;
-(BOOL)isOccurrenceDate:(id)arg1 validForEvent:(id)arg2 ;
-(id)nextOccurrenceDateWithEKRecurrences:(id)arg1 forCalendarItem:(id)arg2 initialDate:(id)arg3 afterDate:(id)arg4 ;
@end

