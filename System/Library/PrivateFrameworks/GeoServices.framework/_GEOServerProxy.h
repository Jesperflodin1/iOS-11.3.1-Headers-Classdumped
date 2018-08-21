/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GEOServer;

@interface _GEOServerProxy : NSObject {

	Class _serverClass;
	GEOServer* _server;

}

@property (nonatomic,readonly) Class serverClass;               //@synthesize serverClass=_serverClass - In the implementation block
@property (nonatomic,readonly) GEOServer * server;              //@synthesize server=_server - In the implementation block
+(id)proxyForClass:(Class)arg1 ;
+(id)proxyForServer:(id)arg1 daemon:(id)arg2 ;
-(BOOL)handleIncomingMessage:(id)arg1 fromPeer:(id)arg2 ;
-(void)startServerWithDaemon:(id)arg1 ;
-(void)_setServer:(id)arg1 daemon:(id)arg2 ;
-(BOOL)isEqualToServerProxy:(id)arg1 ;
-(Class)serverClass;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(GEOServer *)server;
@end

