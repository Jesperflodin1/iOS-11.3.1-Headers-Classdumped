/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@class UIViewController, NSString;

@interface SKUIReviewInAppRatingAnimatedTransitioning : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _presentation;
	UIViewController* _viewController;

}

@property (getter=isPresentation) BOOL presentation;                         //@synthesize presentation=_presentation - In the implementation block
@property (nonatomic,retain) UIViewController * viewController;              //@synthesize viewController=_viewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(BOOL)isPresentation;
-(void)_animateTransition:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setPresentation:(BOOL)arg1 ;
-(id)_presentedViewControllerForContext:(id)arg1 ;
@end

