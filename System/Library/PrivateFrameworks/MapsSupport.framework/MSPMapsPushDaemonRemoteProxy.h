/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MSPMapsPushDaemonProxyObserver.h>
#import <libobjc.A.dylib/MSPMapsPushDaemonProxy.h>

@class NSXPCConnection, NSMutableArray, MSPUserRoutingPreferences, NSString;

@interface MSPMapsPushDaemonRemoteProxy : NSObject <MSPMapsPushDaemonProxyObserver, MSPMapsPushDaemonProxy> {

	NSXPCConnection* _connection;
	NSMutableArray* _observers;
	MSPUserRoutingPreferences* _cachedUserRoutingPreferences;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)checkin;
-(void)closeConnection;
-(void)openConnection;
-(void)_connectToDaemonIfNeeded;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_clearConnection;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 ;
-(id)_remoteObjectProxy;
-(id)_connection;
-(void)favoritesDidChange;
-(void)historyDidChange;
-(void)pushDaemonProxyReceivedNotificationData:(id)arg1 forType:(id)arg2 recordIdentifier:(id)arg3 ;
-(void)registerForTopic;
-(void)simulateProblemResolution;
-(void)fetchProblemStatus;
-(void)shouldUseDevAPNS:(/*^block*/id)arg1 ;
-(void)setShouldUseDevAPNS:(BOOL)arg1 ;
-(void)fetchDevicePushToken:(/*^block*/id)arg1 ;
-(void)simulateAnnouncement:(id)arg1 ;
-(void)clearCurrentAnnouncement;
-(void)resetShownAnnouncements;
-(void)fetchCurrentAnnouncement:(/*^block*/id)arg1 ;
-(void)clearBulletinWithRecordID:(id)arg1 ;
-(void)problemStatusResponseWithNotificationID:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeProblemStatusResponseWithNotificationID:(id)arg1 ;
-(void)showTrafficIncidentAlertWithID:(id)arg1 type:(unsigned long long)arg2 title:(id)arg3 description:(id)arg4 ;
-(void)clearTrafficIncidentBulletinWithAlertID:(id)arg1 ;
-(void)clearTrafficIncidentsBulletin;
-(void)showTransitAlightAlertWithTitle:(id)arg1 message:(id)arg2 ;
-(void)clearTransitAlightAlertBulletin;
-(void)showPredictedRouteTrafficIncidentBulletinForCommuteDetails:(id)arg1 afterDelay:(double)arg2 ;
-(void)clearPredictedRouteTrafficIncidentBulletin;
-(void)showLowFuelAlertBulletinForLowFuelDetails:(id)arg1 ;
-(void)clearLowFuelAlertBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 afterDelay:(double)arg2 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 afterDelay:(double)arg3 ;
-(oneway void)updateMapsModelBackupAttributesIfNeeded;
-(void)eraseRAPData;
-(void)handleMapsApplicationRemoval:(/*^block*/id)arg1 ;
-(void)mapsLocationAuthorizationStatusChanged;
-(void)fetchUserRoutingPreferencesWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitFavoritesSerializedRepresentation:(id)arg1 operationIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)fetchLastKnownFavoritesOperationIdentifier:(/*^block*/id)arg1 ;
-(void)eraseFavoritesSerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)fetchHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)commitHistorySerializedRepresentation:(id)arg1 earliestKnownSyncDate:(id)arg2 operationIdentifier:(id)arg3 completion:(/*^block*/id)arg4 ;
-(void)fetchLastKnownHistoryOperationIdentifier:(/*^block*/id)arg1 ;
-(void)eraseHistorySerializedRepresentationWithCompletion:(/*^block*/id)arg1 ;
-(void)testByNotingHistoryChangedOnDisk;
-(void)noteMapstoolChangedHistoryOnDisk;
-(void)noteMapstoolChangedFavoritesOnDisk;
-(id)userRoutingPrefrencesFromSettingsWithFreshness:(double)arg1 ;
-(void)clearCachedUserRoutingPreferences;
-(void)showTrafficConditionsBulletinWithTitle:(id)arg1 message:(id)arg2 actionURL:(id)arg3 ;
-(void)clearTrafficConditionsBulletin;
-(void)showParkedCarBulletinForEvent:(id)arg1 ;
-(void)showParkedCarReplacementBulletinForEvent:(id)arg1 replacingEvent:(id)arg2 ;
-(void)clearParkedCarBulletin;
@end

