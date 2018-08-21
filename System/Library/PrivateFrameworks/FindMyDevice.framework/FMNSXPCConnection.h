/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FindMyDevice.framework/FindMyDevice
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FMNSXPCConnecting.h>

@class NSXPCConnection, FMFuture, NSString;

@interface FMNSXPCConnection : NSObject <FMNSXPCConnecting> {

	BOOL __testMockConnection;
	NSXPCConnection* _connection;
	FMFuture* _future;

}

@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,retain) FMFuture * future;                         //@synthesize future=_future - In the implementation block
@property (assign,nonatomic) BOOL _testMockConnection;                  //@synthesize _testMockConnection=__testMockConnection - In the implementation block
@property (nonatomic,readonly) long long state; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)invalidate;
-(void)dealloc;
-(long long)state;
-(id)initWithConfiguration:(id)arg1 ;
-(id)remoteObjectProxy;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)setFuture:(FMFuture *)arg1 ;
-(FMFuture *)future;
-(id)initWithConfiguration:(id)arg1 exportedObject:(id)arg2 ;
-(void)destroyXPCConnection;
-(BOOL)_testMockConnection;
-(void)set_testMockConnection:(BOOL)arg1 ;
-(void)addFailureBlock:(/*^block*/id)arg1 ;
@end
