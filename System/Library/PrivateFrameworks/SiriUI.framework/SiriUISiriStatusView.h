/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/SUICFlamesViewDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SiriUI/SiriUISiriStatusViewProtocol.h>

@protocol OS_dispatch_group, SiriUISiriStatusViewDelegate, SiriUISiriStatusViewAnimationDelegate;
@class UIView, UIButton, UILongPressGestureRecognizer, SUICFlamesView, AVPlayerLayer, AVPlayerLooper, AVQueuePlayer, AVPlayerItem, NSObject, AVAudioSession, UIScreen, SiriUIConfiguration, NSString;

@interface SiriUISiriStatusView : UIView <SUICFlamesViewDelegate, UIGestureRecognizerDelegate, SiriUISiriStatusViewProtocol> {

	UIButton* _button;
	UILongPressGestureRecognizer* _longPressRecognizer;
	UIView* _flamesContainerView;
	SUICFlamesView* _flamesView;
	UIView* _glyphView;
	AVPlayerLayer* _glyphLayer;
	AVPlayerLooper* _glyphPlayerLooper;
	AVQueuePlayer* _glyphQueuePlayer;
	AVPlayerItem* _glyphPlayerItem;
	NSObject*<OS_dispatch_group> _glyphConfigurationGroup;
	AVAudioSession* _glyphAuxiliaryAudioSession;
	double _lastStateChangeTime;
	UIScreen* _screen;
	int _deferredFlamesViewState;
	SiriUIConfiguration* _configuration;
	BOOL _flamesViewDeferred;
	BOOL _inUITrackingMode;
	BOOL _paused;
	long long _mode;
	double _disabledMicOpacity;
	id<SiriUISiriStatusViewDelegate> _delegate;
	double _flamesViewWidth;
	id<SiriUISiriStatusViewAnimationDelegate> _animationDelegate;

}

@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewAnimationDelegate> animationDelegate;              //@synthesize animationDelegate=_animationDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) long long mode;                                                                  //@synthesize mode=_mode - In the implementation block
@property (assign,nonatomic) double flamesViewWidth;                                                          //@synthesize flamesViewWidth=_flamesViewWidth - In the implementation block
@property (assign,nonatomic) double disabledMicOpacity;                                                       //@synthesize disabledMicOpacity=_disabledMicOpacity - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUISiriStatusViewDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UIView * flamesContainerView; 
@property (assign,nonatomic) BOOL flamesViewDeferred;                                                         //@synthesize flamesViewDeferred=_flamesViewDeferred - In the implementation block
@property (assign,getter=isInUITrackingMode,nonatomic) BOOL inUITrackingMode;                                 //@synthesize inUITrackingMode=_inUITrackingMode - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                                     //@synthesize paused=_paused - In the implementation block
@property (nonatomic,readonly) double statusViewHeight; 
-(void)layoutSubviews;
-(id<SiriUISiriStatusViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUISiriStatusViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIEdgeInsets)safeAreaInsets;
-(void)safeAreaInsetsDidChange;
-(void)setAnimationDelegate:(id<SiriUISiriStatusViewAnimationDelegate>)arg1 ;
-(id<SiriUISiriStatusViewAnimationDelegate>)animationDelegate;
-(long long)mode;
-(void)setPaused:(BOOL)arg1 ;
-(void)setMode:(long long)arg1 ;
-(float)audioLevelForFlamesView:(id)arg1 ;
-(BOOL)paused;
-(void)_handleKeyboardWillHideNotification:(id)arg1 ;
-(void)_createQueuePlayerIfNeeded;
-(void)_micButtonTapped:(id)arg1 ;
-(void)_micButtonHeld:(id)arg1 ;
-(void)_handleKeyboardDidShowNotification:(id)arg1 ;
-(void)_createLooperIfNeeded;
-(void)fadeOutCurrentAura;
-(CGRect)_flamesViewFrame;
-(void)_layoutFlamesViewIfNeeded;
-(CGRect)_adjustedInsetRectForRect:(CGRect)arg1 ;
-(CGRect)_flamesFrame;
-(double)flamesViewWidth;
-(void)_setFlamesViewState:(int)arg1 ;
-(void)_animateSiriGlyphHidden:(BOOL)arg1 ;
-(void)_attachFlamesViewIfNeeded;
-(id)_flamesView;
-(CGRect)_siriGlyphTappableRect;
-(void)_configureGlyph;
-(void)configureGlyphWithCompletion:(/*^block*/id)arg1 ;
-(void)forceMicVisible:(BOOL)arg1 ;
-(void)setFlamesViewWidth:(double)arg1 ;
-(double)disabledMicOpacity;
-(void)setDisabledMicOpacity:(double)arg1 ;
-(UIView *)flamesContainerView;
-(BOOL)flamesViewDeferred;
-(void)setFlamesViewDeferred:(BOOL)arg1 ;
-(BOOL)isInUITrackingMode;
-(void)setInUITrackingMode:(BOOL)arg1 ;
-(double)statusViewHeight;
-(id)initWithFrame:(CGRect)arg1 screen:(id)arg2 textInputEnabled:(BOOL)arg3 configuration:(id)arg4 ;
@end

