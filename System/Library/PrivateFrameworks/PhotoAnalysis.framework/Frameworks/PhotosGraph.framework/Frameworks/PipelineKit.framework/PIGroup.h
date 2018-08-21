/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoAnalysis.framework/Frameworks/PhotosGraph.framework/Frameworks/PipelineKit.framework/PipelineKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group;
@class NSMutableArray, NSObject, PIStatisticsElapsedTime, PIPipeline, NSString, NSMutableDictionary, NSMapTable, NSArray;

@interface PIGroup : NSObject {

	long long _concurrencyLimit;
	BOOL _suspended;
	NSMutableArray* _operations;
	NSMutableArray* _executingOperations;
	long long _executingConcurrency;
	BOOL _removeOnCompletion;
	NSObject*<OS_dispatch_group> _operationsGroup;
	PIStatisticsElapsedTime* _executionTime;
	/*^block*/id _availableBlock;
	PIPipeline* _pipeline;
	NSString* _identifier;
	unsigned long long _priority;
	NSMutableDictionary* _operationsByPriority;
	NSMapTable* _operationsByKey;
	NSMapTable* _operationsByIdentifier;
	double _timestampStart;

}

@property (assign,nonatomic,__weak) PIPipeline * pipeline;                     //@synthesize pipeline=_pipeline - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (assign) long long concurrencyLimit;                                 //@synthesize concurrencyLimit=_concurrencyLimit - In the implementation block
@property (assign) unsigned long long priority;                                //@synthesize priority=_priority - In the implementation block
@property (assign) BOOL removeOnCompletion;                                    //@synthesize removeOnCompletion=_removeOnCompletion - In the implementation block
@property (getter=isSuspended) BOOL suspended;                                 //@synthesize suspended=_suspended - In the implementation block
@property (copy) id availableBlock;                                            //@synthesize availableBlock=_availableBlock - In the implementation block
@property (copy,readonly) NSArray * operations;                                //@synthesize operations=_operations - In the implementation block
@property (copy,readonly) NSArray * executingOperations;                       //@synthesize executingOperations=_executingOperations - In the implementation block
@property (readonly) unsigned long long operationsCount; 
@property (readonly) unsigned long long executingOperationsCount; 
@property (readonly) long long executingConcurrency; 
@property (readonly) BOOL isExecuting; 
+(id)group;
+(id)groupWithConcurrencyLimit:(long long)arg1 priority:(unsigned long long)arg2 ;
-(id)init;
-(BOOL)isSuspended;
-(void)dealloc;
-(id)description;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(unsigned long long)arg1 ;
-(unsigned long long)priority;
-(void)addOperation:(id)arg1 ;
-(NSArray *)operations;
-(void)setSuspended:(BOOL)arg1 ;
-(BOOL)isExecuting;
-(double)executionTime;
-(void)_removeOperation:(id)arg1 ;
-(long long)concurrencyLimit;
-(void)setPipeline:(PIPipeline *)arg1 ;
-(void)_rebuildOperationsByPriority;
-(unsigned long long)executingOperationsCount;
-(void)_operation:(id)arg1 didChangePriority:(long long)arg2 ;
-(NSArray *)executingOperations;
-(long long)executingConcurrency;
-(id)operationWithIdentifier:(id)arg1 ;
-(id)operationsWithPriority:(long long)arg1 ;
-(id)addOperationWithExecutionBlock:(/*^block*/id)arg1 ;
-(void)updateOperationsWithBlock:(/*^block*/id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)addOperations:(id)arg1 waitUntilFinishedBlock:(/*^block*/id)arg2 ;
-(void)_updateConcurrencyLimit;
-(id)availableBlock;
-(void)setAvailableBlock:(id)arg1 ;
-(id)waitUntilFinished:(BOOL)arg1 ;
-(void)cancelAllOperations:(/*^block*/id)arg1 ;
-(void)setConcurrencyLimit:(long long)arg1 ;
-(double)wallTime;
-(void)cancelAllOperationsAndSuspendGroupUntilFinished:(/*^block*/id)arg1 ;
-(void)addOperations:(id)arg1 ;
-(PIPipeline *)pipeline;
-(unsigned long long)operationsCount;
-(void)waitUntilFinishedUsingBlock:(/*^block*/id)arg1 ;
-(id)operationsWithKey:(id)arg1 ;
-(void)_addOperation:(id)arg1 ;
-(BOOL)removeOnCompletion;
-(void)setRemoveOnCompletion:(BOOL)arg1 ;
@end

