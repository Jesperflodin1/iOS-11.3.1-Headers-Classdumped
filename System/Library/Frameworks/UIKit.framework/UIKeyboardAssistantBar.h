/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:43 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/_UIGroupedBar.h>

@class UIKeyboardBIUImageGenerator, UIBarButtonItemGroup, UIBarButtonItem, NSLayoutConstraint, UITextInputAssistantItem, UIKeyboardCandidatePocketShadow;

@interface UIKeyboardAssistantBar : _UIGroupedBar {

	UIKeyboardBIUImageGenerator* m_BIUImageGenerator;
	UIBarButtonItemGroup* m_dismissGroup;
	UIBarButtonItem* m_dismissButton;
	UIBarButtonItem* m_writeboardButton;
	UIBarButtonItemGroup* m_predictionGroup;
	NSLayoutConstraint* m_predictionWidthConstraint;
	UITextInputAssistantItem* m_defaultAssistantItem;
	UITextInputAssistantItem* m_currentAssistantItem;
	UIKeyboardCandidatePocketShadow* m_rightBorder;
	int m_validateGuard;
	BOOL m_useLargeButton;
	BOOL m_isLandscape;
	BOOL m_lightKeyboard;
	BOOL m_needsDismissButton;
	BOOL m_needsUpdateBarOnMoveToWindow;
	BOOL m_show;
	CGRect m_splitGap;
	BOOL m_suppressAXSHairlineThickening;
	BOOL m_setShowsCandidateInline;
	BOOL _hideAssistantBar;
	BOOL _shouldShow;

}

@property (assign,nonatomic) BOOL hideAssistantBar;              //@synthesize hideAssistantBar=_hideAssistantBar - In the implementation block
@property (assign,nonatomic) BOOL show; 
@property (assign,nonatomic) BOOL shouldShow;                    //@synthesize shouldShow=_shouldShow - In the implementation block
+(id)sharedInstance;
+(id)activeInstance;
+(double)assistantBarHeight;
+(double)sideBarWidthForOrientation:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)enabled;
-(BOOL)show;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)didMoveToWindow;
-(void)dimKeys:(id)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(id)defaultAssistantItem;
-(id)newAssistantItemWithDefaultItems;
-(double)assistantBarHeight;
-(BOOL)hasItems;
-(void)setInputAssistantButtonItems;
-(void)updateBar;
-(void)updateButtons;
-(void)setShouldShow:(BOOL)arg1 ;
-(void)setShow:(BOOL)arg1 ;
-(void)setHideAssistantBar:(BOOL)arg1 ;
-(void)updatePredictionViewForCustomButtons;
-(void)showKeyboard:(id)arg1 ;
-(BOOL)hideAssistantBar;
-(double)sideBarWidthForOrientation:(long long)arg1 ;
-(BOOL)hasCustomButtons;
-(BOOL)statisticForCalloutBarButtonSelection:(id)arg1 ;
-(id)deleteButtonItem;
-(void)setInputAssistantButtonItemsForResponder:(id)arg1 ;
-(id)currentAssistantItem;
-(BOOL)enableInputClicksWhenVisible;
-(double)assistantBarHeightForOrientation:(long long)arg1 ;
-(BOOL)shouldShow;
-(id)barButtonItem:(unsigned long long)arg1 ;
-(void)assistantCut;
-(void)assistantCopy;
-(void)assistantUndo;
-(void)assistantRedo;
-(void)assistantPaste;
-(void)assistantBold;
-(void)assistantItalic;
-(void)assistantUnderline;
-(id)BIUGenerator;
-(void)assistantDismiss;
-(void)assistantWriteboard;
-(BOOL)disabledByPrediction;
-(BOOL)showSwitch;
-(double)deleteKeyWidth;
-(SEL)action:(int)arg1 ;
-(BOOL)canPerformAction:(int)arg1 ;
-(void)executeAction:(int)arg1 ;
-(double)assistantBarWidth;
-(void)updateBar:(BOOL)arg1 ;
-(CGRect)handwritingCandidateSelectionFrame;
-(void)statisticForShortcutBarHideWithSwitcher;
@end
