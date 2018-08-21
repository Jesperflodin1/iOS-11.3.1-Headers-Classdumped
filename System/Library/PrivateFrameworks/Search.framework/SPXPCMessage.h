/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object, OS_os_transaction;
@class SPXPCConnection, NSObject, NSString, NSDictionary;

@interface SPXPCMessage : NSObject {

	SPXPCConnection* _receivingConnection;
	NSObject*<OS_xpc_object> _x_reply_connection;
	NSObject*<OS_xpc_object> _x_message;
	NSObject*<OS_xpc_object> _x_rootObject;
	NSObject*<OS_xpc_object> _x_reply;
	NSObject*<OS_xpc_object> _x_feedbackData;
	NSObject*<OS_os_transaction> _replyTransaction;
	NSString* _name;
	NSDictionary* _info;

}

@property (nonatomic,readonly) NSString * name;              //@synthesize name=_name - In the implementation block
@property (nonatomic,copy) NSDictionary * info;              //@synthesize info=_info - In the implementation block
-(void)setRootObject:(id)arg1 ;
-(void)sendReply:(id)arg1 ;
-(NSString *)name;
-(NSDictionary *)info;
-(id)initWithName:(id)arg1 ;
-(void)setInfo:(NSDictionary *)arg1 ;
-(BOOL)needsReply;
-(id)_createXPCMessage;
-(id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2 ;
-(void)setRootObjectForFeedback:(id)arg1 ;
-(id)rootObjectOfClasses:(id)arg1 ;
-(id)rootObjectOfClassesForFeedback:(id)arg1 ;
@end

