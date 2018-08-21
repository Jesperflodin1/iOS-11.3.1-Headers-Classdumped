/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIFocusAnimationCoordinator, NSHashTable, NSNumber;

@interface _UIFocusAnimationCoordinatorManager : NSObject {

	UIFocusAnimationCoordinator* _activeFocusAnimationCoordinator;
	NSHashTable* _unfocusingItems;
	double _lastFocusUpdateTime;
	UIFocusAnimationCoordinator* _lastFocusingItemAnimationCoordinator;
	NSNumber* _inheritedAnimationCoordinatorActiveAnimation;

}

@property (nonatomic,readonly) NSHashTable * unfocusingItems;                                                 //@synthesize unfocusingItems=_unfocusingItems - In the implementation block
@property (assign,nonatomic) double lastFocusUpdateTime;                                                      //@synthesize lastFocusUpdateTime=_lastFocusUpdateTime - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * activeFocusAnimationCoordinator;                   //@synthesize activeFocusAnimationCoordinator=_activeFocusAnimationCoordinator - In the implementation block
@property (nonatomic,retain) UIFocusAnimationCoordinator * lastFocusingItemAnimationCoordinator;              //@synthesize lastFocusingItemAnimationCoordinator=_lastFocusingItemAnimationCoordinator - In the implementation block
@property (nonatomic,retain) NSNumber * inheritedAnimationCoordinatorActiveAnimation;                         //@synthesize inheritedAnimationCoordinatorActiveAnimation=_inheritedAnimationCoordinatorActiveAnimation - In the implementation block
-(id)init;
-(UIFocusAnimationCoordinator *)activeFocusAnimationCoordinator;
-(id)willUpdateFocusInContext:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 fromItem:(id)arg2 ;
-(void)_performDelayedFocusingAnimationIfNecessary;
-(void)setInheritedAnimationCoordinatorActiveAnimation:(NSNumber *)arg1 ;
-(void)setActiveFocusAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(NSHashTable *)unfocusingItems;
-(double)lastFocusUpdateTime;
-(void)setLastFocusUpdateTime:(double)arg1 ;
-(void)setLastFocusingItemAnimationCoordinator:(UIFocusAnimationCoordinator *)arg1 ;
-(UIFocusAnimationCoordinator *)lastFocusingItemAnimationCoordinator;
-(NSNumber *)inheritedAnimationCoordinatorActiveAnimation;
@end
