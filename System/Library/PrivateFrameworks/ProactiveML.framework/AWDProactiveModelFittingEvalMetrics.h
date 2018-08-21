/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface AWDProactiveModelFittingEvalMetrics : PBCodable <NSCopying> {

	SCD_Struct_AW7* _negativeScores;
	SCD_Struct_AW7* _positiveScores;
	unsigned long long _falseNegatives;
	unsigned long long _falsePositives;
	unsigned long long _trueNegatives;
	unsigned long long _truePositives;
	float _f1;
	float _rmse;
	float _secsToExecute;
	SCD_Struct_AW9 _has;

}

@property (assign,nonatomic) BOOL hasRmse; 
@property (assign,nonatomic) float rmse;                                            //@synthesize rmse=_rmse - In the implementation block
@property (assign,nonatomic) BOOL hasF1; 
@property (assign,nonatomic) float f1;                                              //@synthesize f1=_f1 - In the implementation block
@property (assign,nonatomic) BOOL hasTruePositives; 
@property (assign,nonatomic) unsigned long long truePositives;                      //@synthesize truePositives=_truePositives - In the implementation block
@property (assign,nonatomic) BOOL hasTrueNegatives; 
@property (assign,nonatomic) unsigned long long trueNegatives;                      //@synthesize trueNegatives=_trueNegatives - In the implementation block
@property (assign,nonatomic) BOOL hasFalsePositives; 
@property (assign,nonatomic) unsigned long long falsePositives;                     //@synthesize falsePositives=_falsePositives - In the implementation block
@property (assign,nonatomic) BOOL hasFalseNegatives; 
@property (assign,nonatomic) unsigned long long falseNegatives;                     //@synthesize falseNegatives=_falseNegatives - In the implementation block
@property (nonatomic,readonly) unsigned long long positiveScoresCount; 
@property (nonatomic,readonly) float* positiveScores; 
@property (nonatomic,readonly) unsigned long long negativeScoresCount; 
@property (nonatomic,readonly) float* negativeScores; 
@property (assign,nonatomic) BOOL hasSecsToExecute; 
@property (assign,nonatomic) float secsToExecute;                                   //@synthesize secsToExecute=_secsToExecute - In the implementation block
+(id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 truePositives:(unsigned long long)arg3 trueNegatives:(unsigned long long)arg4 falsePositives:(unsigned long long)arg5 falseNegatives:(unsigned long long)arg6 ;
+(id)evalMetricsWithRmse:(float)arg1 f1:(float)arg2 ;
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(id)toDictionary;
-(void)addPositiveScores:(float)arg1 ;
-(void)addNegativeScores:(float)arg1 ;
-(void)setRmse:(float)arg1 ;
-(void)setF1:(float)arg1 ;
-(void)setTruePositives:(unsigned long long)arg1 ;
-(void)setTrueNegatives:(unsigned long long)arg1 ;
-(void)setFalsePositives:(unsigned long long)arg1 ;
-(void)setFalseNegatives:(unsigned long long)arg1 ;
-(unsigned long long)positiveScoresCount;
-(void)clearPositiveScores;
-(float)positiveScoresAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)negativeScoresCount;
-(void)clearNegativeScores;
-(float)negativeScoresAtIndex:(unsigned long long)arg1 ;
-(void)setHasRmse:(BOOL)arg1 ;
-(BOOL)hasRmse;
-(void)setHasF1:(BOOL)arg1 ;
-(BOOL)hasF1;
-(void)setHasTruePositives:(BOOL)arg1 ;
-(BOOL)hasTruePositives;
-(void)setHasTrueNegatives:(BOOL)arg1 ;
-(BOOL)hasTrueNegatives;
-(void)setHasFalsePositives:(BOOL)arg1 ;
-(BOOL)hasFalsePositives;
-(void)setHasFalseNegatives:(BOOL)arg1 ;
-(BOOL)hasFalseNegatives;
-(float*)positiveScores;
-(void)setPositiveScores:(float*)arg1 count:(unsigned long long)arg2 ;
-(float*)negativeScores;
-(void)setNegativeScores:(float*)arg1 count:(unsigned long long)arg2 ;
-(void)setSecsToExecute:(float)arg1 ;
-(void)setHasSecsToExecute:(BOOL)arg1 ;
-(BOOL)hasSecsToExecute;
-(float)rmse;
-(float)f1;
-(unsigned long long)truePositives;
-(unsigned long long)trueNegatives;
-(unsigned long long)falsePositives;
-(unsigned long long)falseNegatives;
-(float)secsToExecute;
@end

