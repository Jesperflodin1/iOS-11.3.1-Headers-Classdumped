/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AudioToolbox.framework/AudioToolbox
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@class NSXPCListener, NSMutableArray, NSDictionary, NSString;

@interface CAReportingServer : NSObject <NSXPCListenerDelegate> {

	BOOL _reportingEnabled;
	NSXPCListener* _listener;
	NSMutableArray* _clients;
	NSDictionary* _defaults;

}

@property (retain) NSXPCListener * listener;                        //@synthesize listener=_listener - In the implementation block
@property (retain) NSMutableArray * clients;                        //@synthesize clients=_clients - In the implementation block
@property (retain) NSDictionary * defaults;                         //@synthesize defaults=_defaults - In the implementation block
@property (assign) BOOL reportingEnabled;                           //@synthesize reportingEnabled=_reportingEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)findReportingSessionForID:(long long)arg1 ;
-(BOOL)reportingEnabled;
-(void)setReportingEnabled:(BOOL)arg1 ;
-(void)listenForDefaultsNotification;
-(id)CAReportingDefaults;
-(id)init;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(NSXPCListener *)listener;
-(void)setListener:(NSXPCListener *)arg1 ;
-(void)startListening;
-(void)setDefaults:(NSDictionary *)arg1 ;
-(void)setClients:(NSMutableArray *)arg1 ;
-(NSDictionary *)defaults;
-(NSMutableArray *)clients;
@end

