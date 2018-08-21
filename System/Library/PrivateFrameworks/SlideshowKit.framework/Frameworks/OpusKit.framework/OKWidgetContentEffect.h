/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/CAAnimationDelegate.h>
#import <libobjc.A.dylib/OKSettingsSupport.h>

@class NSString, NSDictionary, CAAnimation, OFUIView;

@interface OKWidgetContentEffect : NSObject <CAAnimationDelegate, OKSettingsSupport> {

	NSString* _uuid;
	NSDictionary* _settings;
	CAAnimation* _animation;
	OFUIView* _animatedView;
	BOOL _loop;
	BOOL _autoplay;
	BOOL _isPaused;
	BOOL _needsApplySettings;
	double _defaultDuration;

}

@property (assign,nonatomic) OFUIView * animatedView;               //@synthesize animatedView=_animatedView - In the implementation block
@property (nonatomic,retain) CAAnimation * animation;               //@synthesize animation=_animation - In the implementation block
@property (assign,nonatomic) BOOL loop;                             //@synthesize loop=_loop - In the implementation block
@property (assign,nonatomic) BOOL autoplay;                         //@synthesize autoplay=_autoplay - In the implementation block
@property (assign,nonatomic) double defaultDuration;                //@synthesize defaultDuration=_defaultDuration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)animationKeyPrefix;
+(id)supportedSettings;
-(id)init;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CAAnimation *)animation;
-(void)stopAnimation;
-(BOOL)isAnimating;
-(void)startAnimation;
-(void)pauseAnimation;
-(id)initWithSettings:(id)arg1 ;
-(void)setAnimation:(CAAnimation *)arg1 ;
-(OFUIView *)animatedView;
-(void)setAnimatedView:(OFUIView *)arg1 ;
-(double)defaultDuration;
-(id)settingObjectForKey:(id)arg1 ;
-(void)setUserSettingObject:(id)arg1 forKey:(id)arg2 ;
-(void)applySettingsIfNeeded;
-(void)applySettings;
-(void)needsApplySettings;
-(void)prepareContentEffectWithView:(id)arg1 ;
-(void)setDefaultDuration:(double)arg1 ;
-(BOOL)autoplay;
-(double)remainingPlayDuration;
-(void)setAutoplay:(BOOL)arg1 ;
-(void)resumeAnimation;
-(BOOL)loop;
-(void)setLoop:(BOOL)arg1 ;
@end

