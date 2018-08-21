/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <UIKit/UIView.h>

@protocol HKCurrentTimeViewDelegate;
@class UIButton, HKCurrentTimeChevronButton, NSString;

@interface HKCurrentTimeView : UIView {

	UIButton* _currentTimeButton;
	HKCurrentTimeChevronButton* _previousTimeIndexButton;
	HKCurrentTimeChevronButton* _nextTimeIndexButton;
	BOOL _disableControls;
	BOOL _currentTimeButtonEnabled;
	NSString* _currentTimeString;
	id<HKCurrentTimeViewDelegate> _delegate;

}

@property (nonatomic,copy) NSString * currentTimeString;                                 //@synthesize currentTimeString=_currentTimeString - In the implementation block
@property (assign,nonatomic,__weak) id<HKCurrentTimeViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL disableControls;                                       //@synthesize disableControls=_disableControls - In the implementation block
@property (assign,nonatomic) BOOL previousTimeButtonEnabled; 
@property (assign,nonatomic) BOOL nextTimeButtonEnabled; 
@property (assign,nonatomic) BOOL currentTimeButtonEnabled;                              //@synthesize currentTimeButtonEnabled=_currentTimeButtonEnabled - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(id<HKCurrentTimeViewDelegate>)delegate;
-(id)initWithCoder:(id)arg1 ;
-(void)setDelegate:(id<HKCurrentTimeViewDelegate>)arg1 ;
-(void)setupViewWithWideHorizontalMargin:(BOOL)arg1 ;
-(id)initWithWideHorizontalMargin:(BOOL)arg1 ;
-(void)currentTimeButtonTapped:(id)arg1 ;
-(id)_currentTimeButtonFont;
-(void)previousTimeIndexButtonTapped:(id)arg1 ;
-(void)nextTimeIndexButtonTapped:(id)arg1 ;
-(void)_handleContentSizeCategoryDidChange;
-(id)_colorIfForeground:(BOOL)arg1 enabled:(BOOL)arg2 ;
-(id)_tintColor:(BOOL)arg1 ;
-(id)_foregroundColor:(BOOL)arg1 ;
-(id)_backgroundColor:(BOOL)arg1 ;
-(double)_foregroundAlpha:(BOOL)arg1 ;
-(double)_backgroundAlpha:(BOOL)arg1 ;
-(void)setCurrentTimeString:(NSString *)arg1 ;
-(void)setDisableControls:(BOOL)arg1 ;
-(BOOL)previousTimeButtonEnabled;
-(BOOL)nextTimeButtonEnabled;
-(void)setPreviousTimeButtonEnabled:(BOOL)arg1 ;
-(void)setNextTimeButtonEnabled:(BOOL)arg1 ;
-(void)setCurrentTimeButtonEnabled:(BOOL)arg1 ;
-(double)_currentTimeButtonBaselineToTop;
-(double)_currentTimeButtonBaselineToBottom;
-(NSString *)currentTimeString;
-(BOOL)disableControls;
-(BOOL)currentTimeButtonEnabled;
@end

