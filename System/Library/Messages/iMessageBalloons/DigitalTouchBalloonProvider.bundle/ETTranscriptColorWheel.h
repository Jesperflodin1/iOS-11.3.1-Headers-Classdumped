/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/DigitalTouchBalloonProvider.bundle/DigitalTouchBalloonProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DigitalTouchBalloonProvider/DigitalTouchBalloonProvider-Structs.h>
#import <DigitalTouchShared/DTSColorWheel.h>

@class UIImageView, UIView;

@interface ETTranscriptColorWheel : DTSColorWheel {

	UIImageView* _gradientImageView;
	UIView* _doneView;
	BOOL _presented;

}

@property (assign,getter=isPresented,nonatomic) BOOL presented;              //@synthesize presented=_presented - In the implementation block
-(void)setPresented:(BOOL)arg1 ;
-(void)presentAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)dismissAnimatedWithDuration:(double)arg1 completion:(/*^block*/id)arg2 ;
-(void)setHueForPaletteCircle:(id)arg1 ;
-(void)_setPickerPositionInGradientWheel;
-(double)_doneViewDiameter;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)doneButtonTapped:(id)arg1 ;
-(BOOL)isPresented;
-(void)beganTouches:(id)arg1 ;
-(id)pickerViewHighlightedColor;
-(void)createDoneButtonWithFrame:(CGRect)arg1 ;
@end

