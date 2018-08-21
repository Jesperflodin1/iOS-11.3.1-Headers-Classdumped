/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/NewsCore-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, FCCKPRecordIdentifier, FCCKPRecord;

@interface FCCKPQueryRetrieveResponseQueryResult : PBCodable <NSCopying> {

	NSString* _etag;
	FCCKPRecordIdentifier* _identifier;
	FCCKPRecord* _record;
	int _type;
	SCD_Struct_FC1 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) FCCKPRecordIdentifier * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) BOOL hasEtag; 
@property (nonatomic,retain) NSString * etag;                                 //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                        //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) BOOL hasRecord; 
@property (nonatomic,retain) FCCKPRecord * record;                            //@synthesize record=_record - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(NSString *)etag;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(BOOL)hasIdentifier;
-(BOOL)hasEtag;
-(void)setEtag:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FCCKPRecordIdentifier *)identifier;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setIdentifier:(FCCKPRecordIdentifier *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(FCCKPRecord *)record;
-(BOOL)hasRecord;
-(void)setRecord:(FCCKPRecord *)arg1 ;
@end
