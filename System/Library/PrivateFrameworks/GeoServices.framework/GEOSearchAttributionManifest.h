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

@class NSMutableArray, NSString;

@interface GEOSearchAttributionManifest : PBCodable <NSCopying> {

	double _timestamp;
	NSMutableArray* _actionComponentMapEntries;
	NSMutableArray* _searchAttributionSources;
	NSString* _sourceURL;
	SCD_Struct_GE1 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp; 
@property (nonatomic,readonly) BOOL hasSourceURL; 
@property (nonatomic,retain) NSString * sourceURL; 
@property (nonatomic,retain) NSMutableArray * searchAttributionSources;               //@synthesize searchAttributionSources=_searchAttributionSources - In the implementation block
@property (nonatomic,retain) NSMutableArray * actionComponentMapEntries;              //@synthesize actionComponentMapEntries=_actionComponentMapEntries - In the implementation block
+(Class)searchAttributionSourcesType;
+(Class)actionComponentMapEntriesType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)clearSearchAttributionSources;
-(void)addSearchAttributionSources:(id)arg1 ;
-(unsigned long long)searchAttributionSourcesCount;
-(id)searchAttributionSourcesAtIndex:(unsigned long long)arg1 ;
-(void)clearActionComponentMapEntries;
-(void)addActionComponentMapEntries:(id)arg1 ;
-(unsigned long long)actionComponentMapEntriesCount;
-(id)actionComponentMapEntriesAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)searchAttributionSources;
-(void)setSearchAttributionSources:(NSMutableArray *)arg1 ;
-(NSMutableArray *)actionComponentMapEntries;
-(void)setActionComponentMapEntries:(NSMutableArray *)arg1 ;
-(void)setSourceURL:(NSString *)arg1 ;
-(BOOL)hasSourceURL;
-(NSString *)sourceURL;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

