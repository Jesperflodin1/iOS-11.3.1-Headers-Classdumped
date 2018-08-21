/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSString;

@interface NSOperation : NSObject {

	id _private;
	int _private1;
	int _private1b;

}

@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (getter=isExecuting,readonly) BOOL executing; 
@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isConcurrent,readonly) BOOL concurrent; 
@property (getter=isAsynchronous,readonly) BOOL asynchronous; 
@property (getter=isReady,readonly) BOOL ready; 
@property (copy,readonly) NSArray * dependencies; 
@property (assign) long long queuePriority; 
@property (copy) id completionBlock; 
@property (assign) double threadPriority; 
@property (assign) long long qualityOfService; 
@property (copy) NSString * name; 
+(id)keyPathsForValuesAffectingFinished;
+(id)keyPathsForValuesAffectingReady;
+(id)keyPathsForValuesAffectingExecuting;
+(id)keyPathsForValuesAffectingCancelled;
+(id)keyPathsForValuesAffectingIsCancelled;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
+(id)keyPathsForValuesAffectingIsReady;
+(id)keyPathsForValuesAffectingIsExecuting;
+(id)keyPathsForValuesAffectingIsFinished;
+(id)currentOperation;
-(id)_activity;
-(void)setObservationInfo:(void*)arg1 ;
-(id)_implicitObservationInfo;
-(/*^block*/id)_copyCompletionBlock;
-(id)__graphDescription:(unsigned long long)arg1 ;
-(void)waitUntilFinishedOrTimeout:(double)arg1 ;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(id)description;
-(id)debugDescription;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(void)start;
-(BOOL)isCancelled;
-(void)removeObserver:(id)arg1 forKeyPath:(id)arg2 ;
-(void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4 ;
-(void)main;
-(void)setQualityOfService:(long long)arg1 ;
-(void*)observationInfo;
-(BOOL)isFinished;
-(BOOL)isExecuting;
-(double)threadPriority;
-(void)setThreadPriority:(double)arg1 ;
-(BOOL)isConcurrent;
-(BOOL)isReady;
-(BOOL)isAsynchronous;
-(NSArray *)dependencies;
-(long long)queuePriority;
-(void)setQueuePriority:(long long)arg1 ;
-(long long)qualityOfService;
-(void)addDependency:(id)arg1 ;
-(void)removeDependency:(id)arg1 ;
-(void)waitUntilFinished;
@end

