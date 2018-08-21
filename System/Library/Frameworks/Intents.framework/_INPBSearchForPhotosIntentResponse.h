/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields;

@interface _INPBSearchForPhotosIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _searchResultsCount;
	SCD_Struct_IN1 _has;

}

@property (assign,nonatomic) BOOL hasSearchResultsCount; 
@property (assign,nonatomic) int searchResultsCount;                         //@synthesize searchResultsCount=_searchResultsCount - In the implementation block
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
-(BOOL)hasSearchResultsCount;
-(void)setHasSearchResultsCount:(BOOL)arg1 ;
-(void)setSearchResultsCount:(int)arg1 ;
-(int)searchResultsCount;
@end

