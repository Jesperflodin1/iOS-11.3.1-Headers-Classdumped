/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SearchFoundation.framework/SearchFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SearchFoundation/SearchFoundation-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/_SFPBMapRegion.h>
@class NSData;


@protocol _SFPBMapRegion <NSObject>
@property (assign,nonatomic) double southLat; 
@property (nonatomic,readonly) BOOL hasSouthLat; 
@property (assign,nonatomic) double westLng; 
@property (nonatomic,readonly) BOOL hasWestLng; 
@property (assign,nonatomic) double northLat; 
@property (nonatomic,readonly) BOOL hasNorthLat; 
@property (assign,nonatomic) double eastLng; 
@property (nonatomic,readonly) BOOL hasEastLng; 
@property (nonatomic,readonly) NSData * jsonData; 
@required
-(void)setSouthLat:(double)arg1;
-(double)southLat;
-(double)northLat;
-(double)westLng;
-(double)eastLng;
-(void)setWestLng:(double)arg1;
-(void)setNorthLat:(double)arg1;
-(void)setEastLng:(double)arg1;
-(BOOL)hasSouthLat;
-(BOOL)hasWestLng;
-(BOOL)hasNorthLat;
-(BOOL)hasEastLng;
-(id)initWithDictionary:(id)arg1;
-(id)initWithJSON:(id)arg1;
-(NSData *)jsonData;

@end

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSString;

@interface _SFPBMapRegion : PBCodable <_SFPBMapRegion, NSSecureCoding> {

	SCD_Struct_SF4 _has;
	double _southLat;
	double _westLng;
	double _northLat;
	double _eastLng;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) double southLat;                       //@synthesize southLat=_southLat - In the implementation block
@property (nonatomic,readonly) BOOL hasSouthLat; 
@property (assign,nonatomic) double westLng;                        //@synthesize westLng=_westLng - In the implementation block
@property (nonatomic,readonly) BOOL hasWestLng; 
@property (assign,nonatomic) double northLat;                       //@synthesize northLat=_northLat - In the implementation block
@property (nonatomic,readonly) BOOL hasNorthLat; 
@property (assign,nonatomic) double eastLng;                        //@synthesize eastLng=_eastLng - In the implementation block
@property (nonatomic,readonly) BOOL hasEastLng; 
@property (nonatomic,readonly) NSData * jsonData; 
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)setSouthLat:(double)arg1 ;
-(double)southLat;
-(double)northLat;
-(double)westLng;
-(double)eastLng;
-(void)setWestLng:(double)arg1 ;
-(void)setNorthLat:(double)arg1 ;
-(void)setEastLng:(double)arg1 ;
-(BOOL)hasSouthLat;
-(BOOL)hasWestLng;
-(BOOL)hasNorthLat;
-(BOOL)hasEastLng;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(id)initWithFacade:(id)arg1 ;
-(NSData *)jsonData;
@end

