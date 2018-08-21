/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlViewInteractionDelegate;
@class HUQuickControlSimpleViewProfile, UIButton, UILabel, UIView, NSString;

@interface HUQuickControlMediaView : UIView <HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	id<HUQuickControlViewInteractionDelegate> _interactionDelegate;
	id _value;
	HUQuickControlSimpleViewProfile* _profile;
	UIButton* _playPauseButton;
	UILabel* _engineeringUILabel;
	UIView* _backgroundView;

}

@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (nonatomic,retain) UIButton * playPauseButton;                                                        //@synthesize playPauseButton=_playPauseButton - In the implementation block
@property (nonatomic,retain) UILabel * engineeringUILabel;                                                      //@synthesize engineeringUILabel=_engineeringUILabel - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                           //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,readonly) BOOL isPlaying; 
@property (nonatomic,copy) HUQuickControlSimpleViewProfile * profile;                                           //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value;                                                                          //@synthesize value=_value - In the implementation block
@property (nonatomic,retain) id secondaryValue; 
@property (assign,nonatomic,__weak) id<HUQuickControlViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(BOOL)isPlaying;
-(void)setInteractionDelegate:(id<HUQuickControlViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlViewInteractionDelegate>)interactionDelegate;
-(void)_buttonInteractionBegan:(id)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlSimpleViewProfile *)profile;
-(void)setProfile:(HUQuickControlSimpleViewProfile *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(void)_configureConstraints;
-(void)_playPausePressed:(id)arg1 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(void)_relabelButton;
-(UIButton *)playPauseButton;
-(BOOL)isUserInteractionActive;
-(void)setPlayPauseButton:(UIButton *)arg1 ;
-(UILabel *)engineeringUILabel;
-(void)setEngineeringUILabel:(UILabel *)arg1 ;
@end
