/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, NSString, RadioTrack;

@interface RadioAddToWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	RadioTrack* _track;
	long long _action;
	long long _trackStoreID;

}

@property (assign,nonatomic) long long action;                      //@synthesize action=_action - In the implementation block
@property (nonatomic,readonly) long long trackStoreID;              //@synthesize trackStoreID=_trackStoreID - In the implementation block
-(id)init;
-(void)cancel;
-(long long)action;
-(void)setAction:(long long)arg1 ;
-(id)initWithTrack:(id)arg1 station:(id)arg2 ;
-(id)initWithTrackStoreID:(long long)arg1 stationID:(long long)arg2 stationHash:(id)arg3 stationStringID:(id)arg4 ;
-(id)initWithTrackStoreID:(long long)arg1 stationID:(long long)arg2 stationHash:(id)arg3 ;
-(long long)trackStoreID;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end
