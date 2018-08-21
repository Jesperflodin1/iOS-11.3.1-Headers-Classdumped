/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsTransport/NewsTransport-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface NTPBRelativePersonalizedSectionPresenceConfig : PBCodable <NSCopying> {

	double _scalar;
	SCD_Struct_NT6 _has;

}

@property (assign,nonatomic) BOOL hasScalar; 
@property (assign,nonatomic) double scalar;               //@synthesize scalar=_scalar - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setHasScalar:(BOOL)arg1 ;
-(BOOL)hasScalar;
-(void)setScalar:(double)arg1 ;
-(double)scalar;
@end

