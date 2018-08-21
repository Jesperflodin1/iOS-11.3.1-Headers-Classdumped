/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface GEONavdDefaults : NSObject

@property (nonatomic,readonly) BOOL shouldRunNavigationInDaemon; 
@property (nonatomic,readonly) BOOL shouldShowServiceErrorAlert; 
@property (nonatomic,readonly) BOOL shouldLazyLoadRoutes; 
@property (nonatomic,readonly) BOOL shouldUseGuidanceEventManager; 
@property (nonatomic,readonly) BOOL shouldRequestLaneGuidance; 
@property (nonatomic,readonly) BOOL shouldRequestInlineShields; 
@property (nonatomic,readonly) BOOL shouldAutomaticallyRerouteTrafficIncidents; 
@property (nonatomic,readonly) double automaticTrafficIncidentRerouteDelay; 
@property (nonatomic,readonly) BOOL shouldPreloadSubscriptions; 
@property (nonatomic,readonly) double maxDistanceFromOriginToSuppressReroute; 
@property (nonatomic,readonly) double minimumDistanceToGetLocationUpdatesInMeters; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForDriving; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyWhileStationaryForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForWalking; 
@property (nonatomic,readonly) double locationUpdatesDesiredAccuracyForDriving; 
@property (nonatomic,readonly) double locationUpdateTimerInterval; 
@property (nonatomic,readonly) double staleLocationUseTimerInterval; 
@property (nonatomic,readonly) double extraLocationWaitTimeInterval; 
@property (nonatomic,readonly) double locationFreshnessThreshold; 
@property (nonatomic,readonly) double locationReuseThreshold; 
@property (nonatomic,readonly) double minimumDistanceToCompareAgainstLocationAccuracy; 
@property (nonatomic,readonly) unsigned long long initialSelfInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) unsigned long long initialClientInitiatedHypothesisCacheAccessValue; 
@property (nonatomic,readonly) double hypothesisResponseStaleToRefreshThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds; 
@property (nonatomic,readonly) double hypothesisShouldPersistThresholdInSeconds; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfEntriesInTheCacheUnderMemoryPressure; 
@property (nonatomic,readonly) long long maximumNumberOfDestinationsToMonitor; 
@property (nonatomic,readonly) double pendingStopTimeToLive; 
@property (nonatomic,readonly) double minimumTimeBetweenConsecutiveLocationUpdatesInSeconds; 
@property (nonatomic,readonly) double maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds; 
@property (nonatomic,readonly) unsigned long long accessValueThresholdToUpdateCacheEntries; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfProcessingLoopRepeats; 
@property (nonatomic,readonly) double refreshTimeIntervalToUseIfError; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequency; 
@property (nonatomic,readonly) unsigned long long refreshEquationLowestFrequencyTransit; 
@property (nonatomic,readonly) unsigned long long refreshEquationHighestFrequency; 
@property (nonatomic,readonly) double maximumRefreshIntervalLeeway; 
@property (nonatomic,readonly) double minimumTimerTimeStampFudge; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffBase; 
@property (nonatomic,readonly) double refreshTimeIntervalBackoffMax; 
@property (nonatomic,readonly) double predictionsWatchdogInterval; 
@property (nonatomic,readonly) double defaultExpirationOffset; 
@property (nonatomic,readonly) double minimumExpirationOffset; 
@property (nonatomic,readonly) double ageForRefresh; 
@property (nonatomic,readonly) unsigned long long maximumNumberOfLeechedLocations; 
@property (nonatomic,readonly) double updateTimeout; 
@property (nonatomic,readonly) BOOL useConservativeDepartureForRefreshTimer; 
@property (nonatomic,readonly) double maximumUserRoutingPreferencesAge; 
@property (nonatomic,readonly) unsigned long long maximumTraceFileCount; 
@property (nonatomic,readonly) double exitRegionSize; 
@property (nonatomic,readonly) BOOL shouldUseServerSideETAs; 
@property (nonatomic,readonly) BOOL transitTTLSupported; 
@property (nonatomic,readonly) double averageWalkingSpeed; 
@property (nonatomic,readonly) double slowWalkingSpeed; 
@property (nonatomic,readonly) double fastWalkingSpeed; 
@property (nonatomic,readonly) unsigned long long minRandomJitterForHypothesisWakeup; 
@property (nonatomic,readonly) unsigned long long maxRandomJitterForHypothesisWakeup; 
+(id)sharedInstance;
-(BOOL)shouldRunNavigationInDaemon;
-(BOOL)shouldShowServiceErrorAlert;
-(BOOL)shouldLazyLoadRoutes;
-(BOOL)shouldUseGuidanceEventManager;
-(BOOL)shouldRequestLaneGuidance;
-(BOOL)shouldRequestInlineShields;
-(BOOL)shouldAutomaticallyRerouteTrafficIncidents;
-(double)automaticTrafficIncidentRerouteDelay;
-(BOOL)shouldPreloadSubscriptions;
-(double)maxDistanceFromOriginToSuppressReroute;
-(double)minimumDistanceToGetLocationUpdatesInMeters;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForDriving;
-(double)locationUpdatesDesiredAccuracyWhileStationaryForWalking;
-(double)locationUpdatesDesiredAccuracyForWalking;
-(double)locationUpdatesDesiredAccuracyForDriving;
-(double)locationUpdateTimerInterval;
-(double)staleLocationUseTimerInterval;
-(double)extraLocationWaitTimeInterval;
-(double)locationFreshnessThreshold;
-(double)locationReuseThreshold;
-(double)minimumDistanceToCompareAgainstLocationAccuracy;
-(unsigned long long)initialSelfInitiatedHypothesisCacheAccessValue;
-(unsigned long long)initialClientInitiatedHypothesisCacheAccessValue;
-(double)hypothesisResponseStaleToRefreshThresholdInSeconds;
-(double)hypothesisResponseStaleToPurgeFromDiskThresholdInSeconds;
-(double)hypothesisShouldPersistThresholdInSeconds;
-(unsigned long long)maximumNumberOfEntriesInTheCacheUnderMemoryPressure;
-(long long)maximumNumberOfDestinationsToMonitor;
-(double)pendingStopTimeToLive;
-(double)minimumTimeBetweenConsecutiveLocationUpdatesInSeconds;
-(double)maximumTimeBetweenConsecutiveHypothesisUpdatesInSeconds;
-(unsigned long long)accessValueThresholdToUpdateCacheEntries;
-(unsigned long long)maximumNumberOfProcessingLoopRepeats;
-(double)refreshTimeIntervalToUseIfError;
-(unsigned long long)refreshEquationLowestFrequency;
-(unsigned long long)refreshEquationLowestFrequencyTransit;
-(unsigned long long)refreshEquationHighestFrequency;
-(double)maximumRefreshIntervalLeeway;
-(double)minimumTimerTimeStampFudge;
-(double)refreshTimeIntervalBackoffBase;
-(double)refreshTimeIntervalBackoffMax;
-(double)predictionsWatchdogInterval;
-(double)defaultExpirationOffset;
-(double)minimumExpirationOffset;
-(double)ageForRefresh;
-(unsigned long long)maximumNumberOfLeechedLocations;
-(double)updateTimeout;
-(BOOL)useConservativeDepartureForRefreshTimer;
-(double)maximumUserRoutingPreferencesAge;
-(unsigned long long)maximumTraceFileCount;
-(double)exitRegionSize;
-(BOOL)shouldUseServerSideETAs;
-(BOOL)transitTTLSupported;
-(double)averageWalkingSpeed;
-(double)slowWalkingSpeed;
-(double)fastWalkingSpeed;
-(unsigned long long)minRandomJitterForHypothesisWakeup;
-(unsigned long long)maxRandomJitterForHypothesisWakeup;
@end

