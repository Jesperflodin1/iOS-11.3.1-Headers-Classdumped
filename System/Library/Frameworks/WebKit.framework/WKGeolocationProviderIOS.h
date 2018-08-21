/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <WebKit/WebKit-Structs.h>
@interface WKGeolocationProviderIOS : NSObject {

	RefPtr<WebKit::WebGeolocationManagerProxy, WTF::DumbPtrTraits<WebKit::WebGeolocationManagerProxy> >* _geolocationManager;
	RetainPtr<id<_WKGeolocationCoreLocationProvider> >* _coreLocationProvider;
	BOOL _isWebCoreGeolocationActive;
	RefPtr<WebKit::WebGeolocationPosition, WTF::DumbPtrTraits<WebKit::WebGeolocationPosition> >* _lastActivePosition;
	Vector<GeolocationRequestData, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc>* _requestsWaitingForCoreLocationAuthorization;

}
-(id)init;
-(void)_stopUpdating;
-(void)_startUpdating;
-(void)decidePolicyForGeolocationRequestFromOrigin:(SecurityOrigin*)arg1 frame:(WebFrameProxy*)arg2 completionHandler:(Function<void (bool)>*)arg3 view:(id)arg4 ;
-(void)_setEnableHighAccuracy:(BOOL)arg1 ;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(id)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
-(id)initWithProcessPool:(WebProcessPool*)arg1 ;
@end

