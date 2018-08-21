/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaControls/MediaControls-Structs.h>
#import <UIKit/UIControl.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSArray, NSLayoutConstraint, CADisplayLink, AVTimeFormatter, NSString, MPCPlayerResponse, UIView, UILabel, UIImageView, UILayoutGuide;

@interface MediaControlsTimeControl : UIControl <UIGestureRecognizerDelegate> {

	NSArray* _defaultConstraints;
	NSArray* _trackingConstraints;
	NSArray* _initialConstraints;
	NSLayoutConstraint* _knobViewXConstraint;
	CADisplayLink* _displayLink;
	AVTimeFormatter* _elapsedTimeFormatter;
	AVTimeFormatter* _remainingTimeFormatter;
	double _lastRecordedTime;
	double _currentTimeInTrack;
	NSString* _elapsedTime;
	NSString* _remainingTime;
	BOOL _transitioning;
	BOOL _empty;
	BOOL _timeControlOnScreen;
	BOOL _currentlyTracking;
	long long _style;
	MPCPlayerResponse* _response;
	UIView* _elapsedTrack;
	UIView* _remainingTrack;
	UIView* _knobView;
	UILabel* _elapsedTimeLabel;
	UILabel* _remainingTimeLabel;
	UILabel* _liveLabel;
	UIImageView* _liveBackground;
	UILayoutGuide* _trackLayoutGuide;
	double _sliderValue;
	SCD_Struct_Me0 _durationSnapshot;

}

@property (nonatomic,retain) UIView * elapsedTrack;                                              //@synthesize elapsedTrack=_elapsedTrack - In the implementation block
@property (nonatomic,retain) UIView * remainingTrack;                                            //@synthesize remainingTrack=_remainingTrack - In the implementation block
@property (nonatomic,retain) UIView * knobView;                                                  //@synthesize knobView=_knobView - In the implementation block
@property (nonatomic,retain) UILabel * elapsedTimeLabel;                                         //@synthesize elapsedTimeLabel=_elapsedTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * remainingTimeLabel;                                       //@synthesize remainingTimeLabel=_remainingTimeLabel - In the implementation block
@property (nonatomic,retain) UILabel * liveLabel;                                                //@synthesize liveLabel=_liveLabel - In the implementation block
@property (nonatomic,retain) UIImageView * liveBackground;                                       //@synthesize liveBackground=_liveBackground - In the implementation block
@property (nonatomic,retain) UILayoutGuide * trackLayoutGuide;                                   //@synthesize trackLayoutGuide=_trackLayoutGuide - In the implementation block
@property (assign,nonatomic) double sliderValue;                                                 //@synthesize sliderValue=_sliderValue - In the implementation block
@property (assign,getter=isCurrentlyTracking,nonatomic) BOOL currentlyTracking;                  //@synthesize currentlyTracking=_currentlyTracking - In the implementation block
@property (assign,getter=isTransitioning,nonatomic) BOOL transitioning;                          //@synthesize transitioning=_transitioning - In the implementation block
@property (assign,getter=isEmpty,nonatomic) BOOL empty;                                          //@synthesize empty=_empty - In the implementation block
@property (assign,nonatomic) long long style;                                                    //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) MPCPlayerResponse * response;                                       //@synthesize response=_response - In the implementation block
@property (assign,nonatomic) SCD_Struct_Me0 durationSnapshot;                                    //@synthesize durationSnapshot=_durationSnapshot - In the implementation block
@property (assign,getter=isTimeControlOnScreen,nonatomic) BOOL timeControlOnScreen;              //@synthesize timeControlOnScreen=_timeControlOnScreen - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setResponse:(MPCPlayerResponse *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(MPCPlayerResponse *)response;
-(void)_updateStyle;
-(long long)style;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(BOOL)isEmpty;
-(void)viewDidMoveToSuperview;
-(BOOL)isTransitioning;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)_displayLinkTick:(id)arg1 ;
-(void)setTransitioning:(BOOL)arg1 ;
-(UILayoutGuide *)trackLayoutGuide;
-(UILabel *)elapsedTimeLabel;
-(void)setEmpty:(BOOL)arg1 ;
-(SCD_Struct_Me0)durationSnapshot;
-(void)setElapsedTimeLabel:(UILabel *)arg1 ;
-(void)setRemainingTimeLabel:(UILabel *)arg1 ;
-(UILabel *)remainingTimeLabel;
-(void)setKnobView:(UIView *)arg1 ;
-(UIView *)knobView;
-(double)sliderValue;
-(void)setSliderValue:(double)arg1 ;
-(void)setTimeControlOnScreen:(BOOL)arg1 ;
-(UIView *)elapsedTrack;
-(UIView *)remainingTrack;
-(UIImageView *)liveBackground;
-(UILabel *)liveLabel;
-(void)_updateTimeControl;
-(void)_updateSliderPosition;
-(void)_updateLabels:(double)arg1 withRemainingDuration:(double)arg2 ;
-(void)_updateDisplayLinkPause;
-(void)updateLabelAvoidance;
-(BOOL)isCurrentlyTracking;
-(void)createDisplayLinkIfNeeded;
-(void)invalidateDisplayLinkIfNeeded;
-(void)_updateLabels:(SCD_Struct_Me0)arg1 withTargetTimestamp:(double)arg2 ;
-(BOOL)isTimeControlOnScreen;
-(void)setElapsedTrack:(UIView *)arg1 ;
-(void)setRemainingTrack:(UIView *)arg1 ;
-(void)setLiveLabel:(UILabel *)arg1 ;
-(void)setLiveBackground:(UIImageView *)arg1 ;
-(void)setTrackLayoutGuide:(UILayoutGuide *)arg1 ;
-(void)setCurrentlyTracking:(BOOL)arg1 ;
-(void)setDurationSnapshot:(SCD_Struct_Me0)arg1 ;
@end

