/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/NSDate.h>

@interface CLKDate : NSDate
+(double)timeIntervalSinceReferenceDate;
+(id)date;
+(id)dateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)complicationDateWithTimeIntervalSinceNow:(double)arg1 ;
+(id)unmodifiedDate;
+(id)complicationDate;
+(id)unmodifiedDateWithTimeIntervalSinceNow:(double)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(double)timeIntervalSinceNow;
-(id)initWithTimeIntervalSinceNow:(double)arg1 ;
-(id)initWithTimeIntervalSinceReferenceDate:(double)arg1 ;
@end

