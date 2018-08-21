/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
@class PEXPeopleSuggester, PEXDiscoverySuggester, PEXAutocompleteDelegate, NSObject;

@interface PEXContactScorer : NSObject {

	PEXPeopleSuggester* _peopleSuggester;
	PEXDiscoverySuggester* _discoverySuggester;
	PEXAutocompleteDelegate* _autocompleteDelegate;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	unsigned long long _memoryPressureStatus;
	NSObject*<OS_dispatch_queue> _memoryPressureQueue;

}
+(id)sharedInstance;
+(id)createNewSharedScorer;
+(void)unsetSharedScorer;
-(id)init;
-(void)dealloc;
-(void)discoveredEvents:(id)arg1 store:(id)arg2 ;
-(void)discoveredRecipients:(id)arg1 ;
-(void)waitForDiscoveriesToProcess;
-(id)contactsForDetailString:(id)arg1 ;
-(double)scoreNamedEntityItem:(id)arg1 dupCount:(unsigned long long)arg2 ;
-(double)scoreForContactIdentifier:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(void)waitForScoringData;
-(double)scoreForFoundOnDeviceContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(id)bestContactsWithLimit:(unsigned long long)arg1 ;
-(id)contactsForNamePrefix:(id)arg1 recipients:(id)arg2 ;
-(double)scoreForContact:(id)arg1 namePrefix:(id)arg2 recipients:(id)arg3 ;
-(double)scoreMergedNameItem:(id)arg1 ;
-(void)_setupMemoryPressureNotification;
-(id)_contactsFromSuggester:(id)arg1 matchingPrefix:(id)arg2 ;
-(double)scoreFromRankPercentage:(double)arg1 acBoost:(double)arg2 ;
@end

