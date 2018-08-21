/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVKit-Structs.h>
#import <AVKit/AVTransition.h>

@class UIView;

@interface AVDismissalTransition : AVTransition {

	UIView* _backgroundView;

}
-(void)completeTransition:(BOOL)arg1 ;
-(id)backgroundView;
-(void)animateAlongsideNonInteractiveTransitionAnimation;
-(void)updateWithPercentComplete:(double)arg1 translation:(CGPoint)arg2 rotation:(double)arg3 locationInWindow:(CGPoint)arg4 ;
-(void)animateAlongsideInteractiveTransitionAnimationForCancelling;
-(void)animateAlongsideInteractiveTransitionAnimationForFinishing;
-(void)transitionWillBegin;
@end

