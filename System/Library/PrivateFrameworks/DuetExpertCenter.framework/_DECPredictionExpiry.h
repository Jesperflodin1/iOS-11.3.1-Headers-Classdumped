/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DuetExpertCenter.framework/DuetExpertCenter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DuetExpertCenter/DuetExpertCenter-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDate;

@interface _DECPredictionExpiry : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _type;
	long long _value;
	NSDate* _date;

}

@property (nonatomic,readonly) unsigned long long type;              //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) long long value;                      //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) NSDate * date;                        //@synthesize date=_date - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)expireAfter:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(unsigned long long)type;
-(NSDate *)date;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)value;
-(id)initWithType:(unsigned long long)arg1 value:(unsigned long long)arg2 ;
@end

