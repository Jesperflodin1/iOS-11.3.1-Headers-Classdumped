/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ClockKitUI.framework/ClockKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ClockKitUI/ClockKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/_CLKUITimeLabelManager.h>
#import <libobjc.A.dylib/CLKTimeFormatterObserver.h>

@class CLKTimeFormatter, _CLKUIBasicTimeLabelManager, UIView, UIColor, NSString;

@interface _CLKUIBlinkingTimeLabelManager : UIView <_CLKUITimeLabelManager, CLKTimeFormatterObserver> {

	CLKTimeFormatter* _timeFormatter;
	_CLKUIBasicTimeLabelManager* _numbersLabelManager;
	_CLKUIBasicTimeLabelManager* _blinkerLabelManager;
	NSNumber* _blinkTimerToken;
	BOOL _animationsPaused;
	BOOL _showSeconds;

}

@property (nonatomic,readonly) UIView * view; 
@property (nonatomic,readonly) CGSize intrinsicSize; 
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) BOOL animationsPaused;                     //@synthesize animationsPaused=_animationsPaused - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets opticalInsets; 
@property (assign,nonatomic) BOOL showSeconds;                          //@synthesize showSeconds=_showSeconds - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)dealloc;
-(UIView *)view;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setStyle:(id)arg1 ;
-(UIColor *)textColor;
-(double)_lastLineBaseline;
-(CGSize)intrinsicSize;
-(void)setMaxWidth:(double)arg1 ;
-(void)updateTimeText;
-(id)effectiveFont;
-(id)initWithTimeFormatter:(id)arg1 options:(unsigned long long)arg2 labelFactory:(/*^block*/id)arg3 ;
-(void)sizeViewToFit;
-(id)effectiveAttributedText;
-(void)enumerateUnderlyingLabelsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)animationsPaused;
-(void)setAnimationsPaused:(BOOL)arg1 ;
-(void)_startOrStopBlinking;
-(void)_updateBlinkerAlphaForSecondFraction:(double)arg1 ;
-(void)_startBlinking;
-(void)_stopBlinking;
-(CGSize)sizeThatFits;
-(UIEdgeInsets)opticalInsets;
-(void)timeFormatterReportingLiveTimeDidChange:(id)arg1 ;
-(void)setShowsDesignator:(BOOL)arg1 ;
-(BOOL)showSeconds;
-(void)setShowSeconds:(BOOL)arg1 ;
@end

