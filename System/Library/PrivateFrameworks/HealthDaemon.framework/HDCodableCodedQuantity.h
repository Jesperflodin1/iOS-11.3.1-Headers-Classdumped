/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableMedicalCoding, NSString;

@interface HDCodableCodedQuantity : PBCodable <NSCopying> {

	HDCodableMedicalCoding* _comparatorCoding;
	HDCodableMedicalCoding* _unitCoding;
	NSString* _value;

}

@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) NSString * value;                                       //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) BOOL hasComparatorCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * comparatorCoding;              //@synthesize comparatorCoding=_comparatorCoding - In the implementation block
@property (nonatomic,readonly) BOOL hasUnitCoding; 
@property (nonatomic,retain) HDCodableMedicalCoding * unitCoding;                    //@synthesize unitCoding=_unitCoding - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(NSString *)arg1 ;
-(NSString *)value;
-(id)dictionaryRepresentation;
-(HDCodableMedicalCoding *)comparatorCoding;
-(HDCodableMedicalCoding *)unitCoding;
-(void)setComparatorCoding:(HDCodableMedicalCoding *)arg1 ;
-(void)setUnitCoding:(HDCodableMedicalCoding *)arg1 ;
-(BOOL)hasComparatorCoding;
-(BOOL)hasUnitCoding;
@end
