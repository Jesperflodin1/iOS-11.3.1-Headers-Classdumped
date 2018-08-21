/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NACXPCInterface.h>

@protocol OS_dispatch_queue;
@class NSXPCConnection, NSObject, NSMutableSet, NSString;

@interface NACXPCClient : NSObject <NACXPCInterface> {

	NSXPCConnection* _xpcConnection;
	NSObject*<OS_dispatch_queue> _xpcConnectionQueue;
	NSMutableSet* _routeObservingCategories;
	NSMutableSet* _volumeObservingTargets;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedClient;
-(id)init;
-(id)_proxy;
-(void)_createConnection;
-(void)beginObservingVolumeForTarget:(id)arg1 ;
-(void)beginObservingAudioRoutesForCategory:(id)arg1 ;
-(void)endObservingVolumeForTarget:(id)arg1 ;
-(void)volumeValueForTarget:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeControlAvailabilityForTarget:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)mutedStateForTarget:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)hapticIntensity:(/*^block*/id)arg1 ;
-(void)prominentHapticEnabled:(/*^block*/id)arg1 ;
-(void)systemMutedState:(/*^block*/id)arg1 ;
-(void)EULimitForTarget:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)volumeWarningForTarget:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)setVolumeValue:(float)arg1 target:(id)arg2 ;
-(void)setMuted:(BOOL)arg1 target:(id)arg2 ;
-(void)setHapticIntensity:(float)arg1 ;
-(void)setProminentHapticEnabled:(BOOL)arg1 ;
-(void)setSystemMuted:(BOOL)arg1 ;
-(void)audioRoutesForCategory:(id)arg1 result:(/*^block*/id)arg2 ;
-(void)endObservingAudioRoutesForCategory:(id)arg1 ;
-(void)pickAudioRouteWithIdentifier:(id)arg1 category:(id)arg2 ;
-(void)playAudioAndHapticPreview;
-(void)playProminentHapticPreview;
-(void)_resumeVolumeObservingIfNecessary;
-(void)_resumeRouteObservingIfNecessary;
@end

