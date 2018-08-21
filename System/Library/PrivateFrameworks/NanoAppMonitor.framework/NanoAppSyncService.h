/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoAppMonitor.framework/NanoAppMonitor
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSMutableDictionary, NSObject, NSString;

@interface NanoAppSyncService : NSObject <IDSServiceDelegate> {

	BOOL _nonWakingMessage;
	IDSService* _idsService;
	NSMutableDictionary* _outstandingRequests;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) IDSService * idsService;                                //@synthesize idsService=_idsService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * outstandingRequests;              //@synthesize outstandingRequests=_outstandingRequests - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                     //@synthesize queue=_queue - In the implementation block
@property (assign) BOOL nonWakingMessage;                                            //@synthesize nonWakingMessage=_nonWakingMessage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSMutableDictionary *)outstandingRequests;
-(void)setOutstandingRequests:(NSMutableDictionary *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(IDSService *)idsService;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)setIdsService:(IDSService *)arg1 ;
-(void)sendRecentlyUsedApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)nonWakingMessage;
-(void)_queue_setCompletionHandler:(/*^block*/id)arg1 forOutstandingRequst:(id)arg2 ;
-(/*^block*/id)_queue_getCompletionHandlerForOutstandingRequest:(id)arg1 ;
-(void)_queue_removeCompletionHandlerForOutstandingRequest:(id)arg1 ;
-(void)setNonWakingMessage:(BOOL)arg1 ;
@end

