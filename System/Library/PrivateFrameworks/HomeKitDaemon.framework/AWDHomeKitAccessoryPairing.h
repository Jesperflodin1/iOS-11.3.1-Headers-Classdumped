/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDHomeKitVendorInformation;

@interface AWDHomeKitAccessoryPairing : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	int _authMethod;
	int _certified;
	unsigned _duration;
	int _errorCode;
	int _transportType;
	AWDHomeKitVendorInformation* _vendorDetails;
	BOOL _isAdd;
	BOOL _isAddedViaWAC;
	BOOL _isSecureWAC;
	SCD_Struct_AW11 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                             //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasDuration; 
@property (assign,nonatomic) unsigned duration;                                        //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) int errorCode;                                            //@synthesize errorCode=_errorCode - In the implementation block
@property (assign,nonatomic) BOOL hasIsAdd; 
@property (assign,nonatomic) BOOL isAdd;                                               //@synthesize isAdd=_isAdd - In the implementation block
@property (assign,nonatomic) BOOL hasIsAddedViaWAC; 
@property (assign,nonatomic) BOOL isAddedViaWAC;                                       //@synthesize isAddedViaWAC=_isAddedViaWAC - In the implementation block
@property (assign,nonatomic) BOOL hasTransportType; 
@property (assign,nonatomic) int transportType;                                        //@synthesize transportType=_transportType - In the implementation block
@property (nonatomic,readonly) BOOL hasVendorDetails; 
@property (nonatomic,retain) AWDHomeKitVendorInformation * vendorDetails;              //@synthesize vendorDetails=_vendorDetails - In the implementation block
@property (assign,nonatomic) BOOL hasCertified; 
@property (assign,nonatomic) int certified;                                            //@synthesize certified=_certified - In the implementation block
@property (assign,nonatomic) BOOL hasIsSecureWAC; 
@property (assign,nonatomic) BOOL isSecureWAC;                                         //@synthesize isSecureWAC=_isSecureWAC - In the implementation block
@property (assign,nonatomic) BOOL hasAuthMethod; 
@property (assign,nonatomic) int authMethod;                                           //@synthesize authMethod=_authMethod - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(int)transportType;
-(void)setTransportType:(int)arg1 ;
-(void)setHasTransportType:(BOOL)arg1 ;
-(BOOL)hasTransportType;
-(id)transportTypeAsString:(int)arg1 ;
-(int)StringAsTransportType:(id)arg1 ;
-(BOOL)hasDuration;
-(void)setHasDuration:(BOOL)arg1 ;
-(void)setErrorCode:(int)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(int)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(unsigned)duration;
-(void)setDuration:(unsigned)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setVendorDetails:(AWDHomeKitVendorInformation *)arg1 ;
-(BOOL)hasVendorDetails;
-(AWDHomeKitVendorInformation *)vendorDetails;
-(void)setAuthMethod:(int)arg1 ;
-(int)authMethod;
-(void)setIsAdd:(BOOL)arg1 ;
-(void)setHasIsAdd:(BOOL)arg1 ;
-(BOOL)hasIsAdd;
-(void)setIsAddedViaWAC:(BOOL)arg1 ;
-(void)setHasIsAddedViaWAC:(BOOL)arg1 ;
-(BOOL)hasIsAddedViaWAC;
-(int)certified;
-(void)setCertified:(int)arg1 ;
-(void)setHasCertified:(BOOL)arg1 ;
-(BOOL)hasCertified;
-(id)certifiedAsString:(int)arg1 ;
-(int)StringAsCertified:(id)arg1 ;
-(void)setIsSecureWAC:(BOOL)arg1 ;
-(void)setHasIsSecureWAC:(BOOL)arg1 ;
-(BOOL)hasIsSecureWAC;
-(void)setHasAuthMethod:(BOOL)arg1 ;
-(BOOL)hasAuthMethod;
-(id)authMethodAsString:(int)arg1 ;
-(int)StringAsAuthMethod:(id)arg1 ;
-(BOOL)isAdd;
-(BOOL)isAddedViaWAC;
-(BOOL)isSecureWAC;
@end
