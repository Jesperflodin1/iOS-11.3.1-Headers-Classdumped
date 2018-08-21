/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/WBSHistoryAccessSessionProtocol.h>

@protocol OS_dispatch_queue;
@class WBSHistoryService, NSObject;

@interface WBSHistoryAccessSession : NSObject <WBSHistoryAccessSessionProtocol> {

	WBSHistoryService* _historyService;
	NSObject*<OS_dispatch_queue> _queue;

}
-(void)getHistoryItemsVisitedAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)getHistoryVisitsAfterDate:(id)arg1 beforeDate:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)initWithHistoryService:(id)arg1 ;
@end
