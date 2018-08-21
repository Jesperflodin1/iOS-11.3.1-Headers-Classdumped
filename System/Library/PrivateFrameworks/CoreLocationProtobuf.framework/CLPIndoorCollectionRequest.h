/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBRequest.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableArray, CLPMeta;

@interface CLPIndoorCollectionRequest : PBRequest <NSCopying> {

	NSMutableArray* _indoorCMAttitudes;
	NSMutableArray* _indoorCMPedometers;
	NSMutableArray* _indoorLocations;
	NSMutableArray* _indoorMotionActivitys;
	NSMutableArray* _indoorPressures;
	NSMutableArray* _indoorWifis;
	CLPMeta* _meta;

}

@property (nonatomic,retain) CLPMeta * meta;                                      //@synthesize meta=_meta - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorWifis;                        //@synthesize indoorWifis=_indoorWifis - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorLocations;                    //@synthesize indoorLocations=_indoorLocations - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorCMAttitudes;                  //@synthesize indoorCMAttitudes=_indoorCMAttitudes - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorCMPedometers;                 //@synthesize indoorCMPedometers=_indoorCMPedometers - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorMotionActivitys;              //@synthesize indoorMotionActivitys=_indoorMotionActivitys - In the implementation block
@property (nonatomic,retain) NSMutableArray * indoorPressures;                    //@synthesize indoorPressures=_indoorPressures - In the implementation block
+(Class)indoorWifisType;
+(Class)indoorLocationsType;
+(Class)indoorCMAttitudeType;
+(Class)indoorCMPedometerType;
+(Class)indoorMotionActivityType;
+(Class)indoorPressureType;
-(void)setMeta:(CLPMeta *)arg1 ;
-(CLPMeta *)meta;
-(void)addIndoorWifis:(id)arg1 ;
-(void)addIndoorLocations:(id)arg1 ;
-(void)addIndoorCMAttitude:(id)arg1 ;
-(void)addIndoorCMPedometer:(id)arg1 ;
-(void)addIndoorMotionActivity:(id)arg1 ;
-(void)addIndoorPressure:(id)arg1 ;
-(unsigned long long)indoorWifisCount;
-(void)clearIndoorWifis;
-(id)indoorWifisAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorLocationsCount;
-(void)clearIndoorLocations;
-(id)indoorLocationsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorCMAttitudesCount;
-(void)clearIndoorCMAttitudes;
-(id)indoorCMAttitudeAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorCMPedometersCount;
-(void)clearIndoorCMPedometers;
-(id)indoorCMPedometerAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorMotionActivitysCount;
-(void)clearIndoorMotionActivitys;
-(id)indoorMotionActivityAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)indoorPressuresCount;
-(void)clearIndoorPressures;
-(id)indoorPressureAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)indoorWifis;
-(void)setIndoorWifis:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorLocations;
-(void)setIndoorLocations:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorCMAttitudes;
-(void)setIndoorCMAttitudes:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorCMPedometers;
-(void)setIndoorCMPedometers:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorMotionActivitys;
-(void)setIndoorMotionActivitys:(NSMutableArray *)arg1 ;
-(NSMutableArray *)indoorPressures;
-(void)setIndoorPressures:(NSMutableArray *)arg1 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(unsigned)requestTypeCode;
-(Class)responseClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

