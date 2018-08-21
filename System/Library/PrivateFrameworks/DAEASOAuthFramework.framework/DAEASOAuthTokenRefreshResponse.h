/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DAEASOAuthFramework.framework/DAEASOAuthFramework
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSError, NSDictionary, NSString, NSDate;

@interface DAEASOAuthTokenRefreshResponse : NSObject {

	long long _statusCode;
	NSError* _error;
	NSDictionary* _responseBody;
	NSString* _accessToken;
	NSString* _refreshToken;
	NSDate* _expiryDate;

}

@property (nonatomic,readonly) long long statusCode;                     //@synthesize statusCode=_statusCode - In the implementation block
@property (nonatomic,readonly) NSError * error;                          //@synthesize error=_error - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseBody;              //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,readonly) NSString * accessToken;                   //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,readonly) NSString * refreshToken;                  //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSDate * expiryDate;                      //@synthesize expiryDate=_expiryDate - In the implementation block
-(NSDictionary *)responseBody;
-(long long)statusCode;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
-(NSString *)refreshToken;
-(NSError *)error;
-(NSDate *)expiryDate;
-(NSString *)accessToken;
@end

