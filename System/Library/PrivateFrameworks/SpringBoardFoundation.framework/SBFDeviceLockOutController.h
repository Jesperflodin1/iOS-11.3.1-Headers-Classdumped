/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BSDescriptionProviding.h>
#import <libobjc.A.dylib/SBFThermalConditionObserver.h>
#import <libobjc.A.dylib/SBFPrivateAuthenticationObserver.h>
#import <libobjc.A.dylib/SBFLockOutStatusProvider.h>

@protocol SBFThermalBlockProvider;
@class SBFUserAuthenticationController, NSString;

@interface SBFDeviceLockOutController : NSObject <BSDescriptionProviding, SBFThermalConditionObserver, SBFPrivateAuthenticationObserver, SBFLockOutStatusProvider> {

	id<SBFThermalBlockProvider> _thermalProvider;
	BOOL _lockedOutCached;
	SBFUserAuthenticationController* _authenticationController;

}

@property (setter=_setAuthenticationController:,getter=_authenticationController,nonatomic,retain) SBFUserAuthenticationController * authenticationController;              //@synthesize authenticationController=_authenticationController - In the implementation block
@property (setter=_setThermalProvider:,getter=_thermalProvider,nonatomic,retain) id<SBFThermalBlockProvider> thermalProvider;                                               //@synthesize thermalProvider=_thermalProvider - In the implementation block
@property (assign,setter=_setLockedOutCached:,getter=_isLockedOutCached,nonatomic) BOOL lockedOutCached;                                                                    //@synthesize lockedOutCached=_lockedOutCached - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSString *)description;
-(BOOL)isTemporarilyBlocked;
-(void)temporaryBlockStatusChanged;
-(BOOL)isPermanentlyBlocked;
-(double)timeIntervalUntilUnblockedSinceReferenceDate;
-(void)_noteLockedOutStateMayHaveChanged:(BOOL)arg1 ;
-(BOOL)isLockedOut;
-(BOOL)isThermallyBlocked;
-(unsigned long long)deviceBlockStatus;
-(void)_noteLockedOutReasonsMayHaveChanged;
-(void)thermalBlockStatusChanged:(id)arg1 ;
-(id)initWithThermalController:(id)arg1 authenticationController:(id)arg2 ;
-(void)_setAuthenticationController:(id)arg1 ;
-(id)_thermalProvider;
-(void)_setThermalProvider:(id)arg1 ;
-(BOOL)_isLockedOutCached;
-(void)_setLockedOutCached:(BOOL)arg1 ;
-(id)_authenticationController;
-(BOOL)isBlocked;
-(id)succinctDescription;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

