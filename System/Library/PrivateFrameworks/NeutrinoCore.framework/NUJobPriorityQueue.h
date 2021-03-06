/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableArray, NUJobQueue, NSObject, NSString;

@interface NUJobPriorityQueue : NSObject {

	NSMutableArray* _jobs;
	BOOL _needSort;
	NUJobQueue* _owner;
	NSObject*<OS_dispatch_queue> _runQueue;
	NSObject*<OS_dispatch_queue> _stateQueue;
	BOOL _isRunning;
	NSString* _name;

}

@property (readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (readonly) long long count; 
-(id)init;
-(long long)count;
-(id)description;
-(NSString *)name;
-(void)_run;
-(BOOL)start;
-(void)_addJob:(id)arg1 ;
-(BOOL)_removeJob:(id)arg1 ;
-(id)_popJob;
-(void)_sortIfNeeded;
-(BOOL)_runNextJob;
-(id)popJob;
-(id)initWithName:(id)arg1 owner:(id)arg2 qos:(unsigned)arg3 ;
-(BOOL)removeJob:(id)arg1 ;
-(void)_sort;
-(void)_startRunning;
-(void)addJob:(id)arg1 ;
@end

