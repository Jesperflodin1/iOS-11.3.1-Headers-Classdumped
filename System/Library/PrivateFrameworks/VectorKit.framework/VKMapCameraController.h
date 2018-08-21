/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKScreenCameraController.h>
#import <libobjc.A.dylib/VKGesturingCameraController.h>

@class VKMapModel, VKMapCanvas, VKTimedAnimation, NSString;

@interface VKMapCameraController : VKScreenCameraController <VKGesturingCameraController> {

	VKMapModel* _mapModel;
	VKMapCanvas* _mapCanvas;
	VKTimedAnimation* _horizontalOffsetAnimation;
	double _minDistanceToGroundAlongForwardVector;
	double _maxDistanceToGroundAlongForwardVector;
	double _finalYaw;
	double _finalPitch;

}

@property (nonatomic,retain) VKMapModel * mapModel;                 //@synthesize mapModel=_mapModel - In the implementation block
@property (assign,nonatomic) VKMapCanvas * mapCanvas;               //@synthesize mapCanvas=_mapCanvas - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)altitude;
-(id)viewportInfo;
-(double)pitch;
-(CGSize)centerCoordinate;
-(id)init;
-(void)dealloc;
-(double)heading;
-(long long)tileSize;
-(void)zoomToLevel:(double)arg1 withFocusPoint:(CGPoint)arg2 ;
-(VKMapCanvas *)mapCanvas;
-(double)distanceFromCenterCoordinate;
-(void)canvasDidLayout;
-(double)minimumZoomLevel;
-(double)maximumZoomLevel;
-(double)currentZoomLevel;
-(double)topDownMinimumZoomLevel;
-(void)updateCameraToPositionOrientationLimits;
-(float)currentDisplayZoomLevel;
-(float)currentNormalizedZoomLevel;
-(float)currentStyleZoomLevel;
-(float)minimumNormalizedZoomLevel;
-(float)maximumNormalizedZoomLevel;
-(float)currentMaximumNormalizedZoomLevel;
-(float)currentMinimumNormalizedZoomLevel;
-(float)currentTopDownMinimumNormalizedZoomLevel;
-(float)normalizedZoomLevelAdjustmentForTileSize:(long long)arg1 ;
-(float)minimumPitchForNormalizedZoomLevel:(float)arg1 ;
-(float)idealPitchForNormalizedZoomLevel:(float)arg1 ;
-(float)maxPitchForNormalizedZoomLevel:(float)arg1 ;
-(void)rotateToPitch:(double)arg1 withPoint:(const Matrix<double, 3, 1>*)arg2 preserveAltitude:(BOOL)arg3 animated:(BOOL)arg4 exaggerate:(BOOL)arg5 ;
-(void)rotateToYaw:(double)arg1 withPoint:(const Matrix<double, 3, 1>*)arg2 animated:(BOOL)arg3 ;
-(void)tapZoom:(CGPoint)arg1 levels:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)zoom:(double)arg1 withPoint:(Matrix<double, 3, 1>)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)zoomToLevel:(double)arg1 withPoint:(Matrix<double, 3, 1>)arg2 ;
-(BOOL)snapMapIfNecessary:(BOOL)arg1 ;
-(void)clampPitch:(double*)arg1 yaw:(double*)arg2 atTargetPositionZ:(double)arg3 ;
-(BOOL)canEnter3DModeNoUpdate;
-(void)clampZoomLevelIfNecessary;
-(void)updateCameraZBounds;
-(CGSize)_mercatorCenterCoordinateForMapRegion:(id)arg1 ;
-(void)_animateToPosition:(Matrix<double, 3, 1>)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 timingCurve:(/*^block*/id)arg5 completion:(/*^block*/id)arg6 ;
-(void)setCenterCoordinate:(CGSize)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(void)setCenterCoordinate3D:(SCD_Struct_VK52)arg1 altitude:(double)arg2 yaw:(double)arg3 pitch:(double)arg4 duration:(double)arg5 animationStyle:(long long)arg6 timingCurve:(/*^block*/id)arg7 completion:(/*^block*/id)arg8 ;
-(VKMapModel *)mapModel;
-(void)setMapModel:(VKMapModel *)arg1 ;
-(void)setMapCanvas:(VKMapCanvas *)arg1 ;
-(double)presentationYaw;
-(void)zoom:(double)arg1 withFocusPoint:(CGPoint)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)setMapRegion:(id)arg1 pitch:(double)arg2 yaw:(double)arg3 duration:(double)arg4 completion:(/*^block*/id)arg5 ;
-(double)durationToAnimateToMapRegion:(id)arg1 ;
-(BOOL)allowDatelineWraparound;
-(BOOL)canEnter3DMode;
-(BOOL)isPitched;
-(void)exit3DMode;
-(void)enter3DMode;
-(void)panWithOffset:(CGPoint)arg1 relativeToScreenPoint:(CGPoint)arg2 animated:(BOOL)arg3 duration:(double)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)setGesturing:(BOOL)arg1 ;
-(void)setYaw:(double)arg1 animated:(BOOL)arg2 ;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(double)zoomLevelAdjustmentForTileSize:(long long)arg1 ;
-(BOOL)restoreViewportFromInfo:(id)arg1 ;
-(void)setAllowDatelineWraparound:(BOOL)arg1 ;
-(double)yaw;
-(BOOL)isFullyPitched;
-(BOOL)canRotate;
@end

