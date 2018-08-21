/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FrontBoard-Structs.h>
#import <FrontBoard/FBBundleInfo.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSURL, NSString, NSDictionary, NSArray, FBMutableApplicationDefaults, NSSet, NSNumber, FBProfileManager, FBApplicationDefaults;

@interface FBApplicationInfo : FBBundleInfo <BSDescriptionProviding> {

	NSURL* _executableURL;
	NSURL* _bundleContainerURL;
	NSURL* _dataContainerURL;
	NSURL* _sandboxURL;
	double _lastModifiedDate;
	NSString* _preferenceDomain;
	NSString* _signerIdentity;
	NSDictionary* _environmentVariables;
	NSDictionary* _lazy_entitlements;
	BOOL _provisioningProfileValidated;
	BOOL _isManaged;
	NSString* _sdkVersion;
	NSArray* _customMachServices;
	BOOL _hasViewServicesEntitlement;
	NSString* _appIDEntitlement;
	unsigned long long _type;
	NSArray* _requiredCapabilities;
	NSArray* _tags;
	NSArray* _deviceFamilies;
	BOOL _enabled;
	BOOL _newsstand;
	BOOL _restricted;
	BOOL _blocked;
	BOOL _beta;
	FBMutableApplicationDefaults* _defaults;
	NSSet* _backgroundModes;
	unsigned long long _supportedInterfaceOrientations;
	BOOL _exitsOnSuspend;
	BOOL _requiresPersistentWiFi;
	float _minimumBrightnessLevel;
	NSArray* _externalAccessoryProtocols;
	long long _ratingRank;
	NSNumber* _itemID;
	NSNumber* _purchaserDSID;
	NSNumber* _downloaderDSID;
	NSArray* _lazy_folderNames;
	NSString* _lazy_fallbackFolderName;
	BOOL _installing;
	BOOL _uninstalling;
	os_unfair_lock_s _lock;
	BOOL _initialized;
	FBProfileManager* _profileManager;
	BOOL _pendingUninstall;

}

