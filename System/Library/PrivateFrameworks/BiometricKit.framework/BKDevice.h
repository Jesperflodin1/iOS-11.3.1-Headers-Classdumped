/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BiometricKit/BiometricKitDelegateXpcProtocol.h>

@class BiometricKitXPCClient, BKDeviceDescriptor, NSString;

@interface BKDevice : NSObject <BiometricKitDelegateXpcProtocol> {

	BiometricKitXPCClient* _xpcClient;
	BKDeviceDescriptor* _descriptor;

}

@property (nonatomic,retain) BKDeviceDescriptor * descriptor;              //@synthesize descriptor=_descriptor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)deviceAvailableWithError:(id*)arg1 ;
+(BOOL)lockoutState:(long long*)arg1 fromDeviceLockoutState:(int)arg2 error:(id*)arg3 ;
+(BOOL)biometryAvailabilityInfo:(long long*)arg1 fromDeviceInfo:(long long)arg2 error:(id*)arg3 ;
+(id)deviceWithDescriptor:(id)arg1 error:(id*)arg2 ;
-(void)dealloc;
-(void)setDescriptor:(BKDeviceDescriptor *)arg1 ;
-(BKDeviceDescriptor *)descriptor;
-(BOOL)setProtectedConfiguration:(id)arg1 forUser:(unsigned)arg2 credentialSet:(id)arg3 error:(id*)arg4 ;
-(id)protectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)bioLockoutState:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(id)createEnrollOperationWithError:(id*)arg1 ;
-(id)identitiesWithError:(id*)arg1 ;
-(id)createMatchOperationWithError:(id*)arg1 ;
-(id)createPresenceDetectOperationWithError:(id*)arg1 ;
-(id)effectiveProtectedConfigurationForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)systemProtectedConfigurationWithError:(id*)arg1 ;
-(BOOL)setSystemProtectedConfiguration:(id)arg1 credentialSet:(id)arg2 error:(id*)arg3 ;
-(id)identitiesDatabaseUUIDForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identitiesDatabaseHashForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)dropAllUnlockTokensWithError:(id*)arg1 ;
-(BOOL)forceBioLockoutForAllUsersWithError:(id*)arg1 ;
-(BOOL)forceBioLockoutForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identityForUUID:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeIdentity:(id)arg1 error:(id*)arg2 ;
-(BOOL)removeAllIdentitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)identitiesForUser:(unsigned)arg1 error:(id*)arg2 ;
-(id)maxIdentityCountWithError:(id*)arg1 ;
-(id)freeIdentityCountForUser:(unsigned)arg1 error:(id*)arg2 ;
-(BOOL)biometryAvailability:(long long*)arg1 forUser:(unsigned)arg2 error:(id*)arg3 ;
-(BOOL)forceBioLockoutIfLockedForUser:(unsigned)arg1 error:(id*)arg2 ;
-(void)enrollResult:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2 ;
-(void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2 ;
-(void)matchResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)statusMessage:(unsigned)arg1 client:(unsigned long long)arg2 ;
-(void)homeButtonPressed:(unsigned long long)arg1 ;
-(void)touchIDButtonPressed:(BOOL)arg1 client:(unsigned long long)arg2 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3 ;
-(void)taskResumeStatus:(int)arg1 client:(unsigned long long)arg2 ;
-(BOOL)isDelegate;
@end

