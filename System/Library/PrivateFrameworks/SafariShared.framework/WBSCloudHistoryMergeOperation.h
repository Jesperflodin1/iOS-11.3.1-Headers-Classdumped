/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, WBSHistory, WBSCloudHistoryFetchResult, NSMutableDictionary, NSMutableSet, NSSet;

@interface WBSCloudHistoryMergeOperation : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	WBSHistory* _history;
	WBSCloudHistoryFetchResult* _fetchResult;
	BOOL _mergeStarted;
	NSMutableDictionary* _visitsByVisitIdentifiers;
	NSMutableSet* _redirectChainEarliestVisits;
	NSSet* _tombstones;
	NSMutableDictionary* _tombstonesByURLString;
	NSSet* _existingVisits;
	NSSet* _redirectChainSourceVisits;

}
-(id)initWithHistory:(id)arg1 fetchResult:(id)arg2 ;
-(void)mergeWithCompletion:(/*^block*/id)arg1 ;
-(void)_updateClientVersions;
-(void)_replayAndAddTombstones;
-(void)_buildVisitsByVisitIdentifiersMap;
-(void)_buildRedirectChains;
-(void)_filterVisitsByTombstones;
-(void)_removeDuplicateVisits;
-(void)_mergeVisitsWithCompletion:(/*^block*/id)arg1 ;
-(void)_lookupRedirectChainSourcesWithCompletion:(/*^block*/id)arg1 ;
-(void)_lookUpExistingItemsWithCompletion:(/*^block*/id)arg1 ;
-(void)_loadTombstonesWithCompletion:(/*^block*/id)arg1 ;
@end

