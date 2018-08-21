/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AirTrafficSettings.bundle/AirTrafficSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ATConnectionDelegate.h>

@protocol AirTrafficSettingsDataSourceDelegate;
@class ATConnection, NSString, NSMutableSet, NSTimer, NSDictionary, ATHostBrowser;

@interface AirTrafficSettingsDataSource : NSObject <ATConnectionDelegate> {

	ATConnection* _connection;
	NSString* _libraryIdentifier;
	NSMutableSet* _connectedLibraries;
	NSMutableSet* _wakeableLibraries;
	NSMutableSet* _wakingLibraries;
	NSMutableSet* _librariesWaitingToSync;
	NSMutableSet* _syncingLibraries;
	NSTimer* _waitingForSyncTimer;
	unsigned long long _backgroundTaskIdentifier;
	BOOL _registered;
	NSDictionary* _lastProgressDict;
	ATHostBrowser* _hostBrowser;
	id<AirTrafficSettingsDataSourceDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<AirTrafficSettingsDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL connected; 
@property (nonatomic,readonly) BOOL syncing; 
@property (nonatomic,readonly) BOOL waitingToSync; 
@property (nonatomic,readonly) BOOL waitingToWake; 
@property (getter=isWifiEnabled,nonatomic,readonly) BOOL wifiEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedDataSource;
-(id)initWithLibraryIdentifier:(id)arg1 ;
-(BOOL)syncing;
-(BOOL)waitingToWake;
-(id)hostForIdentifier:(id)arg1 ;
-(id)hostsWaitingToWake;
-(id)hostIdentifiers;
-(void)scanWakeableLibraries;
-(void)registerForProgressWithLibraryIdentifier:(id)arg1 ;
-(void)unregisterForProgress;
-(void)stopScanningWakeableLibraries;
-(BOOL)waitingToSync;
-(void)unregisterConnectionIfUnused;
-(void)syncTimeoutExpired;
-(id)init;
-(id<AirTrafficSettingsDataSourceDelegate>)delegate;
-(void)setDelegate:(id<AirTrafficSettingsDataSourceDelegate>)arg1 ;
-(void)dealloc;
-(id)connection;
-(void)requestSync;
-(BOOL)isWifiEnabled;
-(void)cancelSync;
-(void)connection:(id)arg1 updatedProgress:(id)arg2 ;
-(void)connectionWasInterrupted:(id)arg1 ;
-(BOOL)connected;
@end

