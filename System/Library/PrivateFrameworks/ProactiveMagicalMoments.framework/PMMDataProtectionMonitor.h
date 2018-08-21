/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveMagicalMoments.framework/ProactiveMagicalMoments
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PMMDataProtectionMonitorDelegate;
#import <ProactiveMagicalMoments/ProactiveMagicalMoments-Structs.h>
@interface PMMDataProtectionMonitor : NSObject {

	id<PMMDataProtectionMonitorDelegate> _delegate;
	long long _encryptedDataAvailability;
	BOOL _unlockedSinceBoot;
	long long _dataProtectionStatus;
	opaque_pthread_rwlock_t _rwlock;

}

@property (assign,nonatomic,__weak) id<PMMDataProtectionMonitorDelegate> delegate; 
@property (nonatomic,readonly) long long encryptedDataAvailability; 
@property (nonatomic,readonly) BOOL unlockedSinceBoot; 
@property (nonatomic,readonly) long long dataProtectionStatus;                                  //@synthesize dataProtectionStatus=_dataProtectionStatus - In the implementation block
+(id)PMMDataProtectionMonitorLockStateToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorEncryptedDataAvailabilityToString:(long long)arg1 ;
+(id)PMMDataProtectionMonitorDataProtectionStatus:(long long)arg1 ;
-(id)init;
-(id<PMMDataProtectionMonitorDelegate>)delegate;
-(void)setDelegate:(id<PMMDataProtectionMonitorDelegate>)arg1 ;
-(void)dealloc;
-(void)_registerForKeyBagNotifications;
-(void)setDataProtectionStatus:(long long)arg1 ;
-(void)handkeKeybagLockStatusChange:(long long)arg1 ;
-(BOOL)dataProtectionEnabled;
-(long long)dataProtectionStatus;
-(void)setUnlockedSinceBoot:(BOOL)arg1 ;
-(long long)encryptedDataAvailability;
-(void)setEncryptedDataAvailability:(long long)arg1 ;
-(BOOL)unlockedSinceBoot;
-(void)handleUnlockedSinceBoot;
@end

