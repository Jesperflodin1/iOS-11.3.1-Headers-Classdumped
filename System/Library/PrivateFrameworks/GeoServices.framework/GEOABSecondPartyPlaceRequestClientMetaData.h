/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, NSMutableArray, GEOPDABClientDatasetMetadata;

@interface GEOABSecondPartyPlaceRequestClientMetaData : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	NSMutableArray* _clientConfigs;
	GEOPDABClientDatasetMetadata* _clientDatasetMetadata;
	NSMutableArray* _serverAbAssignments;

}

@property (nonatomic,retain) NSMutableArray * serverAbAssignments;                              //@synthesize serverAbAssignments=_serverAbAssignments - In the implementation block
@property (nonatomic,retain) NSMutableArray * clientConfigs;                                    //@synthesize clientConfigs=_clientConfigs - In the implementation block
@property (nonatomic,readonly) BOOL hasClientDatasetMetadata; 
@property (nonatomic,retain) GEOPDABClientDatasetMetadata * clientDatasetMetadata;              //@synthesize clientDatasetMetadata=_clientDatasetMetadata - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)serverAbAssignmentType;
+(Class)clientConfigType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(GEOPDABClientDatasetMetadata *)clientDatasetMetadata;
-(void)clearServerAbAssignments;
-(void)addServerAbAssignment:(id)arg1 ;
-(unsigned long long)serverAbAssignmentsCount;
-(id)serverAbAssignmentAtIndex:(unsigned long long)arg1 ;
-(void)clearClientConfigs;
-(void)addClientConfig:(id)arg1 ;
-(unsigned long long)clientConfigsCount;
-(id)clientConfigAtIndex:(unsigned long long)arg1 ;
-(BOOL)hasClientDatasetMetadata;
-(NSMutableArray *)serverAbAssignments;
-(void)setServerAbAssignments:(NSMutableArray *)arg1 ;
-(NSMutableArray *)clientConfigs;
-(void)setClientConfigs:(NSMutableArray *)arg1 ;
-(void)setClientDatasetMetadata:(GEOPDABClientDatasetMetadata *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end
