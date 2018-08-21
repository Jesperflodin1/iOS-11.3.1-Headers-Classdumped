/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/LocalAuthentication.framework/Support/ModulePlugins/ModuleACM.bundle/ModuleACM
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ModuleACM/ModuleACM-Structs.h>
#import <ModuleBase/MechanismManager.h>

@interface MechanismManagerACM : MechanismManager
+(id)sharedInstance;
-(void)mechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)mechanismForApplicationPasswordMode:(long long)arg1 acmContextRecord:(id)arg2 options:(id)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 reply:(/*^block*/id)arg7 ;
-(void)_mechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 uiDelegate:(id)arg5 originator:(id)arg6 reply:(/*^block*/id)arg7 ;
-(id)_nonUiMechanismForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 state:(unsigned*)arg5 error:(id*)arg6 ;
-(id)_loadACMMechanismFromPlugin:(long long)arg1 acmContextRecord:(id)arg2 internalInfo:(id)arg3 error:(id*)arg4 ;
-(id)_restrictedNonUiMechanism:(id)arg1 availabilityEvents:(id*)arg2 policy:(long long)arg3 purpose:(long long)arg4 internalInfo:(id)arg5 ;
-(id)_buildUiForMechanism:(id)arg1 policy:(long long)arg2 internalInfo:(id)arg3 uiDelegate:(id)arg4 originator:(id)arg5 error:(id*)arg6 ;
-(unsigned)_acmPurposeForPolicy:(long long)arg1 ;
-(id)_biometryModeForPolicy:(long long)arg1 ;
-(id)_nonUiSubmechanismsForACMRequirement:(const ACMRequirementRef)arg1 acmContextRecord:(id)arg2 policy:(long long)arg3 internalInfo:(id)arg4 requiredCount:(long long*)arg5 error:(id*)arg6 ;
-(id)_preferedError:(id)arg1 ;
@end

