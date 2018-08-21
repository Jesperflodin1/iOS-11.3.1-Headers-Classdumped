/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, _HMDIDSProxyLinkPreferenceAssertion;

@interface HMDIDSServiceManager : HMFObject {

	IDSService* _proxyService;
	IDSService* _streamService;
	IDSService* _service;
	NSObject*<OS_dispatch_queue> _workQueue;
	_HMDIDSProxyLinkPreferenceAssertion* _proxyLinkPreferenceAssertion;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> workQueue;                              //@synthesize workQueue=_workQueue - In the implementation block
@property (__weak) _HMDIDSProxyLinkPreferenceAssertion * proxyLinkPreferenceAssertion;              //@synthesize proxyLinkPreferenceAssertion=_proxyLinkPreferenceAssertion - In the implementation block
@property (nonatomic,readonly) IDSService * proxyService;                                           //@synthesize proxyService=_proxyService - In the implementation block
@property (nonatomic,readonly) IDSService * streamService;                                          //@synthesize streamService=_streamService - In the implementation block
@property (nonatomic,readonly) IDSService * service;                                                //@synthesize service=_service - In the implementation block
+(id)sharedManager;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(IDSService *)service;
-(id)init;
-(IDSService *)proxyService;
-(_HMDIDSProxyLinkPreferenceAssertion *)proxyLinkPreferenceAssertion;
-(void)setProxyLinkPreferenceAssertion:(_HMDIDSProxyLinkPreferenceAssertion *)arg1 ;
-(void)setProxyServiceLinkPreferences:(id)arg1 ;
-(IDSService *)streamService;
@end

