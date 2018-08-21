/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol HDFHIRCredentialVendorDelegate, OS_dispatch_queue, OS_dispatch_group;
@class HDFHIRCredentialResult, NSObject, _HDFHIRCredentialResultPromise;

@interface HDFHIRCredentialVendor : NSObject {

	HDFHIRCredentialResult* _currentResult;
	id<HDFHIRCredentialVendorDelegate> _strongDelegate;
	unsigned long long _strongDelegateRetainCount;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _credentialResultQueue;
	BOOL _hasInFlightRefreshTask;
	_HDFHIRCredentialResultPromise* _inFlightRefreshResultPromise;
	NSObject*<OS_dispatch_group> _inFlightRefreshCompletionGroup;
	/*^block*/id _credentialResultDidUpdateHandler;
	id<HDFHIRCredentialVendorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (retain) HDFHIRCredentialResult * currentResult; 
@property (copy) id credentialResultDidUpdateHandler;                           //@synthesize credentialResultDidUpdateHandler=_credentialResultDidUpdateHandler - In the implementation block
@property (__weak) id<HDFHIRCredentialVendorDelegate> delegate;                 //@synthesize delegate=_delegate - In the implementation block
-(void)fetchOrRefreshCredentialWithCompletion:(/*^block*/id)arg1 ;
-(void)_queue_fetchOrRefreshCredentialWithClientCompletion:(/*^block*/id)arg1 ;
-(void)_queue_retainDelegate;
-(void)_queue_performFetchForRefreshTokenlessResult:(id)arg1 clientCompletion:(/*^block*/id)arg2 ;
-(void)_queue_enqueueRefreshForResult:(id)arg1 clientCompletion:(/*^block*/id)arg2 ;
-(void)_queue_dispatchResult:(id)arg1 clientCompletion:(/*^block*/id)arg2 ;
-(void)_queue_releaseDelegate;
-(BOOL)_queue_hasInFlightRefreshTask;
-(void)_queue_performRefreshRequestTaskForResult:(id)arg1 ;
-(void)_queue_handleDelegateRefreshCompletionForInitialResult:(id)arg1 taskState:(id)arg2 credential:(id)arg3 error:(id)arg4 ;
-(void)_setCurrentResultSync:(id)arg1 ;
-(id)credentialResultDidUpdateHandler;
-(void)setCredentialResultDidUpdateHandler:(id)arg1 ;
-(void)setCurrentResult:(HDFHIRCredentialResult *)arg1 ;
-(id)init;
-(id<HDFHIRCredentialVendorDelegate>)delegate;
-(void)setDelegate:(id<HDFHIRCredentialVendorDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(HDFHIRCredentialResult *)currentResult;
-(id)initWithCredential:(id)arg1 ;
@end

