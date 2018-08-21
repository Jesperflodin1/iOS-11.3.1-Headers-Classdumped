/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NRDevicePropertyObserver.h>
#import <libobjc.A.dylib/SYStateLoggable.h>

@class NRDevice, NSUUID, NSString, NSDate, PBCodable;

@interface SYDevice : NSObject <NRDevicePropertyObserver, SYStateLoggable> {

	NRDevice* _nrDevice;
	NSUUID* _pairingID;
	NSString* _pairingStorePath;
	NSString* _deviceClass;
	NSString* _systemVersion;
	NSString* _systemBuildVersion;
	NSDate* _lastActiveDate;
	BOOL _hasCachedNearby;
	BOOL _cachedIsNearby;
	long long _state;

}

@property (nonatomic,readonly) NRDevice * nrDevice;                               //@synthesize nrDevice=_nrDevice - In the implementation block
@property (assign,nonatomic) long long state;                                     //@synthesize state=_state - In the implementation block
@property (getter=isTargetable,nonatomic,readonly) BOOL targetable; 
@property (getter=isPaired,nonatomic,readonly) BOOL paired; 
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,copy,readonly) NSString * pairingStorePath;                  //@synthesize pairingStorePath=_pairingStorePath - In the implementation block
@property (nonatomic,readonly) NSUUID * pairingID;                                //@synthesize pairingID=_pairingID - In the implementation block
@property (nonatomic,readonly) long long deviceCode; 
@property (nonatomic,readonly) NSString * deviceClass;                            //@synthesize deviceClass=_deviceClass - In the implementation block
@property (nonatomic,readonly) NSString * systemVersion;                          //@synthesize systemVersion=_systemVersion - In the implementation block
@property (nonatomic,readonly) NSString * systemBuildVersion;                     //@synthesize systemBuildVersion=_systemBuildVersion - In the implementation block
@property (nonatomic,readonly) NSDate * lastActiveDate;                           //@synthesize lastActiveDate=_lastActiveDate - In the implementation block
@property (nonatomic,readonly) BOOL supportsFileTransferMessageSend; 
@property (assign,nonatomic) BOOL hasCachedNearby;                                //@synthesize hasCachedNearby=_hasCachedNearby - In the implementation block
@property (assign,nonatomic) BOOL cachedIsNearby;                                 //@synthesize cachedIsNearby=_cachedIsNearby - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) PBCodable * stateForLogging; 
+(id)targetableDevice;
+(id)knownDevices;
+(id)deviceForNRDevice:(id)arg1 ;
+(id)deviceForIDSDeviceID:(id)arg1 fromList:(id)arg2 ;
+(id)deviceForIDSDevice:(id)arg1 ;
-(NSString *)deviceClass;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(NSString *)debugDescription;
-(long long)state;
-(BOOL)isActive;
-(void)setState:(long long)arg1 ;
-(NSString *)systemVersion;
-(NSString *)systemBuildVersion;
-(NSUUID *)pairingID;
-(PBCodable *)stateForLogging;
-(BOOL)isTargetable;
-(BOOL)supportsFileTransferMessageSend;
-(id)initWithNRDevice:(id)arg1 ;
-(NRDevice *)nrDevice;
-(void)_updateStateFlagsPostingNotifications:(BOOL)arg1 ;
-(void)_updateCachedStateForProperty:(id)arg1 ;
-(long long)deviceCode;
-(id)findMatchingIDSDeviceFromList:(id)arg1 ;
-(NSDate *)lastActiveDate;
-(BOOL)hasCachedNearby;
-(void)setHasCachedNearby:(BOOL)arg1 ;
-(BOOL)cachedIsNearby;
-(void)setCachedIsNearby:(BOOL)arg1 ;
-(NSString *)pairingStorePath;
-(void)device:(id)arg1 propertyDidChange:(id)arg2 fromValue:(id)arg3 ;
-(BOOL)isPaired;
@end

