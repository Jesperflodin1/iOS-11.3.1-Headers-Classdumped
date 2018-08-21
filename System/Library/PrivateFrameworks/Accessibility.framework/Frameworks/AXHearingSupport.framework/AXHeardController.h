/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSMutableDictionary;

@interface AXHeardController : NSObject {

	NSMutableArray* _clients;
	NSMutableDictionary* _handlers;

}

@property (nonatomic,retain) NSMutableArray * clients;                    //@synthesize clients=_clients - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
+(id)entitlementsForMessageID:(unsigned long long)arg1 ;
+(id)sharedServer;
-(id)init;
-(void)dealloc;
-(void)handleNewConnection:(id)arg1 ;
-(BOOL)sendMessage:(id)arg1 withError:(id*)arg2 ;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(void)addHandler:(id)arg1 andBlock:(/*^block*/id)arg2 forMessageIdentifier:(unsigned long long)arg3 ;
-(BOOL)connection:(id)arg1 hasEntitlementForMessage:(unsigned long long)arg2 ;
-(void)handleMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)startServer;
-(void)sendUpdateMessage:(id)arg1 forIdentifier:(unsigned long long)arg2 ;
-(void)sendClientsMessageWithPayload:(id)arg1 excluding:(id)arg2 ;
-(unsigned long long)countOfClientsListeningForIdentifier:(unsigned long long)arg1 ;
-(void)registerFakeClient:(id)arg1 ;
-(NSMutableDictionary *)handlers;
-(NSMutableArray *)clients;
@end

