/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/HUControlView.h>

@protocol HUControlViewDelegate;
@class NSString, UISlider;

@interface HUSimpleSliderControlView : UIView <HUControlView> {

	NSString* _identifier;
	id<HUControlViewDelegate> _delegate;
	UISlider* _slider;

}

@property (nonatomic,readonly) UISlider * slider;                                    //@synthesize slider=_slider - In the implementation block
@property (assign,nonatomic) float minValue; 
@property (assign,nonatomic) float maxValue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * identifier;                                    //@synthesize identifier=_identifier - In the implementation block
@property (assign,nonatomic,__weak) id<HUControlViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id value; 
@property (assign,getter=isDisabled,nonatomic) BOOL disabled; 
@property (assign,nonatomic) BOOL canBeHighlighted; 
+(Class)valueClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HUControlViewDelegate>)delegate;
-(void)setDelegate:(id<HUControlViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setValue:(id)arg1 ;
-(id)value;
-(void)setDisabled:(BOOL)arg1 ;
-(void)_sliderValueChanged:(id)arg1 ;
-(BOOL)isDisabled;
-(UISlider *)slider;
-(void)setMinValue:(float)arg1 ;
-(void)_sliderTouchDown:(id)arg1 ;
-(void)_sliderTouchUp:(id)arg1 ;
-(float)minValue;
-(float)maxValue;
-(void)setMaxValue:(float)arg1 ;
@end

