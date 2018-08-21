/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PairedSync.framework/PairedSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PSYConnectionDelegate;
@class PSYOptions, NSXPCConnection;

@interface PSYConnection : NSObject {

	BOOL _valid;
	id<PSYConnectionDelegate> _delegate;
	PSYOptions* _options;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) PSYOptions * options;                                   //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSXPCConnection * connection;                           //@synthesize connection=_connection - In the implementation block
@property (assign,nonatomic,__weak) id<PSYConnectionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (getter=isValid,nonatomic,readonly) BOOL valid;                            //@synthesize valid=_valid - In the implementation block
-(id)init;
-(id<PSYConnectionDelegate>)delegate;
-(void)setDelegate:(id<PSYConnectionDelegate>)arg1 ;
-(BOOL)isValid;
-(void)setOptions:(PSYOptions *)arg1 ;
-(PSYOptions *)options;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)startSyncWithOptions:(id)arg1 ;
-(id)remoteConnection;
-(void)startSync;
@end

