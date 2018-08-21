/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MMCS.framework/MMCS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSURLSessionDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegate.h>
#import <libobjc.A.dylib/NSURLSessionTaskDelegatePrivate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegate.h>
#import <libobjc.A.dylib/NSURLSessionDataDelegatePrivate.h>
#import <libobjc.A.dylib/C2RequestDelegate.h>
#import <libobjc.A.dylib/C2SessionDelegate.h>
#import <libobjc.A.dylib/C2SessionTaskDelegate.h>

@protocol C2SessionDelegate;
@class NSString, NSURLSession, C2RequestOptions, NSMutableDictionary, NSOperationQueue;

@interface C2Session : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionTaskDelegatePrivate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate, C2RequestDelegate, C2SessionDelegate, C2SessionTaskDelegate> {

	unsigned char _isComplete;
	NSString* _sessionIdentifier;
	NSURLSession* _session;
	C2RequestOptions* _options;
	id<C2SessionDelegate> _sessionDelegate;
	double _emptyTimestamp;
	unsigned long long _creatingTaskCounter;
	NSMutableDictionary* _wrappedTaskByTaskDescription;
	NSOperationQueue* _queue;
	/*^block*/id _testBehavior_sessionInvalidated_cfnetwork;
	/*^block*/id _testBehavior_sessionInvalidated_shouldInvalidate;
	/*^block*/id _testBehavior_cleanupRetainCycle;

}

@property (assign,nonatomic) unsigned char isComplete;                                          //@synthesize isComplete=_isComplete - In the implementation block
@property (nonatomic,retain) id<C2SessionDelegate> sessionDelegate;                             //@synthesize sessionDelegate=_sessionDelegate - In the implementation block
@property (assign,nonatomic) double emptyTimestamp;                                             //@synthesize emptyTimestamp=_emptyTimestamp - In the implementation block
@property (assign,nonatomic) unsigned long long creatingTaskCounter;                            //@synthesize creatingTaskCounter=_creatingTaskCounter - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * wrappedTaskByTaskDescription;              //@synthesize wrappedTaskByTaskDescription=_wrappedTaskByTaskDescription - In the implementation block
@property (nonatomic,readonly) NSOperationQueue * queue;                                        //@synthesize queue=_queue - In the implementation block
@property (nonatomic,copy) id testBehavior_sessionInvalidated_cfnetwork;                        //@synthesize testBehavior_sessionInvalidated_cfnetwork=_testBehavior_sessionInvalidated_cfnetwork - In the implementation block
@property (nonatomic,copy) id testBehavior_sessionInvalidated_shouldInvalidate;                 //@synthesize testBehavior_sessionInvalidated_shouldInvalidate=_testBehavior_sessionInvalidated_shouldInvalidate - In the implementation block
@property (nonatomic,copy) id testBehavior_cleanupRetainCycle;                                  //@synthesize testBehavior_cleanupRetainCycle=_testBehavior_cleanupRetainCycle - In the implementation block
@property (nonatomic,readonly) NSString * sessionIdentifier;                                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSURLSession * session;                                          //@synthesize session=_session - In the implementation block
@property (nonatomic,copy,readonly) C2RequestOptions * options;                                 //@synthesize options=_options - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)portFromURL:(id)arg1 ;
-(void)removeTask:(id)arg1 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(/*^block*/id)arg3 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5 ;
-(void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)invalidateAndCancel;
-(void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dealloc;
-(NSString *)sessionIdentifier;
-(C2RequestOptions *)options;
-(NSURLSession *)session;
-(NSOperationQueue *)queue;
-(unsigned char)isComplete;
-(NSMutableDictionary *)wrappedTaskByTaskDescription;
-(void)_recalculateSessionDelegateQueuePriority;
-(void)cleanupRetainCycle;
-(void)C2Session:(id)arg1 didBecomeInvalidWithError:(id)arg2 ;
-(void)sessionTaskDelegateCallbackHelper:(id)arg1 task:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)C2Session:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3 ;
-(id)initWithSessionIdentifier:(id)arg1 options:(id)arg2 sessionDelegate:(id)arg3 ;
-(void)willCreateTask;
-(void)didCreateTask;
-(id)createTaskWithOptions:(id)arg1 delegate:(id)arg2 ;
-(id)addTask:(id)arg1 withDescription:(id)arg2 request:(id)arg3 ;
-(unsigned char)shouldInvalidateAndCancel;
-(void)testBehavior_triggerSessionExpiry;
-(double)emptyTimestamp;
-(void)setEmptyTimestamp:(double)arg1 ;
-(unsigned long long)creatingTaskCounter;
-(void)setCreatingTaskCounter:(unsigned long long)arg1 ;
-(id)testBehavior_sessionInvalidated_cfnetwork;
-(void)setTestBehavior_sessionInvalidated_cfnetwork:(id)arg1 ;
-(id)testBehavior_sessionInvalidated_shouldInvalidate;
-(void)setTestBehavior_sessionInvalidated_shouldInvalidate:(id)arg1 ;
-(id)testBehavior_cleanupRetainCycle;
-(void)setTestBehavior_cleanupRetainCycle:(id)arg1 ;
-(void)setSessionDelegate:(id<C2SessionDelegate>)arg1 ;
-(id<C2SessionDelegate>)sessionDelegate;
-(void)setIsComplete:(unsigned char)arg1 ;
-(void)URLSession:(id)arg1 _taskIsWaitingForConnection:(id)arg2 ;
-(void)URLSession:(id)arg1 task:(id)arg2 _conditionalRequirementsChanged:(BOOL)arg3 ;
-(void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3 ;
@end

