/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PassKitUI/PassKitUI-Structs.h>
@class _UIDynamicValueAnimation, PKPassGroupView, UIPanGestureRecognizer;

@interface PKPassGroupViewVerticalPanAnimator : NSObject {

	_UIDynamicValueAnimation* _panningAnimation;
	PKPassGroupView* _groupView;
	UIPanGestureRecognizer* _gestureRecognizer;
	double _panningViewTargetScale;
	CGPoint _panningViewStartPosition;
	CGPoint _panningViewTargetPosition;

}

@property (nonatomic,retain,readonly) PKPassGroupView * groupView;                    //@synthesize groupView=_groupView - In the implementation block
@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint panningViewStartPosition;                        //@synthesize panningViewStartPosition=_panningViewStartPosition - In the implementation block
@property (assign,nonatomic) CGPoint panningViewTargetPosition;                       //@synthesize panningViewTargetPosition=_panningViewTargetPosition - In the implementation block
@property (assign,nonatomic) double panningViewTargetScale;                           //@synthesize panningViewTargetScale=_panningViewTargetScale - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(void)stop;
-(PKPassGroupView *)groupView;
-(id)initWithGroupView:(id)arg1 ;
-(CGPoint)panningViewStartPosition;
-(void)layoutViewsWithY:(double)arg1 ;
-(void)setPanningViewStartPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetPosition:(CGPoint)arg1 ;
-(void)setPanningViewTargetScale:(double)arg1 ;
-(void)dismissWithStartVelocity:(double)arg1 alongSideApplier:(/*^block*/id)arg2 completion:(/*^block*/id)arg3 ;
-(double)scaleForY:(double)arg1 ;
-(id)_dynamicAnimationWithStart:(double)arg1 target:(double)arg2 initialVelocity:(double)arg3 ;
-(CGPoint)panningViewTargetPosition;
-(double)panningViewTargetScale;
@end

