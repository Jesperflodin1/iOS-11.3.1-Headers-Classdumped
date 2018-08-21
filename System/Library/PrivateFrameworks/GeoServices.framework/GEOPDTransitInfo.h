/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, NSString;

@interface GEOPDTransitInfo : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _labels;
	NSMutableArray* _lines;
	NSString* _searchDisplayName;
	NSMutableArray* _systems;
	NSMutableArray* _transitConnections;

}

@property (nonatomic,retain) NSMutableArray * lines;                           //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * systems;                         //@synthesize systems=_systems - In the implementation block
@property (nonatomic,retain) NSMutableArray * labels;                          //@synthesize labels=_labels - In the implementation block
@property (nonatomic,retain) NSMutableArray * transitConnections;              //@synthesize transitConnections=_transitConnections - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchDisplayName; 
@property (nonatomic,retain) NSString * searchDisplayName;                     //@synthesize searchDisplayName=_searchDisplayName - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)transitInfoForPlaceData:(id)arg1 ;
+(Class)lineType;
+(Class)systemType;
+(Class)labelType;
+(Class)transitConnectionType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(NSMutableArray *)lines;
-(void)clearLines;
-(void)addLine:(id)arg1 ;
-(unsigned long long)linesCount;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)clearSystems;
-(void)addSystem:(id)arg1 ;
-(unsigned long long)systemsCount;
-(id)systemAtIndex:(unsigned long long)arg1 ;
-(void)clearLabels;
-(void)addLabel:(id)arg1 ;
-(unsigned long long)labelsCount;
-(id)labelAtIndex:(unsigned long long)arg1 ;
-(void)clearTransitConnections;
-(void)addTransitConnection:(id)arg1 ;
-(unsigned long long)transitConnectionsCount;
-(id)transitConnectionAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasSearchDisplayName;
-(void)setLines:(NSMutableArray *)arg1 ;
-(NSMutableArray *)systems;
-(void)setSystems:(NSMutableArray *)arg1 ;
-(NSMutableArray *)transitConnections;
-(void)setTransitConnections:(NSMutableArray *)arg1 ;
-(NSString *)searchDisplayName;
-(void)setSearchDisplayName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setLabels:(NSMutableArray *)arg1 ;
-(NSMutableArray *)labels;
@end

