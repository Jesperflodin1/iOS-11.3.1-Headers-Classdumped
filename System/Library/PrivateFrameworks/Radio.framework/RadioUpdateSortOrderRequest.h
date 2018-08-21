/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class NSArray;

@interface RadioUpdateSortOrderRequest : RadioSyncRequest {

	NSArray* _stationSortOrdering;

}
-(id)changeList;
-(id)initWithStationSortOrdering:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

