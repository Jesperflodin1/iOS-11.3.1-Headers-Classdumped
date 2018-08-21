/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUI.framework/TelephonyUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TelephonyUI/TelephonyUI-Structs.h>
#import <UIKit/UIButton.h>

@class _UIBackdropView;

@interface TPButton : UIButton {

	int _color;
	_UIBackdropView* _backdropView;
	BOOL _blursBackground;
	BOOL _roundsCorners;
	BOOL _usesOverlayBlendingForContents;

}

@property (assign,nonatomic) BOOL blursBackground;                             //@synthesize blursBackground=_blursBackground - In the implementation block
@property (assign,nonatomic) BOOL roundsCorners;                               //@synthesize roundsCorners=_roundsCorners - In the implementation block
@property (assign,nonatomic) BOOL usesOverlayBlendingForContents;              //@synthesize usesOverlayBlendingForContents=_usesOverlayBlendingForContents - In the implementation block
+(double)defaultHeight;
+(double)defaultHeightForColor:(int)arg1 ;
+(id)defaultStandardFont;
+(double)defaultWidthForSideButton;
+(double)defaultWidthForCenterButton;
+(double)maxWidthForCenterButton;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1 ;
-(void)setBackgroundColor:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)blursBackground;
-(void)setBlursBackground:(BOOL)arg1 ;
-(void)setButtonColor:(int)arg1 ;
-(id)initWithTitle:(id)arg1 icon:(id)arg2 color:(int)arg3 frame:(CGRect)arg4 ;
-(void)setRoundsCorners:(BOOL)arg1 ;
-(void)setUsesOverlayBlendingForContents:(BOOL)arg1 ;
-(void)_animationWillBegin;
-(void)_animationDidEnd;
-(void)setPlusSeparatedTitle:(id)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 ;
-(void)setMinimumTitleFontSize:(double)arg1 maximumTitleFontSize:(double)arg2 ;
-(void)setTitleImagePadding:(double)arg1 ;
-(void)setIconVerticalOffset:(double)arg1 ;
-(void)setTitleVerticalOffset:(double)arg1 ;
-(void)setDisabledButtonColor:(int)arg1 ;
-(BOOL)roundsCorners;
-(BOOL)usesOverlayBlendingForContents;
-(int)buttonColor;
@end
