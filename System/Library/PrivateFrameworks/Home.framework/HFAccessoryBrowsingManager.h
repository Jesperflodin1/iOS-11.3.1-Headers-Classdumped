/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HMAccessoryBrowserDelegate.h>

@class HMAccessoryBrowser, SFDeviceDiscovery, NSHashTable, NSMutableSet, NSArray, NSString;

@interface HFAccessoryBrowsingManager : NSObject <HMAccessoryBrowserDelegate> {

	HMAccessoryBrowser* _accessoryBrowser;
	SFDeviceDiscovery* _sharingDeviceBrowser;
	NSHashTable* _observers;
	NSMutableSet* _mutableDiscoveredSharingDevices;

}

@property (nonatomic,retain) HMAccessoryBrowser * accessoryBrowser;                       //@synthesize accessoryBrowser=_accessoryBrowser - In the implementation block
@property (nonatomic,retain) SFDeviceDiscovery * sharingDeviceBrowser;                    //@synthesize sharingDeviceBrowser=_sharingDeviceBrowser - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                     //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) NSMutableSet * mutableDiscoveredSharingDevices;              //@synthesize mutableDiscoveredSharingDevices=_mutableDiscoveredSharingDevices - In the implementation block
@property (nonatomic,readonly) NSArray * discoveredHMAccessories; 
@property (nonatomic,readonly) NSArray * discoveredSharingDevices; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)setMutableDiscoveredSharingDevices:(NSMutableSet *)arg1 ;
-(void)setSharingDeviceBrowser:(SFDeviceDiscovery *)arg1 ;
-(SFDeviceDiscovery *)sharingDeviceBrowser;
-(NSMutableSet *)mutableDiscoveredSharingDevices;
-(void)startSearchingForNewAccessories;
-(void)stopSearchingForNewAccessories;
-(void)accessoryBrowser:(id)arg1 didFindNewAccessory:(id)arg2 ;
-(void)accessoryBrowser:(id)arg1 didRemoveNewAccessory:(id)arg2 ;
-(NSArray *)discoveredHMAccessories;
-(NSArray *)discoveredSharingDevices;
-(void)addBrowsingObserver:(id)arg1 ;
-(void)removeBrowsingObserver:(id)arg1 ;
-(void)setAccessoryBrowser:(HMAccessoryBrowser *)arg1 ;
-(HMAccessoryBrowser *)accessoryBrowser;
@end

