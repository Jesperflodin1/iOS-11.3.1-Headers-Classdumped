/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CLLocationManagerDelegate.h>

@protocol OS_dispatch_queue, NPHSOSPersistentTimerLocationManagerDelegate;
@class CLLocationManager, NSObject, PCPersistentTimer, CLLocation, CLAssertion, NSString;

@interface NPHSOSPersistentTimerLocationManager : NSObject <CLLocationManagerDelegate> {

	CLLocationManager* _locationManager;
	NSObject*<OS_dispatch_queue> _locationUpdateStartQueue;
	PCPersistentTimer* _locationUpdateTimer;
	PCPersistentTimer* _requestLocationsTimer;
	CLLocation* _lastLocation;
	double _ti;
	PCPersistentTimer* _initalRequestTimer;
	BOOL _requestingLocation;
	id<NPHSOSPersistentTimerLocationManagerDelegate> _delegate;
	CLAssertion* _forceEnableLocationAssertion;

}

@property (assign,getter=isRequestingLocation,nonatomic) BOOL requestingLocation;              //@synthesize requestingLocation=_requestingLocation - In the implementation block
@property (nonatomic,retain) CLAssertion * forceEnableLocationAssertion;                       //@synthesize forceEnableLocationAssertion=_forceEnableLocationAssertion - In the implementation block
@property (__weak) id<NPHSOSPersistentTimerLocationManagerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)setRequestingLocation:(BOOL)arg1 ;
-(id)init;
-(id<NPHSOSPersistentTimerLocationManagerDelegate>)delegate;
-(void)setDelegate:(id<NPHSOSPersistentTimerLocationManagerDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)isValid;
-(void)invalidateTimer;
-(void)_startTimer;
-(void)locationManager:(id)arg1 didUpdateLocations:(id)arg2 ;
-(void)locationManager:(id)arg1 didFailWithError:(id)arg2 ;
-(void)requestLocation;
-(void)stopRequestingLocationUpdates;
-(void)warmUpLocationRequest;
-(void)fireAndStartTimertWithTimeInterval:(double)arg1 ;
-(void)invalidateInitialTimer;
-(BOOL)isRequestingLocation;
-(void)invalidateRequestLocationsTimer;
-(BOOL)shouldStopRequestingLocationAfterCallback;
-(void)_requestLocationsTimeout:(id)arg1 ;
-(void)_sosPersistentTimerLocationManagerTic:(id)arg1 ;
-(void)_sosPersistentTimerInitialRequest:(id)arg1 ;
-(void)setForceEnableLocationAssertion:(CLAssertion *)arg1 ;
-(CLAssertion *)forceEnableLocationAssertion;
@end

