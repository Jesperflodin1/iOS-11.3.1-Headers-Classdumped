/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/HFLocationManagerObserver.h>

@protocol HFLocationSensingCoordinatorDelegate;
@class NSUserDefaults, HFLocationManagerDispatcher, NAFuture, NSString;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {

	id<HFLocationSensingCoordinatorDelegate> _delegate;
	NSUserDefaults* _defaults;
	HFLocationManagerDispatcher* _locationDispatcher;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                                             //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) HFLocationManagerDispatcher * locationDispatcher;                      //@synthesize locationDispatcher=_locationDispatcher - In the implementation block
@property (assign,nonatomic,__weak) id<HFLocationSensingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL homeSensingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<HFLocationSensingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HFLocationSensingCoordinatorDelegate>)arg1 ;
-(void)dealloc;
-(id)initWithDelegate:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)homeSensingEnabled;
-(void)setLocationDispatcher:(HFLocationManagerDispatcher *)arg1 ;
-(HFLocationManagerDispatcher *)locationDispatcher;
-(NAFuture *)locationSensingAvailableFuture;
-(void)setHomeSensingEnabled:(BOOL)arg1 ;
-(NSUserDefaults *)defaults;
@end

