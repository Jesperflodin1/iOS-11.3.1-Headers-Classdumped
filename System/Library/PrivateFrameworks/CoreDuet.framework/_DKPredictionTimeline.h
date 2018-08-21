/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreDuet/CoreDuet-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSArray;

@interface _DKPredictionTimeline : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _startDate;
	NSArray* _transitionDates;
	NSArray* _values;

}

@property (nonatomic,retain) NSDate * startDate;                     //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,retain) NSArray * values;                       //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSArray * transitionDates;              //@synthesize transitionDates=_transitionDates - In the implementation block
@property (nonatomic,readonly) NSDate * endDate; 
+(BOOL)supportsSecureCoding;
+(id)timelineWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
+(id)timelineWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
+(id)predictionUnavailable;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)values;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithValues:(id)arg1 forDurations:(id)arg2 startingAt:(id)arg3 ;
-(id)initWithValues:(id)arg1 eachWithDuration:(double)arg2 startingAt:(id)arg3 ;
-(void)setTransitionDates:(NSArray *)arg1 ;
-(id)largestDateRangeWithValuesBetween:(double)arg1 and:(double)arg2 ofMinimumDuration:(double)arg3 ;
-(id)valueAtDate:(id)arg1 ;
-(NSArray *)transitionDates;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(BOOL)isUnavailable;
-(void)setStartDate:(NSDate *)arg1 ;
@end

