/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKSceneConfiguration : NSObject {

	shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >* _sceneManager;
	shared_ptr<gss::StylesheetManager<gss::PropertyID> >* _styleManager;
	vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> >* _pointsOfInterest;
	unsigned char _navState;
	unsigned char _distanceToCurrentManeuver;
	double _distanceToDestination;
	int _currentManeuverType;
	unsigned char _currentStepLength;
	unsigned char _nextStepLength;
	unsigned char _currentIncidentType;
	unsigned char _currentManeuverComplexity;
	unsigned long long _currentGroupedManeuverCount;
	unsigned _lineType;
	int _rampType;
	int _nextManeuverRampType;
	unsigned char _transportType;
	unsigned char _searchAlongTheRoute;
	unsigned char _vehicleSpeed;
	unsigned char _roadSpeed;
	unsigned long long _roadSpeedZeroes;
	unsigned char _cameraMode;
	unsigned char _navigationDestination;
	ManeveuverDistancesRange _distanceRanges;
	shared_ptr<md::TaskContext>* _taskContext;

}
-(void)setNavigationState:(int)arg1 ;
-(unsigned char)navigationState;
-(void)setVehicleSpeed:(double)arg1 ;
-(void)setDistanceToDestination:(double)arg1 ;
-(void)setLineType:(unsigned)arg1 ;
-(id)initWithTaskContext:(shared_ptr<md::TaskContext>*)arg1 ;
-(void)setSceneManager:(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)arg1 ;
-(void)_updateStyleManager;
-(shared_ptr<gss::StylesheetManager<gss::ScenePropertyID> >*)sceneManager;
-(void)setStyleManager:(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)arg1 ;
-(shared_ptr<gss::StylesheetManager<gss::PropertyID> >*)styleManager;
-(void)setDistanceToCurrentManeuver:(double)arg1 ;
-(void)setCurrentManeuverType:(int)arg1 ;
-(void)setCurrentStepLength:(double)arg1 ;
-(void)setNextStepLength:(double)arg1 ;
-(void)setCurrentIncidentType:(unsigned long long)arg1 ;
-(void)setCurrentManeuverJunctionsCount:(unsigned long long)arg1 ;
-(void)setCurrentGroupedManeuverCount:(unsigned long long)arg1 ;
-(void)setRampType:(int)arg1 ;
-(void)setNextManeuverRampType:(int)arg1 ;
-(void)setCurrentTransportationType:(int)arg1 ;
-(void)setSearchAlongTheRoute:(BOOL)arg1 ;
-(void)setRoadSpeed:(double)arg1 ;
-(void)setNavCameraMode:(unsigned long long)arg1 ;
-(unsigned long long)navCameraMode;
-(void)setNavigationDestination:(unsigned long long)arg1 ;
-(unsigned long long)navigationDestination;
-(id)analyticsLogContextWithNavigationState;
-(void)resetState;
@end
