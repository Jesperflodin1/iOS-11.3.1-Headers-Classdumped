/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VoiceTriggerUI.framework/VoiceTriggerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VoiceTriggerUI/VoiceTriggerUI-Structs.h>
#import <VoiceTriggerUI/VTUIEnrollmentStateView.h>
#import <UIKit/UITextViewDelegate.h>

@protocol VTUIEnrollmentSetupIntroViewDelegate;
@class UIView, UITextView, NSArray, NSMutableArray, NSString;

@interface VTUIEnrollmentLanguageOptionsView : VTUIEnrollmentStateView <UITextViewDelegate> {

	UIView* _footerView;
	UITextView* _footerTextView;
	NSArray* _continueButtonsLanguages;
	id<VTUIEnrollmentSetupIntroViewDelegate> _stateViewDelegate;
	NSMutableArray* _continueButtons;

}

@property (assign,nonatomic,__weak) id<VTUIEnrollmentSetupIntroViewDelegate> stateViewDelegate;              //@synthesize stateViewDelegate=_stateViewDelegate - In the implementation block
@property (nonatomic,readonly) NSMutableArray * continueButtons;                                             //@synthesize continueButtons=_continueButtons - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)footerView;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 ;
-(void)setStateViewDelegate:(id<VTUIEnrollmentSetupIntroViewDelegate>)arg1 ;
-(NSMutableArray *)continueButtons;
-(id)languageSelectionOfContinueButton:(id)arg1 ;
-(void)setContinueButtonLanguages:(id)arg1 ;
-(void)_setupContent;
-(void)_setupImage;
-(id)_createFooter;
-(BOOL)suppressFinishButton;
-(id<VTUIEnrollmentSetupIntroViewDelegate>)stateViewDelegate;
-(void)_addContinueButtonsToFooter;
@end

