/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/BLTSettingSyncingClient.h>

@class BLTWristStateObserver, BBSettingsGateway, BLTDNDSync, BLTMuteSync, BLTSettingSyncServer, BLTSectionConfiguration, NSString;

@interface BLTSettingSyncInternal : NSObject <BLTSettingSyncingClient> {

	BLTWristStateObserver* _wristStateObserver;
	BBSettingsGateway* _settingsGateway;
	BLTDNDSync* _dndSync;
	BLTMuteSync* _muteSync;
	BLTSettingSyncServer* _connection;
	BLTSectionConfiguration* _sectionConfiguration;

}

@property (nonatomic,retain) BBSettingsGateway * settingsGateway;                           //@synthesize settingsGateway=_settingsGateway - In the implementation block
@property (nonatomic,retain) BLTDNDSync * dndSync;                                          //@synthesize dndSync=_dndSync - In the implementation block
@property (nonatomic,retain) BLTMuteSync * muteSync;                                        //@synthesize muteSync=_muteSync - In the implementation block
@property (nonatomic,retain) BLTSettingSyncServer * connection;                             //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) BOOL isWristDetectDisabled; 
@property (nonatomic,readonly) BLTSectionConfiguration * sectionConfiguration;              //@synthesize sectionConfiguration=_sectionConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)connect;
-(BLTSettingSyncServer *)connection;
-(void)setConnection:(BLTSettingSyncServer *)arg1 ;
-(void)disableStandaloneTestMode;
-(void)enableStandaloneTestModeWithMinimumSendDelay:(unsigned long long)arg1 maximumSendDelay:(unsigned long long)arg2 minimumResponseDelay:(unsigned long long)arg3 maximumResponseDelay:(unsigned long long)arg4 ;
-(BOOL)isWristDetectDisabled;
-(void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 ;
-(id)initWithSectionConfiguration:(id)arg1 queue:(id)arg2 ;
-(void)setSettingsGateway:(BBSettingsGateway *)arg1 ;
-(BBSettingsGateway *)settingsGateway;
-(void)setDndSync:(BLTDNDSync *)arg1 ;
-(void)enableNotifications:(BOOL)arg1 sectionID:(id)arg2 mirror:(BOOL)arg3 fromRemote:(BOOL)arg4 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 category:(id)arg4 ;
-(id)_overriddenSectionInfoForSectionID:(id)arg1 ;
-(void)setSectionInfo:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setSectionSubtypeParametersIcon:(id)arg1 forSectionID:(id)arg2 forSubtypeID:(long long)arg3 ;
-(void)removeSectionWithSectionID:(id)arg1 ;
-(unsigned long long)willNanoPresentNotificationForSectionID:(id)arg1 subsectionIDs:(id)arg2 subtype:(long long)arg3 ;
-(BLTDNDSync *)dndSync;
-(BLTMuteSync *)muteSync;
-(void)setMuteSync:(BLTMuteSync *)arg1 ;
-(BLTSectionConfiguration *)sectionConfiguration;
@end

