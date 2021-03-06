/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, August 21, 2018 at 9:31:52 PM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/AccessibilityBundles/AXLocalizationCaptionServer.axuiservice/AXLocalizationCaptionServer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@protocol AXLocalizationCaptionViewControllerDelegate;
@class AXLocCaptionPanelUILockButton, NSArray, AXDispatchTimer, UILabel, UIView;

@interface AXLocalizationCaptionViewController : UIViewController {

	AXLocCaptionPanelUILockButton* _uiLockButton;
	NSArray* _packages;
	long long _displayedPackage;
	AXDispatchTimer* _changeDisplayTimer;
	UILabel* _stringCountLabelNumerator;
	UILabel* _stringCountLabelDenominator;
	id<AXLocalizationCaptionViewControllerDelegate> _delegate;
	UILabel* _captionPanelText;
	UIView* _lineView;
	UIView* _backgroundView;

}

@property (assign,nonatomic,__weak) id<AXLocalizationCaptionViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UILabel * captionPanelText;                                                   //@synthesize captionPanelText=_captionPanelText - In the implementation block
@property (nonatomic,retain) UIView * lineView;                                                            //@synthesize lineView=_lineView - In the implementation block
@property (nonatomic,retain) UIView * backgroundView;                                                      //@synthesize backgroundView=_backgroundView - In the implementation block
-(void)uiLockPressed:(id)arg1 ;
-(void)showString:(id)arg1 ;
-(void)setCaptionPanelText:(UILabel *)arg1 ;
-(UILabel *)captionPanelText;
-(void)_updateNumeratorDenominator;
-(void)_processNextTextDisplayTimer;
-(void)_updateTextDisplay;
-(id<AXLocalizationCaptionViewControllerDelegate>)delegate;
-(void)setDelegate:(id<AXLocalizationCaptionViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(void)setBackgroundView:(UIView *)arg1 ;
-(UIView *)backgroundView;
-(void)viewDidLoad;
-(UIView *)lineView;
-(void)setLineView:(UIView *)arg1 ;
-(void)updateText:(id)arg1 ;
@end

