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

@interface GEOPDSearchSubstringDescriptor : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	int _beginIndex;
	int _endIndex;
	NSMutableArray* _spanDatas;
	int _stringType;

}

@property (assign,nonatomic) int stringType;                                 //@synthesize stringType=_stringType - In the implementation block
@property (assign,nonatomic) int beginIndex;                                 //@synthesize beginIndex=_beginIndex - In the implementation block
@property (assign,nonatomic) int endIndex;                                   //@synthesize endIndex=_endIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * spanDatas;                     //@synthesize spanDatas=_spanDatas - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)spanDataType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(id)stringTypeAsString:(int)arg1 ;
-(int)StringAsStringType:(id)arg1 ;
-(void)clearSpanDatas;
-(void)addSpanData:(id)arg1 ;
-(unsigned long long)spanDatasCount;
-(id)spanDataAtIndex:(unsigned long long)arg1 ;
-(int)stringType;
-(void)setStringType:(int)arg1 ;
-(int)beginIndex;
-(void)setBeginIndex:(int)arg1 ;
-(int)endIndex;
-(void)setEndIndex:(int)arg1 ;
-(NSMutableArray *)spanDatas;
-(void)setSpanDatas:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

