/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:36 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBUnknownFields, _INPBRideStatus;

@interface _INPBGetRideStatusIntentResponse : PBCodable <NSCopying> {

	PBUnknownFields* _unknownFields;
	_INPBRideStatus* _rideStatus;

}

@property (nonatomic,readonly) BOOL hasRideStatus; 
@property (nonatomic,retain) _INPBRideStatus * rideStatus;                   //@synthesize rideStatus=_rideStatus - In the implementation block
@property (nonatomic,readonly) PBUnknownFields * unknownFields; 
+(id)options;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(PBUnknownFields *)unknownFields;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setRideStatus:(_INPBRideStatus *)arg1 ;
-(BOOL)hasRideStatus;
-(_INPBRideStatus *)rideStatus;
@end
