/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewControllerAnimatedTransitioning.h>

@protocol UIViewControllerContextTransitioning;
@class UIPanGestureRecognizer, UIView, NSString;

@interface CNAvatarCardTransition : NSObject <UIViewControllerAnimatedTransitioning> {

	BOOL _reversed;
	BOOL _interactive;
	UIPanGestureRecognizer* _gestureRecognizer;
	id<UIViewControllerContextTransitioning> _context;
	UIView* _presentedView;

}

@property (nonatomic,retain) UIPanGestureRecognizer * gestureRecognizer;                    //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id<UIViewControllerContextTransitioning> context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) UIView * presentedView;                                        //@synthesize presentedView=_presentedView - In the implementation block
@property (nonatomic,readonly) BOOL interactive;                                            //@synthesize interactive=_interactive - In the implementation block
@property (assign) BOOL reversed;                                                           //@synthesize reversed=_reversed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)transitionDuration:(id)arg1 ;
-(void)animateTransition:(id)arg1 ;
-(void)setGestureRecognizer:(UIPanGestureRecognizer *)arg1 ;
-(UIPanGestureRecognizer *)gestureRecognizer;
-(id<UIViewControllerContextTransitioning>)context;
-(BOOL)interactive;
-(UIView *)presentedView;
-(void)setReversed:(BOOL)arg1 ;
-(void)setContext:(id<UIViewControllerContextTransitioning>)arg1 ;
-(BOOL)reversed;
-(void)setPresentedView:(UIView *)arg1 ;
@end

