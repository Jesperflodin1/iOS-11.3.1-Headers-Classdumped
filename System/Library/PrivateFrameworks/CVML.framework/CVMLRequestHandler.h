/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CVML.framework/CVML
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSLock, NSMutableDictionary, NSObject;

@interface CVMLRequestHandler : NSObject {

	NSMutableArray* _requestsInFlight;
	NSMutableArray* _requestsPending;
	NSLock* _requestLock;
	NSMutableDictionary* _cachedResults;
	NSObject* _clusterContext;

}

@property (retain) NSMutableDictionary * cachedResults;              //@synthesize cachedResults=_cachedResults - In the implementation block
@property (retain) NSObject * clusterContext;                        //@synthesize clusterContext=_clusterContext - In the implementation block
+(void)forcedCleanup;
+(void)requestForcedCleanupWithOptions:(id)arg1 ;
+(void)forcedCleanupWithOptions:(id)arg1 ;
+(id)asyncProcessingDispatchQueue;
+(id)handlerWithOptions:(id)arg1 ;
+(void)requestForcedCleanupWithOptions:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)requestForcedCleanup;
-(BOOL)performRequests:(id)arg1 error:(id*)arg2 ;
-(id)init;
-(id)initWithOptions:(id)arg1 ;
-(NSObject *)clusterContext;
-(BOOL)_performRequests:(id)arg1 error:(id*)arg2 ;
-(BOOL)_validateRequests:(id)arg1 error:(id*)arg2 ;
-(id)_asyncProcessingDispatchQueue:(id*)arg1 ;
-(void)_asynchronouslyDispatchRequests:(id)arg1 onDispatchQueue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)performRequestsAsynchronous:(id)arg1 error:(id*)arg2 queue:(id)arg3 ;
-(id)getCachedResultsForKey:(id)arg1 ;
-(BOOL)addUniqueResultsIntoCacheForKey:(id)arg1 withResultValues:(id)arg2 ;
-(BOOL)clearResultsCacheForKey:(id)arg1 ;
-(void)setClusterContext:(NSObject *)arg1 ;
-(id)_orderedRequestsForRequests:(id)arg1 ;
-(void)cancelAllRequests;
-(NSMutableDictionary *)cachedResults;
-(void)setCachedResults:(NSMutableDictionary *)arg1 ;
@end

