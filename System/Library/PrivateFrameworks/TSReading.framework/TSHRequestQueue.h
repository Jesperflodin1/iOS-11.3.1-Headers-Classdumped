/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSHConnectionFactory, NSMutableArray;

@interface TSHRequestQueue : NSObject {

	unsigned long long mMaxConcurrentRequestCount;
	TSHConnectionFactory* mConnectionFactory;
	NSMutableArray* mRequestQueue;
	NSMutableArray* mActiveRequests;

}
-(void)cancelRequest:(id)arg1 ;
-(BOOL)connection:(id)arg1 canAuthenticateAgainstProtectionSpace:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveAuthenticationChallenge:(id)arg2 ;
-(void)connection:(id)arg1 didCancelAuthenticationChallenge:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(void)connection:(id)arg1 didFailWithError:(id)arg2 ;
-(void)connection:(id)arg1 didReceiveData:(id)arg2 ;
-(void)connectionDidFinishLoading:(id)arg1 ;
-(void)connection:(id)arg1 didReceiveResponse:(id)arg2 ;
-(void)unregisterDelegate:(id)arg1 ;
-(unsigned long long)unblockedQueuedRequestCount;
-(void)doWork;
-(id)connection:(id)arg1 willSendRequest:(id)arg2 redirectResponse:(id)arg3 ;
-(id)connection:(id)arg1 needNewBodyStream:(id)arg2 ;
-(void)connection:(id)arg1 didSendBodyData:(long long)arg2 totalBytesWritten:(long long)arg3 totalBytesExpectedToWrite:(long long)arg4 ;
-(id)connection:(id)arg1 willCacheResponse:(id)arg2 ;
-(BOOL)isBlocked:(id)arg1 ;
-(id)dependantsOf:(id)arg1 ;
-(void)dequeueDependantsOf:(id)arg1 ;
-(void)setMaxConcurrentRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)maxConcurrentRequestCount;
-(BOOL)isInactive;
-(unsigned long long)nextUnblockedQueueEntryIndex;
-(id)entryForRequest:(id)arg1 ;
-(id)entryForConnection:(id)arg1 ;
-(void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3 ;
-(void)addRequest:(id)arg1 dependsUpon:(id)arg2 delegate:(id)arg3 startRightAway:(BOOL)arg4 ;
-(void)addRequest:(id)arg1 delegate:(id)arg2 ;
-(void)startReadyRequests;
-(void)setConnectionFactory:(id)arg1 ;
-(id)requestForConnection:(id)arg1 ;
@end
