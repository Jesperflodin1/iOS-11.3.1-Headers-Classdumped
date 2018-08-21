/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKAnimationRunner;
@class NSString;

@interface VKAnimation : NSObject {

	/*^block*/id _completionHandler;
	NSString* _name;
	long long _priority;
	id<VKAnimationRunner> _runner;
	long long _state;
	float _frequency;
	BOOL _runsForever;

}

@property (nonatomic,readonly) long long state;                 //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) BOOL running; 
@property (assign,nonatomic) BOOL runsForever;                  //@synthesize runsForever=_runsForever - In the implementation block
@property (assign,nonatomic) float frequency;                   //@synthesize frequency=_frequency - In the implementation block
@property (nonatomic,readonly) BOOL hasFrequency; 
@property (assign,nonatomic) double duration; 
@property (nonatomic,readonly) BOOL timed; 
@property (nonatomic,copy) id completionHandler;                //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,readonly) long long priority;              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSString * name;                 //@synthesize name=_name - In the implementation block
-(void)dealloc;
-(id)description;
-(void)stopAnimation:(BOOL)arg1 ;
-(long long)state;
-(double)duration;
-(NSString *)name;
-(void)setDuration:(double)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(long long)priority;
-(void)stop;
-(void)resume;
-(float)frequency;
-(void)setFrequency:(float)arg1 ;
-(BOOL)running;
-(id)initWithName:(id)arg1 ;
-(id)initWithPriority:(long long)arg1 ;
-(void)pause;
-(BOOL)hasFrequency;
-(BOOL)timed;
-(id)initWithPriority:(long long)arg1 name:(id)arg2 ;
-(void)startWithRunner:(id)arg1 ;
-(void)transferToRunner:(id)arg1 ;
-(void)onTimerFired:(double)arg1 ;
-(BOOL)runsForever;
-(void)setRunsForever:(BOOL)arg1 ;
@end
