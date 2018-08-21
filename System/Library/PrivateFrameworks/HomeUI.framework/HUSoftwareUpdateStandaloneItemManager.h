/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFHomeObserver.h>

@class HFItem, HUSoftwareUpdateFetchItem, HUSoftwareUpdateItemModule, NAFuture, HMHome, NSString;

@interface HUSoftwareUpdateStandaloneItemManager : HFItemManager <HFHomeObserver> {

	HFItem* _autoUpdateItem;
	HUSoftwareUpdateFetchItem* _fetchItem;
	HUSoftwareUpdateItemModule* _softwareUpdateModule;
	NAFuture* _softwareUpdateFetchFuture;
	HMHome* _overrideHome;

}

@property (nonatomic,retain) HFItem * autoUpdateItem;                                        //@synthesize autoUpdateItem=_autoUpdateItem - In the implementation block
@property (nonatomic,retain) HMHome * overrideHome;                                          //@synthesize overrideHome=_overrideHome - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateFetchItem * fetchItem;                          //@synthesize fetchItem=_fetchItem - In the implementation block
@property (nonatomic,retain) HUSoftwareUpdateItemModule * softwareUpdateModule;              //@synthesize softwareUpdateModule=_softwareUpdateModule - In the implementation block
@property (nonatomic,retain) NAFuture * softwareUpdateFetchFuture;                           //@synthesize softwareUpdateFetchFuture=_softwareUpdateFetchFuture - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_homeFuture;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(void)home:(id)arg1 didUpdateAutomaticSoftwareUpdateEnabled:(BOOL)arg2 ;
-(id)initWithDelegate:(id)arg1 home:(id)arg2 ;
-(HUSoftwareUpdateItemModule *)softwareUpdateModule;
-(void)setSoftwareUpdateModule:(HUSoftwareUpdateItemModule *)arg1 ;
-(HFItem *)autoUpdateItem;
-(HUSoftwareUpdateFetchItem *)fetchItem;
-(NAFuture *)softwareUpdateFetchFuture;
-(id)triggerSoftwareUpdateFetch;
-(void)setSoftwareUpdateFetchFuture:(NAFuture *)arg1 ;
-(HMHome *)overrideHome;
-(void)setAutoUpdateItem:(HFItem *)arg1 ;
-(void)setFetchItem:(HUSoftwareUpdateFetchItem *)arg1 ;
-(void)setOverrideHome:(HMHome *)arg1 ;
@end

