/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDAccessory.h>
#import <libobjc.A.dylib/HMFLogging.h>

@class HMDMediaAccessoryAdvertisement, HMDMediaProfile, NSString;

@interface HMDMediaAccessory : HMDAccessory <HMFLogging> {

	HMDMediaAccessoryAdvertisement* _advertisement;
	HMDMediaProfile* _mediaProfile;

}

@property (copy,readonly) HMDMediaAccessoryAdvertisement * advertisement;              //@synthesize advertisement=_advertisement - In the implementation block
@property (readonly) HMDMediaProfile * mediaProfile;                                   //@synthesize mediaProfile=_mediaProfile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)computedNameForCategoryType:(id)arg1 inRoom:(id)arg2 ;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)name;
-(id)url;
-(id)dumpState;
-(void)_registerForMessages;
-(void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3 ;
-(HMDMediaProfile *)mediaProfile;
-(void)configure:(id)arg1 msgDispatcher:(id)arg2 accessoryConfigureGroup:(id)arg3 ;
-(long long)reachableTransports;
-(void)setRemotelyReachable:(BOOL)arg1 ;
-(id)transactionWithObjectChangeType:(unsigned long long)arg1 ;
-(id)initWithTransaction:(id)arg1 home:(id)arg2 ;
-(void)addAdvertisement:(id)arg1 ;
-(void)handleUpdatedMinimumUserPrivilege:(long long)arg1 ;
-(void)handleUpdatedPassword:(id)arg1 ;
-(void)removeAdvertisement:(id)arg1 ;
-(id)assistantObject;
-(BOOL)providesHashRouteID;
-(id)dumpSimpleState;
-(HMDMediaAccessoryAdvertisement *)advertisement;
-(void)setAdvertisement:(HMDMediaAccessoryAdvertisement *)arg1 ;
-(void)handleRoomNameChanged:(id)arg1 ;
-(void)handleUpdatedAdvertisement:(id)arg1 ;
-(void)notifyConnectivityChangedWithReachabilityState:(BOOL)arg1 ;
@end

