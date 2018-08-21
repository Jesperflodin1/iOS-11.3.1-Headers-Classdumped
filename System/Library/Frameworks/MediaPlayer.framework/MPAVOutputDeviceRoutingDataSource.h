/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPAVRoutingDataSource.h>

@protocol OS_dispatch_queue;
@class NSObject, NSError, NSArray, MPAVEndpointRoute, NSString;

@interface MPAVOutputDeviceRoutingDataSource : MPAVRoutingDataSource {

	NSObject*<OS_dispatch_queue> _serialQueue;
	void* _applicationOutputContext;
	NSError* _applicationOutputContextCreationError;
	BOOL _attemptedToInitializeAppOutputContext;
	void* _discoverySession;
	void* _callbackToken;
	BOOL _supportsMultipleSelection;
	BOOL _devicePresenceDetected;
	NSArray* _outputDeviceRoutes;
	MPAVEndpointRoute* _endpointRoute;

}

@property (nonatomic,copy) NSString * routingContextUID; 
@property (nonatomic,retain) MPAVEndpointRoute * endpointRoute;              //@synthesize endpointRoute=_endpointRoute - In the implementation block
+(id)_globalAudioSessionLock;
-(id)init;
-(void)dealloc;
-(void)_registerNotifications;
-(void)_unregisterNotifications;
-(void)setDiscoveryMode:(long long)arg1 ;
-(NSString *)routingContextUID;
-(void)setRoutingContextUID:(NSString *)arg1 ;
-(void)getRoutesForCategory:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(BOOL)routeIsLeaderOfEndpoint:(id)arg1 ;
-(void)setPickedRoute:(id)arg1 withPassword:(id)arg2 completion:(/*^block*/id)arg3 ;
-(BOOL)supportsMultipleSelection;
-(void)addRouteToGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeRouteFromGroup:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)_routeStatusDidChangeNotification:(id)arg1 ;
-(MPAVEndpointRoute *)endpointRoute;
-(void)setEndpointRoute:(MPAVEndpointRoute *)arg1 ;
-(void)_outputDevicesDidChange:(id)arg1 ;
-(void*)_copyApplicationOutputContext:(id*)arg1 ;
-(id)_outputDeviceRouteWithUID:(id)arg1 ;
-(void*)_createDefaultApplicationOutputContext:(id*)arg1 outAudioSessionID:(unsigned*)arg2 ;
-(void)_outputDevicesDidChangeNotification:(id)arg1 ;
-(void)_endpointsDidChangeNotification:(id)arg1 ;
-(long long)discoveryMode;
-(BOOL)devicePresenceDetected;
@end
