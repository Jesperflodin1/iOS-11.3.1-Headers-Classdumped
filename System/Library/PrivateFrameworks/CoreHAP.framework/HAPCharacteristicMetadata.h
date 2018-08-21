/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreHAP/CoreHAP-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HAPMetadataConstraints, NSString;

@interface HAPCharacteristicMetadata : HMFObject <NSCopying, NSSecureCoding> {

	HAPMetadataConstraints* _constraints;
	NSString* _manufacturerDescription;
	NSString* _format;
	NSString* _units;

}

@property (nonatomic,retain) HAPMetadataConstraints * constraints;              //@synthesize constraints=_constraints - In the implementation block
@property (nonatomic,copy) NSString * manufacturerDescription;                  //@synthesize manufacturerDescription=_manufacturerDescription - In the implementation block
@property (nonatomic,retain) NSString * format;                                 //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                  //@synthesize units=_units - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)format;
-(HAPMetadataConstraints *)constraints;
-(void)setConstraints:(HAPMetadataConstraints *)arg1 ;
-(void)setFormat:(NSString *)arg1 ;
-(void)setManufacturerDescription:(NSString *)arg1 ;
-(BOOL)isEqualToCharacteristicMetadata:(id)arg1 ;
-(id)_generateValidConstraints:(id)arg1 ;
-(NSString *)units;
-(NSString *)manufacturerDescription;
-(void)setUnits:(NSString *)arg1 ;
-(id)initWithConstraints:(id)arg1 description:(id)arg2 format:(id)arg3 units:(id)arg4 ;
@end
