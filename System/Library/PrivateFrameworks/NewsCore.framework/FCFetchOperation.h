/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NewsCore/FCOperation.h>

@protocol OS_dispatch_semaphore, OS_dispatch_queue;
@class FCFetchOperationResult, NSObject;

@interface FCFetchOperation : FCOperation {

	FCFetchOperationResult* _result;
	NSObject*<OS_dispatch_semaphore> _finishedSemaphore;
	BOOL _wifiOnly;
	BOOL _canSendFetchCompletionSynchronously;
	unsigned long long _cachePolicy;
	double _maximumCachedAge;
	/*^block*/id _fetchCompletionBlock;
	NSObject*<OS_dispatch_queue> _fetchCompletionQueue;

}

@property (assign) BOOL wifiOnly;                                                  //@synthesize wifiOnly=_wifiOnly - In the implementation block
@property (assign) unsigned long long cachePolicy;                                 //@synthesize cachePolicy=_cachePolicy - In the implementation block
@property (assign) double maximumCachedAge;                                        //@synthesize maximumCachedAge=_maximumCachedAge - In the implementation block
@property (copy) id fetchCompletionBlock;                                          //@synthesize fetchCompletionBlock=_fetchCompletionBlock - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> fetchCompletionQueue;              //@synthesize fetchCompletionQueue=_fetchCompletionQueue - In the implementation block
@property (assign) BOOL canSendFetchCompletionSynchronously;                       //@synthesize canSendFetchCompletionSynchronously=_canSendFetchCompletionSynchronously - In the implementation block
@property (readonly) FCFetchOperationResult * result;                              //@synthesize result=_result - In the implementation block
-(unsigned long long)cachePolicy;
-(void)setCachePolicy:(unsigned long long)arg1 ;
-(id)init;
-(void)cancel;
-(FCFetchOperationResult *)result;
-(void)setMaximumCachedAge:(double)arg1 ;
-(void)setFetchCompletionQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setFetchCompletionBlock:(id)arg1 ;
-(void)setCanSendFetchCompletionSynchronously:(BOOL)arg1 ;
-(BOOL)waitUntilFinishedWithTimeout:(double)arg1 ;
-(double)maximumCachedAge;
-(void)finishExecutingWithFetchedObject:(id)arg1 ;
-(BOOL)wifiOnly;
-(void)finishExecutingWithResult:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)fetchCompletionQueue;
-(void)setWifiOnly:(BOOL)arg1 ;
-(id)fetchCompletionBlock;
-(BOOL)canSendFetchCompletionSynchronously;
-(void)finishExecutingWithStatus:(unsigned long long)arg1 ;
-(void)finishExecutingWithError:(id)arg1 ;
-(void)takeInputsFromFetchOperation:(id)arg1 ;
-(void)operationDidFinishWithError:(id)arg1 ;
-(void)finishFromEarlyCancellation;
@end

