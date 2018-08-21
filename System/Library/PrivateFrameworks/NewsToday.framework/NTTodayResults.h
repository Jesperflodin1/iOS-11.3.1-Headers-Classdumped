/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSOrderedSet, NSDate;

@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding> {

	NSOrderedSet* _sections;
	NSDate* _expirationDate;

}

@property (nonatomic,copy) NSOrderedSet * sections;                       //@synthesize sections=_sections - In the implementation block
@property (nonatomic,copy,readonly) NSDate * expirationDate;              //@synthesize expirationDate=_expirationDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)itemCount;
-(NSDate *)expirationDate;
-(void)setSections:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)sections;
-(id)initWithSections:(id)arg1 expirationDate:(id)arg2 ;
@end

