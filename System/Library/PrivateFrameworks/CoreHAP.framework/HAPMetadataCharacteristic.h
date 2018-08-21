/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class NSString, NSNumber, HAPMetadataCharacteristicValue;

@interface HAPMetadataCharacteristic : HMFObject {

	NSString* _name;
	NSString* _chrDescription;
	NSString* _uuidStr;
	NSNumber* _properties;
	NSString* _format;
	NSString* _units;
	HAPMetadataCharacteristicValue* _valueMetadata;

}

@property (nonatomic,retain) NSString * name;                                             //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSString * chrDescription;                                   //@synthesize chrDescription=_chrDescription - In the implementation block
@property (nonatomic,retain) NSString * uuidStr;                                          //@synthesize uuidStr=_uuidStr - In the implementation block
@property (nonatomic,retain) NSNumber * properties;                                       //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NSString * format;                                           //@synthesize format=_format - In the implementation block
@property (nonatomic,retain) NSString * units;                                            //@synthesize units=_units - In the implementation block
@property (nonatomic,retain) HAPMetadataCharacteristicValue * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
-(void)dump;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(NSString *)format;
-(void)setProperties:(NSNumber *)arg1 ;
-(NSNumber *)properties;
-(void)setValueMetadata:(HAPMetadataCharacteristicValue *)arg1 ;
-(HAPMetadataCharacteristicValue *)valueMetadata;
-(void)setFormat:(NSString *)arg1 ;
-(void)setChrDescription:(NSString *)arg1 ;
-(id)initWithName:(id)arg1 uuid:(id)arg2 description:(id)arg3 format:(id)arg4 properties:(id)arg5 ;
-(id)generateDictionary:(id)arg1 ;
-(NSString *)uuidStr;
-(NSString *)units;
-(void)setUnits:(NSString *)arg1 ;
-(void)setUuidStr:(NSString *)arg1 ;
-(NSString *)chrDescription;
@end

