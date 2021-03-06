/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Sharing/Sharing-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDSharingProximityPairingTriggered : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _deviceRole;
	int _deviceSide;
	NSString* _model;
	int _primaryLocation;
	int _rssi;
	int _secondaryLocation;
	NSString* _sessionUUID;
	int _smoothedRSSI;
	BOOL _outOfBoxMode;
	SCD_Struct_AW17 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasSessionUUID; 
@property (nonatomic,retain) NSString * sessionUUID;                    //@synthesize sessionUUID=_sessionUUID - In the implementation block
@property (assign,nonatomic) BOOL hasRssi; 
@property (assign,nonatomic) int rssi;                                  //@synthesize rssi=_rssi - In the implementation block
@property (assign,nonatomic) BOOL hasSmoothedRSSI; 
@property (assign,nonatomic) int smoothedRSSI;                          //@synthesize smoothedRSSI=_smoothedRSSI - In the implementation block
@property (nonatomic,readonly) BOOL hasModel; 
@property (nonatomic,retain) NSString * model;                          //@synthesize model=_model - In the implementation block
@property (assign,nonatomic) BOOL hasPrimaryLocation; 
@property (assign,nonatomic) int primaryLocation;                       //@synthesize primaryLocation=_primaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasSecondaryLocation; 
@property (assign,nonatomic) int secondaryLocation;                     //@synthesize secondaryLocation=_secondaryLocation - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceSide; 
@property (assign,nonatomic) int deviceSide;                            //@synthesize deviceSide=_deviceSide - In the implementation block
@property (assign,nonatomic) BOOL hasDeviceRole; 
@property (assign,nonatomic) int deviceRole;                            //@synthesize deviceRole=_deviceRole - In the implementation block
@property (assign,nonatomic) BOOL hasOutOfBoxMode; 
@property (assign,nonatomic) BOOL outOfBoxMode;                         //@synthesize outOfBoxMode=_outOfBoxMode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(void)setRssi:(int)arg1 ;
-(void)setHasRssi:(BOOL)arg1 ;
-(BOOL)hasRssi;
-(int)rssi;
-(BOOL)hasModel;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)model;
-(id)dictionaryRepresentation;
-(void)setModel:(NSString *)arg1 ;
-(void)setSmoothedRSSI:(int)arg1 ;
-(void)setHasSmoothedRSSI:(BOOL)arg1 ;
-(BOOL)hasSmoothedRSSI;
-(int)smoothedRSSI;
-(void)setPrimaryLocation:(int)arg1 ;
-(void)setHasPrimaryLocation:(BOOL)arg1 ;
-(BOOL)hasPrimaryLocation;
-(void)setSecondaryLocation:(int)arg1 ;
-(void)setHasSecondaryLocation:(BOOL)arg1 ;
-(BOOL)hasSecondaryLocation;
-(void)setDeviceSide:(int)arg1 ;
-(void)setHasDeviceSide:(BOOL)arg1 ;
-(BOOL)hasDeviceSide;
-(void)setHasDeviceRole:(BOOL)arg1 ;
-(BOOL)hasDeviceRole;
-(void)setOutOfBoxMode:(BOOL)arg1 ;
-(void)setHasOutOfBoxMode:(BOOL)arg1 ;
-(BOOL)hasOutOfBoxMode;
-(int)primaryLocation;
-(int)secondaryLocation;
-(int)deviceSide;
-(BOOL)outOfBoxMode;
-(int)deviceRole;
-(void)setDeviceRole:(int)arg1 ;
-(NSString *)sessionUUID;
-(void)setSessionUUID:(NSString *)arg1 ;
-(BOOL)hasSessionUUID;
@end

