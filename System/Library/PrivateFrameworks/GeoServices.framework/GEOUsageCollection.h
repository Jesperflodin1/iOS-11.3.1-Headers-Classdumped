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

@class NSString;

@interface GEOUsageCollection : PBCodable <NSCopying> {

	GEOSessionID _sessionID;
	long long _requestErrorCode;
	GEOTileUsage* _tileUsages;
	unsigned long long _tileUsagesCount;
	unsigned long long _tileUsagesSpace;
	double _timestamp;
	int _cellWifi;
	NSString* _countryCode;
	int _geoService;
	NSString* _hwMachine;
	int _placeRequestType;
	int _requestDataSize;
	NSString* _requestErrorDescription;
	NSString* _requestErrorDomain;
	int _responseDataSize;
	int _responseTime;
	BOOL _sessionIDIsPersistent;
	SCD_Struct_GE107 _has;

}

@property (assign,nonatomic) BOOL hasGeoService; 
@property (assign,nonatomic) int geoService;                                    //@synthesize geoService=_geoService - In the implementation block
@property (assign,nonatomic) BOOL hasRequestDataSize; 
@property (assign,nonatomic) int requestDataSize;                               //@synthesize requestDataSize=_requestDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseDataSize; 
@property (assign,nonatomic) int responseDataSize;                              //@synthesize responseDataSize=_responseDataSize - In the implementation block
@property (assign,nonatomic) BOOL hasResponseTime; 
@property (assign,nonatomic) int responseTime;                                  //@synthesize responseTime=_responseTime - In the implementation block
@property (assign,nonatomic) BOOL hasCellWifi; 
@property (assign,nonatomic) int cellWifi;                                      //@synthesize cellWifi=_cellWifi - In the implementation block
@property (nonatomic,readonly) BOOL hasCountryCode; 
@property (nonatomic,retain) NSString * countryCode;                            //@synthesize countryCode=_countryCode - In the implementation block
@property (assign,nonatomic) BOOL hasSessionID; 
@property (assign,nonatomic) GEOSessionID sessionID;                            //@synthesize sessionID=_sessionID - In the implementation block
@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                                  //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) unsigned long long tileUsagesCount; 
@property (nonatomic,readonly) GEOTileUsage* tileUsages; 
@property (nonatomic,readonly) BOOL hasHwMachine; 
@property (nonatomic,retain) NSString * hwMachine;                              //@synthesize hwMachine=_hwMachine - In the implementation block
@property (assign,nonatomic) BOOL hasSessionIDIsPersistent; 
@property (assign,nonatomic) BOOL sessionIDIsPersistent;                        //@synthesize sessionIDIsPersistent=_sessionIDIsPersistent - In the implementation block
@property (assign,nonatomic) BOOL hasPlaceRequestType; 
@property (assign,nonatomic) int placeRequestType;                              //@synthesize placeRequestType=_placeRequestType - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDomain; 
@property (nonatomic,retain) NSString * requestErrorDomain;                     //@synthesize requestErrorDomain=_requestErrorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasRequestErrorCode; 
@property (assign,nonatomic) long long requestErrorCode;                        //@synthesize requestErrorCode=_requestErrorCode - In the implementation block
@property (nonatomic,readonly) BOOL hasRequestErrorDescription; 
@property (nonatomic,retain) NSString * requestErrorDescription;                //@synthesize requestErrorDescription=_requestErrorDescription - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setSessionID:(GEOSessionID)arg1 ;
-(void)setHasSessionID:(BOOL)arg1 ;
-(BOOL)hasSessionID;
-(GEOSessionID)sessionID;
-(int)responseTime;
-(void)setResponseTime:(int)arg1 ;
-(void)setHasResponseTime:(BOOL)arg1 ;
-(BOOL)hasResponseTime;
-(NSString *)countryCode;
-(void)setRequestErrorCode:(long long)arg1 ;
-(void)setRequestErrorDomain:(NSString *)arg1 ;
-(void)setResponseDataSize:(int)arg1 ;
-(void)setRequestDataSize:(int)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setCountryCode:(NSString *)arg1 ;
-(BOOL)hasCountryCode;
-(void)setHasRequestDataSize:(BOOL)arg1 ;
-(BOOL)hasRequestDataSize;
-(void)setHasResponseDataSize:(BOOL)arg1 ;
-(BOOL)hasResponseDataSize;
-(int)requestDataSize;
-(int)responseDataSize;
-(int)geoService;
-(void)setGeoService:(int)arg1 ;
-(void)setHasGeoService:(BOOL)arg1 ;
-(BOOL)hasGeoService;
-(id)geoServiceAsString:(int)arg1 ;
-(int)StringAsGeoService:(id)arg1 ;
-(int)cellWifi;
-(void)setCellWifi:(int)arg1 ;
-(void)setHasCellWifi:(BOOL)arg1 ;
-(BOOL)hasCellWifi;
-(id)cellWifiAsString:(int)arg1 ;
-(int)StringAsCellWifi:(id)arg1 ;
-(unsigned long long)tileUsagesCount;
-(GEOTileUsage*)tileUsages;
-(void)clearTileUsages;
-(void)addTileUsage:(GEOTileUsage)arg1 ;
-(GEOTileUsage)tileUsageAtIndex:(unsigned long long)arg1 ;
-(void)setTileUsages:(GEOTileUsage*)arg1 count:(unsigned long long)arg2 ;
-(BOOL)hasHwMachine;
-(BOOL)sessionIDIsPersistent;
-(void)setSessionIDIsPersistent:(BOOL)arg1 ;
-(void)setHasSessionIDIsPersistent:(BOOL)arg1 ;
-(BOOL)hasSessionIDIsPersistent;
-(int)placeRequestType;
-(void)setPlaceRequestType:(int)arg1 ;
-(void)setHasPlaceRequestType:(BOOL)arg1 ;
-(BOOL)hasPlaceRequestType;
-(id)placeRequestTypeAsString:(int)arg1 ;
-(int)StringAsPlaceRequestType:(id)arg1 ;
-(BOOL)hasRequestErrorDomain;
-(void)setHasRequestErrorCode:(BOOL)arg1 ;
-(BOOL)hasRequestErrorCode;
-(BOOL)hasRequestErrorDescription;
-(NSString *)hwMachine;
-(void)setHwMachine:(NSString *)arg1 ;
-(NSString *)requestErrorDomain;
-(long long)requestErrorCode;
-(NSString *)requestErrorDescription;
-(void)setRequestErrorDescription:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

