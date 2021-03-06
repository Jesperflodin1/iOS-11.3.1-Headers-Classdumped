/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest, RadioStation;

@interface RadioLikeRequest : RadioRequest {

	long long _itemID;
	int _likeStatus;
	SSURLConnectionRequest* _request;
	int _seedType;
	RadioStation* _station;
	BOOL _isSeed;

}

@property (assign,nonatomic) int likeStatus;              //@synthesize likeStatus=_likeStatus - In the implementation block
@property (assign,nonatomic) BOOL isSeed;                 //@synthesize isSeed=_isSeed - In the implementation block
-(id)init;
-(BOOL)isSeed;
-(void)setIsSeed:(BOOL)arg1 ;
-(int)likeStatus;
-(id)initWithTrack:(id)arg1 station:(id)arg2 ;
-(id)initWithItemID:(long long)arg1 seedType:(int)arg2 station:(id)arg3 ;
-(id)initWithTrackID:(id)arg1 station:(id)arg2 ;
-(void)setLikeStatus:(int)arg1 ;
-(void)startWithLikeCompletionHandler:(/*^block*/id)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

