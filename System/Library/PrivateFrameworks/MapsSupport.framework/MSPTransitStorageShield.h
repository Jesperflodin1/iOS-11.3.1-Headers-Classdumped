/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MapsSupport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/GEOTransitShieldDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, PBUnknownFields;

@interface MSPTransitStorageShield : PBCodable <GEOTransitShieldDataSource, NSCopying> {

	PBUnknownFields* _unknownFields;
	long long _shieldType;
	NSString* _shieldColorString;
	NSString* _shieldText;
	SCD_Struct_MS3 _has;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) long long shieldType; 
@property (nonatomic,readonly) NSString * shieldText; 
@property (nonatomic,readonly) NSString * shieldColorString; 
@property (nonatomic,readonly) BOOL hasShieldText; 
@property (nonatomic,retain) NSString * shieldText;                          //@synthesize shieldText=_shieldText - In the implementation block
@property (assign,nonatomic) BOOL hasShieldType; 
@property (assign,nonatomic) long long shieldType;                           //@synthesize shieldType=_shieldType - In the implementation block
@property (nonatomic,readonly) BOOL hasShieldColorString; 
@property (nonatomic,retain) NSString * shieldColorString;                   //@synthesize shieldColorString=_shieldColorString - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasShieldText;
-(NSString *)shieldText;
-(void)setShieldText:(NSString *)arg1 ;
-(BOOL)hasShieldType;
-(long long)shieldType;
-(void)setShieldType:(long long)arg1 ;
-(void)setHasShieldType:(BOOL)arg1 ;
-(NSString *)shieldColorString;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithShield:(id)arg1 ;
-(BOOL)hasShieldColorString;
-(void)setShieldColorString:(NSString *)arg1 ;
@end

