/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HardwareDiagnostics.framework/HardwareDiagnostics
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HardwareDiagnostics/HardwareDiagnostics-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, HDBound;

@interface HDLimit : NSObject <NSSecureCoding, NSCopying> {

	NSString* _name;
	HDBound* _upperBound;
	HDBound* _lowerBound;

}

@property (nonatomic,copy) NSString * name;                   //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) HDBound * upperBound;              //@synthesize upperBound=_upperBound - In the implementation block
@property (nonatomic,copy) HDBound * lowerBound;              //@synthesize lowerBound=_lowerBound - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithName:(id)arg1 ;
-(HDBound *)lowerBound;
-(HDBound *)upperBound;
-(void)setUpperBound:(HDBound *)arg1 ;
-(void)setLowerBound:(HDBound *)arg1 ;
-(BOOL)isEqualToLimit:(id)arg1 ;
-(BOOL)measurementWithinBounds:(id)arg1 ;
@end

