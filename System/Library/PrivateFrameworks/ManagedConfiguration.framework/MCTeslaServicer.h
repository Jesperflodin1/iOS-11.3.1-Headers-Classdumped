/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface MCTeslaServicer : NSObject {

	BOOL _isBusy;
	/*^block*/id _callback;
	NSXPCConnection* _connection;

}

@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic) BOOL isBusy;                               //@synthesize isBusy=_isBusy - In the implementation block
-(void)provisionallyEnrollWithNonce:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)unenrollWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)fetchConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)requestDidFailWithError:(id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isBusy;
-(void)setIsBusy:(BOOL)arg1 ;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)connectionError;
@end

