/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlStepperViewProfile, UIView, NSArray, NSNumber, UILongPressGestureRecognizer, NSString;

@interface HUQuickControlStepperView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	HUQuickControlStepperViewProfile* _profile;
	UIView* _backgroundView;
	NSArray* _segmentViews;
	NSArray* _separatorViews;
	NSNumber* _selectedSegmentIndex;
	UILongPressGestureRecognizer* _gestureRecognizer;
	double _accumulatedTouchDistance;
	NSNumber* _trackingSegmentIndex;
	CGPoint _lastTouchLocation;

}

@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) NSArray * segmentViews;                                                            //@synthesize segmentViews=_segmentViews - In the implementation block
@property (nonatomic,retain) NSArray * separatorViews;                                                          //@synthesize separatorViews=_separatorViews - In the implementation block
@property (nonatomic,retain) NSNumber * selectedSegmentIndex;                                                   //@synthesize selectedSegmentIndex=_selectedSegmentIndex - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint lastTouchLocation;                                                         //@synthesize lastTouchLocation=_lastTouchLocation - In the implementation block
@property (assign,nonatomic) double accumulatedTouchDistance;                                                   //@synthesize accumulatedTouchDistance=_accumulatedTouchDistance - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) NSNumber * trackingSegmentIndex;                                                   //@synthesize trackingSegmentIndex=_trackingSegmentIndex - In the implementation block
@property (nonatomic,copy) HUQuickControlStepperViewProfile * profile;                                          //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
-(void)layoutSubviews;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(NSNumber *)selectedSegmentIndex;
-(void)setSelectedSegmentIndex:(NSNumber *)arg1 ;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlStepperViewProfile *)profile;
-(void)setProfile:(HUQuickControlStepperViewProfile *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)setSegmentViews:(NSArray *)arg1 ;
-(NSArray *)segmentViews;
-(void)_handleGesture:(id)arg1 ;
-(void)setTrackingSegmentIndex:(NSNumber *)arg1 ;
-(NSNumber *)trackingSegmentIndex;
-(void)_createSegmentAndSeparatorViews;
-(void)setSeparatorViews:(NSArray *)arg1 ;
-(void)_layoutSegmentViews;
-(NSArray *)separatorViews;
-(void)_updateUserInteractionActive:(BOOL)arg1 forFirstTouch:(BOOL)arg2 ;
-(void)setAccumulatedTouchDistance:(double)arg1 ;
-(void)setLastTouchLocation:(CGPoint)arg1 ;
-(void)_updateSegmentHighlightedState;
-(BOOL)_shouldRequireMinimumDragDistanceForGestureRecognizer:(id)arg1 ;
-(CGPoint)lastTouchLocation;
-(double)accumulatedTouchDistance;
@end

