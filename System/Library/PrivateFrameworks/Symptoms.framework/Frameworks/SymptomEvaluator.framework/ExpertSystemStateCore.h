/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, StopWatch;

@interface ExpertSystemStateCore : NSObject {

	int _loopTokens;
	NSString* _label;
	unsigned long long _rank;
	NSDictionary* _entryPreds;
	StopWatch* _sojournTime;
	/*^block*/id _entryAction;
	/*^block*/id _loopEvaluation;
	/*^block*/id _exitAction;
	ExpertSystemStateCore* _previousState;

}

@property (readonly) NSString * label;                                 //@synthesize label=_label - In the implementation block
@property (readonly) unsigned long long rank;                          //@synthesize rank=_rank - In the implementation block
@property (readonly) NSDictionary * entryPreds;                        //@synthesize entryPreds=_entryPreds - In the implementation block
@property (readonly) StopWatch * sojournTime;                          //@synthesize sojournTime=_sojournTime - In the implementation block
@property (nonatomic,copy) id entryAction;                             //@synthesize entryAction=_entryAction - In the implementation block
@property (nonatomic,copy) id loopEvaluation;                          //@synthesize loopEvaluation=_loopEvaluation - In the implementation block
@property (nonatomic,copy) id exitAction;                              //@synthesize exitAction=_exitAction - In the implementation block
@property (assign) int loopTokens;                                     //@synthesize loopTokens=_loopTokens - In the implementation block
@property (retain) ExpertSystemStateCore * previousState;              //@synthesize previousState=_previousState - In the implementation block
-(unsigned long long)rank;
-(NSString *)label;
-(id)initStateWithLabel:(id)arg1 rank:(unsigned long long)arg2 entryPreds:(id)arg3 ;
-(StopWatch *)sojournTime;
-(ExpertSystemStateCore *)previousState;
-(void)setEntryAction:(id)arg1 ;
-(void)setExitAction:(id)arg1 ;
-(id)entryAction;
-(id)exitAction;
-(void)setPreviousState:(ExpertSystemStateCore *)arg1 ;
-(NSDictionary *)entryPreds;
-(id)loopEvaluation;
-(void)setLoopEvaluation:(id)arg1 ;
-(int)loopTokens;
-(void)setLoopTokens:(int)arg1 ;
@end
