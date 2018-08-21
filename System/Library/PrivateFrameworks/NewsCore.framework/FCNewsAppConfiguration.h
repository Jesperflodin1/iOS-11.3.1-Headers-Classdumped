/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSArray, FCIAdConfiguration, FCPrefetchConfiguration, FCCoverArticlesConfiguration, NSString, NTPBDiscoverMoreVideosInfo;


@protocol FCNewsAppConfiguration <FCCoreConfiguration,NFCopying>
@property (nonatomic,readonly) long long minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou; 
@property (nonatomic,readonly) NSArray * onboardingFeedIDs; 
@property (nonatomic,readonly) NSArray * recommendedCategories; 
@property (nonatomic,readonly) long long autoScrollToTopFeedTimeout; 
@property (nonatomic,readonly) double interstitialAdLoadDelay; 
@property (nonatomic,readonly) double prerollLoadingTimeout; 
@property (nonatomic,readonly) double tileProminenceScoreBalanceValue; 
@property (nonatomic,readonly) FCIAdConfiguration * iAdConfig; 
@property (nonatomic,readonly) FCPrefetchConfiguration * prefetchConfig; 
@property (nonatomic,readonly) NSArray * topLevelCuratedTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedTopicTagIDs; 
@property (nonatomic,readonly) NSArray * topLevelRecommendedChannelTagIDs; 
@property (nonatomic,readonly) long long subscriptionsPlacardPublisherFrequencyInSeconds; 
@property (nonatomic,readonly) long long subscriptionsPlacardGlobalMaximumPerDay; 
@property (nonatomic,readonly) long long subscriptionsGracePeriodForTokenVerificationSeconds; 
@property (nonatomic,readonly) long long newFavoriteNotificationAlertsFrequency; 
@property (nonatomic,readonly) long long notificationArticleCacheTimeout; 
@property (nonatomic,readonly) long long notificationArticleWithRapidUpdatesCacheTimeout; 
@property (nonatomic,readonly) FCCoverArticlesConfiguration * coverArticlesConfig; 
@property (nonatomic,readonly) NSString * embedConfigurationAssetID; 
@property (nonatomic,readonly) BOOL universalLinksEnabled; 
@property (nonatomic,readonly) double parsecPopulationFloor; 
@property (nonatomic,readonly) double parsecPopulationCeiling; 
@property (nonatomic,readonly) NSString * widgetConfigID; 
@property (nonatomic,readonly) long long widgetMinimumArticleExposureDurationToBePreseenInMilliseconds; 
@property (nonatomic,readonly) unsigned widgetMinimumNumberOfTimesPreseenToBeSeen; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationStart; 
@property (nonatomic,readonly) double articleDiversificationSimilarityExpectationEnd; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationSlope; 
@property (nonatomic,readonly) double articleDiversificationUniquePublisherExpectationYIntercept; 
@property (nonatomic,readonly) long long analyticsEndpointMaxPayloadSize; 
@property (nonatomic,readonly) NSString * personalizationBundleIdMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationUrlMappingResourceId; 
@property (nonatomic,readonly) NSString * personalizationWhitelistResourceId; 
@property (nonatomic,readonly) NSString * personalizationFavorabilityResourceId; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForArticleList; 
@property (nonatomic,readonly) long long corryBarMaxArticleCountForSingleArticle; 
@property (nonatomic,readonly) BOOL corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers; 
@property (nonatomic,readonly) NSString * exploreArticleID; 
@property (nonatomic,readonly) NSArray * externalAnalyticsConfigurations; 
@property (nonatomic,readonly) NSArray * mediaSharingBlacklistedChannelIDs; 
@property (nonatomic,readonly) BOOL usAndUKUseAUWhatsNewFeatures; 
@property (nonatomic,readonly) long long stateRestorationAllowedTimeWindow; 
@property (nonatomic,readonly) long long autoRefreshMinimumInterval; 
@property (nonatomic,readonly) BOOL terminateAppOnBackgroundAfterJoiningOrLeavingExperiment; 
@property (nonatomic,copy,readonly) NSArray * topStoriesPublishDates; 
@property (nonatomic,readonly) unsigned long long trendingStyle; 
@property (nonatomic,readonly) NSString * articleRecirculationConfigJSON; 
@property (nonatomic,readonly) NTPBDiscoverMoreVideosInfo * shareDiscoverMoreVideosInfo; 
@required
-(FCCoverArticlesConfiguration *)coverArticlesConfig;
-(FCPrefetchConfiguration *)prefetchConfig;
-(long long)autoScrollToTopFeedTimeout;
-(double)interstitialAdLoadDelay;
-(double)prerollLoadingTimeout;
-(double)tileProminenceScoreBalanceValue;
-(long long)subscriptionsGracePeriodForTokenVerificationSeconds;
-(long long)newFavoriteNotificationAlertsFrequency;
-(long long)notificationArticleCacheTimeout;
-(long long)notificationArticleWithRapidUpdatesCacheTimeout;
-(BOOL)universalLinksEnabled;
-(double)parsecPopulationFloor;
-(double)parsecPopulationCeiling;
-(long long)analyticsEndpointMaxPayloadSize;
-(NSString *)personalizationBundleIdMappingResourceId;
-(NSString *)personalizationUrlMappingResourceId;
-(NSString *)personalizationWhitelistResourceId;
-(long long)corryBarMaxArticleCountForArticleList;
-(long long)corryBarMaxArticleCountForSingleArticle;
-(BOOL)corryBarHideDiscoverMoreInterstitialForNonOnboardedUsers;
-(long long)stateRestorationAllowedTimeWindow;
-(long long)autoRefreshMinimumInterval;
-(BOOL)terminateAppOnBackgroundAfterJoiningOrLeavingExperiment;
-(unsigned long long)trendingStyle;
-(long long)minimumFollowCountToRemovePersonalizePlacardInFollowingAndForYou;
-(NSArray *)onboardingFeedIDs;
-(NSArray *)recommendedCategories;
-(FCIAdConfiguration *)iAdConfig;
-(NSArray *)topLevelCuratedTagIDs;
-(NSArray *)topLevelRecommendedTopicTagIDs;
-(NSArray *)topLevelRecommendedChannelTagIDs;
-(long long)subscriptionsPlacardPublisherFrequencyInSeconds;
-(long long)subscriptionsPlacardGlobalMaximumPerDay;
-(NSString *)embedConfigurationAssetID;
-(NSString *)widgetConfigID;
-(long long)widgetMinimumArticleExposureDurationToBePreseenInMilliseconds;
-(unsigned)widgetMinimumNumberOfTimesPreseenToBeSeen;
-(double)articleDiversificationSimilarityExpectationStart;
-(double)articleDiversificationSimilarityExpectationEnd;
-(double)articleDiversificationUniquePublisherExpectationSlope;
-(double)articleDiversificationUniquePublisherExpectationYIntercept;
-(NSString *)personalizationFavorabilityResourceId;
-(NSString *)exploreArticleID;
-(NSArray *)externalAnalyticsConfigurations;
-(NSArray *)mediaSharingBlacklistedChannelIDs;
-(BOOL)usAndUKUseAUWhatsNewFeatures;
-(NSArray *)topStoriesPublishDates;
-(NSString *)articleRecirculationConfigJSON;
-(NTPBDiscoverMoreVideosInfo *)shareDiscoverMoreVideosInfo;

@end

