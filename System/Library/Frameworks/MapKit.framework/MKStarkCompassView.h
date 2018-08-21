/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/MKLocationManagerObserver.h>

@class UIView, UILabel, MKLocationManager, CLInUseAssertion, NSString;

@interface MKStarkCompassView : UIView <MKLocationManagerObserver> {

	UIView* _contentsView;
	BOOL _monitoringCourse;
	UILabel* _label;
	MKLocationManager* _locationManager;
	CLInUseAssertion* _assertion;
	BOOL _contentsHidden;
	BOOL _active;
	int _compassPoint;

}

@property (assign,nonatomic) int compassPoint;                         //@synthesize compassPoint=_compassPoint - In the implementation block
@property (assign,nonatomic) BOOL contentsHidden;                      //@synthesize contentsHidden=_contentsHidden - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;              //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(void)didMoveToWindow;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isActive;
-(CGSize)intrinsicContentSize;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithEffectiveBundleIdentifier:(id)arg1 ;
-(void)locationManagerFailedToUpdateLocation:(id)arg1 withError:(id)arg2 ;
-(void)locationManagerDidReset:(id)arg1 ;
-(BOOL)locationManagerShouldPauseLocationUpdates:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleSpeed:(double)arg2 timestamp:(id)arg3 ;
-(void)locationManagerUpdatedLocation:(id)arg1 ;
-(void)locationManager:(id)arg1 didUpdateVehicleHeading:(double)arg2 timestamp:(id)arg3 ;
-(id)initWithSharedMKLocationManager;
-(void)_updateStyling;
-(void)_updateContents;
-(void)_startLocationUpdates;
-(void)_stopLocationUpdates;
-(BOOL)_canStartLocationUpdates;
-(void)_updateDisplayedHeadingWithHeading:(double)arg1 ;
-(void)setCompassPoint:(int)arg1 ;
-(int)compassPoint;
-(BOOL)contentsHidden;
-(void)setContentsHidden:(BOOL)arg1 ;
-(void)_createSubviews;
-(void)_setActive:(BOOL)arg1 ;
-(void)locationManagerDidPauseLocationUpdates:(id)arg1 ;
-(void)locationManagerDidResumeLocationUpdates:(id)arg1 ;
@end

