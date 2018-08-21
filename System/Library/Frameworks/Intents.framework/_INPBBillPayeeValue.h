/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString, _INPBDataString, _INPBValueMetadata;

@interface _INPBBillPayeeValue : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _accountNumber;
	_INPBDataString* _nickname;
	_INPBDataString* _organizationName;
	_INPBValueMetadata* _valueMetadata;

}

@property (nonatomic,readonly) BOOL hasValueMetadata; 
@property (nonatomic,retain) _INPBValueMetadata * valueMetadata;              //@synthesize valueMetadata=_valueMetadata - In the implementation block
@property (nonatomic,readonly) BOOL hasNickname; 
@property (nonatomic,retain) _INPBDataString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,readonly) BOOL hasAccountNumber; 
@property (nonatomic,retain) NSString * accountNumber;                        //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,readonly) BOOL hasOrganizationName; 
@property (nonatomic,retain) _INPBDataString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setValueMetadata:(_INPBValueMetadata *)arg1 ;
-(BOOL)hasValueMetadata;
-(BOOL)hasNickname;
-(BOOL)hasAccountNumber;
-(BOOL)hasOrganizationName;
-(_INPBValueMetadata *)valueMetadata;
-(void)setOrganizationName:(_INPBDataString *)arg1 ;
-(void)setNickname:(_INPBDataString *)arg1 ;
-(_INPBDataString *)organizationName;
-(NSString *)accountNumber;
-(void)setAccountNumber:(NSString *)arg1 ;
-(_INPBDataString *)nickname;
@end
