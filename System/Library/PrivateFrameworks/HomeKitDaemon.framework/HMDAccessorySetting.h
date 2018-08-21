/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HomeKitDaemon-Structs.h>
#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMDBackingStoreObjectProtocol.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateDelegate.h>
#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMDAccessorySettingUpdateProtocol.h>
#import <libobjc.A.dylib/HMDAccessorySettingProtocol.h>
#import <libobjc.A.dylib/HMDHomeMessageReceiver.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol OS_dispatch_queue;
@class NSString, NSArray, NSMutableArray, NSUUID, HMDAccessorySettingGroup, HMDAccessorySettingUpdateBase, NSObject, HMFMessageDispatcher, HMDAccessorySettingContainer, HMFMessageDestination, HMDAccessorySettingModel, NSSet;

@interface HMDAccessorySetting : HMFObject <HMDBackingStoreObjectProtocol, HMDAccessorySettingUpdateDelegate, HMFLogging, HMDAccessorySettingUpdateProtocol, HMDAccessorySettingProtocol, HMDHomeMessageReceiver, NSSecureCoding> {

	id _value;
	NSString* _name;
	long long _type;
	NSMutableArray* _constraints;
	unsigned long long _configurationVersion;
	HMDAccessorySetting* _mediaSystemSetting;
	NSUUID* _identifier;
	HMDAccessorySettingGroup* _group;
	unsigned long long _properties;
	HMDAccessorySettingUpdateBase* _updateSetting;
	NSObject*<OS_dispatch_queue> _clientQueue;
	NSObject*<OS_dispatch_queue> _propertyQueue;
	HMFMessageDispatcher* _messageDispatcher;
	HMDAccessorySettingContainer* _container;
	HMFMessageDestination* _messageDestination;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> clientQueue;                      //@synthesize clientQueue=_clientQueue - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> propertyQueue;                              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) HMFMessageDispatcher * messageDispatcher;                        //@synthesize messageDispatcher=_messageDispatcher - In the implementation block
@property (readonly) HMDAccessorySettingModel * model; 
@property (copy,readonly) NSArray * models; 
@property (nonatomic,retain) HMDAccessorySettingContainer * container;                        //@synthesize container=_container - In the implementation block
@property (assign,nonatomic) unsigned long long configurationVersion;                         //@synthesize configurationVersion=_configurationVersion - In the implementation block
@property (nonatomic,retain) HMFMessageDestination * messageDestination;                      //@synthesize messageDestination=_messageDestination - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (__weak) HMDAccessorySettingGroup * group;                                          //@synthesize group=_group - In the implementation block
@property (readonly) unsigned long long properties;                                           //@synthesize properties=_properties - In the implementation block
@property (__weak) HMDAccessorySetting * mediaSystemSetting;                                  //@synthesize mediaSystemSetting=_mediaSystemSetting - In the implementation block
@property (nonatomic,retain) HMDAccessorySettingUpdateBase * updateSetting;                   //@synthesize updateSetting=_updateSetting - In the implementation block
@property (readonly) NSString * keyPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) long long type; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSArray * constraints; 
@property (copy,readonly) id value; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
@property (copy,readonly) NSSet * messageReceiverChildren; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(BOOL)hasMessageReceiverChildren;
+(id)supportedValueClasses;
+(id)supportedConstraintClasses;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)name;
-(NSUUID *)identifier;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(HMDAccessorySettingContainer *)container;
-(void)setValue:(id)arg1 ;
-(NSString *)keyPath;
-(id)value;
-(NSArray *)constraints;
-(void)setContainer:(HMDAccessorySettingContainer *)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(HMDAccessorySettingModel *)model;
-(void)setGroup:(HMDAccessorySettingGroup *)arg1 ;
-(HMDAccessorySettingGroup *)group;
-(unsigned long long)properties;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(id)logIdentifier;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(void)transactionObjectRemoved:(id)arg1 message:(id)arg2 ;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(void)setMessageDispatcher:(HMFMessageDispatcher *)arg1 ;
-(HMFMessageDispatcher *)messageDispatcher;
-(NSObject*<OS_dispatch_queue>)clientQueue;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(void)registerForMessages;
-(unsigned long long)configurationVersion;
-(void)setConfigurationVersion:(unsigned long long)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(HMFMessageDestination *)messageDestination;
-(void)settingUpdate:(id)arg1 didCompleteWithError:(id)arg2 ;
-(id)initWithModel:(id)arg1 ;
-(BOOL)compareConstraints:(id)arg1 ;
-(void)updateMediaSystemSettings:(id)arg1 ;
-(void)_fixupAccessorySetting;
-(void)fixupAccessorySetting;
-(id)__init;
-(void)configureWithContainer:(id)arg1 messageDispatcher:(id)arg2 ;
-(NSArray *)models;
-(id)remoteMessageDestination:(id)arg1 ;
-(void)_relayRequestMessage:(id)arg1 targetAccessory:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(HMDAccessorySetting *)mediaSystemSetting;
-(void)handleUpdateValue:(id)arg1 ;
-(id)valueUpdateNotificationWithMessage:(id)arg1 ;
-(id)modelsForConstraintsUpdate:(id)arg1 ;
-(void)setMediaSystemSetting:(HMDAccessorySetting *)arg1 ;
-(void)sendReflectedNotification:(BOOL)arg1 ;
-(void)_handleUpdateValue:(id)arg1 ;
-(void)_handleAddConstraint:(id)arg1 ;
-(void)_handleRemoveConstraint:(id)arg1 ;
-(void)_handleReplaceConstraints:(id)arg1 ;
-(void)_handleUpdatedConstraints:(id)arg1 ;
-(id)constraintWithIdentifier:(id)arg1 ;
-(void)setUpdateSetting:(HMDAccessorySettingUpdateBase *)arg1 ;
-(HMDAccessorySettingUpdateBase *)updateSetting;
-(void)handleAddConstraint:(id)arg1 ;
-(void)handleRemoveConstraint:(id)arg1 ;
-(void)setMessageDestination:(HMFMessageDestination *)arg1 ;
-(BOOL)isValid:(id*)arg1 ;
@end

