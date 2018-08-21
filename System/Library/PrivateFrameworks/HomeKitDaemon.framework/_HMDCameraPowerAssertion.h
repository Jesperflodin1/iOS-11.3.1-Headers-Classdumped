/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HMFoundation/HMFObject.h>

@class HMDCameraPowerAssertionHandler, HMDCameraSessionID;

@interface _HMDCameraPowerAssertion : HMFObject {

	HMDCameraPowerAssertionHandler* _assertionHandler;
	HMDCameraSessionID* _remoteRequestHandlerSessionID;

}

@property (nonatomic,__weak,readonly) HMDCameraPowerAssertionHandler * assertionHandler;              //@synthesize assertionHandler=_assertionHandler - In the implementation block
@property (nonatomic,readonly) HMDCameraSessionID * remoteRequestHandlerSessionID;                    //@synthesize remoteRequestHandlerSessionID=_remoteRequestHandlerSessionID - In the implementation block
-(void)dealloc;
-(HMDCameraPowerAssertionHandler *)assertionHandler;
-(HMDCameraSessionID *)remoteRequestHandlerSessionID;
-(id)initWithPowerAssertionHandler:(id)arg1 remoteRequestHandlerSessionID:(id)arg2 ;
@end

