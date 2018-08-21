/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HUQuickControlControllableView.h>

@class HUQuickControlSliderViewProfile, UIView, HUQuickControlSliderValueOverlayView, NSLayoutConstraint, NSString;

@interface HUQuickControlSliderView : UIView <HUQuickControlControllableView> {

	BOOL _showOffState;
	HUQuickControlSliderViewProfile* _profile;
	double _sliderValue;
	double _secondarySliderValue;
	double _rawSliderValue;
	UIView* _backgroundView;
	HUQuickControlSliderValueOverlayView* _valueOverlayView;
	NSLayoutConstraint* _overlayTopConstraint;

}

@property (assign,nonatomic) BOOL showOffState;                                                    //@synthesize showOffState=_showOffState - In the implementation block
@property (assign,nonatomic) double rawSliderValue;                                                //@synthesize rawSliderValue=_rawSliderValue - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                              //@synthesize backgroundView=_backgroundView - In the implementation block
@property (nonatomic,retain) HUQuickControlSliderValueOverlayView * valueOverlayView;              //@synthesize valueOverlayView=_valueOverlayView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * overlayTopConstraint;                            //@synthesize overlayTopConstraint=_overlayTopConstraint - In the implementation block
@property (assign,nonatomic) double sliderValue;                                                   //@synthesize sliderValue=_sliderValue - In the implementation block
@property (assign,nonatomic) double secondarySliderValue;                                          //@synthesize secondarySliderValue=_secondarySliderValue - In the implementation block
@property (nonatomic,copy) HUQuickControlSliderViewProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id value; 
@property (nonatomic,retain) id secondaryValue; 
+(BOOL)requiresConstraintBasedLayout;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(id)initWithProfile:(id)arg1 ;
-(HUQuickControlSliderViewProfile *)profile;
-(void)setProfile:(HUQuickControlSliderViewProfile *)arg1 ;
-(id)intrinsicSizeDescriptorForControlSize:(unsigned long long)arg1 ;
-(id)secondaryValue;
-(void)setSecondaryValue:(id)arg1 ;
-(CGSize)_permittedValueRange;
-(void)setValueOverlayView:(HUQuickControlSliderValueOverlayView *)arg1 ;
-(HUQuickControlSliderValueOverlayView *)valueOverlayView;
-(void)_updateOffState;
-(void)setRawSliderValue:(double)arg1 ;
-(double)sliderValue;
-(double)secondarySliderValue;
-(double)rawSliderValue;
-(void)setShowOffState:(BOOL)arg1 ;
-(void)setSliderValue:(double)arg1 ;
-(void)setSecondarySliderValue:(double)arg1 ;
-(BOOL)showOffState;
-(NSLayoutConstraint *)overlayTopConstraint;
-(void)setOverlayTopConstraint:(NSLayoutConstraint *)arg1 ;
@end

