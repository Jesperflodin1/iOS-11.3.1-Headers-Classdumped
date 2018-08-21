/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMCore.framework/IMCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary;

@interface IMBalloonPluginAttributionController : NSObject {

	BOOL _hasPerformedFirstAppExtensionLoad;
	NSMutableDictionary* _expiredBundleIDToTimestampMap;
	NSMutableDictionary* _bundleIDsDisplayingAttribution;

}

@property (nonatomic,retain) NSMutableDictionary * expiredBundleIDToTimestampMap;               //@synthesize expiredBundleIDToTimestampMap=_expiredBundleIDToTimestampMap - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * bundleIDsDisplayingAttribution;              //@synthesize bundleIDsDisplayingAttribution=_bundleIDsDisplayingAttribution - In the implementation block
@property (assign,nonatomic) BOOL hasPerformedFirstAppExtensionLoad;                            //@synthesize hasPerformedFirstAppExtensionLoad=_hasPerformedFirstAppExtensionLoad - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_handleInstalledPluginsChanged;
-(void)setHasPerformedFirstAppExtensionLoad:(BOOL)arg1 ;
-(NSMutableDictionary *)bundleIDsDisplayingAttribution;
-(double)_expiryTimeout;
-(NSMutableDictionary *)expiredBundleIDToTimestampMap;
-(id)_currentTimestamp;
-(void)_purgeLeastRecentlySeenAppBundleIDsIfNecessary;
-(void)_saveToFile;
-(BOOL)hasPerformedFirstAppExtensionLoad;
-(void)startExpiryTimer;
-(void)didShowAttributionForBundleIDs:(id)arg1 ;
-(BOOL)shouldShowAttributionForBundleID:(id)arg1 ;
-(void)setExpiredBundleIDToTimestampMap:(NSMutableDictionary *)arg1 ;
-(void)setBundleIDsDisplayingAttribution:(NSMutableDictionary *)arg1 ;
@end

