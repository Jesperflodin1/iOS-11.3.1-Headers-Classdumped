/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class SAGuidanceGuideUpdate, NSObject, NSNumber, SAGuidanceGuideSnippet, SAGuidanceSuggestedUtterances;

@interface AFUIGuideCacheManager : NSObject {

	SAGuidanceGuideUpdate* _cachedGuideUpdate;
	NSObject*<OS_dispatch_queue> _cacheFileQueue;
	BOOL _isCheckingGuideUpdate;

}

@property (nonatomic,readonly) NSNumber * cachedGuideTag; 
@property (nonatomic,readonly) SAGuidanceGuideSnippet * cachedGuideSnippet; 
@property (nonatomic,readonly) SAGuidanceSuggestedUtterances * cachedSuggestedUtterances; 
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(id)_cachedGuideUpdate;
-(BOOL)_shouldCheckForUpdateAtDate:(id)arg1 lastAppUpdateTime:(id)arg2 ;
-(void)_updateLastCheckedWithDate:(id)arg1 ;
-(id)_pathForCachedGuideUpdate;
-(void)updateCacheWithGuideUpdate:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateLastCheckedDate;
-(NSNumber *)cachedGuideTag;
-(void)_checkGuideUpdateUsingAFClientLiteWithTag:(id)arg1 ;
-(id)_aceObjectDictionaryAtFilepath:(id)arg1 ;
-(SAGuidanceGuideSnippet *)cachedGuideSnippet;
-(SAGuidanceSuggestedUtterances *)cachedSuggestedUtterances;
-(BOOL)shouldCheckForUpdateWithLastAppUpdateTime:(id)arg1 ;
-(void)_clearCachedGuide;
-(void)checkGuideUpdate;
@end
