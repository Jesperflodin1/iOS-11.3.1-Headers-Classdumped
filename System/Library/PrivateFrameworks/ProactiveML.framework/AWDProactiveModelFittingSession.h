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

@class AWDProactiveModelFittingModelInfo, AWDProactiveModelFittingSparseFloatVector;

@interface AWDProactiveModelFittingSession : PBCodable <NSCopying> {

	unsigned long long _label;
	unsigned long long _supervisionType;
	unsigned long long _timestamp;
	float _confidenceScore;
	AWDProactiveModelFittingModelInfo* _modelInfo;
	AWDProactiveModelFittingSparseFloatVector* _sparseFloatFeatures;
	SCD_Struct_AW5 _has;

}

@property (assign,nonatomic) BOOL hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                                                 //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) BOOL hasModelInfo; 
@property (nonatomic,retain) AWDProactiveModelFittingModelInfo * modelInfo;                                //@synthesize modelInfo=_modelInfo - In the implementation block
@property (assign,nonatomic) BOOL hasLabel; 
@property (assign,nonatomic) unsigned long long label;                                                     //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) BOOL hasSparseFloatFeatures; 
@property (nonatomic,retain) AWDProactiveModelFittingSparseFloatVector * sparseFloatFeatures;              //@synthesize sparseFloatFeatures=_sparseFloatFeatures - In the implementation block
@property (assign,nonatomic) BOOL hasSupervisionType; 
@property (assign,nonatomic) unsigned long long supervisionType;                                           //@synthesize supervisionType=_supervisionType - In the implementation block
@property (assign,nonatomic) BOOL hasConfidenceScore; 
@property (assign,nonatomic) float confidenceScore;                                                        //@synthesize confidenceScore=_confidenceScore - In the implementation block
-(BOOL)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)mergeFrom:(id)arg1 ;
-(void)setConfidenceScore:(float)arg1 ;
-(void)setHasTimestamp:(BOOL)arg1 ;
-(BOOL)hasTimestamp;
-(BOOL)hasLabel;
-(void)setHasConfidenceScore:(BOOL)arg1 ;
-(BOOL)hasConfidenceScore;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)timestamp;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)label;
-(void)setLabel:(unsigned long long)arg1 ;
-(id)dictionaryRepresentation;
-(float)confidenceScore;
-(void)setModelInfo:(AWDProactiveModelFittingModelInfo *)arg1 ;
-(AWDProactiveModelFittingModelInfo *)modelInfo;
-(BOOL)hasModelInfo;
-(void)setSparseFloatFeatures:(AWDProactiveModelFittingSparseFloatVector *)arg1 ;
-(void)setHasLabel:(BOOL)arg1 ;
-(BOOL)hasSparseFloatFeatures;
-(void)setSupervisionType:(unsigned long long)arg1 ;
-(void)setHasSupervisionType:(BOOL)arg1 ;
-(BOOL)hasSupervisionType;
-(AWDProactiveModelFittingSparseFloatVector *)sparseFloatFeatures;
-(unsigned long long)supervisionType;
@end

