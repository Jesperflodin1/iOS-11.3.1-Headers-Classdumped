/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:44 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VKMapDataAccess <NSObject>
@required
-(double)displayZoomLevel;
-(Coordinate3D<Radians, double>*)groundCoordinateForScreenPixel:(const Matrix<double, 2, 1>*)arg1 cameraFrame:(const CameraFrame<geo::Radians, double>*)arg2;
-(Matrix<double, 2, 1>*)screenPixelForCoordinate:(const Coordinate3D<Radians, double>*)arg1 cameraFrame:(const CameraFrame<geo::Radians, double>*)arg2;
-(RigidTransform<double>*)rigidTransformForFrame:(const CameraFrame<geo::Radians, double>*)arg1;
-(const Matrix<double, 4, 4>*)projectionMatrix;
-(Matrix<double, 4, 4>*)worldViewProjectionMatrix:(const CameraFrame<geo::Radians, double>*)arg1;
-(double)fovAdjustment;
-(double)heightAtCoordinate:(const Coordinate3D<Radians, double>*)arg1;
-(void)setCameraFrame:(const CameraFrame<geo::Radians, double>*)arg1;
-(CameraFrame<geo::Radians, double>*)rotateCameraFrameAboutCoordinate:(const CameraFrame<geo::Radians, double>*)arg1 coordinate:(Coordinate3D<Radians, double>)arg2 deltaAngle:(double)arg3;

@end
