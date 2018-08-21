/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <UIKit/UIKit-Structs.h>
@class UIInputViewSet, UIInputViewAnimationStyle, UISnapshotView;

@interface UIInputViewTransition : NSObject {

	UIInputViewSet* oldSet;
	UIInputViewSet* newSet;
	UIInputViewAnimationStyle* animationStyle;
	BOOL cancelled;
	int animationState;
	double animationStartTime;
	BOOL skipNotifications;
	BOOL skipFencing;
	CGRect beginFrame;
	CGRect endFrame;
	CGRect beginFrameScreen;
	CGRect endFrameScreen;
	CGRect beginFloatingFrame;
	CGRect endFloatingFrame;
	CGRect beginFloatingFrameScreen;
	CGRect endFloatingFrameScreen;
	int activeClippingModes;
	UISnapshotView* snapshotView;
	CGRect snapshotViewBeginFrame;
	CGRect snapshotViewEndFrame;

}

@property (nonatomic,retain) UIInputViewSet * oldSet; 
@property (nonatomic,retain) UISnapshotView * snapshotView; 
@property (assign,nonatomic) CGRect snapshotViewBeginFrame; 
@property (assign,nonatomic) CGRect snapshotViewEndFrame; 
@property (nonatomic,retain) UIInputViewAnimationStyle * animationStyle; 
@property (assign,nonatomic) BOOL cancelled; 
@property (assign,nonatomic) int animationState; 
@property (assign,nonatomic) double animationStartTime; 
@property (assign,nonatomic) BOOL skipNotifications; 
@property (assign,nonatomic) BOOL skipFencing; 
@property (assign,nonatomic) CGRect beginFrame; 
@property (assign,nonatomic) CGRect endFrame; 
@property (assign,nonatomic) CGRect beginFrameScreen; 
@property (assign,nonatomic) CGRect endFrameScreen; 
@property (assign,nonatomic) CGRect beginFloatingFrame; 
@property (assign,nonatomic) CGRect endFloatingFrame; 
@property (assign,nonatomic) CGRect beginFloatingFrameScreen; 
@property (assign,nonatomic) CGRect endFloatingFrameScreen; 
@property (nonatomic,readonly) BOOL ignoreFrameChanges; 
@property (assign,nonatomic) int activeClippingModes; 
@property (nonatomic,readonly) int beginState; 
@property (nonatomic,readonly) int transitioningState; 
@property (nonatomic,readonly) int endState; 
@property (nonatomic,readonly) int cancelState; 
@property (nonatomic,readonly) CGRect deprecatedBounds; 
@property (nonatomic,readonly) CGPoint deprecatedCenterBegin; 
@property (nonatomic,readonly) CGPoint deprecatedCenterEnd; 
-(void)dealloc;
-(id)description;
-(UISnapshotView *)snapshotView;
-(void)setAnimationStartTime:(double)arg1 ;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setEndFrame:(CGRect)arg1 ;
-(CGRect)endFrame;
-(CGRect)beginFrame;
-(BOOL)isOnScreen;
-(int)cancelState;
-(int)animationState;
-(void)setAnimationState:(int)arg1 ;
-(BOOL)shouldCompleteOnSuspend;
-(UIInputViewAnimationStyle *)animationStyle;
-(BOOL)skipFencing;
-(BOOL)ignoreFrameChanges;
-(CGRect)endFrameScreen;
-(BOOL)shouldRecomputeEndFrame;
-(UIInputViewSet *)oldSet;
-(id)newSet;
-(void)setEndFrameScreen:(CGRect)arg1 ;
-(CGRect)snapshotViewBeginFrame;
-(CGRect)snapshotViewEndFrame;
-(int)activeClippingModes;
-(BOOL)fadeAccessoryView;
-(BOOL)requiresAutomaticAppearanceEnabled;
-(int)endState;
-(BOOL)subsumesTransition:(id)arg1 ;
-(void)postNotificationsForTransitionEnd;
-(void)postNotificationsForTransitionStart;
-(void)setActiveClippingModes:(int)arg1 ;
-(void)setOldSet:(UIInputViewSet *)arg1 ;
-(void)setNewSet:(id)arg1 ;
-(void)setBeginFrameScreen:(CGRect)arg1 ;
-(void)setAnimationStyle:(UIInputViewAnimationStyle *)arg1 ;
-(void)setBeginFrame:(CGRect)arg1 ;
-(void)setSkipNotifications:(BOOL)arg1 ;
-(void)setSkipFencing:(BOOL)arg1 ;
-(void)setBeginFloatingFrame:(CGRect)arg1 ;
-(void)setEndFloatingFrame:(CGRect)arg1 ;
-(void)setBeginFloatingFrameScreen:(CGRect)arg1 ;
-(void)setEndFloatingFrameScreen:(CGRect)arg1 ;
-(CGRect)beginFrameScreen;
-(CGRect)beginFloatingFrame;
-(CGRect)endFloatingFrame;
-(BOOL)isAccessoryViewChangedOnly;
-(void)setSnapshotView:(UISnapshotView *)arg1 ;
-(CGRect)deprecatedBounds;
-(CGPoint)deprecatedCenterBegin;
-(CGPoint)deprecatedCenterEnd;
-(BOOL)skipNotifications;
-(id)userInfoForTransition;
-(CGRect)beginFloatingFrameScreen;
-(CGRect)endFloatingFrameScreen;
-(BOOL)isAlmostDone;
-(double)animationStartTime;
-(int)transitioningState;
-(int)beginState;
-(void)setSnapshotViewBeginFrame:(CGRect)arg1 ;
-(void)setSnapshotViewEndFrame:(CGRect)arg1 ;
@end

