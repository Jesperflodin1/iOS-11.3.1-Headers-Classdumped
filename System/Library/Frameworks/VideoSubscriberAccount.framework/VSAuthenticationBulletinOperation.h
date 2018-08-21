/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccount/VSAsyncOperation.h>

@class NSURL, NSXPCConnection;

@interface VSAuthenticationBulletinOperation : VSAsyncOperation {

	NSURL* _appStoreRoomURL;
	NSXPCConnection* _connection;

}

@property (nonatomic,retain) NSXPCConnection * connection;                //@synthesize connection=_connection - In the implementation block
@property (nonatomic,copy,readonly) NSURL * appStoreRoomURL;              //@synthesize appStoreRoomURL=_appStoreRoomURL - In the implementation block
-(id)init;
-(NSXPCConnection *)connection;
-(void)setConnection:(NSXPCConnection *)arg1 ;
-(id)_serviceWithErrorHandler:(/*^block*/id)arg1 ;
-(NSURL *)appStoreRoomURL;
-(id)initWithAppStoreRoomURL:(id)arg1 ;
-(void)executionDidBegin;
@end

