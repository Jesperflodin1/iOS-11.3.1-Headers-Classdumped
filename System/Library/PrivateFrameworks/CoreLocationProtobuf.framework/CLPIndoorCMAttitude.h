/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreLocationProtobuf.framework/CoreLocationProtobuf
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreLocationProtobuf/CoreLocationProtobuf-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CLPQuaternion;

@interface CLPIndoorCMAttitude : PBCodable <NSCopying> {

	double _timestamp;
	float _magneticAccuracy;
	int _magneticCalibration;
	CLPQuaternion* _quaternion;
	SCD_Struct_CL6 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) double timestamp;                         //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasQuaternion; 
@property (nonatomic,retain) CLPQuaternion * quaternion;               //@synthesize quaternion=_quaternion - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticAccuracy; 
@property (assign,nonatomic) float magneticAccuracy;                   //@synthesize magneticAccuracy=_magneticAccuracy - In the implementation block
@property (assign,nonatomic) BOOL hasMagneticCalibration; 
@property (assign,nonatomic) int magneticCalibration;                  //@synthesize magneticCalibration=_magneticCalibration - In the implementation block
-(BOOL)hasQuaternion;
-(void)setMagneticAccuracy:(float)arg1 ;
-(void)setHasMagneticAccuracy:(BOOL)arg1 ;
-(BOOL)hasMagneticAccuracy;
-(int)magneticCalibration;
-(void)setMagneticCalibration:(int)arg1 ;
-(void)setHasMagneticCalibration:(BOOL)arg1 ;
-(BOOL)hasMagneticCalibration;
-(id)magneticCalibrationAsString:(int)arg1 ;
-(int)StringAsMagneticCalibration:(id)arg1 ;
-(float)magneticAccuracy;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)timestamp;
-(void)setTimestamp:(double)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(CLPQuaternion *)quaternion;
-(void)setQuaternion:(CLPQuaternion *)arg1 ;
@end

