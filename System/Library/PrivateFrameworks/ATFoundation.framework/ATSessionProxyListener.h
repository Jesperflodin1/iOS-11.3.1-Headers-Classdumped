/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ATFoundation.framework/ATFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <ATFoundation/ATSessionObserver.h>

@protocol OS_dispatch_queue;
@class NSXPCListener, NSMutableArray, NSObject, ATSession, NSString;

@interface ATSessionProxyListener : NSObject <NSXPCListenerDelegate, ATSessionObserver> {

	NSXPCListener* _listener;
	NSMutableArray* _connections;
	NSObject*<OS_dispatch_queue> _queue;
	ATSession* _session;

}

@property (nonatomic,readonly) ATSession * session;                 //@synthesize session=_session - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)start;
-(ATSession *)session;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithSession:(id)arg1 ;
-(void)sessionDidFinish:(id)arg1 ;
@end

