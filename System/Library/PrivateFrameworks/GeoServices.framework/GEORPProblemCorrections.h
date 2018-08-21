/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, GEORPCorrectedCoordinate, NSMutableArray, GEORPCorrectedLabel, GEORPMapLocation, GEORPCorrectedSearch, GEORPDirectionsProblem, GEORPPlaceProblem;

@interface GEORPProblemCorrections : PBCodable <NSCopying> {

	NSString* _comments;
	GEORPCorrectedCoordinate* _correctedCoordinate;
	NSMutableArray* _correctedFields;
	NSMutableArray* _correctedFlags;
	GEORPCorrectedLabel* _correctedLabel;
	GEORPMapLocation* _correctedMapLocation;
	GEORPCorrectedSearch* _correctedSearch;
	GEORPDirectionsProblem* _directionsProblem;
	NSMutableArray* _photoWithMetadatas;
	GEORPPlaceProblem* _placeProblem;
	BOOL _delayed;
	SCD_Struct_GE1 _has;

}

@property (nonatomic,retain) NSMutableArray * correctedFields;                            //@synthesize correctedFields=_correctedFields - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedLabel; 
@property (nonatomic,retain) GEORPCorrectedLabel * correctedLabel;                        //@synthesize correctedLabel=_correctedLabel - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedCoordinate; 
@property (nonatomic,retain) GEORPCorrectedCoordinate * correctedCoordinate;              //@synthesize correctedCoordinate=_correctedCoordinate - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedSearch; 
@property (nonatomic,retain) GEORPCorrectedSearch * correctedSearch;                      //@synthesize correctedSearch=_correctedSearch - In the implementation block
@property (nonatomic,readonly) BOOL hasCorrectedMapLocation; 
@property (nonatomic,retain) GEORPMapLocation * correctedMapLocation;                     //@synthesize correctedMapLocation=_correctedMapLocation - In the implementation block
@property (nonatomic,readonly) BOOL hasComments; 
@property (nonatomic,retain) NSString * comments;                                         //@synthesize comments=_comments - In the implementation block
@property (nonatomic,readonly) BOOL hasPlaceProblem; 
@property (nonatomic,retain) GEORPPlaceProblem * placeProblem;                            //@synthesize placeProblem=_placeProblem - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsProblem; 
@property (nonatomic,retain) GEORPDirectionsProblem * directionsProblem;                  //@synthesize directionsProblem=_directionsProblem - In the implementation block
@property (nonatomic,retain) NSMutableArray * photoWithMetadatas;                         //@synthesize photoWithMetadatas=_photoWithMetadatas - In the implementation block
@property (assign,nonatomic) BOOL hasDelayed; 
@property (assign,nonatomic) BOOL delayed;                                                //@synthesize delayed=_delayed - In the implementation block
@property (nonatomic,retain) NSMutableArray * correctedFlags;                             //@synthesize correctedFlags=_correctedFlags - In the implementation block
+(Class)correctedFieldType;
+(Class)photoWithMetadataType;
+(Class)correctedFlagType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)clearCorrectedFields;
-(void)addCorrectedField:(id)arg1 ;
-(unsigned long long)correctedFieldsCount;
-(id)correctedFieldAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasCorrectedLabel;
-(BOOL)hasCorrectedCoordinate;
-(BOOL)hasCorrectedSearch;
-(BOOL)hasCorrectedMapLocation;
-(BOOL)hasComments;
-(BOOL)hasPlaceProblem;
-(BOOL)hasDirectionsProblem;
-(void)clearPhotoWithMetadatas;
-(void)addPhotoWithMetadata:(id)arg1 ;
-(unsigned long long)photoWithMetadatasCount;
-(id)photoWithMetadataAtIndex:(unsigned long long)arg1 ;
-(void)setDelayed:(BOOL)arg1 ;
-(void)setHasDelayed:(BOOL)arg1 ;
-(BOOL)hasDelayed;
-(void)clearCorrectedFlags;
-(void)addCorrectedFlag:(id)arg1 ;
-(unsigned long long)correctedFlagsCount;
-(id)correctedFlagAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)correctedFields;
-(void)setCorrectedFields:(NSMutableArray *)arg1 ;
-(GEORPCorrectedLabel *)correctedLabel;
-(void)setCorrectedLabel:(GEORPCorrectedLabel *)arg1 ;
-(GEORPCorrectedCoordinate *)correctedCoordinate;
-(void)setCorrectedCoordinate:(GEORPCorrectedCoordinate *)arg1 ;
-(GEORPCorrectedSearch *)correctedSearch;
-(void)setCorrectedSearch:(GEORPCorrectedSearch *)arg1 ;
-(GEORPMapLocation *)correctedMapLocation;
-(void)setCorrectedMapLocation:(GEORPMapLocation *)arg1 ;
-(NSString *)comments;
-(void)setComments:(NSString *)arg1 ;
-(GEORPPlaceProblem *)placeProblem;
-(void)setPlaceProblem:(GEORPPlaceProblem *)arg1 ;
-(GEORPDirectionsProblem *)directionsProblem;
-(void)setDirectionsProblem:(GEORPDirectionsProblem *)arg1 ;
-(NSMutableArray *)photoWithMetadatas;
-(void)setPhotoWithMetadatas:(NSMutableArray *)arg1 ;
-(BOOL)delayed;
-(NSMutableArray *)correctedFlags;
-(void)setCorrectedFlags:(NSMutableArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

