/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection, Protocol, CADDatabaseInitializationOptions;

@interface CADXPCProxyHelper : NSObject {

	NSXPCConnection* _connection;
	Protocol* _protocol;
	BOOL _synchronous;
	CADDatabaseInitializationOptions* _initializationOptions;

}

@property (retain) CADDatabaseInitializationOptions * initializationOptions;              //@synthesize initializationOptions=_initializationOptions - In the implementation block
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)forwardInvocation:(id)arg1 ;
-(id)_getReplyBlockFromInvocation:(id)arg1 ;
-(void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3 ;
-(id)_replaceReplyBlockInInvocation:(id)arg1 retryingAfterInitializationWithContextHolder:(id)arg2 ;
-(long long)replyBlockArgumentIndex:(id)arg1 ;
-(BOOL)_shouldResendInitializationOptionsForInvocation:(id)arg1 ;
-(id)initWithXPCConnection:(id)arg1 protocol:(id)arg2 synchronous:(BOOL)arg3 ;
-(CADDatabaseInitializationOptions *)initializationOptions;
-(void)setInitializationOptions:(CADDatabaseInitializationOptions *)arg1 ;
@end

