/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject, NSString, NSDictionary, GEOPeer, NSProgress, GEOApplicationAuditToken;

@interface GEOMessage : NSObject {

	NSObject*<OS_xpc_object> _xpcMessage;
	NSString* _messageName;
	NSDictionary* _userInfo;
	GEOPeer* _peer;
	NSProgress* _progressToMirrorOverXPC;
	GEOApplicationAuditToken* _preferredAuditToken;

}

@property (readonly) NSProgress * progress; 
@property (nonatomic,readonly) NSString * messageName;                                      //@synthesize messageName=_messageName - In the implementation block
@property (nonatomic,readonly) NSDictionary * userInfo;                                     //@synthesize userInfo=_userInfo - In the implementation block
@property (nonatomic,readonly) GEOPeer * peer;                                              //@synthesize peer=_peer - In the implementation block
@property (nonatomic,readonly) GEOApplicationAuditToken * preferredAuditToken;              //@synthesize preferredAuditToken=_preferredAuditToken - In the implementation block
-(GEOPeer *)peer;
-(GEOApplicationAuditToken *)preferredAuditToken;
-(id)initWithXPCMessage:(id)arg1 peer:(id)arg2 ;
-(void)sendReply:(id)arg1 ;
-(void)sendReplyWithXPCUserInfo:(id)arg1 ;
-(NSString *)messageName;
-(NSDictionary *)userInfo;
-(NSProgress *)progress;
@end
