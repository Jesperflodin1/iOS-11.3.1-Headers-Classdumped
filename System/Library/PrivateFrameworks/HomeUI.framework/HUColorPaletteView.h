/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/HUQuickControlInteractiveView.h>

@protocol HUQuickControlColorPaletteViewInteractionDelegate;
@class HUQuickControlColorViewProfile, HFColorPalette, NSArray, HFColorPaletteColor, NSNumber, UILongPressGestureRecognizer, NSString;

@interface HUColorPaletteView : UIView <UIGestureRecognizerDelegate, HUQuickControlInteractiveView> {

	BOOL _userInteractionActive;
	BOOL _colorPaletteHasChanged;
	HUQuickControlColorViewProfile* _profile;
	id<HUQuickControlColorPaletteViewInteractionDelegate> _interactionDelegate;
	HFColorPalette* _colorPalette;
	double _circleRadius;
	NSArray* _colorSwatchViews;
	HFColorPalette* _calibratedColorPalette;
	HFColorPaletteColor* _selectedColor;
	NSNumber* _trackingColorIndex;
	NSNumber* _selectedColorBiasIndex;
	UILongPressGestureRecognizer* _gestureRecognizer;
	UILongPressGestureRecognizer* _changePresetRecognizer;

}

@property (nonatomic,copy) NSArray * colorSwatchViews;                                                                      //@synthesize colorSwatchViews=_colorSwatchViews - In the implementation block
@property (nonatomic,retain) HFColorPalette * calibratedColorPalette;                                                       //@synthesize calibratedColorPalette=_calibratedColorPalette - In the implementation block
@property (nonatomic,retain) HFColorPaletteColor * selectedColor;                                                           //@synthesize selectedColor=_selectedColor - In the implementation block
@property (nonatomic,retain) NSNumber * trackingColorIndex;                                                                 //@synthesize trackingColorIndex=_trackingColorIndex - In the implementation block
@property (nonatomic,retain) NSNumber * selectedColorBiasIndex;                                                             //@synthesize selectedColorBiasIndex=_selectedColorBiasIndex - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                                     //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,nonatomic) BOOL colorPaletteHasChanged;                                                                   //@synthesize colorPaletteHasChanged=_colorPaletteHasChanged - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * gestureRecognizer;                                              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UILongPressGestureRecognizer * changePresetRecognizer;                                         //@synthesize changePresetRecognizer=_changePresetRecognizer - In the implementation block
@property (assign,nonatomic,__weak) id<HUQuickControlColorPaletteViewInteractionDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (nonatomic,retain) HFColorPalette * colorPalette;                                                                 //@synthesize colorPalette=_colorPalette - In the implementation block
@property (assign,nonatomic) double circleRadius;                                                                           //@synthesize circleRadius=_circleRadius - In the implementation block
@property (nonatomic,copy) HUQuickControlColorViewProfile * profile;                                                        //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setGestureRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)gestureRecognizer;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(CGSize)intrinsicContentSize;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setInteractionDelegate:(id<HUQuickControlColorPaletteViewInteractionDelegate>)arg1 ;
-(id<HUQuickControlColorPaletteViewInteractionDelegate>)interactionDelegate;
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlColorViewProfile *)profile;
-(void)setProfile:(HUQuickControlColorViewProfile *)arg1 ;
-(void)beginUserInteractionWithFirstTouchGestureRecognizer:(id)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(id)initWithProfile:(id)arg1 colorPalette:(id)arg2 ;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(BOOL)isUserInteractionActive;
-(void)_handleGesture:(id)arg1 ;
-(HFColorPaletteColor *)selectedColor;
-(double)radiusFittingSize:(CGSize)arg1 ;
-(void)setCircleRadius:(double)arg1 ;
-(void)setSelectedColor:(HFColorPaletteColor *)arg1 ;
-(double)circleRadius;
-(void)_updateCalibratedColorPalette;
-(void)_buildColorSwatchViews;
-(void)_handleGestureForVeryLongPress:(id)arg1 ;
-(void)setChangePresetRecognizer:(UILongPressGestureRecognizer *)arg1 ;
-(UILongPressGestureRecognizer *)changePresetRecognizer;
-(NSArray *)colorSwatchViews;
-(HFColorPalette *)calibratedColorPalette;
-(void)setColorSwatchViews:(NSArray *)arg1 ;
-(void)_updateColorSelectionAnimated:(BOOL)arg1 ;
-(void)_setColorPalette:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(void)setColorPaletteHasChanged:(BOOL)arg1 ;
-(void)_updateColorSwatchViewsWithAnimations:(BOOL)arg1 ;
-(BOOL)colorPaletteHasChanged;
-(void)setTrackingColorIndex:(NSNumber *)arg1 ;
-(unsigned long long)_indexForSelectedColor:(id)arg1 includeBias:(BOOL)arg2 ;
-(NSNumber *)trackingColorIndex;
-(NSNumber *)selectedColorBiasIndex;
-(id)_swatchIndexForGestureRecognizer:(id)arg1 ;
-(void)setSelectedColorBiasIndex:(NSNumber *)arg1 ;
-(void)_setSelectedColor:(id)arg1 notifyDelegate:(BOOL)arg2 updateSelectionState:(BOOL)arg3 ;
-(void)setCalibratedColorPalette:(HFColorPalette *)arg1 ;
-(HFColorPalette *)colorPalette;
-(void)setColorPalette:(HFColorPalette *)arg1 ;
@end

