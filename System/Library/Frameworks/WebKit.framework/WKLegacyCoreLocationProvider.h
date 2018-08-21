/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:56 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKit/WebKit-Structs.h>
#import <libobjc.A.dylib/_WKGeolocationCoreLocationProvider.h>
#import <WebKit/WebGeolocationCoreLocationUpdateListener.h>

@protocol _WKGeolocationCoreLocationListener;
@class NSString;

@interface WKLegacyCoreLocationProvider : NSObject <_WKGeolocationCoreLocationProvider, WebGeolocationCoreLocationUpdateListener> {

	id<_WKGeolocationCoreLocationListener> _listener;
	RetainPtr<WebGeolocationCoreLocationProvider>* _provider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stop;
-(void)start;
-(void)setListener:(id)arg1 ;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)requestGeolocationAuthorization;
-(void)geolocationAuthorizationGranted;
-(void)geolocationAuthorizationDenied;
-(void)positionChanged:(GeolocationPosition*)arg1 ;
-(void)errorOccurred:(id)arg1 ;
-(void)resetGeolocation;
@end

