/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesCloud/iTunesCloud-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ICStoreRequestContext;

@interface ICRadioLikeRequest : NSObject <NSCopying> {

	long long _storeAdamID;
	long long _likeState;
	NSString* _stationHash;
	long long _stationID;
	NSString* _stationStringID;
	long long _qualityOfService;
	ICStoreRequestContext* _requestContext;

}

@property (assign,nonatomic) long long storeAdamID;                             //@synthesize storeAdamID=_storeAdamID - In the implementation block
@property (assign,nonatomic) long long likeState;                               //@synthesize likeState=_likeState - In the implementation block
@property (nonatomic,copy) NSString * stationHash;                              //@synthesize stationHash=_stationHash - In the implementation block
@property (assign,nonatomic) long long stationID;                               //@synthesize stationID=_stationID - In the implementation block
@property (nonatomic,copy) NSString * stationStringID;                          //@synthesize stationStringID=_stationStringID - In the implementation block
@property (assign,nonatomic) long long qualityOfService;                        //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (nonatomic,copy) ICStoreRequestContext * requestContext;              //@synthesize requestContext=_requestContext - In the implementation block
-(long long)stationID;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setStationHash:(NSString *)arg1 ;
-(void)setStationID:(long long)arg1 ;
-(void)setLikeState:(long long)arg1 ;
-(NSString *)stationStringID;
-(void)setRequestContext:(ICStoreRequestContext *)arg1 ;
-(void)performWithResponseHandler:(/*^block*/id)arg1 ;
-(long long)storeAdamID;
-(void)setStoreAdamID:(long long)arg1 ;
-(id)initWithRequestContext:(id)arg1 ;
-(void)setStationStringID:(NSString *)arg1 ;
-(ICStoreRequestContext *)requestContext;
-(long long)likeState;
-(NSString *)stationHash;
-(long long)qualityOfService;
@end

