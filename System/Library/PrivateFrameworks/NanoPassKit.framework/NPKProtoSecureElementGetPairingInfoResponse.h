/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoPassKit/NanoPassKit-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface NPKProtoSecureElementGetPairingInfoResponse : PBCodable <NSCopying> {

	NSData* _challengeResponse;
	NSData* _cryptogram;
	BOOL _authRandomSet;
	BOOL _pending;
	BOOL _success;
	SCD_Struct_NP4 _has;

}

@property (assign,nonatomic) BOOL hasPending; 
@property (assign,nonatomic) BOOL pending;                             //@synthesize pending=_pending - In the implementation block
@property (assign,nonatomic) BOOL hasSuccess; 
@property (assign,nonatomic) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,readonly) BOOL hasCryptogram; 
@property (nonatomic,retain) NSData * cryptogram;                      //@synthesize cryptogram=_cryptogram - In the implementation block
@property (nonatomic,readonly) BOOL hasChallengeResponse; 
@property (nonatomic,retain) NSData * challengeResponse;               //@synthesize challengeResponse=_challengeResponse - In the implementation block
@property (assign,nonatomic) BOOL hasAuthRandomSet; 
@property (assign,nonatomic) BOOL authRandomSet;                       //@synthesize authRandomSet=_authRandomSet - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(BOOL)pending;
-(void)setChallengeResponse:(NSData *)arg1 ;
-(void)setCryptogram:(NSData *)arg1 ;
-(NSData *)cryptogram;
-(void)setPending:(BOOL)arg1 ;
-(BOOL)success;
-(void)setSuccess:(BOOL)arg1 ;
-(void)setHasSuccess:(BOOL)arg1 ;
-(BOOL)hasSuccess;
-(NSData *)challengeResponse;
-(void)setHasPending:(BOOL)arg1 ;
-(BOOL)hasPending;
-(BOOL)hasCryptogram;
-(BOOL)hasChallengeResponse;
-(void)setAuthRandomSet:(BOOL)arg1 ;
-(void)setHasAuthRandomSet:(BOOL)arg1 ;
-(BOOL)hasAuthRandomSet;
-(BOOL)authRandomSet;
@end

