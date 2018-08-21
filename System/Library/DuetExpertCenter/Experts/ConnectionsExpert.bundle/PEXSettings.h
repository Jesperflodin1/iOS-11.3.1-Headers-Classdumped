/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/DuetExpertCenter/Experts/ConnectionsExpert.bundle/ConnectionsExpert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ConnectionsExpert/ConnectionsExpert-Structs.h>
@class NSString, NSSet, NSUserDefaults, PEXSettingsKVOObserver;

@interface PEXSettings : NSObject {

	NSString* _notificationName;
	opaque_pthread_mutex_t _lock;
	NSSet* _disabledBundleIdentifiers;
	NSUserDefaults* _defaults;
	PEXSettingsKVOObserver* _kvoObserver;
	BOOL _appConnectionsLocationsEnabled;

}

@property (assign,getter=isAppConnectionsLocationsEnabled,nonatomic) BOOL appConnectionsLocationsEnabled;              //@synthesize appConnectionsLocationsEnabled=_appConnectionsLocationsEnabled - In the implementation block
+(id)sharedInstance;
+(void)initialize;
+(BOOL)servantShouldRespondToQuery:(id)arg1 ;
+(void)disableBundleIdentifier:(id)arg1 ;
+(void)clearTestSettings;
-(void)dealloc;
-(id)initWithNotification:(id)arg1 ;
-(BOOL)isAppConnectionsLocationsEnabled;
-(void)_updateSettingsValues;
-(void)_unsubscribe;
-(BOOL)_showLocationsFoundInApps;
-(void)setAppConnectionsLocationsEnabled:(BOOL)arg1 ;
-(BOOL)_bundleIdentifierIsEnabled:(id)arg1 ;
-(void)_refreshDisabledBundleIds;
-(void)_disableBundleIdentifier:(id)arg1 ;
-(void)_clearTestSettings;
@end

