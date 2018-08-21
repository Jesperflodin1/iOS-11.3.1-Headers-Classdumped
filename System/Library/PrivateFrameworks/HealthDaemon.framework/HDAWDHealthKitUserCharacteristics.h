/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface HDAWDHealthKitUserCharacteristics : PBCodable <NSCopying> {

	long long _ageYears;
	long long _biologicalSex;
	long long _heightCm;
	long long _weightKg;
	SCD_Struct_HD19 _has;

}

@property (assign,nonatomic) BOOL hasWeightKg; 
@property (assign,nonatomic) long long weightKg;                   //@synthesize weightKg=_weightKg - In the implementation block
@property (assign,nonatomic) BOOL hasHeightCm; 
@property (assign,nonatomic) long long heightCm;                   //@synthesize heightCm=_heightCm - In the implementation block
@property (assign,nonatomic) BOOL hasBiologicalSex; 
@property (assign,nonatomic) long long biologicalSex;              //@synthesize biologicalSex=_biologicalSex - In the implementation block
@property (assign,nonatomic) BOOL hasAgeYears; 
@property (assign,nonatomic) long long ageYears;                   //@synthesize ageYears=_ageYears - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(long long)biologicalSex;
-(void)setBiologicalSex:(long long)arg1 ;
-(void)setHasBiologicalSex:(BOOL)arg1 ;
-(BOOL)hasBiologicalSex;
-(void)setWeightKg:(long long)arg1 ;
-(void)setHasWeightKg:(BOOL)arg1 ;
-(BOOL)hasWeightKg;
-(void)setHeightCm:(long long)arg1 ;
-(void)setHasHeightCm:(BOOL)arg1 ;
-(BOOL)hasHeightCm;
-(void)setAgeYears:(long long)arg1 ;
-(void)setHasAgeYears:(BOOL)arg1 ;
-(BOOL)hasAgeYears;
-(long long)weightKg;
-(long long)heightCm;
-(long long)ageYears;
@end

