/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <UIKit/UIView.h>

@protocol BFFPasscodeInputViewDelegate;
@class UILabel, UIView, UIButton;

@interface BFFPasscodeInputView : UIView {

	id<BFFPasscodeInputViewDelegate> _delegate;
	UILabel* _instructions;
	UIView* _footerView;
	UIButton* _footerButton;
	UIButton* _instructionsLinkButton;

}

@property (nonatomic,retain) UILabel * instructions;                                        //@synthesize instructions=_instructions - In the implementation block
@property (nonatomic,retain) UIButton * instructionsLinkButton;                             //@synthesize instructionsLinkButton=_instructionsLinkButton - In the implementation block
@property (assign,nonatomic,__weak) id<BFFPasscodeInputViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                           //@synthesize footerView=_footerView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                       //@synthesize footerButton=_footerButton - In the implementation block
-(UILabel *)instructions;
-(void)setInstructions:(UILabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<BFFPasscodeInputViewDelegate>)delegate;
-(void)setDelegate:(id<BFFPasscodeInputViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(id)passcodeField;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(UIButton *)footerButton;
-(void)disable;
-(void)footerButtonPressed;
-(UIButton *)instructionsLinkButton;
-(void)setInstructionsLinkButton:(UIButton *)arg1 ;
-(void)_instructionsLinkButtonPressed;
-(id)passcodeDisplayView;
-(void)_layoutForBounds:(CGRect)arg1 ;
-(void)setFooterButtonText:(id)arg1 ;
-(void)setInstructionsLinkText:(id)arg1 ;
-(void)shakePasscode;
-(void)setFooterButton:(UIButton *)arg1 ;
@end

