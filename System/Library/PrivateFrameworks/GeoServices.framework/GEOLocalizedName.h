/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSString;

@interface GEOLocalizedName : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSString* _languageCode;
	NSString* _name;
	unsigned _nameRank;
	NSString* _nameType;
	NSString* _phoneticName;
	BOOL _isDefault;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasIsDefault; 
@property (assign,nonatomic) BOOL isDefault;                                 //@synthesize isDefault=_isDefault - In the implementation block
@property (nonatomic,readonly) BOOL hasLanguageCode; 
@property (nonatomic,retain) NSString * languageCode;                        //@synthesize languageCode=_languageCode - In the implementation block
@property (nonatomic,readonly) BOOL hasNameType; 
@property (nonatomic,retain) NSString * nameType;                            //@synthesize nameType=_nameType - In the implementation block
@property (nonatomic,readonly) BOOL hasName; 
@property (nonatomic,retain) NSString * name;                                //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) BOOL hasNameRank; 
@property (assign,nonatomic) unsigned nameRank;                              //@synthesize nameRank=_nameRank - In the implementation block
@property (nonatomic,readonly) BOOL hasPhoneticName; 
@property (nonatomic,retain) NSString * phoneticName;                        //@synthesize phoneticName=_phoneticName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)hasLanguageCode;
-(BOOL)hasName;
-(BOOL)hasPhoneticName;
-(NSString *)phoneticName;
-(void)setPhoneticName:(NSString *)arg1 ;
-(id)initWithPlaceDataLocalizedString:(id)arg1 ;
-(void)setIsDefault:(BOOL)arg1 ;
-(void)setHasIsDefault:(BOOL)arg1 ;
-(BOOL)hasIsDefault;
-(BOOL)hasNameType;
-(void)setNameRank:(unsigned)arg1 ;
-(void)setHasNameRank:(BOOL)arg1 ;
-(BOOL)hasNameRank;
-(BOOL)isDefault;
-(NSString *)nameType;
-(void)setNameType:(NSString *)arg1 ;
-(unsigned)nameRank;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(NSString *)languageCode;
-(void)setLanguageCode:(NSString *)arg1 ;
@end

