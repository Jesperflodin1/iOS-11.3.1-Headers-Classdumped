/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyNotification.framework/FamilyNotification
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/FAFamilyNotifierRemoteObjectProtocol.h>
#import <libobjc.A.dylib/NSXPCListenerDelegate.h>

@protocol FAFamilyNotificationDelegate;
@class NSXPCConnection, NSLock, NSXPCListener, NSString;

@interface FAFamilyNotifier : NSObject <FAFamilyNotifierRemoteObjectProtocol, NSXPCListenerDelegate> {

	NSXPCConnection* _conn;
	NSLock* _connLock;
	NSXPCListener* _listener;
	NSString* _identifier;
	NSString* _serviceName;
	id<FAFamilyNotificationDelegate> _delegate;

}

@property (readonly) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * serviceName;                               //@synthesize serviceName=_serviceName - In the implementation block
@property (__weak) id<FAFamilyNotificationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<FAFamilyNotificationDelegate>)delegate;
-(void)setDelegate:(id<FAFamilyNotificationDelegate>)arg1 ;
-(NSString *)identifier;
-(NSString *)serviceName;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(void)removeAllNotifications;
-(void)removeNotificationWithIdentifier:(id)arg1 ;
-(id)agentConnection;
-(id)_pendingNotificationsWithClientIdentifier:(id)arg1 ;
-(void)_agentConnectionWasInterrupted;
-(void)_agentConnectionWasInvalidated;
-(void)_agentConnectionFailedToBootstrap;
-(void)didActivateNotification:(id)arg1 ;
-(void)didDismissNotification:(id)arg1 ;
-(void)didClearNotification:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 machServiceName:(id)arg2 ;
-(void)deliverNotification:(id)arg1 ;
-(id)pendingNotifications;
-(id)_pendingNotificationsForAllClients;
@end

