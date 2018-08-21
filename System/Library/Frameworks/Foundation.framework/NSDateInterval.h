/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/Foundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate;

@interface NSDateInterval : NSObject <NSCopying, NSSecureCoding>

@property (copy,readonly) NSDate * startDate; 
@property (copy,readonly) NSDate * endDate; 
@property (readonly) double duration; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)supportsSecureCoding;
-(id)intersectionWithDateInterval:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(BOOL)containsDate:(id)arg1 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(long long)compare:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(id)initWithStartDate:(id)arg1 duration:(double)arg2 ;
-(BOOL)intersectsDateInterval:(id)arg1 ;
-(BOOL)isEqualToDateInterval:(id)arg1 ;
@end

