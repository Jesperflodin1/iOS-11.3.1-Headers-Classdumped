/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TUCallCapabilitiesXPCClient.h>

@protocol TUCallCapabilitiesXPCClient <NSObject>
@required
-(oneway void)capabilityStateUpdated:(id)arg1;

@end

#import <libobjc.A.dylib/TUCallCapabilitiesXPCServerActions.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, TUCallCapabilitiesState, NSString;

@interface TUCallCapabilitiesXPCClient : NSObject <TUCallCapabilitiesXPCClient, TUCallCapabilitiesXPCServerActions> {

	int _token;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _xpcConnection;
	TUCallCapabilitiesState* _state;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSXPCConnection * xpcConnection;                   //@synthesize xpcConnection=_xpcConnection - In the implementation block
@property (nonatomic,readonly) int token;                                       //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) TUCallCapabilitiesState * state;                   //@synthesize state=_state - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)callCapabilitiesServerXPCInterface;
+(id)callCapabilitiesClientXPCInterface;
+(id)asynchronousServer;
+(void)setAsynchronousServer:(id)arg1 ;
+(id)synchronousServer;
+(void)setSynchronousServer:(id)arg1 ;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(TUCallCapabilitiesState *)state;
-(void)setState:(TUCallCapabilitiesState *)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(int)token;
-(void)_updateState:(id)arg1 ;
-(oneway void)setWiFiCallingEnabled:(BOOL)arg1 ;
-(oneway void)setWiFiCallingRoamingEnabled:(BOOL)arg1 ;
-(oneway void)setVoLTECallingEnabled:(BOOL)arg1 ;
-(oneway void)setThumperCallingEnabled:(BOOL)arg1 ;
-(oneway void)setThumperCallingAllowed:(BOOL)arg1 onSecondaryDeviceWithID:(id)arg2 ;
-(oneway void)setThumperCallingAllowedOnDefaultPairedDevice:(BOOL)arg1 ;
-(oneway void)invalidateAndRefreshWiFiCallingProvisioningURL;
-(oneway void)invalidateAndRefreshThumperCallingProvisioningURL;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 ;
-(oneway void)setRelayCallingEnabled:(BOOL)arg1 forDeviceWithID:(id)arg2 ;
-(oneway void)requestPinFromPrimaryDevice;
-(oneway void)cancelPinRequestFromPrimaryDevice;
-(oneway void)endEmergencyCallbackMode;
-(void)_retrieveState;
-(id)asynchronousServer;
-(id)synchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(oneway void)capabilityStateUpdated:(id)arg1 ;
-(id)asynchronousServerWithErrorHandler:(/*^block*/id)arg1 ;
-(NSXPCConnection *)xpcConnection;
-(void)setXpcConnection:(NSXPCConnection *)arg1 ;
@end

