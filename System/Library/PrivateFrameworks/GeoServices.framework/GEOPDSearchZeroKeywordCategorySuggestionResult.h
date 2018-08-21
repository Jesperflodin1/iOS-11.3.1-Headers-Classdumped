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

@class PBUnknownFields, NSMutableArray;

@interface GEOPDSearchZeroKeywordCategorySuggestionResult : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _categorys;
	NSMutableArray* _zeroKeywordEntrys;

}

@property (nonatomic,retain) NSMutableArray * categorys;                      //@synthesize categorys=_categorys - In the implementation block
@property (nonatomic,retain) NSMutableArray * zeroKeywordEntrys;              //@synthesize zeroKeywordEntrys=_zeroKeywordEntrys - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)zeroKeywordEntryType;
+(Class)categoryType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)clearCategorys;
-(void)addCategory:(id)arg1 ;
-(unsigned long long)categorysCount;
-(NSMutableArray *)categorys;
-(void)setCategorys:(NSMutableArray *)arg1 ;
-(void)clearZeroKeywordEntrys;
-(void)addZeroKeywordEntry:(id)arg1 ;
-(unsigned long long)zeroKeywordEntrysCount;
-(id)zeroKeywordEntryAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)zeroKeywordEntrys;
-(void)setZeroKeywordEntrys:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)categoryAtIndex:(unsigned long long)arg1 ;
@end
