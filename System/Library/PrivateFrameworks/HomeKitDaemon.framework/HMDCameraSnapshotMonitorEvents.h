/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFTimerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, HMFMessageDispatcher, NSUUID, HMDCameraSnapshotManager, NSMutableSet, HMDAccessory, NSString, HMDBulletinBoard, HMDNotificationRegistration, NSSet;

@interface HMDCameraSnapshotMonitorEvents : HMFObject <HMDHomeMessageReceiver, HMFLogging, HMFTimerDelegate> {

	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _msgDispatcher;
	NSUUID* _uniqueIdentifier;
	HMDCameraSnapshotManager* _snapshotManager;
	NSMutableSet* _snapShotNotificationResponseTimers;
	HMDAccessory* _accessory;
	NSString* _bulletinImagesDirectory;
	NSString* _logID;
	NSMutableSet* _characteristicsList;
	NSMutableSet* _monitoredCharacteristicsList;
	HMDBulletinBoard* _bulletinBoard;
	HMDNotificationRegistration* _notificationRegistration;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;                          //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * msgDispatcher;                                  //@synthesize msgDispatcher=_msgDispatcher - In the implementation block
@property (nonatomic,readonly) NSUUID * uniqueIdentifier;                                           //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
@property (nonatomic,__weak,readonly) HMDCameraSnapshotManager * snapshotManager;                   //@synthesize snapshotManager=_snapshotManager - In the implementation block
@property (nonatomic,retain) NSMutableSet * snapShotNotificationResponseTimers;                     //@synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * accessory;                                     //@synthesize accessory=_accessory - In the implementation block
@property (nonatomic,readonly) NSString * bulletinImagesDirectory;                                  //@synthesize bulletinImagesDirectory=_bulletinImagesDirectory - In the implementation block
@property (nonatomic,readonly) NSString * logID;                                                    //@synthesize logID=_logID - In the implementation block
@property (nonatomic,readonly) NSMutableSet * characteristicsList;                                  //@synthesize characteristicsList=_characteristicsList - In the implementation block
@property (nonatomic,readonly) NSMutableSet * monitoredCharacteristicsList;                         //@synthesize monitoredCharacteristicsList=_monitoredCharacteristicsList - In the implementation block
@property (nonatomic,readonly) HMDBulletinBoard * bulletinBoard;                                    //@synthesize bulletinBoard=_bulletinBoard - In the implementation block
@property (nonatomic,readonly) HMDNotificationRegistration * notificationRegistration;              //@synthesize notificationRegistration=_notificationRegistration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)dealloc;
-(NSUUID *)uniqueIdentifier;
-(HMFMessageDispatcher *)msgDispatcher;
-(void)setMsgDispatcher:(HMFMessageDispatcher *)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(HMDAccessory *)accessory;
-(void)timerDidFire:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)registerForMessages;
-(void)monitorForEventsForServices:(id)arg1 ;
-(void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1 ;
-(NSString *)logID;
-(HMDNotificationRegistration *)notificationRegistration;
-(HMDBulletinBoard *)bulletinBoard;
-(void)handleAccessoryReachable:(id)arg1 ;
-(void)handleRemoteNotificationGenerated:(id)arg1 ;
-(void)_subscribeToNotifications;
-(void)_monitorForEventsForServices:(id)arg1 ;
-(void)_enableNotificationForCharacteristics:(id)arg1 newMonitoredCharacteristicsList:(id)arg2 ;
-(NSMutableSet *)characteristicsList;
-(NSMutableSet *)monitoredCharacteristicsList;
-(void)_characteristicsUpdated:(id)arg1 modifiedCharacteristics:(id)arg2 ;
-(HMDCameraSnapshotManager *)snapshotManager;
-(void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5 ;
-(NSMutableSet *)snapShotNotificationResponseTimers;
-(NSString *)bulletinImagesDirectory;
-(void)_sendReleaseSnapshot:(id)arg1 ;
-(void)_removeBulletins:(id)arg1 sessionID:(id)arg2 ;
-(void)processPostedBulletin:(id)arg1 responseTimer:(id)arg2 ;
-(void)_handleRemoteNotification:(id)arg1 ;
-(id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4 ;
-(void)setSnapShotNotificationResponseTimers:(NSMutableSet *)arg1 ;
@end

