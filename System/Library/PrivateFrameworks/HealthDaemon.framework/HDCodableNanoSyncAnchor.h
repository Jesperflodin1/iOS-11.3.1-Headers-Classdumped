/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HDCodableEntityIdentifier;

@interface HDCodableNanoSyncAnchor : PBCodable <NSCopying> {

	long long _anchor;
	HDCodableEntityIdentifier* _entityIdentifier;
	int _objectType;
	SCD_Struct_HD20 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) int objectType;                                            //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAnchor; 
@property (assign,nonatomic) long long anchor;                                          //@synthesize anchor=_anchor - In the implementation block
@property (nonatomic,readonly) BOOL hasEntityIdentifier; 
@property (nonatomic,retain) HDCodableEntityIdentifier * entityIdentifier;              //@synthesize entityIdentifier=_entityIdentifier - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)anchor;
-(void)setAnchor:(long long)arg1 ;
-(int)objectType;
-(void)setObjectType:(int)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(id)objectTypeAsString:(int)arg1 ;
-(int)StringAsObjectType:(id)arg1 ;
-(void)setEntityIdentifier:(HDCodableEntityIdentifier *)arg1 ;
-(void)setHasAnchor:(BOOL)arg1 ;
-(BOOL)hasAnchor;
-(BOOL)hasEntityIdentifier;
-(HDCodableEntityIdentifier *)entityIdentifier;
-(id)nanoSyncDescription;
@end

