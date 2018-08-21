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

@class PBUnknownFields;

@interface GEOPDEntityFilter : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	BOOL _includeName;
	BOOL _includeSpokenNames;
	SCD_Struct_GE21 _has;

}

@property (assign,nonatomic) BOOL hasIncludeSpokenNames; 
@property (assign,nonatomic) BOOL includeSpokenNames;                        //@synthesize includeSpokenNames=_includeSpokenNames - In the implementation block
@property (assign,nonatomic) BOOL hasIncludeName; 
@property (assign,nonatomic) BOOL includeName;                               //@synthesize includeName=_includeName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setIncludeSpokenNames:(BOOL)arg1 ;
-(void)setHasIncludeSpokenNames:(BOOL)arg1 ;
-(BOOL)hasIncludeSpokenNames;
-(BOOL)includeSpokenNames;
-(void)setIncludeName:(BOOL)arg1 ;
-(void)setHasIncludeName:(BOOL)arg1 ;
-(BOOL)hasIncludeName;
-(BOOL)includeName;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
