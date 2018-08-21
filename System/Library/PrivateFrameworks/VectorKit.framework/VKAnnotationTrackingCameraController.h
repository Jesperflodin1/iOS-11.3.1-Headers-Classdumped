/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKCameraController.h>

@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;
@class VKTimedAnimation;

@interface VKAnnotationTrackingCameraController : VKCameraController {

	id<VKTrackableAnnotation> _annotation;
	id<VKTrackableAnnotationPresentation> _annotationPresentation;
	VKTimedAnimation* _currentAnimation;
	Matrix<double, 3, 1> _currentAnimationStartPoint;
	Matrix<double, 3, 1> _currentAnimationStartCameraPosition;
	Matrix<double, 3, 1> _currentAnimationEndPoint;
	Matrix<double, 3, 1> _currentAnimationEndCameraPosition;
	double _pendingChangeDuration;
	VKTimedAnimation* _currentHeadingAnimation;
	double _pendingHeadingChangeDuration;
	float _headingAnimationCompletedAngle;
	long long _headingAnimationDisplayRate;
	long long _zoomStyle;
	struct {
		unsigned hasPendingChange : 1;
		unsigned paused : 1;
		unsigned trackingHeading : 1;
		unsigned hasPendingHeadingChange : 1;
		unsigned isInitialRegionChange : 1;
		unsigned isJumpingToAnnotation : 1;
		unsigned annotationImplementsAccuracy : 1;
		unsigned annotationImplementsHeading : 1;
		unsigned annotationImplementsExpectedCoordinateUpdateInterval : 1;
		unsigned annotationImplementsExpectedHeadingUpdateInterval : 1;
	}  _flags;

}

@property (assign,nonatomic) long long zoomStyle;                                          //@synthesize zoomStyle=_zoomStyle - In the implementation block
@property (assign,nonatomic) long long headingAnimationDisplayRate;                        //@synthesize headingAnimationDisplayRate=_headingAnimationDisplayRate - In the implementation block
@property (nonatomic,readonly) id<VKTrackableAnnotation> annotation;                       //@synthesize annotation=_annotation - In the implementation block
@property (getter=isTrackingHeading,nonatomic,readonly) BOOL trackingHeading; 
-(id)init;
-(void)dealloc;
-(BOOL)isAnimating;
-(void)pauseAnimation;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setEdgeInsets:(VKEdgeInsets)arg1 ;
-(id<VKTrackableAnnotation>)annotation;
-(BOOL)isTrackingHeading;
-(void)updateFramerate;
-(void)_goToAnnotationAnimated:(BOOL)arg1 duration:(double)arg2 isInitial:(BOOL)arg3 ;
-(void)_rotateToHeadingAnimated:(BOOL)arg1 duration:(double)arg2 ;
-(long long)zoomStyle;
-(void)setZoomStyle:(long long)arg1 ;
-(long long)headingAnimationDisplayRate;
-(void)setHeadingAnimationDisplayRate:(long long)arg1 ;
-(void)setGesturing:(BOOL)arg1 ;
-(void)stopTrackingAnnotation;
-(void)startTrackingAnnotation:(id)arg1 trackHeading:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)resumeAnimation;
@end