@property (getter=_appIDEntitlement,nonatomic,copy,readonly) NSString * appIDEntitlement;                                      //@synthesize appIDEntitlement=_appIDEntitlement - In the implementation block
@property (assign,setter=_setInstalling:,getter=_isInstalling,nonatomic) BOOL installing;                                      //@synthesize installing=_installing - In the implementation block
@property (assign,setter=_setUninstalling:,getter=_isUninstalling,nonatomic) BOOL uninstalling;                                //@synthesize uninstalling=_uninstalling - In the implementation block
@property (assign,setter=_setPendingUninstall:,getter=_isPendingUninstall,nonatomic) BOOL pendingUninstall;                    //@synthesize pendingUninstall=_pendingUninstall - In the implementation block
@property (assign,setter=_setProfileManager:,getter=_profileManager,nonatomic) FBProfileManager * profileManager;              //@synthesize profileManager=_profileManager - In the implementation block
@property (getter=isEnabled,nonatomic,readonly) BOOL enabled;                                                                  //@synthesize enabled=_enabled - In the implementation block
@property (nonatomic,readonly) long long signatureState; 
@property (getter=hasFreeDeveloperProvisioningProfile,nonatomic,readonly) BOOL freeDeveloperProvisioningProfile; 
@property (getter=hasUniversalProvisioningProfile,nonatomic,readonly) BOOL universalProvisioningProfile; 
@property (nonatomic,retain,readonly) NSURL * executableURL;                                                                   //@synthesize executableURL=_executableURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * bundleContainerURL;                                                              //@synthesize bundleContainerURL=_bundleContainerURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * dataContainerURL;                                                                //@synthesize dataContainerURL=_dataContainerURL - In the implementation block
@property (nonatomic,retain,readonly) NSURL * sandboxURL;                                                                      //@synthesize sandboxURL=_sandboxURL - In the implementation block
@property (nonatomic,readonly) double lastModifiedDate;                                                                        //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * preferenceDomain;                                                               //@synthesize preferenceDomain=_preferenceDomain - In the implementation block
@property (nonatomic,copy,readonly) NSString * signerIdentity;                                                                 //@synthesize signerIdentity=_signerIdentity - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * environmentVariables;                                                     //@synthesize environmentVariables=_environmentVariables - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * entitlements; 
@property (nonatomic,readonly) BOOL hasViewServicesEntitlement;                                                                //@synthesize hasViewServicesEntitlement=_hasViewServicesEntitlement - In the implementation block
@property (getter=isProvisioningProfileValidated,nonatomic,readonly) BOOL provisioningProfileValidated;                        //@synthesize provisioningProfileValidated=_provisioningProfileValidated - In the implementation block
@property (getter=isNewsstand,nonatomic,readonly) BOOL newsstand;                                                              //@synthesize newsstand=_newsstand - In the implementation block
@property (nonatomic,retain,readonly) NSArray * tags;                                                                          //@synthesize tags=_tags - In the implementation block
@property (nonatomic,retain,readonly) NSArray * customMachServices;                                                            //@synthesize customMachServices=_customMachServices - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                                                                        //@synthesize type=_type - In the implementation block
@property (getter=isRestricted,nonatomic,readonly) BOOL restricted;                                                            //@synthesize restricted=_restricted - In the implementation block
@property (getter=isBlocked,nonatomic,readonly) BOOL blocked;                                                                  //@synthesize blocked=_blocked - In the implementation block
@property (nonatomic,retain,readonly) NSArray * requiredCapabilities;                                                          //@synthesize requiredCapabilities=_requiredCapabilities - In the implementation block
@property (nonatomic,retain,readonly) NSArray * deviceFamilies;                                                                //@synthesize deviceFamilies=_deviceFamilies - In the implementation block
@property (nonatomic,copy,readonly) NSString * sdkVersion;                                                                     //@synthesize sdkVersion=_sdkVersion - In the implementation block
@property (getter=isBeta,nonatomic,readonly) BOOL beta;                                                                        //@synthesize beta=_beta - In the implementation block
@property (nonatomic,retain,readonly) FBApplicationDefaults * defaults;                                                        //@synthesize defaults=_defaults - In the implementation block
@property (getter=isExitsOnSuspend,nonatomic,readonly) BOOL exitsOnSuspend;                                                    //@synthesize exitsOnSuspend=_exitsOnSuspend - In the implementation block
@property (nonatomic,readonly) BOOL requiresPersistentWiFi;                                                                    //@synthesize requiresPersistentWiFi=_requiresPersistentWiFi - In the implementation block
@property (nonatomic,readonly) float minimumBrightnessLevel;                                                                   //@synthesize minimumBrightnessLevel=_minimumBrightnessLevel - In the implementation block
@property (nonatomic,readonly) unsigned long long supportedInterfaceOrientations;                                              //@synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations - In the implementation block
@property (nonatomic,retain,readonly) NSArray * externalAccessoryProtocols;                                                    //@synthesize externalAccessoryProtocols=_externalAccessoryProtocols - In the implementation block
@property (nonatomic,readonly) long long ratingRank;                                                                           //@synthesize ratingRank=_ratingRank - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * itemID;                                                                       //@synthesize itemID=_itemID - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * purchaserDSID;                                                                //@synthesize purchaserDSID=_purchaserDSID - In the implementation block
@property (nonatomic,retain,readonly) NSNumber * downloaderDSID;                                                               //@synthesize downloaderDSID=_downloaderDSID - In the implementation block
@property (nonatomic,retain,readonly) NSArray * folderNames; 
@property (nonatomic,retain,readonly) NSString * fallbackFolderName; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)_applicationTypeForProxy:(id)arg1 ;
+(unsigned long long)_computeSupportedInterfaceOrientationsWithInfo:(id)arg1 forDefaults:(id)arg2 ;
+(id)_configureEnvironment:(id)arg1 withInfo:(id)arg2 isPreApex:(BOOL)arg3 ;
+(void)_buildDefaults:(id)arg1 fromInfo:(id)arg2 entitlements:(id)arg3 appType:(unsigned long long)arg4 isOnOrAfterOkemo:(BOOL)arg5 ;
+(id)_genreNameForID:(long long)arg1 ;
-(NSURL *)executableURL;
-(NSDictionary *)environmentVariables;
-(void)dealloc;
-(unsigned long long)supportedInterfaceOrientations;
-(unsigned long long)type;
-(BOOL)isEnabled;
-(NSURL *)dataContainerURL;
-(BOOL)isRestricted;
-(NSString *)signerIdentity;
-(NSNumber *)purchaserDSID;
-(NSURL *)bundleContainerURL;
-(BOOL)isNewsstand;
-(id)initWithApplicationProxy:(id)arg1 ;
-(double)lastModifiedDate;
-(long long)ratingRank;
-(NSArray *)requiredCapabilities;
-(BOOL)isBeta;
-(NSArray *)deviceFamilies;
-(BOOL)_isPendingUninstall;
-(void)_setPendingUninstall:(BOOL)arg1 ;
-(id)_initWithApplicationProxy:(id)arg1 ;
-(void)_setInstalling:(BOOL)arg1 ;
-(void)_setUninstalling:(BOOL)arg1 ;
-(id)_initWithBundleProxy:(id)arg1 overrideURL:(id)arg2 ;
-(id)_initWithBundleIdentifier:(id)arg1 url:(id)arg2 ;
-(BOOL)supportsBackgroundMode:(id)arg1 ;
-(BOOL)_isInstalling;
-(BOOL)_isUninstalling;
-(BOOL)hasViewServicesEntitlement;
-(BOOL)builtOnOrAfterSDKVersion:(id)arg1 ;
-(BOOL)isExitsOnSuspend;
-(NSArray *)customMachServices;
-(NSString *)sdkVersion;
-(NSNumber *)downloaderDSID;
-(void)_loadFromProxy:(id)arg1 ;
-(void)_synchronize:(/*^block*/id)arg1 ;
-(void)_lock_loadFolderNamesIfNecessary;
-(id)_applicationTrustData;
-(long long)_mapSignatureStateFromTrustState:(unsigned long long)arg1 ;
-(id)_initForProfileManagerTesting;
-(NSArray *)folderNames;
-(NSString *)fallbackFolderName;
-(BOOL)supportsInterfaceOrientation:(long long)arg1 ;
-(BOOL)supportsAllInterfaceOrientations;
-(BOOL)supportsDeviceFamily:(unsigned long long)arg1 ;
-(void)acceptApplicationSignatureIdentity;
-(BOOL)statusBarHiddenForInterfaceOrientation:(long long)arg1 onDisplay:(id)arg2 ;
-(long long)signatureState;
-(BOOL)hasFreeDeveloperProvisioningProfile;
-(BOOL)hasUniversalProvisioningProfile;
-(void)_overrideTags:(id)arg1 ;
-(NSURL *)sandboxURL;
-(NSString *)preferenceDomain;
-(BOOL)isProvisioningProfileValidated;
-(BOOL)requiresPersistentWiFi;
-(float)minimumBrightnessLevel;
-(NSArray *)externalAccessoryProtocols;
-(id)_appIDEntitlement;
-(id)_profileManager;
-(void)_setProfileManager:(id)arg1 ;
-(NSNumber *)itemID;
-(FBApplicationDefaults *)defaults;
-(NSDictionary *)entitlements;
-(NSArray *)tags;
-(BOOL)isBlocked;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(id)succinctDescriptionBuilder;
@end

