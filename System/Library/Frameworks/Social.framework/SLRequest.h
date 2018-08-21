/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccount, OACredential, NSURL, NSMutableDictionary, NSMutableArray, NSString, NSData, SLService, NSDictionary;

@interface SLRequest : NSObject {

	ACAccount* _account;
	OACredential* _OAuthCredential;
	long long _requestMethod;
	NSURL* _url;
	NSMutableDictionary* _parameters;
	NSMutableArray* _multiParts;
	NSString* _multiPartBoundary;
	int _callingPID;
	NSString* _applicationID;
	NSString* _contentType;
	NSData* _payload;
	unsigned long long _networkServiceType;
	SLService* _service;

}

@property (nonatomic,retain) ACAccount * account; 
@property (nonatomic,readonly) long long requestMethod;                //@synthesize requestMethod=_requestMethod - In the implementation block
@property (nonatomic,readonly) NSURL * URL;                            //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
+(id)requestForServiceType:(id)arg1 requestMethod:(long long)arg2 URL:(id)arg3 parameters:(id)arg4 ;
-(unsigned long long)networkServiceType;
-(id)init;
-(NSURL *)URL;
-(NSDictionary *)parameters;
-(void)setPayload:(id)arg1 ;
-(id)parameterForKey:(id)arg1 ;
-(id)preparedURLRequest;
-(int)callingPID;
-(id)OAuthCredential;
-(void)_addAuthenticationParameters:(id)arg1 ;
-(void)setMultiPartBoundary:(id)arg1 ;
-(id)multiPartBoundary;
-(id)_allParameters;
-(id)_parameterString;
-(BOOL)_shouldAppendTencentWeiboParametersToRequest;
-(id)_urlEncodedString:(id)arg1 ;
-(BOOL)shouldIncludeParameterString;
-(id)_preparedURL;
-(id)_HTTPMethodName;
-(id)completeMultiParts;
-(BOOL)_shouldRetryAfterCount:(int)arg1 delay:(float*)arg2 ;
-(id)_commandName;
-(void)performJSONRequestWithHandler:(/*^block*/id)arg1 retryCount:(int)arg2 ;
-(void)removeParameterForKey:(id)arg1 ;
-(id)multiParts;
-(void)addMultiPart:(id)arg1 ;
-(void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 ;
-(id)multiPartBodyData;
-(void)setOAuthCredential:(id)arg1 ;
-(void)setCallingPID:(int)arg1 ;
-(void)_appendCoreSig1Signature;
-(id)dictionaryRepresentationForJSONSerialization;
-(void)performJSONRequestWithHandler:(/*^block*/id)arg1 ;
-(id)initWithServiceType:(id)arg1 URL:(id)arg2 parameters:(id)arg3 requestMethod:(long long)arg4 ;
-(void)addMultipartData:(id)arg1 withName:(id)arg2 type:(id)arg3 filename:(id)arg4 ;
-(void)setParameterValue:(id)arg1 forKey:(id)arg2 ;
-(void)performRequestWithHandler:(/*^block*/id)arg1 ;
-(void)setAccount:(ACAccount *)arg1 ;
-(void)setNetworkServiceType:(unsigned long long)arg1 ;
-(ACAccount *)account;
-(BOOL)_requiresAuthorization;
-(void)setContentType:(id)arg1 ;
-(long long)requestMethod;
-(void)setApplicationID:(id)arg1 ;
@end

