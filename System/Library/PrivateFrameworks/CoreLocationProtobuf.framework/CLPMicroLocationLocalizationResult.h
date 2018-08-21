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

@class NSString;

@interface CLPMicroLocationLocalizationResult : PBCodable <NSCopying> {

	double _probability;
	NSString* _domain;
	NSString* _identifier;
	SCD_Struct_CL7 _has;

}

@property (nonatomic,readonly) BOOL hasIdentifier; 
@property (nonatomic,retain) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic) BOOL hasProbability; 
@property (assign,nonatomic) double probability;                 //@synthesize probability=_probability - In the implementation block
@property (nonatomic,readonly) BOOL hasDomain; 
@property (nonatomic,retain) NSString * domain;                  //@synthesize domain=_domain - In the implementation block
-(void)setHasProbability:(BOOL)arg1 ;
-(BOOL)hasProbability;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)hasIdentifier;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)domain;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setDomain:(NSString *)arg1 ;
-(BOOL)hasDomain;
-(double)probability;
-(void)setProbability:(double)arg1 ;
@end

