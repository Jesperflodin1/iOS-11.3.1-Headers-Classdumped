/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol AVInteractiveTransitionGestureTrackerDelegate;
@class UIPanGestureRecognizer, UIPinchGestureRecognizer, UIRotationGestureRecognizer, NSArray, NSString;

@interface AVInteractiveTransitionGestureTracker : NSObject <UIGestureRecognizerDelegate> {

	BOOL _pinchToDismissEnabled;
	BOOL _pinchToPresentEnabled;
	BOOL _panToDismissEnabled;
	BOOL _trackingUpwardPan;
	long long _activeGestureType;
	double _rotation;
	double _previousPinchScale;
	id<AVInteractiveTransitionGestureTrackerDelegate> _delegate;
	UIPanGestureRecognizer* _panGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;
	UIRotationGestureRecognizer* _rotationGestureRecognizer;
	NSArray* _recognizers;
	CGPoint _locationOfInitialPinchInWindow;

}

@property (assign,getter=isPinchToDismissEnabled,nonatomic) BOOL pinchToDismissEnabled;                        //@synthesize pinchToDismissEnabled=_pinchToDismissEnabled - In the implementation block
@property (assign,getter=isPinchToPresentEnabled,nonatomic) BOOL pinchToPresentEnabled;                        //@synthesize pinchToPresentEnabled=_pinchToPresentEnabled - In the implementation block
@property (assign,getter=isPanToDismissEnabled,nonatomic) BOOL panToDismissEnabled;                            //@synthesize panToDismissEnabled=_panToDismissEnabled - In the implementation block
@property (assign,nonatomic) long long activeGestureType;                                                      //@synthesize activeGestureType=_activeGestureType - In the implementation block
@property (assign,nonatomic) CGPoint locationOfInitialPinchInWindow;                                           //@synthesize locationOfInitialPinchInWindow=_locationOfInitialPinchInWindow - In the implementation block
@property (assign,nonatomic) double rotation;                                                                  //@synthesize rotation=_rotation - In the implementation block
@property (assign,nonatomic) double previousPinchScale;                                                        //@synthesize previousPinchScale=_previousPinchScale - In the implementation block
@property (nonatomic,__weak,readonly) id<AVInteractiveTransitionGestureTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * panGestureRecognizer;                                  //@synthesize panGestureRecognizer=_panGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIPinchGestureRecognizer * pinchGestureRecognizer;                              //@synthesize pinchGestureRecognizer=_pinchGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIRotationGestureRecognizer * rotationGestureRecognizer;                        //@synthesize rotationGestureRecognizer=_rotationGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSArray * recognizers;                                                          //@synthesize recognizers=_recognizers - In the implementation block
@property (assign,getter=isTrackingUpwardPan,nonatomic) BOOL trackingUpwardPan;                                //@synthesize trackingUpwardPan=_trackingUpwardPan - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<AVInteractiveTransitionGestureTrackerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(UIPanGestureRecognizer *)panGestureRecognizer;
-(void)_reset;
-(void)_handlePanGesture:(id)arg1 ;
-(BOOL)isTracking;
-(UIPinchGestureRecognizer *)pinchGestureRecognizer;
-(double)rotation;
-(void)setRotation:(double)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_cancel;
-(void)_finish;
-(UIRotationGestureRecognizer *)rotationGestureRecognizer;
-(void)addRecognizersToView:(id)arg1 ;
-(void)transitionDidBegin;
-(void)_handlePinchGesture:(id)arg1 ;
-(void)_handleRotationGesture:(id)arg1 ;
-(void)_beginTracking:(long long)arg1 ;
-(long long)activeGestureType;
-(void)setActiveGestureType:(long long)arg1 ;
-(BOOL)isPinchToDismissEnabled;
-(void)setPinchToDismissEnabled:(BOOL)arg1 ;
-(BOOL)isPinchToPresentEnabled;
-(void)setPinchToPresentEnabled:(BOOL)arg1 ;
-(BOOL)isPanToDismissEnabled;
-(void)setPanToDismissEnabled:(BOOL)arg1 ;
-(CGPoint)locationOfInitialPinchInWindow;
-(void)setLocationOfInitialPinchInWindow:(CGPoint)arg1 ;
-(double)previousPinchScale;
-(void)setPreviousPinchScale:(double)arg1 ;
-(NSArray *)recognizers;
-(BOOL)isTrackingUpwardPan;
-(void)setTrackingUpwardPan:(BOOL)arg1 ;
@end

