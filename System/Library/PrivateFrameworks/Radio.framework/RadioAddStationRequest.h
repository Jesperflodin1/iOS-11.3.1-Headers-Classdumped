/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioSyncRequest.h>

@class NSDictionary, NSMutableDictionary, NSString;

@interface RadioAddStationRequest : RadioSyncRequest {

	NSDictionary* _matchDictionary;
	long long _persistentID;
	NSMutableDictionary* _stationDictionary;
	NSString* _stationHashForSkipHistoryCopying;

}
-(id)init;
-(id)matchDictionary;
-(id)initWithRadioTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(void)startWithAddStationCompletionHandler:(/*^block*/id)arg1 ;
-(id)changeList;
-(id)initWithStationDictionary:(id)arg1 ;
-(id)initWithLibraryTrackDictionary:(id)arg1 useArtist:(BOOL)arg2 ;
-(id)initWithQueryTerm:(id)arg1 queryID:(long long)arg2 ;
-(id)initWithStation:(id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

