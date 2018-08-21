/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSURLCompletionSessionProtocol.h>

@class WBSHistoryService;

@interface WBSHistoryURLCompletionSession : NSObject <WBSURLCompletionSessionProtocol> {

	WBSHistoryService* _historyService;

}
-(id)initWithHistoryService:(id)arg1 ;
-(void)getBestMatchesForTypedString:(id)arg1 limit:(unsigned long long)arg2 completionHandler:(/*^block*/id)arg3 ;
@end
