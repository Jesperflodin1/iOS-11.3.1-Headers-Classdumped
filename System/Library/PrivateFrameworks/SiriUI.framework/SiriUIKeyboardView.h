/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKit/UIInputView.h>
#import <UIKit/UITextFieldDelegate.h>

@protocol SiriUIKeyboardViewDelegate;
@class SiriUIHelpButton, SiriUIAudioRoutePickerButton, SiriUIContentButton, NSArray, UITextField, NSString;

@interface SiriUIKeyboardView : UIInputView <UITextFieldDelegate> {

	SiriUIHelpButton* _helpButton;
	SiriUIAudioRoutePickerButton* _audioRoutePickerButton;
	SiriUIContentButton* _reportBugButton;
	double _interKeyboardAccessoryViewPadding;
	double _verticalCompensation;
	NSArray* _originalInstalledLanguageIdentifiers;
	UITextField* _textField;
	id<SiriUIKeyboardViewDelegate> _delegate;

}

@property (nonatomic,retain) UITextField * textField;                                     //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic,__weak) id<SiriUIKeyboardViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_textFieldFont;
+(double)_textFieldHeight;
+(double)_keyboardAccessoryViewHeight;
+(id)inputAccessoryViewBackgroundColor;
+(double)_paddingBetweenKeyboardAndInputAccessoryViewWhenMinimized:(BOOL)arg1 ;
+(double)heightForWidthSizeClass:(BOOL)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(id<SiriUIKeyboardViewDelegate>)delegate;
-(void)setDelegate:(id<SiriUIKeyboardViewDelegate>)arg1 ;
-(void)dealloc;
-(CGSize)intrinsicContentSize;
-(BOOL)becomeFirstResponder;
-(void)setText:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(BOOL)resignFirstResponder;
-(UITextField *)textField;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
-(void)_keyboardWillShow:(id)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(BOOL)textFieldShouldClear:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 inputViewStyle:(long long)arg2 ;
-(CGRect)_defaultFrame;
-(id)_createHelpButton:(CGRect)arg1 ;
-(id)_createTextFieldWithFrame:(CGRect)arg1 ;
-(void)_configureReportBugButton;
-(void)_helpButtonTapped:(id)arg1 ;
-(void)_helpButtonLongPressed:(id)arg1 ;
-(void)_audioRouteButtonTapped:(id)arg1 ;
-(void)_configureAudioRoutePickerForAccessibility;
-(BOOL)_showsReportBugButton;
-(void)_createReportBugButtonWithTemplateImage:(id)arg1 ;
-(void)_loadReportBugButtonTemplateImageInBackgroundWithCompletion:(/*^block*/id)arg1 ;
-(void)_reportBugButtonTapped;
-(void)_reportBugButtonLongPressed;
-(void)_configureReportButtonForAccessibility;
-(void)_undoTextFieldEdit:(id)arg1 ;
-(double)_visibleHeightFromNotification:(id)arg1 ;
-(void)setShowAudioRoutePicker:(BOOL)arg1 ;
-(void)setAudioRoutePickerBluetoothOn:(BOOL)arg1 ;
-(void)setTextField:(UITextField *)arg1 ;
@end

