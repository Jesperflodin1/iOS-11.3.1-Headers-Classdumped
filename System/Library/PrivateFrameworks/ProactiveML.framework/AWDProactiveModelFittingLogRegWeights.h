/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveML/ProactiveML-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class AWDProactiveModelFittingQuantizedDenseVector, AWDProactiveModelFittingEvalMetrics, AWDProactiveModelFittingMinibatchStats, AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector, AWDProactiveModelFittingQuantizedSparseVector;

@interface AWDProactiveModelFittingLogRegWeights : PBCodable <NSCopying> {

	unsigned long long _timestamp;
	AWDProactiveModelFittingQuantizedDenseVector* _denseQuantizedWeights;
	AWDProactiveModelFittingEvalMetrics* _evaluationMetrics;
	AWDProactiveModelFittingMinibatchStats* _minibatchStats;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatWeights;
	AWDProactiveModelFittingQuantizedSparseVector* _sparseQuantizedWeights;
	float _weightsL2norm;
	float _weightsScaleFactor;
	SCD_Struct_AW2 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                        //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                       //@synthesize modelInfo=_modelInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatWeights; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatWeights;                      //@synthesize sparseFloatWeights=_sparseFloatWeights - In the implementation block
@property (nonatomic,readonly) BOOL hasMinibatchStats; 
@property (nonatomic,retain) AWDProactiveModelFittingMinibatchStats * minibatchStats;                             //@synthesize minibatchStats=_minibatchStats - In the implementation block
@property (nonatomic,readonly) BOOL hasEvaluationMetrics; 
@property (nonatomic,retain) AWDProactiveModelFittingEvalMetrics * evaluationMetrics;                             //@synthesize evaluationMetrics=_evaluationMetrics - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseQuantizedWeights; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedSparseVector * sparseQuantizedWeights;              //@synthesize sparseQuantizedWeights=_sparseQuantizedWeights - In the implementation block
@property (assign,nonatomic) BOOL hasWeightsScaleFactor; 
@property (assign,nonatomic) float weightsScaleFactor;                                                            //@synthesize weightsScaleFactor=_weightsScaleFactor - In the implementation block
@property (assign,nonatomic) BOOL hasWeightsL2norm; 
@property (assign,nonatomic) float weightsL2norm;                                                                 //@synthesize weightsL2norm=_weightsL2norm - In the implementation block
@property (nonatomic,readonly) BOOL hasDenseQuantizedWeights; 
@property (nonatomic,retain) AWDProactiveModelFittingQuantizedDenseVector * denseQuantizedWeights;                //@synthesize denseQuantizedWeights=_denseQuantizedWeights - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)dictionaryRepresentation;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(void)setSparseFloatWeights:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(void)setMinibatchStats:(AWDProactiveModelFittingMinibatchStats *)arg1 ;
-(void)setEvaluationMetrics:(AWDProactiveModelFittingEvalMetrics *)arg1 ;
-(void)setSparseQuantizedWeights:(AWDProactiveModelFittingQuantizedSparseVector *)arg1 ;
-(void)setDenseQuantizedWeights:(AWDProactiveModelFittingQuantizedDenseVector *)arg1 ;
-(BOOL)hasModelInfo;
-(BOOL)hasSparseFloatWeights;
-(BOOL)hasMinibatchStats;
-(BOOL)hasEvaluationMetrics;
-(BOOL)hasSparseQuantizedWeights;
-(void)setWeightsScaleFactor:(float)arg1 ;
-(void)setHasWeightsScaleFactor:(BOOL)arg1 ;
-(BOOL)hasWeightsScaleFactor;
-(void)setWeightsL2norm:(float)arg1 ;
-(void)setHasWeightsL2norm:(BOOL)arg1 ;
-(BOOL)hasWeightsL2norm;
-(BOOL)hasDenseQuantizedWeights;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatWeights;
-(AWDProactiveModelFittingMinibatchStats *)minibatchStats;
-(AWDProactiveModelFittingEvalMetrics *)evaluationMetrics;
-(AWDProactiveModelFittingQuantizedSparseVector *)sparseQuantizedWeights;
-(float)weightsScaleFactor;
-(float)weightsL2norm;
-(AWDProactiveModelFittingQuantizedDenseVector *)denseQuantizedWeights;
-(BOOL)hasWeights;
@end

