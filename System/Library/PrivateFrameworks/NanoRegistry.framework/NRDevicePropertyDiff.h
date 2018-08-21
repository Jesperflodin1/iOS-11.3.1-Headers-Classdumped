/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>

@protocol NSObjectNSCopying;
@interface NRDevicePropertyDiff : NRDiffBase {

	id<NSObject><NSCopying> _value;

}

@property (nonatomic,readonly) id<NSObject><NSCopying> value;              //@synthesize value=_value - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id<NSObject><NSCopying>)value;
-(id)initWithValue:(id)arg1 ;
@end
