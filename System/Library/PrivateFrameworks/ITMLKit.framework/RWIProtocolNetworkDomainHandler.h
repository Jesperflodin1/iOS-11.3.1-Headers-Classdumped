/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:32 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol RWIProtocolNetworkDomainHandler <NSObject>
@required
-(void)enableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)disableWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2;
-(void)setExtraHTTPHeadersWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 headers:(id)arg3;
-(void)getResponseBodyWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3;
-(void)setResourceCachingDisabledWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 disabled:(BOOL)arg3;
-(void)loadResourceWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 frameId:(id)arg3 url:(id)arg4;
-(void)resolveWebSocketWithErrorCallback:(/*^block*/id)arg1 successCallback:(/*^block*/id)arg2 requestId:(id)arg3 objectGroup:(id*)arg4;

@end

