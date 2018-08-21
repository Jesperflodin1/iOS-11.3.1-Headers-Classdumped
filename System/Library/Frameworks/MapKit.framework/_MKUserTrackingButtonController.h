/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol MKUserTrackingButtonTarget, MKUserTrackingView;
@class UIImageView, UIButton, UIActivityIndicatorView, NSString;

@interface _MKUserTrackingButtonController : NSObject <CAAnimationDelegate> {

	id<MKUserTrackingButtonTarget> _target;
	id<MKUserTrackingView> _userTrackingView;
	long long _state;
	UIImageView* _imageView;
	UIButton* _button;
	UIActivityIndicatorView* _activityIndicatorView;
	unsigned long long _buttonBehavior;

}

@property (assign,nonatomic,__weak) id<MKUserTrackingView> userTrackingView;              //@synthesize userTrackingView=_userTrackingView - In the implementation block
@property (nonatomic,readonly) UIImageView * imageView;                                   //@synthesize imageView=_imageView - In the implementation block
@property (assign,nonatomic) long long state;                                             //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) unsigned long long buttonBehavior;                           //@synthesize buttonBehavior=_buttonBehavior - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(UIImageView *)imageView;
-(void)_updateState;
-(id)_imageForState:(long long)arg1 controlState:(unsigned long long)arg2 ;
-(void)_goToNextMode:(id)arg1 ;
-(void)setUserTrackingView:(id<MKUserTrackingView>)arg1 ;
-(id<MKUserTrackingView>)userTrackingView;
-(void)_reloadState;
-(void)setButtonBehavior:(unsigned long long)arg1 ;
-(id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4 ;
-(void)_authorizationStatusChanged:(id)arg1 ;
-(BOOL)_shouldAnimateFromState:(long long)arg1 toState:(long long)arg2 ;
-(id)_shrinkAnimation;
-(id)_expandAnimation;
-(id)_contentAnimation;
-(void)_updateLoading;
-(unsigned long long)buttonBehavior;
-(id)_activityIndicatorView;
@end

