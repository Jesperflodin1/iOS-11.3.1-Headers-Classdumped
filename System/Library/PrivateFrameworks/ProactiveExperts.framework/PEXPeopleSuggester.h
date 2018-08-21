/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ProactiveExperts.framework/ProactiveExperts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ProactiveExperts/PEXContactSuggester.h>

@protocol OS_dispatch_source;
@class NSObject;

@interface PEXPeopleSuggester : PEXContactSuggester {

	/*^block*/id _mockBlock;
	NSObject*<OS_dispatch_source> _timer;

}
-(id)init;
-(void)waitForData;
-(void)_refreshPeopleSuggestionsAndRetryIfNoResults:(BOOL)arg1 ;
-(void)clearCachesWithoutRefreshing;
-(id)_makeDuetPeopleSuggester;
-(void)_processPeopleSuggestions:(id)arg1 favorites:(id)arg2 doRetry:(BOOL)arg3 ;
-(id)initWithMock:(/*^block*/id)arg1 ;
-(void)refreshMockPeopleSuggestions;
-(void)clearCaches;
@end
