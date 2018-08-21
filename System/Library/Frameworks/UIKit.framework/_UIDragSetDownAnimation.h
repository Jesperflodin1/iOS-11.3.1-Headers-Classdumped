/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UIDraggingItemVisualTarget;
#import <UIKit/UIKit-Structs.h>
@class NSArray, _UIDragSetDownAnimationWindow, CADisplayLink, UIViewPropertyAnimator;

@interface _UIDragSetDownAnimation : NSObject {

	long long _state;
	NSArray* _animationItems;
	/*^block*/id _completion;
	BOOL _forSource;
	id<_UIDraggingItemVisualTarget> _defaultVisualTarget;
	_UIDragSetDownAnimationWindow* _window;
	BOOL _shouldHideWindowOnCompletion;
	CADisplayLink* _displayLink;
	UIViewPropertyAnimator* _remainingItemsPropertyAnimator;

}
+(id)defaultSetDownPropertyAnimator;
+(/*^block*/id)defaultSingleItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultMultiItemAnimationForPlatterView:(id)arg1 ;
+(/*^block*/id)defaultDropAnimationForPlatterView:(id)arg1 ;
-(void)begin;
-(void)_setCenterAndVelocityOfAnimationItem:(id)arg1 fromDroppedItem:(id)arg2 ;
-(void)_configureSystemDefaultAnimationForItem:(id)arg1 droppedItem:(id)arg2 isCancel:(BOOL)arg3 ;
-(void)_configureAnimationItem:(id)arg1 forDroppedItem:(id)arg2 crossfadingToTargetedPreview:(id)arg3 ;
-(CGRect)_legacy_configureAnimationItem:(id)arg1 withInternalItem:(id)arg2 forDroppedItem:(id)arg3 ;
-(void)displayLinkFired:(id)arg1 ;
-(void)_animationItemReachedTarget:(id)arg1 ;
-(void)_animationItemDone:(id)arg1 ;
-(void)_allAnimationItemsDone;
-(void)_beginFadeOutForAnimationItem:(id)arg1 ;
-(id)_viewForImageComponents:(id)arg1 crossfadingToLocalImageComponents:(id)arg2 totalComponentFrame:(CGRect)arg3 preview:(id)arg4 inView:(id)arg5 ;
-(id)_viewForImageComponents:(id)arg1 totalComponentFrame:(CGRect)arg2 preview:(id)arg3 inView:(id)arg4 ;
-(id)initWithVisibleDroppedItems:(id)arg1 items:(id)arg2 forSource:(BOOL)arg3 defaultVisualTarget:(id)arg4 completion:(/*^block*/id)arg5 ;
-(void)takeUpdatedVisibleDroppedItems:(id)arg1 ;
@end

