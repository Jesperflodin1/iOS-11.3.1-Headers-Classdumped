/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpotlightUI.framework/SpotlightUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpotlightUI/SPUISearchModel.h>

@protocol OS_dispatch_queue;
@class NSObject, SPZKWSession;

@interface SPUISearchModelZKW : SPUISearchModel {

	NSObject*<OS_dispatch_queue> _queryProcessor;
	BOOL _shouldCacheResults;
	BOOL _newQuery;
	BOOL _clearedQuerySuggestions;
	SPZKWSession* _session;

}

@property (nonatomic,retain) SPZKWSession * session;              //@synthesize session=_session - In the implementation block
@property (assign) BOOL clearedQuerySuggestions;                  //@synthesize clearedQuerySuggestions=_clearedQuerySuggestions - In the implementation block
-(id)init;
-(void)dealloc;
-(SPZKWSession *)session;
-(void)setSession:(SPZKWSession *)arg1 ;
-(id)sections;
-(void)cacheZKWQuery;
-(void)clearQuerySuggestions;
-(void)setClearedQuerySuggestions:(BOOL)arg1 ;
-(BOOL)clearedQuerySuggestions;
@end

