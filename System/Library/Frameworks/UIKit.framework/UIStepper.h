/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIControl.h>

@class UIImageView, UIButton, NSTimer, NSMutableDictionary, UIColor;

@interface UIStepper : UIControl {

	BOOL _isRtoL;
	UIImageView* _middleView;
	UIButton* _plusButton;
	UIButton* _minusButton;
	NSTimer* _repeatTimer;
	long long _repeatCount;
	NSMutableDictionary* _dividerImages;
	BOOL _continuous;
	BOOL _autorepeat;
	BOOL _wraps;
	double _value;
	double _minimumValue;
	double _maximumValue;
	double _stepValue;

}

@property (assign,getter=isContinuous,nonatomic) BOOL continuous;              //@synthesize continuous=_continuous - In the implementation block
@property (assign,nonatomic) BOOL autorepeat;                                  //@synthesize autorepeat=_autorepeat - In the implementation block
@property (assign,nonatomic) BOOL wraps;                                       //@synthesize wraps=_wraps - In the implementation block
@property (assign,nonatomic) double value;                                     //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double minimumValue;                              //@synthesize minimumValue=_minimumValue - In the implementation block
@property (assign,nonatomic) double maximumValue;                              //@synthesize maximumValue=_maximumValue - In the implementation block
@property (assign,nonatomic) double stepValue;                                 //@synthesize stepValue=_stepValue - In the implementation block
@property (nonatomic,retain) UIColor * tintColor; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)_populateArchivedSubviews:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)_intrinsicSizeWithinSize:(CGSize)arg1 ;
-(BOOL)_contentHuggingDefault_isUsuallyFixedHeight;
-(BOOL)_contentHuggingDefault_isUsuallyFixedWidth;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)backgroundImageForState:(unsigned long long)arg1 ;
-(void)setValue:(double)arg1 ;
-(double)value;
-(void)cancelTrackingWithEvent:(id)arg1 ;
-(BOOL)beginTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)continueTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(void)endTrackingWithTouch:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)_controlEventsForActionTriggered;
-(void)_emitValueChanged;
-(double)minimumValue;
-(double)maximumValue;
-(BOOL)isContinuous;
-(void)setContinuous:(BOOL)arg1 ;
-(void)setMinimumValue:(double)arg1 ;
-(void)setMaximumValue:(double)arg1 ;
-(void)_updateImages;
-(BOOL)wraps;
-(void)setWraps:(BOOL)arg1 ;
-(void)_commonStepperInit;
-(void)_updateButtonEnabled;
-(void)_setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_updateDividerImageForButtonState;
-(id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 ;
-(void)_startTimer;
-(void)_updateHighlightingAtPoint:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)_updateCount:(id)arg1 ;
-(void)_stopTimer;
-(void)_setIncrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)_setDecrementImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 ;
-(void)setStepValue:(double)arg1 ;
-(id)incrementImageForState:(unsigned long long)arg1 ;
-(id)decrementImageForState:(unsigned long long)arg1 ;
-(double)stepValue;
-(BOOL)autorepeat;
-(void)setAutorepeat:(BOOL)arg1 ;
@end

