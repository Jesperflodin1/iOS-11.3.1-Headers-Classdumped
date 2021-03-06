/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>

@class HUPersonalRequestsDevicesItemModule, HMHome, HFStaticItemProvider, HFUserItem, HMAssistantAccessControl, HMUser;

@interface HUPersonalRequestsEditorItemManager : HFItemManager {

	HUPersonalRequestsDevicesItemModule* _prDevicesModule;
	HMHome* _homeForUser;
	HFStaticItemProvider* _staticItemProvider;

}

@property (nonatomic,retain) HUPersonalRequestsDevicesItemModule * prDevicesModule;                     //@synthesize prDevicesModule=_prDevicesModule - In the implementation block
@property (nonatomic,readonly) HMHome * homeForUser;                                                    //@synthesize homeForUser=_homeForUser - In the implementation block
@property (nonatomic,readonly) HFStaticItemProvider * staticItemProvider;                               //@synthesize staticItemProvider=_staticItemProvider - In the implementation block
@property (nonatomic,retain) HFUserItem * sourceItem; 
@property (nonatomic,readonly) HMAssistantAccessControl * accessControl; 
@property (nonatomic,readonly) HMUser * user; 
@property (assign,nonatomic) unsigned long long personalRequestsAuthenticationRequirement; 
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HMHome *)homeForUser;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(HMAssistantAccessControl *)accessControl;
-(id)_commitUpdateToAccessControl:(id)arg1 ;
-(unsigned long long)personalRequestsAuthenticationRequirement;
-(id)initWithDelegate:(id)arg1 userItem:(id)arg2 ;
-(HUPersonalRequestsDevicesItemModule *)prDevicesModule;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(BOOL)_arePersonalRequestsEnabled;
-(void)setPersonalRequestsAuthenticationRequirement:(unsigned long long)arg1 ;
-(void)setPrDevicesModule:(HUPersonalRequestsDevicesItemModule *)arg1 ;
-(HFStaticItemProvider *)staticItemProvider;
-(HMUser *)user;
@end

