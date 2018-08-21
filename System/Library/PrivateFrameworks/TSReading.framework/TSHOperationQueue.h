/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class TSHRequestQueue, NSMutableArray, NSString, NSMutableDictionary;

@interface TSHOperationQueue : NSObject {

	TSHRequestQueue* mRequestQueue;
	NSMutableArray* mOperationQueue;
	NSMutableArray* mActiveOperations;
	NSString* mDefaultUserAgent;
	NSMutableDictionary* mDefaultAuthenticationMethods;

}
-(id)requestQueue;
-(id)init;
-(void)cancel;
-(void)dealloc;
-(void)addOperation:(id)arg1 ;
-(void)cancelOperation:(id)arg1 ;
-(id)defaultUserAgent;
-(id)defaultAuthenicationMethodForScheme:(id)arg1 ;
-(void)doWork;
-(void)operation:(id)arg1 connection:(id)arg2 didFailWithError:(id)arg3 ;
-(void)operationDidFinish:(id)arg1 ;
-(void)setDefaultAuthenticationMethod:(id)arg1 forScheme:(id)arg2 ;
-(BOOL)isBlocked:(id)arg1 ;
-(id)dependantsOf:(id)arg1 ;
-(id)nextUnblockedOperation;
-(void)dequeueDependantsOf:(id)arg1 ;
-(void)setMaxConcurrentRequestCount:(unsigned long long)arg1 ;
-(unsigned long long)maxConcurrentRequestCount;
-(BOOL)isInactive;
-(void)setDefaultUserAgent:(id)arg1 ;
-(void)appendUserAgentFragment:(id)arg1 ;
@end

