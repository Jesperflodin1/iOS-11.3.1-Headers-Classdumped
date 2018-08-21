/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:39 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, AWDServerConnection;

@interface WBSAnalyticsLogger : NSObject {

	NSMutableDictionary* _pageLoadStartTimes;
	AWDServerConnection* _awdServer;

}

@property (nonatomic,readonly) AWDServerConnection * awdServer;              //@synthesize awdServer=_awdServer - In the implementation block
+(id)sharedLogger;
-(id)init;
-(void)pageLoadCompleted:(unsigned long long)arg1 withErrorCode:(long long)arg2 ;
-(void)_didSelectFavoritesGridItemOfSection:(int)arg1 type:(int)arg2 atIndex:(unsigned long long)arg3 itemsPerRow:(unsigned long long)arg4 isNewTabPage:(BOOL)arg5 ;
-(void)pageLoadCompleted:(unsigned long long)arg1 ;
-(void)pageLoadStarted:(unsigned long long)arg1 ;
-(void)didReceiveInvalidMessageFromWebProcess:(id)arg1 ;
-(void)didSelectFavoritesGridItemOfType:(int)arg1 atIndex:(unsigned long long)arg2 itemsPerRow:(unsigned long long)arg3 isNewTabPage:(BOOL)arg4 ;
-(void)didSelectFavoritesGridFrequentlyVisitedItemAtIndex:(unsigned long long)arg1 itemsPerRow:(unsigned long long)arg2 isNewTabPage:(BOOL)arg3 ;
-(void)didStartMigratingToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 localState:(long long)arg2 remoteState:(long long)arg3 ;
-(void)didSuccessfullyMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 ;
-(void)didFailToMigrateToCKBookmarksAsPrimaryMigrator:(BOOL)arg1 error:(id)arg2 ;
-(void)ckBookmarkSyncFinishedWithResult:(long long)arg1 error:(id)arg2 ;
-(void)submitVersioningMetricWithVersion:(id)arg1 variant:(int)arg2 ;
-(AWDServerConnection *)awdServer;
-(void)unableToSilentlyMigrateToCKBookmarksWithReason:(int)arg1 ;
-(void)didToggleDomainSpecificAutomaticReader:(BOOL)arg1 ;
-(void)didToggleGloballyUseAutomaticReader:(BOOL)arg1 ;
-(void)submitAutomaticReaderActivation:(int)arg1 ;
-(void)didSelectContactAutoFillSet:(int)arg1 hasPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)didShowContactAutoFillSetsWithMeCardSets:(BOOL)arg1 showingPreviouslyCustomizedSet:(BOOL)arg2 ;
-(void)didAutoFillCustomContactSetShowingMeCard:(BOOL)arg1 ;
-(void)safeBrowsingWarningPageShown:(int)arg1 ;
-(void)safeBrowsingUserActionAfterSeeingWarning:(int)arg1 ;
-(void)userDidParticipateInPasswordAutoFillWithInteraction:(int)arg1 ;
-(void)userTappedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(void)showedAutoFillQuickTypeSuggestionWithCategory:(int)arg1 formProperty:(id)arg2 ;
-(BOOL)registerQueriableMetric:(unsigned)arg1 callback:(/*^block*/id)arg2 ;
@end

