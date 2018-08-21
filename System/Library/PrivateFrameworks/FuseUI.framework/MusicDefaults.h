/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FuseUI.framework/FuseUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MPUApplicationDefaults.h>

@class NSArray, NSDate, NSNumber, NSDictionary, NSString;

@interface MusicDefaults : MPUApplicationDefaults {

	BOOL _internalInstall;
	long long _playbackSpeed;

}

@property (nonatomic,copy) NSArray * tabBarOrdering; 
@property (nonatomic,retain) NSDate * dateWhenUserLastSawWelcomeScreen; 
@property (nonatomic,readonly) int eqPreset; 
@property (getter=isActivityContinuationEnabled,nonatomic,readonly) BOOL activityContinuationEnabled; 
@property (getter=isGroupByAlbumArtistEnabled,nonatomic,readonly) BOOL groupByAlbumArtistEnabled; 
@property (assign,getter=isGeniusUserEnabled,nonatomic) BOOL geniusUserEnabled; 
@property (assign,nonatomic) BOOL hasUserRequestedSubscriptionHidden; 
@property (assign,nonatomic) BOOL lastKnownHasActiveSubscription; 
@property (nonatomic,retain) NSNumber * lastKnownStoreAccountUniqueIdentifier; 
@property (assign,nonatomic) BOOL lastKnownSupportsConnect; 
@property (nonatomic,copy) NSDictionary * lastKnownTabConfigurations; 
@property (assign,nonatomic) unsigned long long lastModifiedPlaylistID; 
@property (nonatomic,retain) NSDate * lastMyMusicSearchDate; 
@property (getter=isPinningEnabled,nonatomic,readonly) BOOL pinningEnabled; 
@property (assign,nonatomic) long long playbackSpeed;                                                              //@synthesize playbackSpeed=_playbackSpeed - In the implementation block
@property (assign,nonatomic) BOOL playlistsOverviewShowsOnlyOfflinePlaylists; 
@property (assign,nonatomic) long long repeatType; 
@property (assign,nonatomic) BOOL searchShouldDefaultToMyMusic; 
@property (nonatomic,copy) NSString * selectedLibraryViewIdentifier; 
@property (getter=isShakeToShuffleEnabled,nonatomic,readonly) BOOL shakeToShuffleEnabled; 
@property (assign,getter=isShowCloudMediaEnabled,nonatomic) BOOL showCloudMediaEnabled; 
@property (nonatomic,copy) NSString * selectedPlaylistsOverviewFilter; 
@property (getter=isSortByArtistEnabled,nonatomic,readonly) BOOL sortByArtistEnabled; 
@property (getter=isSoundCheckEnabled,nonatomic,readonly) BOOL soundCheckEnabled; 
@property (assign,nonatomic) long long shuffleType; 
@property (nonatomic,readonly) BOOL hasSetVersionOfNoThanksOption; 
@property (nonatomic,readonly) BOOL hasSetVersionOfNotNowOption; 
@property (assign,nonatomic) long long versionOfFormerFreeTrialWhenUserLastSawWelcomeScreen; 
@property (assign,nonatomic) long long versionOfNoThanksWhenUserLastSawWelcomeScreen; 
@property (assign,nonatomic) long long versionOfNotNowWhenUserLastSawWelcomeScreen; 
@property (nonatomic,retain) NSString * versionOfOSWhenFormerFreeTrialWelcomeScreenWasShown; 
@property (nonatomic,retain) NSString * versionOfOSWhenNoThanksWelcomeScreenWasShown; 
@property (nonatomic,retain) NSString * versionOfOSWhenNotNowWelcomeScreenWasShown; 
@property (assign,nonatomic) float popularityIndicatorThreshold; 
@property (assign,getter=isInternalInstall,nonatomic) BOOL internalInstall;                                        //@synthesize internalInstall=_internalInstall - In the implementation block
+(id)sharedDefaults;
-(int)eqPreset;
-(BOOL)isInternalInstall;
-(void)setInternalInstall:(BOOL)arg1 ;
-(long long)repeatType;
-(long long)shuffleType;
-(void)setRepeatType:(long long)arg1 ;
-(void)setShuffleType:(long long)arg1 ;
-(long long)playbackSpeed;
-(void)setPlaybackSpeed:(long long)arg1 ;
-(BOOL)isPinningEnabled;
-(void)setPopularityIndicatorThreshold:(float)arg1 ;
-(float)popularityIndicatorThreshold;
-(BOOL)isShowCloudMediaEnabled;
-(NSDate *)dateWhenUserLastSawWelcomeScreen;
-(NSString *)versionOfOSWhenFormerFreeTrialWelcomeScreenWasShown;
-(long long)versionOfFormerFreeTrialWhenUserLastSawWelcomeScreen;
-(BOOL)hasUserRequestedSubscriptionHidden;
-(NSString *)versionOfOSWhenNoThanksWelcomeScreenWasShown;
-(BOOL)hasSetVersionOfNoThanksOption;
-(long long)versionOfNoThanksWhenUserLastSawWelcomeScreen;
-(NSString *)versionOfOSWhenNotNowWelcomeScreenWasShown;
-(BOOL)hasSetVersionOfNotNowOption;
-(long long)versionOfNotNowWhenUserLastSawWelcomeScreen;
-(void)setVersionOfFormerFreeTrialWhenUserLastSawWelcomeScreen:(long long)arg1 ;
-(void)setVersionOfOSWhenNoThanksWelcomeScreenWasShown:(NSString *)arg1 ;
-(void)setVersionOfNoThanksWhenUserLastSawWelcomeScreen:(long long)arg1 ;
-(void)setVersionOfOSWhenNotNowWelcomeScreenWasShown:(NSString *)arg1 ;
-(void)setVersionOfNotNowWhenUserLastSawWelcomeScreen:(long long)arg1 ;
-(void)setDateWhenUserLastSawWelcomeScreen:(NSDate *)arg1 ;
-(void)setVersionOfOSWhenFormerFreeTrialWelcomeScreenWasShown:(NSString *)arg1 ;
-(NSDictionary *)lastKnownTabConfigurations;
-(BOOL)lastKnownSupportsConnect;
-(NSString *)selectedPlaylistsOverviewFilter;
-(void)setSelectedPlaylistsOverviewFilter:(NSString *)arg1 ;
-(BOOL)playlistsOverviewShowsOnlyOfflinePlaylists;
-(void)setShowCloudMediaEnabled:(BOOL)arg1 ;
-(NSString *)selectedLibraryViewIdentifier;
-(void)setSelectedLibraryViewIdentifier:(NSString *)arg1 ;
-(BOOL)lastKnownHasActiveSubscription;
-(NSNumber *)lastKnownStoreAccountUniqueIdentifier;
-(void)setHasUserRequestedSubscriptionHidden:(BOOL)arg1 ;
-(BOOL)isActivityContinuationEnabled;
-(BOOL)isGroupByAlbumArtistEnabled;
-(BOOL)isGeniusUserEnabled;
-(void)setGeniusUserEnabled:(BOOL)arg1 ;
-(BOOL)isShakeToShuffleEnabled;
-(BOOL)isSortByArtistEnabled;
-(BOOL)isSoundCheckEnabled;
-(void)setLastKnownHasActiveSubscription:(BOOL)arg1 ;
-(void)setLastKnownStoreAccountUniqueIdentifier:(NSNumber *)arg1 ;
-(void)setLastKnownSupportsConnect:(BOOL)arg1 ;
-(void)setLastKnownTabConfigurations:(NSDictionary *)arg1 ;
-(unsigned long long)lastModifiedPlaylistID;
-(void)setLastModifiedPlaylistID:(unsigned long long)arg1 ;
-(NSDate *)lastMyMusicSearchDate;
-(void)setLastMyMusicSearchDate:(NSDate *)arg1 ;
-(void)setPlaylistsOverviewShowsOnlyOfflinePlaylists:(BOOL)arg1 ;
-(BOOL)searchShouldDefaultToMyMusic;
-(void)setSearchShouldDefaultToMyMusic:(BOOL)arg1 ;
-(void)beginObservingDefaultsChanges;
-(void)ensureInvertedDefaultPlaybackSpeedHackIsInPlace;
-(void)setTabBarOrdering:(NSArray *)arg1 ;
-(void)migrateTabBarOrderingIfNeeded;
-(NSArray *)tabBarOrdering;
@end

