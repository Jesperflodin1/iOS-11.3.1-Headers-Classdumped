/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestions.framework/CoreSuggestions
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreSuggestions/CoreSuggestions-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSTimeZone, NSDate;

@interface SGSimpleTimeRange : NSObject <NSCopying, NSSecureCoding> {

	SGUnixTimestamp_ _start;
	SGUnixTimestamp_ _end;
	NSTimeZone* _startTimeZone;
	NSTimeZone* _endTimeZone;
	BOOL _floating;
	long long _startUTCOffsetSeconds;
	long long _endUTCOffsetSeconds;

}

@property (nonatomic,readonly) SGUnixTimestamp_ start;                       //@synthesize start=_start - In the implementation block
@property (nonatomic,readonly) SGUnixTimestamp_ end;                         //@synthesize end=_end - In the implementation block
@property (nonatomic,readonly) NSDate * startDate; 
@property (nonatomic,readonly) NSDate * endDate; 
@property (nonatomic,readonly) long long startUTCOffsetSeconds;              //@synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds - In the implementation block
@property (nonatomic,readonly) long long endUTCOffsetSeconds;                //@synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds - In the implementation block
@property (getter=isFloating,nonatomic,readonly) BOOL floating;              //@synthesize floating=_floating - In the implementation block
@property (nonatomic,readonly) NSTimeZone * startTimeZone; 
@property (nonatomic,readonly) NSTimeZone * endTimeZone; 
+(BOOL)supportsSecureCoding;
+(SGUnixTimestamp_)fromFloatingTime:(SGUnixTimestamp_)arg1 ;
+(id)rangeWithStart:(SGUnixTimestamp_)arg1 end:(SGUnixTimestamp_)arg2 timeZone:(id)arg3 ;
+(id)dateFromGregorianComponents:(id)arg1 ;
+(BOOL)isAllDayComponents:(id)arg1 ;
+(BOOL)hasYearMonthDayComponents:(id)arg1 ;
+(id)utcRangeWithStart:(SGUnixTimestamp_)arg1 end:(SGUnixTimestamp_)arg2 ;
+(id)rangeWithStart:(SGUnixTimestamp_)arg1 duration:(double)arg2 timeZone:(id)arg3 ;
+(id)utcRangeWithStart:(SGUnixTimestamp_)arg1 duration:(double)arg2 ;
+(id)floatingRangeWithLocalStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)floatingRangeWithLocalStart:(SGUnixTimestamp_)arg1 end:(SGUnixTimestamp_)arg2 ;
+(id)rangeWithGregorianStartComponents:(id)arg1 endComponents:(id)arg2 ;
+(id)rangeWithStart:(SGUnixTimestamp_)arg1 startTimeZone:(id)arg2 end:(SGUnixTimestamp_)arg3 endTimeZone:(id)arg4 ;
+(id)floatingRangeWithUTCStart:(SGUnixTimestamp_)arg1 end:(SGUnixTimestamp_)arg2 ;
+(SGUnixTimestamp_)toFloatingTime:(SGUnixTimestamp_)arg1 ;
+(id)floatingRangeWithUTCStartDate:(id)arg1 endDate:(id)arg2 ;
+(id)rangeWithStartDate:(id)arg1 startTimeZone:(id)arg2 endDate:(id)arg3 endTimeZone:(id)arg4 ;
+(SGUnixTimestamp_)toFloatingTime:(SGUnixTimestamp_)arg1 withDSTAmbiguityPreferences:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SGUnixTimestamp_)start;
-(SGUnixTimestamp_)end;
-(BOOL)isFloating;
-(NSTimeZone *)startTimeZone;
-(NSTimeZone *)endTimeZone;
-(id)initUTCFloatingWithStart:(SGUnixTimestamp_)arg1 end:(SGUnixTimestamp_)arg2 ;
-(id)initWithStart:(SGUnixTimestamp_)arg1 startUTCOffsetSeconds:(long long)arg2 end:(SGUnixTimestamp_)arg3 endUTCOffsetSeconds:(long long)arg4 ;
-(id)stableStringRepresentation;
-(id)_componentsForDate:(id)arg1 timeZone:(id)arg2 ;
-(void)applyToEKEvent:(id)arg1 isAllDay:(BOOL)arg2 ;
-(BOOL)isEqualToSimpleTimeRange:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)isValidAllDayRange;
-(id)absoluteRange;
-(long long)startUTCOffsetSeconds;
-(long long)endUTCOffsetSeconds;
-(id)startDateComponents;
-(id)endDateComponents;
@end

