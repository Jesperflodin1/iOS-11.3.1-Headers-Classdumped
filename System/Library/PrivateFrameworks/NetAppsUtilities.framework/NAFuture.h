/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NAPromise.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSError, NSString;

@interface NAFuture : NSObject <NAPromise> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	BOOL _finished;
	NSMutableArray* _completionBlocks;
	id _resultValue;
	NSError* _resultError;
	NSString* _descriptor;

}

@property (getter=isFinished,readonly) BOOL finished; 
@property (getter=isCancelled,readonly) BOOL cancelled; 
@property (nonatomic,copy) NSString * descriptor;                    //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_descriptorForChainOperation:(id)arg1 onFuture:(id)arg2 withBlock:(id)arg3 ;
+(id)_chainFuturesWithFutureStack:(id)arg1 ;
+(id)chainFutures:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 scheduler:(id)arg2 ;
+(id)futureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
+(id)futureWithNoResult;
+(id)futureWithErrorOnlyHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)futureWithError:(id)arg1 ;
+(id)combineAllFutures:(id)arg1 ignoringErrors:(BOOL)arg2 scheduler:(id)arg3 ;
+(id)futureWithResult:(id)arg1 ;
+(id)futureWithBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 ;
+(id)combineAllFutures:(id)arg1 ;
+(id)futureWithCompletionHandlerAdapterBlock:(/*^block*/id)arg1 ;
+(id)lazyFutureWithBlock:(/*^block*/id)arg1 scheduler:(id)arg2 ;
-(void)_flushCompletionBlocks;
-(id)init;
-(BOOL)cancel;
-(NSString *)description;
-(BOOL)isCancelled;
-(void)setDescriptor:(NSString *)arg1 ;
-(NSString *)descriptor;
-(BOOL)isFinished;
-(id)addCompletionBlock:(/*^block*/id)arg1 ;
-(void)didCancel;
-(BOOL)_queue_isCancelled;
-(id)recoverIgnoringError;
-(BOOL)finishWithError:(id)arg1 ;
-(id)recover:(/*^block*/id)arg1 ;
-(id)flatMap:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 ;
-(id)addFailureBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithNoResult;
-(id)addSuccessBlock:(/*^block*/id)arg1 ;
-(BOOL)finishWithResult:(id)arg1 error:(id)arg2 ;
-(/*^block*/id)errorOnlyCompletionHandlerAdapter;
-(id)reschedule:(id)arg1 ;
-(/*^block*/id)completionHandlerAdapter;
@end

