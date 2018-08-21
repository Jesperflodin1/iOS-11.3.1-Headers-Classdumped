/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface DAECalendarAvailabilitySpan : NSObject <NSSecureCoding> {

	long long _type;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) long long type;                  //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;              //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                //@synthesize endDate=_endDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(long long)type;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(long long)arg3 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
@end

