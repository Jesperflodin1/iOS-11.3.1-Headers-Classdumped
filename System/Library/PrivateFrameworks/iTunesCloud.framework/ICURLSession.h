/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDownloadDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSObject, NSMutableOrderedSet, NSMutableSet, NSMutableDictionary, NSURLSession, NSString;

@interface ICURLSession : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate, NSURLSessionDataDelegate> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _operationQueue;
	NSMutableOrderedSet* _pendingRequests;
	NSMutableSet* _activeRequests;
	NSMutableDictionary* _completionHandlers;
	BOOL _paused;
	NSObject*<OS_dispatch_source> _requestTimeoutTimer;
	unsigned long long _maxConcurrentRequests;
	NSURLSession* _urlSession;

}

@property (nonatomic,readonly) NSURLSession * urlSession;                             //@synthesize urlSession=_urlSession - In the implementation block
@property (nonatomic,readonly) unsigned long long maxConcurrentRequests;              //@synthesize maxConcurrentRequests=_maxConcurrentRequests - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
-(void)URLSession:(id)arg1 avAssetDownloadTask:(id)arg2 didReceiveAVAssetDownloadToken:(unsigned long long)arg3 ;
-(void)cancelRequest:(id)arg1 ;
-(NSURLSession *)urlSession;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(id)initWithConfiguration:(id)arg1 ;
-(void)resume;
-(void)pause;
-(void)_enqueueRequest:(id)arg1 ;
-(void)enqueueAVDownloadRequest:(id)arg1 toDestination:(id)arg2 withOptions:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)enqueueDownloadRequest:(id)arg1 toDestination:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(unsigned long long)maxConcurrentRequests;
-(id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 ;
-(id)initWithConfiguration:(id)arg1 maxConcurrentRequests:(unsigned long long)arg2 qualityOfService:(long long)arg3 ;
-(void)_checkRequestTimeouts;
-(void)cancelRequest:(id)arg1 withError:(id)arg2 ;
-(void)_finishRequest:(id)arg1 ;
-(void)_processPendingRequests;
-(id)_requestForTask:(id)arg1 ;
-(void)processInitialResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)_newResponseForRequest:(id)arg1 ;
-(void)_updateProgressForRequest:(id)arg1 withTotalBytesWritten:(long long)arg2 totalBytesExpectedToWrite:(long long)arg3 ;
-(void)_processRequest:(id)arg1 ;
-(void)_scheduleNextRequestTimeoutCheck;
-(void)processCompletedResponse:(id)arg1 toRequest:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(double)_timeoutForRequest:(id)arg1 ;
-(void)enqueueUploadRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enqueueDownloadRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)enqueueAVDownloadRequest:(id)arg1 withOptions:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)enqueueDataRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3 ;
-(void)URLSession:(id)arg1 downloadTask:(id)arg2 didWriteData:(long long)arg3 totalBytesWritten:(long long)arg4 totalBytesExpectedToWrite:(long long)arg5 ;
@end

