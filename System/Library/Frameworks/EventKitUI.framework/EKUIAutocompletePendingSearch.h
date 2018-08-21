/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/EKUIAutocompletePendingSearchProtocol.h>

@protocol CalSpotlightQueryPendingSearchProtocol;
@class EKEventStore, NSString;

@interface EKUIAutocompletePendingSearch : NSObject <EKUIAutocompletePendingSearchProtocol> {

	EKEventStore* _eventStore;
	unsigned long long _maximumResultCount;
	id<CalSpotlightQueryPendingSearchProtocol> _pendingSearch;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_queue;
+(id)_eventKitQueue;
+(void)_updateResult:(id)arg1 withEvent:(id)arg2 ;
-(void)cancel;
-(void)searchWithString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
@end
