/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, _HKWorkoutSession, HDXPCClient, HDHealthStoreServer, CMWorkout, HDBackgroundWorkoutRunner, NSArray;

@interface _HDWorkoutData : NSObject {

	NSMutableArray* _events;
	BOOL _isFirstParty;
	_HKWorkoutSession* _workoutSession;
	HDXPCClient* _client;
	HDHealthStoreServer* _server;
	CMWorkout* _cmWorkout;
	HDBackgroundWorkoutRunner* _backgroundRunner;

}

@property (nonatomic,readonly) _HKWorkoutSession * workoutSession;                      //@synthesize workoutSession=_workoutSession - In the implementation block
@property (nonatomic,readonly) HDXPCClient * client;                                    //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) BOOL isFirstParty;                                       //@synthesize isFirstParty=_isFirstParty - In the implementation block
@property (nonatomic,readonly) NSArray * events; 
@property (nonatomic,readonly) double duration; 
@property (assign,nonatomic,__weak) HDHealthStoreServer * server;                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) CMWorkout * cmWorkout;                                     //@synthesize cmWorkout=_cmWorkout - In the implementation block
@property (nonatomic,retain) HDBackgroundWorkoutRunner * backgroundRunner;              //@synthesize backgroundRunner=_backgroundRunner - In the implementation block
-(double)duration;
-(HDHealthStoreServer *)server;
-(HDXPCClient *)client;
-(void)deliverError:(id)arg1 ;
-(NSArray *)events;
-(id)initWithWorkoutSession:(id)arg1 client:(id)arg2 server:(id)arg3 isFirstParty:(BOOL)arg4 ;
-(void)deliverChangeToState:(long long)arg1 fromState:(long long)arg2 date:(id)arg3 ;
-(void)deliverEvent:(id)arg1 ;
-(void)deliverMetrics:(id)arg1 ;
-(id)getSnapshot;
-(_HKWorkoutSession *)workoutSession;
-(BOOL)isFirstParty;
-(void)setServer:(HDHealthStoreServer *)arg1 ;
-(CMWorkout *)cmWorkout;
-(void)setCmWorkout:(CMWorkout *)arg1 ;
-(HDBackgroundWorkoutRunner *)backgroundRunner;
-(void)setBackgroundRunner:(HDBackgroundWorkoutRunner *)arg1 ;
@end
