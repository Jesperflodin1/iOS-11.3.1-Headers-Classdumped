/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Radio/RadioRequest.h>

@class SSURLConnectionRequest;

@interface RadioGetWishListRequest : RadioRequest {

	SSURLConnectionRequest* _request;
	unsigned long long _maxNumberOfTracks;

}

@property (assign,nonatomic) unsigned long long maxNumberOfTracks;              //@synthesize maxNumberOfTracks=_maxNumberOfTracks - In the implementation block
-(id)init;
-(void)cancel;
-(unsigned long long)maxNumberOfTracks;
-(void)setMaxNumberOfTracks:(unsigned long long)arg1 ;
-(void)startWithCompletionHandler:(/*^block*/id)arg1 ;
@end

