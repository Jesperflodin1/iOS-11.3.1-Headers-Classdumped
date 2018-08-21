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

@interface HDCodableAuthorization : PBCodable <NSCopying> {

	long long _authorizationRequest;
	long long _authorizationStatus;
	double _modificationDate;
	long long _modificationEpoch;
	long long _objectType;
	SCD_Struct_HD18 _has;

}

@property (assign,nonatomic) BOOL hasObjectType; 
@property (assign,nonatomic) long long objectType;                        //@synthesize objectType=_objectType - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationStatus; 
@property (assign,nonatomic) long long authorizationStatus;               //@synthesize authorizationStatus=_authorizationStatus - In the implementation block
@property (assign,nonatomic) BOOL hasAuthorizationRequest; 
@property (assign,nonatomic) long long authorizationRequest;              //@synthesize authorizationRequest=_authorizationRequest - In the implementation block
@property (assign,nonatomic) BOOL hasModificationDate; 
@property (assign,nonatomic) double modificationDate;                     //@synthesize modificationDate=_modificationDate - In the implementation block
@property (assign,nonatomic) BOOL hasModificationEpoch; 
@property (assign,nonatomic) long long modificationEpoch;                 //@synthesize modificationEpoch=_modificationEpoch - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)authorizationStatus;
-(void)setModificationDate:(double)arg1 ;
-(double)modificationDate;
-(long long)objectType;
-(void)setObjectType:(long long)arg1 ;
-(void)setHasObjectType:(BOOL)arg1 ;
-(BOOL)hasObjectType;
-(void)setAuthorizationStatus:(long long)arg1 ;
-(void)setHasAuthorizationStatus:(BOOL)arg1 ;
-(BOOL)hasAuthorizationStatus;
-(void)setAuthorizationRequest:(long long)arg1 ;
-(void)setHasAuthorizationRequest:(BOOL)arg1 ;
-(BOOL)hasAuthorizationRequest;
-(void)setHasModificationDate:(BOOL)arg1 ;
-(BOOL)hasModificationDate;
-(void)setModificationEpoch:(long long)arg1 ;
-(void)setHasModificationEpoch:(BOOL)arg1 ;
-(BOOL)hasModificationEpoch;
-(long long)authorizationRequest;
-(long long)modificationEpoch;
-(long long)_authorizationRequest;
-(long long)_authorizationStatus;
-(id)_modificationDate;
-(long long)_dataTypeCode;
-(void)_setDataTypeCodeWithObjectType:(id)arg1 ;
-(void)_setAuthorizationStatusWithNumber:(id)arg1 ;
-(void)_setAuthorizationRequestWithNumber:(id)arg1 ;
-(void)_setModificationDate:(id)arg1 ;
@end

