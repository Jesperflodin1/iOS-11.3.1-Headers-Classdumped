/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue;
@class NSUUID, HMDHomeManager, HMDAccountRegistry, HMDCentralMessageDispatcher, NSMutableArray, HMDResidentMeshMeshStorage, NSObject, HMFTimer, NSSet, NSString;

@interface HMDResidentMesh : HMFObject <HMFTimerDelegate, HMFMessageReceiver, HMFLogging> {

	NSUUID* _uuid;
	unsigned long long _broadcastRate;
	HMDHomeManager* _homeManager;
	HMDAccountRegistry* _accountRegistry;
	HMDCentralMessageDispatcher* _remoteMessageDispatcher;
	NSMutableArray* _residents;
	HMDResidentMeshMeshStorage* _resident;
	NSMutableArray* _reachableAccessories;
	NSObject*<OS_dispatch_queue> _workQueue;
	HMFTimer* _startupTimer;
	long long _startupTickCount;
	HMFTimer* _devicesChangedTimer;
	NSSet* _primaryResidentForHomes;

}

@property (assign,nonatomic,__weak) HMDHomeManager * homeManager;                                       //@synthesize homeManager=_homeManager - In the implementation block
@property (assign,nonatomic,__weak) HMDAccountRegistry * accountRegistry;                               //@synthesize accountRegistry=_accountRegistry - In the implementation block
@property (assign,nonatomic,__weak) HMDCentralMessageDispatcher * remoteMessageDispatcher;              //@synthesize remoteMessageDispatcher=_remoteMessageDispatcher - In the implementation block
@property (nonatomic,retain) NSMutableArray * residents;                                                //@synthesize residents=_residents - In the implementation block
@property (assign,nonatomic,__weak) HMDResidentMeshMeshStorage * resident;                              //@synthesize resident=_resident - In the implementation block
@property (nonatomic,retain) NSMutableArray * reachableAccessories;                                     //@synthesize reachableAccessories=_reachableAccessories - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> workQueue;                                    //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) HMFTimer * startupTimer;                                                 //@synthesize startupTimer=_startupTimer - In the implementation block
@property (assign,nonatomic) long long startupTickCount;                                                //@synthesize startupTickCount=_startupTickCount - In the implementation block
@property (nonatomic,readonly) HMFTimer * devicesChangedTimer;                                          //@synthesize devicesChangedTimer=_devicesChangedTimer - In the implementation block
@property (nonatomic,retain) NSSet * primaryResidentForHomes;                                           //@synthesize primaryResidentForHomes=_primaryResidentForHomes - In the implementation block
@property (nonatomic,retain) NSUUID * uuid;                                                             //@synthesize uuid=_uuid - In the implementation block
@property (assign) unsigned long long broadcastRate;                                                    //@synthesize broadcastRate=_broadcastRate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)dealloc;
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(HMDHomeManager *)homeManager;
-(id)dumpState;
-(void)setWorkQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(HMDResidentMeshMeshStorage *)resident;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)setHomeManager:(HMDHomeManager *)arg1 ;
-(void)timerDidFire:(id)arg1 ;
-(HMDAccountRegistry *)accountRegistry;
-(HMDCentralMessageDispatcher *)remoteMessageDispatcher;
-(id)messageDestination;
-(id)deviceForAccessory:(id)arg1 ;
-(NSMutableArray *)reachableAccessories;
-(void)setResident:(HMDResidentMeshMeshStorage *)arg1 ;
-(void)dumpDebug;
-(void)_sendMessage:(id)arg1 payload:(id)arg2 target:(id)arg3 responseHandler:(/*^block*/id)arg4 ;
-(id)_findDeviceInMesh:(id)arg1 ;
-(void)_buildResidentsWithElection:(id)arg1 device:(id)arg2 ;
-(void)__accessoryIsReachable:(id)arg1 ;
-(void)__accessoryIsNotReachable:(id)arg1 ;
-(void)__rebuildResidentsViaElection:(id)arg1 ;
-(void)__rebuildResidents:(id)arg1 ;
-(void)__deviceResidentChanged:(id)arg1 ;
-(void)__deviceIsNotReachable:(id)arg1 ;
-(void)__deviceIsReachable:(id)arg1 ;
-(void)_handleMeshUpdateRequestMessage:(id)arg1 ;
-(void)_handleMeshUpdateMessage:(id)arg1 ;
-(void)_addConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_removeConnectivityFromDeviceToAccessory:(id)arg1 activateTimer:(BOOL)arg2 ;
-(void)_deviceIsReachable:(id)arg1 ;
-(void)_deviceIsNotReachable:(id)arg1 ;
-(BOOL)_checkReachabilityWithTimerActivation:(BOOL)arg1 ;
-(HMFTimer *)startupTimer;
-(long long)startupTickCount;
-(void)setStartupTickCount:(long long)arg1 ;
-(HMFTimer *)devicesChangedTimer;
-(NSMutableArray *)residents;
-(void)setPrimaryResidentForHomes:(NSSet *)arg1 ;
-(id)_addDeviceInMesh:(id)arg1 ;
-(id)_addDeviceInResidents:(id)arg1 ;
-(NSSet *)primaryResidentForHomes;
-(id)_findDeviceInResidents:(id)arg1 ;
-(id)_findDeviceInMeshByUUID:(id)arg1 ;
-(id)_dumpState;
-(id)initWithHomeManager:(id)arg1 residentEnabled:(BOOL)arg2 ;
-(void)_flushWorkQueue;
-(void)_dumpDebug;
-(unsigned long long)broadcastRate;
-(void)setBroadcastRate:(unsigned long long)arg1 ;
-(void)setAccountRegistry:(HMDAccountRegistry *)arg1 ;
-(void)setRemoteMessageDispatcher:(HMDCentralMessageDispatcher *)arg1 ;
-(void)setResidents:(NSMutableArray *)arg1 ;
-(void)setReachableAccessories:(NSMutableArray *)arg1 ;
@end

