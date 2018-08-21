/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitStandHourEvent : PBCodable <NSCopying> {

	long long _standHourTimestamp;
	unsigned long long _timestamp;
	BOOL _didStand;
	SCD_Struct_HD48 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;              //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasStandHourTimestamp; 
@property (assign,nonatomic) long long standHourTimestamp;              //@synthesize standHourTimestamp=_standHourTimestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDidStand; 
@property (assign,nonatomic) BOOL didStand;                             //@synthesize didStand=_didStand - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setStandHourTimestamp:(long long)arg1 ;
-(void)setHasStandHourTimestamp:(BOOL)arg1 ;
-(BOOL)hasStandHourTimestamp;
-(void)setDidStand:(BOOL)arg1 ;
-(void)setHasDidStand:(BOOL)arg1 ;
-(BOOL)hasDidStand;
-(long long)standHourTimestamp;
-(BOOL)didStand;
@end

