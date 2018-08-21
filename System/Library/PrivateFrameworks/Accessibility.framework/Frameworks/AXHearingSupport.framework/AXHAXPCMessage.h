/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class AXHAXPCClient, NSObject, NSDictionary, NSError;

@interface AXHAXPCMessage : NSObject {

	AXHAXPCClient* _client;
	NSObject*<OS_xpc_object> _xpcMessage;
	NSDictionary* _payload;
	NSError* _error;

}

@property (assign,nonatomic) AXHAXPCClient * client;                           //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) NSObject*<OS_xpc_object> xpcMessage;              //@synthesize xpcMessage=_xpcMessage - In the implementation block
@property (nonatomic,retain) NSDictionary * payload;                           //@synthesize payload=_payload - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
+(id)messageWithPayload:(id)arg1 ;
+(id)messageWithPayload:(id)arg1 xpcMessage:(id)arg2 andClient:(id)arg3 ;
-(BOOL)hasEntitlement:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(NSDictionary *)payload;
-(id)initWithPayload:(id)arg1 ;
-(void)setPayload:(NSDictionary *)arg1 ;
-(NSObject*<OS_xpc_object>)xpcMessage;
-(void)setXpcMessage:(NSObject*<OS_xpc_object>)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)replyMessageWithPayload:(id)arg1 ;
-(AXHAXPCClient *)client;
-(void)setClient:(AXHAXPCClient *)arg1 ;
@end

