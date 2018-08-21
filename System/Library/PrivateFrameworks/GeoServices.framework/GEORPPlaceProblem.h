/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface GEORPPlaceProblem : PBCodable <NSCopying> {

	unsigned _componentIndex;
	unsigned _componentValueIndex;
	unsigned _problematicDepartureSequenceIndex;
	SCD_Struct_GE22 _has;

}

@property (assign,nonatomic) BOOL hasComponentIndex; 
@property (assign,nonatomic) unsigned componentIndex;                                 //@synthesize componentIndex=_componentIndex - In the implementation block
@property (assign,nonatomic) BOOL hasComponentValueIndex; 
@property (assign,nonatomic) unsigned componentValueIndex;                            //@synthesize componentValueIndex=_componentValueIndex - In the implementation block
@property (assign,nonatomic) BOOL hasProblematicDepartureSequenceIndex; 
@property (assign,nonatomic) unsigned problematicDepartureSequenceIndex;              //@synthesize problematicDepartureSequenceIndex=_problematicDepartureSequenceIndex - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setComponentIndex:(unsigned)arg1 ;
-(void)setHasComponentIndex:(BOOL)arg1 ;
-(BOOL)hasComponentIndex;
-(void)setComponentValueIndex:(unsigned)arg1 ;
-(void)setHasComponentValueIndex:(BOOL)arg1 ;
-(BOOL)hasComponentValueIndex;
-(void)setProblematicDepartureSequenceIndex:(unsigned)arg1 ;
-(void)setHasProblematicDepartureSequenceIndex:(BOOL)arg1 ;
-(BOOL)hasProblematicDepartureSequenceIndex;
-(unsigned)componentIndex;
-(unsigned)componentValueIndex;
-(unsigned)problematicDepartureSequenceIndex;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
@end

