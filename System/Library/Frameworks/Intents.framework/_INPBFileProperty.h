/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBFilePropertyValue;

@interface _INPBFileProperty : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _name;
	int _qualifier;
	_INPBFilePropertyValue* _value;
	SCD_Struct_IN4 _has;

}

@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) int name;                                       //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasQualifier; 
@property (assign,nonatomic) int qualifier;                                  //@synthesize qualifier=_qualifier - In the implementation block
@property (nonatomic,readonly) BOOL hasValue; 
@property (nonatomic,retain) _INPBFilePropertyValue * value;                 //@synthesize value=_value - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasName;
-(BOOL)hasValue;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(int)arg1 ;
-(int)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setValue:(_INPBFilePropertyValue *)arg1 ;
-(_INPBFilePropertyValue *)value;
-(id)dictionaryRepresentation;
-(void)setHasQualifier:(BOOL)arg1 ;
-(BOOL)hasQualifier;
-(id)qualifierAsString:(int)arg1 ;
-(int)StringAsQualifier:(id)arg1 ;
-(int)qualifier;
-(void)setQualifier:(int)arg1 ;
-(void)setHasName:(BOOL)arg1 ;
-(id)nameAsString:(int)arg1 ;
-(int)StringAsName:(id)arg1 ;
@end

