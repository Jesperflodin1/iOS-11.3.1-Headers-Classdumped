/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebKitLegacy/WebKitLegacy-Structs.h>
#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol WebGeolocationCoreLocationUpdateListener;
@class NSString;

@interface WebGeolocationCoreLocationProvider : NSObject <CLLocationManagerDelegate> {

	id<WebGeolocationCoreLocationUpdateListener> _positionListener;
	RetainPtr<CLLocationManager>* _locationManager;
	BOOL _isWaitingForAuthorization;
	int _lastAuthorizationStatus;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)createLocationManager;
-(void)sendLocation:(id)arg1 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)setEnableHighAccuracy:(BOOL)arg1 ;
-(void)requestGeolocationAuthorization;
-(id)initWithListener:(id)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
@end
