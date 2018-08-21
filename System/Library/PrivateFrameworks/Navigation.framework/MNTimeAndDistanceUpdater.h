/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNTimeAndDistanceUpdaterDelegate;
@class MNLocation, NSArray, NSTimer, MNActiveRouteInfo;

@interface MNTimeAndDistanceUpdater : NSObject {

	id<MNTimeAndDistanceUpdaterDelegate> _delegate;
	MNLocation* _location;
	NSArray* _routes;
	NSTimer* _minuteTimer;
	MNActiveRouteInfo* _mainRoute;
	double _remainingTime;
	double _remainingDistance;
	double _distanceToManeuverStart;
	double _distanceToManeuverEnd;

}

@property (assign,nonatomic,__weak) id<MNTimeAndDistanceUpdaterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) double remainingTime;                                            //@synthesize remainingTime=_remainingTime - In the implementation block
@property (nonatomic,readonly) double remainingDistance;                                        //@synthesize remainingDistance=_remainingDistance - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverStart;                                  //@synthesize distanceToManeuverStart=_distanceToManeuverStart - In the implementation block
@property (nonatomic,readonly) double distanceToManeuverEnd;                                    //@synthesize distanceToManeuverEnd=_distanceToManeuverEnd - In the implementation block
-(void)setRoutes:(id)arg1 ;
-(double)remainingTime;
-(id<MNTimeAndDistanceUpdaterDelegate>)delegate;
-(void)setDelegate:(id<MNTimeAndDistanceUpdaterDelegate>)arg1 ;
-(void)dealloc;
-(void)setLocation:(id)arg1 ;
-(double)remainingDistance;
-(void)startUpdating;
-(void)stopUpdating;
-(void)updateDisplayETAForRoute:(id)arg1 shouldNotifyDelegate:(BOOL)arg2 ;
-(void)_startTimerToNextMinute;
-(double)distanceToManeuverStart;
-(double)distanceToManeuverEnd;
@end

