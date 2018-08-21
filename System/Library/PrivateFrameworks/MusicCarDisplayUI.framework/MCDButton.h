/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIButton.h>

@class CALayer;

@interface MCDButton : UIButton {

	CALayer* _focusColorLayer;
	BOOL _showBezelInTouch;
	BOOL _hideBezelInKnob;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected; 
@property (assign,nonatomic) BOOL showBezelInTouch;                        //@synthesize showBezelInTouch=_showBezelInTouch - In the implementation block
@property (assign,nonatomic) BOOL hideBezelInKnob;                         //@synthesize hideBezelInKnob=_hideBezelInKnob - In the implementation block
+(id)buttonWithType:(long long)arg1 ;
-(void)setHidden:(BOOL)arg1 ;
-(void)layoutSubviews;
-(BOOL)canBecomeFocused;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_updateButtonStyle;
-(id)tintColorForUnhighlightedTextLabel;
-(BOOL)showBezelInTouch;
-(id)colorForKnobFocusLayer;
-(id)colorForKnobFocusLayerSelected;
-(BOOL)shouldUpdateButtonOpacityForKnobUnfocused;
-(void)updateButtonOpacityForKnobUnfocused;
-(id)colorForKnobContentSelected;
-(id)colorForKnobFocused;
-(id)colorForTouchContentSelected;
-(id)colorForTouchFocusLayerSelected;
-(id)colorForTouchFocusLayer;
-(void)setShowBezelInTouch:(BOOL)arg1 ;
-(id)_buttonBackGroundColorTouch;
-(BOOL)hideBezelInKnob;
-(void)setHideBezelInKnob:(BOOL)arg1 ;
@end

