/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSXPCConnection;

@interface TUMockCallConnection : NSObject {

	NSXPCConnection* _connection;

}

@property (retain) NSXPCConnection * connection;              //@synthesize connection=_connection - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(void)updateMockCallWithProxyCall:(id)arg1 ;
-(void)endConnectionAndBlockUntilAllMessagesSent;
@end

