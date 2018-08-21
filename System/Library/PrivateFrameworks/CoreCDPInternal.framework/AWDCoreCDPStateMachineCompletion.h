/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreCDPInternal/CoreCDPInternal-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface AWDCoreCDPStateMachineCompletion : PBCodable <NSCopying> {

	long long _errorCode;
	unsigned long long _timestamp;
	NSString* _errorDomain;
	BOOL _cloudDataProtectionEnabled;
	BOOL _shouldCompleteSignIn;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) BOOL hasShouldCompleteSignIn; 
@property (assign,nonatomic) BOOL shouldCompleteSignIn;                       //@synthesize shouldCompleteSignIn=_shouldCompleteSignIn - In the implementation block
@property (assign,nonatomic) BOOL hasCloudDataProtectionEnabled; 
@property (assign,nonatomic) BOOL cloudDataProtectionEnabled;                 //@synthesize cloudDataProtectionEnabled=_cloudDataProtectionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL hasErrorDomain; 
@property (nonatomic,retain) NSString * errorDomain;                          //@synthesize errorDomain=_errorDomain - In the implementation block
@property (assign,nonatomic) BOOL hasErrorCode; 
@property (assign,nonatomic) long long errorCode;                             //@synthesize errorCode=_errorCode - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasErrorDomain;
-(void)setErrorCode:(long long)arg1 ;
-(void)setHasErrorCode:(BOOL)arg1 ;
-(BOOL)hasErrorCode;
-(NSString *)errorDomain;
-(void)setErrorDomain:(NSString *)arg1 ;
-(long long)errorCode;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setShouldCompleteSignIn:(BOOL)arg1 ;
-(void)setHasShouldCompleteSignIn:(BOOL)arg1 ;
-(BOOL)hasShouldCompleteSignIn;
-(void)setCloudDataProtectionEnabled:(BOOL)arg1 ;
-(void)setHasCloudDataProtectionEnabled:(BOOL)arg1 ;
-(BOOL)hasCloudDataProtectionEnabled;
-(BOOL)shouldCompleteSignIn;
-(BOOL)cloudDataProtectionEnabled;
@end

