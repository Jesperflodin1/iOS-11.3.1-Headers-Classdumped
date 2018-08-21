/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXHearingSupport.framework/AXHearingSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXHearingSupport/AXIDCControllerBrowserDelegateProtocol.h>

@class AXHADispatchTimer, NSString, NSDictionary;

@interface AXHAController : NSObject <AXIDCControllerBrowserDelegateProtocol> {

	BOOL _isListening;
	AXHADispatchTimer* _liveListenLevelsTimer;
	NSString* _pairedDeviceUUID;
	NSDictionary* _availableDevicesDescription;

}

@property (nonatomic,retain) NSString * pairedDeviceUUID;                             //@synthesize pairedDeviceUUID=_pairedDeviceUUID - In the implementation block
@property (nonatomic,retain) NSDictionary * availableDevicesDescription;              //@synthesize availableDevicesDescription=_availableDevicesDescription - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(void)willSwitchUser;
-(void)availableRemoteControllersDidChange;
-(id)registerForAvailableDevicesUpdates:(id)arg1 ;
-(id)registerForDeviceUpdates:(id)arg1 ;
-(id)readDeviceProperty:(id)arg1 ;
-(id)writeDeviceProperty:(id)arg1 ;
-(id)readAvailableDevices:(id)arg1 ;
-(id)toggleLiveListen:(id)arg1 ;
-(id)registerForLiveListenUpdates:(id)arg1 ;
-(id)readAvailableControllers:(id)arg1 ;
-(id)connectToControllerWithID:(id)arg1 ;
-(id)disconnectAndForceSlave:(id)arg1 ;
-(NSString *)pairedDeviceUUID;
-(void)setListenForAvailableDeviceUpdates:(BOOL)arg1 ;
-(void)passConnectionToController:(id)arg1 withReason:(long long)arg2 ;
-(void)connectToPairedDevice;
-(id)currentDeviceController;
-(void)setPairedHearingAid:(id)arg1 ;
-(void)startSearchCycle;
-(BOOL)hearingAidsPaired;
-(void)trustChainAvailabilityDidChange:(id)arg1 ;
-(void)setPairedDeviceUUID:(NSString *)arg1 ;
-(void)setAvailableDevicesDescription:(NSDictionary *)arg1 ;
-(id)liveListenController;
-(void)readLiveListenLevels;
-(NSDictionary *)availableDevicesDescription;
-(void)sendUpdatesForProperties:(id)arg1 excludingClient:(id)arg2 ;
@end

