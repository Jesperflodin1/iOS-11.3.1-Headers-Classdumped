/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CoreNameParser.framework/CoreNameParser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface NPComponentSequence : NSObject {

	BOOL _favorite;
	NSArray* _observation;
	NSArray* _sequence;
	NSArray* _oovIndices;
	double _score;
	double _emissionModelScore;
	double _stateModelScore;

}

@property (copy) NSArray * observation;                    //@synthesize observation=_observation - In the implementation block
@property (copy) NSArray * sequence;                       //@synthesize sequence=_sequence - In the implementation block
@property (copy) NSArray * oovIndices;                     //@synthesize oovIndices=_oovIndices - In the implementation block
@property (assign) double score;                           //@synthesize score=_score - In the implementation block
@property (assign) double emissionModelScore;              //@synthesize emissionModelScore=_emissionModelScore - In the implementation block
@property (assign) double stateModelScore;                 //@synthesize stateModelScore=_stateModelScore - In the implementation block
@property (getter=isFavorite) BOOL favorite;               //@synthesize favorite=_favorite - In the implementation block
-(void)setObservation:(NSArray *)arg1 ;
-(void)setScore:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)setFavorite:(BOOL)arg1 ;
-(BOOL)isFavorite;
-(double)score;
-(NSArray *)observation;
-(void)setSequence:(NSArray *)arg1 ;
-(NSArray *)sequence;
-(void)setOovIndices:(NSArray *)arg1 ;
-(void)setEmissionModelScore:(double)arg1 ;
-(void)setStateModelScore:(double)arg1 ;
-(BOOL)isEqualToComponentSequence:(id)arg1 ;
-(NSArray *)oovIndices;
-(id)oovTokens;
-(double)emissionModelScore;
-(double)stateModelScore;
-(id)initWithObservationSequence:(id)arg1 hiddenSequence:(id)arg2 oovIndices:(id)arg3 emissionModelScore:(double)arg4 stateModelScore:(double)arg5 boost:(double)arg6 ;
-(void)setValue:(id)arg1 atSequenceIndex:(unsigned long long)arg2 ;
@end

