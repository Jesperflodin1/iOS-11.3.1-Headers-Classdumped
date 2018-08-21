/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, GEOPDAttribution, GEOPDSource, NSMutableArray;

@interface GEOPDComponent : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	double _timestampFirstSeen;
	GEOPDAttribution* _attribution;
	int _cacheControl;
	GEOPDSource* _source;
	int _startIndex;
	int _status;
	unsigned _ttl;
	int _type;
	NSMutableArray* _values;
	int _valuesAvailable;
	unsigned _version;
	NSMutableArray* _versionDomains;
	SCD_Struct_GE60 _has;

}

@property (assign,nonatomic) BOOL hasTimestampFirstSeen; 
@property (assign,nonatomic) double timestampFirstSeen; 
@property (assign,nonatomic) BOOL hasType; 
@property (assign,nonatomic) int type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL hasStatus; 
@property (assign,nonatomic) int status;                                     //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) BOOL hasTtl; 
@property (assign,nonatomic) unsigned ttl;                                   //@synthesize ttl=_ttl - In the implementation block
@property (assign,nonatomic) BOOL hasStartIndex; 
@property (assign,nonatomic) int startIndex;                                 //@synthesize startIndex=_startIndex - In the implementation block
@property (assign,nonatomic) BOOL hasValuesAvailable; 
@property (assign,nonatomic) int valuesAvailable;                            //@synthesize valuesAvailable=_valuesAvailable - In the implementation block
@property (nonatomic,readonly) BOOL hasAttribution; 
@property (nonatomic,retain) GEOPDAttribution * attribution;                 //@synthesize attribution=_attribution - In the implementation block
@property (nonatomic,retain) NSMutableArray * values;                        //@synthesize values=_values - In the implementation block
@property (nonatomic,retain) NSMutableArray * versionDomains;                //@synthesize versionDomains=_versionDomains - In the implementation block
@property (assign,nonatomic) BOOL hasVersion; 
@property (assign,nonatomic) unsigned version;                               //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) BOOL hasSource; 
@property (nonatomic,retain) GEOPDSource * source;                           //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL hasCacheControl; 
@property (assign,nonatomic) int cacheControl;                               //@synthesize cacheControl=_cacheControl - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(Class)versionDomainType;
+(Class)valueType;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(void)setHasType:(BOOL)arg1 ;
-(BOOL)hasType;
-(id)typeAsString:(int)arg1 ;
-(int)StringAsType:(id)arg1 ;
-(id)statusAsString:(int)arg1 ;
-(int)StringAsStatus:(id)arg1 ;
-(int)cacheControl;
-(void)setCacheControl:(int)arg1 ;
-(void)setHasCacheControl:(BOOL)arg1 ;
-(BOOL)hasCacheControl;
-(id)cacheControlAsString:(int)arg1 ;
-(int)StringAsCacheControl:(id)arg1 ;
-(void)setHasStatus:(BOOL)arg1 ;
-(BOOL)hasStatus;
-(BOOL)hasVersion;
-(int)startIndex;
-(BOOL)hasStartIndex;
-(BOOL)hasSource;
-(void)setHasVersion:(BOOL)arg1 ;
-(BOOL)hasAttribution;
-(GEOPDAttribution *)attribution;
-(BOOL)hasTimestampFirstSeen;
-(BOOL)hasTtl;
-(double)timestampFirstSeen;
-(unsigned)ttl;
-(BOOL)statusCodeIsValid;
-(unsigned long long)valuesCount;
-(void)setTimestampFirstSeen:(double)arg1 ;
-(NSMutableArray *)versionDomains;
-(void)clearVersionDomains;
-(void)addVersionDomain:(id)arg1 ;
-(unsigned long long)versionDomainsCount;
-(id)versionDomainAtIndex:(unsigned long long)arg1 ;
-(void)setVersionDomains:(NSMutableArray *)arg1 ;
-(void)setTtl:(unsigned)arg1 ;
-(void)setHasTtl:(BOOL)arg1 ;
-(void)setHasStartIndex:(BOOL)arg1 ;
-(void)setValuesAvailable:(int)arg1 ;
-(void)setHasValuesAvailable:(BOOL)arg1 ;
-(BOOL)hasValuesAvailable;
-(int)valuesAvailable;
-(void)setAttribution:(GEOPDAttribution *)arg1 ;
-(void)setHasTimestampFirstSeen:(BOOL)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setSource:(GEOPDSource *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSMutableArray *)values;
-(void)setValues:(NSMutableArray *)arg1 ;
-(void)setStatus:(int)arg1 ;
-(int)status;
-(id)dictionaryRepresentation;
-(GEOPDSource *)source;
-(void)addValue:(id)arg1 ;
-(void)clearValues;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned)version;
-(id)valueAtIndex:(unsigned long long)arg1 ;
-(void)setStartIndex:(int)arg1 ;
@end

