/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class CLLocation, NSDate;

@interface HKLocationSeriesDatum : NSObject <NSSecureCoding> {

	CLLocation* _location;
	NSDate* _date;

}

@property (readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
@property (readonly) NSDate * date;                      //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)datumWithLocation:(id)arg1 date:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(NSDate *)date;
-(CLLocation *)location;
-(BOOL)_validateWithError:(id*)arg1 ;
@end

