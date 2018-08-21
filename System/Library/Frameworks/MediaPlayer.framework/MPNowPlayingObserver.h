/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/MPStoreDownloadManagerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, MPArtworkCatalog, UIImage, NSData, NSMutableDictionary, MPAVController, NSString;

@interface MPNowPlayingObserver : NSObject <MPStoreDownloadManagerObserver> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	MPArtworkCatalog* _currentArtworkCatalog;
	UIImage* _currentArtworkImage;
	NSData* _currentArtworkData;
	BOOL _hasSeenAnyItem;
	NSMutableDictionary* _mediaItemCoalescedUpdateDateAccessedTimers;
	NSObject*<OS_dispatch_queue> _statusBarQueue;
	BOOL _scheduledNowPlayingInfoUpdate;
	BOOL _enabled;
	MPAVController* _player;

}

@property (assign,getter=isEnabled,nonatomic) BOOL enabled;               //@synthesize enabled=_enabled - In the implementation block
@property (assign,nonatomic,__weak) MPAVController * player;              //@synthesize player=_player - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(BOOL)isEnabled;
-(void)setEnabled:(BOOL)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(id)initWithPlayer:(id)arg1 ;
-(void)_itemDidChangeNotification:(id)arg1 ;
-(void)_bufferingStateDidChangeNotification:(id)arg1 ;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(void)_mediaLibraryDisplayValuesDidChangeNotification:(id)arg1 ;
-(void)_avItemArtworkDidChangeNotification:(id)arg1 ;
-(void)_avItemDurationDidChangeNotification:(id)arg1 ;
-(void)_avItemIsExplicitDidChangeNotification:(id)arg1 ;
-(void)_avItemLikedStateDidChangeNotification:(id)arg1 ;
-(void)_avItemTitlesDidChangeNotification:(id)arg1 ;
-(void)_registerForNotificationsForPlayer:(id)arg1 ;
-(void)_unregisterForNotificationsForPlayer:(id)arg1 ;
-(void)_setNeedsNowPlayingInfoUpdate;
-(BOOL)_reloadArtworkIfPossible;
-(BOOL)_hasProperConditionsToLoadArtwork;
-(void)_coalescedUpdateLastUsedDateForCurrentItem;
-(void)_postNowPlayingInfoForItem:(id)arg1 ;
-(void)_setNowPlayingInfo:(id)arg1 forItem:(id)arg2 ;
-(void)_createNowPlayingInfoForItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_contentsDidChangeNotification:(id)arg1 ;
-(void)_crossedTimeMarkerNotification:(id)arg1 ;
-(void)_repeatTypeDidChangeNotification:(id)arg1 ;
-(void)configureArtworkCatalog:(id)arg1 ;
-(id)_additionalKeysForNowPlayingItem:(id)arg1 ;
-(void)_postNowPlayingInfo;
-(BOOL)_itemNotificationIsRelevantToObservedPlayer:(id)arg1 ;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
-(void)_playbackErrorNotification:(id)arg1 ;
@end

