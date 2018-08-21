/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:23 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WebUI/WBUFormAutoCompleteState.h>

@class SFFormAutoFillFrameHandle, WBSFormMetadata, NSDictionary, NSString, _SFFormAutoFillController, _SFFormAutoFillInputSession, UIView, WBSFormAutoFillMetadataCorrector;

@interface SFFormAutocompleteState : WBUFormAutoCompleteState {

	SFFormAutoFillFrameHandle* _frame;
	WBSFormMetadata* _formMetadata;
	NSDictionary* _textFieldMetadata;
	NSString* _textFieldValue;
	_SFFormAutoFillController* _autoFillController;
	_SFFormAutoFillInputSession* _inputSession;
	UIView* _emptyInputView;
	WBSFormAutoFillMetadataCorrector* _metadataCorrector;
	NSString* _prefixForSuggestions;

}
-(id)frame;
-(void)invalidate;
-(void)dealloc;
-(id)webView;
-(id)initWithFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 inputSession:(id)arg4 autoFillController:(id)arg5 ;
-(void)updateSuggestions;
-(void)textDidChangeInFrame:(id)arg1 form:(id)arg2 textField:(id)arg3 ;
-(void)_updateTextFieldValue;
-(void)fillCredentialAfterAuthenticationIfNeeded:(id)arg1 setAsDefaultCredential:(BOOL)arg2 ;
-(void)autoFillFormWithCreditCardDataAfterAuthenticationIfNeeded:(id)arg1 ;
-(void)_gatherAndShowAddressBookAutoFillSuggestions;
-(id)_correctedFormMetadata:(id)arg1 ;
-(id)_bestTextFieldMetadataForMetadata:(id)arg1 ;
-(id)_suggestionsForAutoFillDisplayData:(id)arg1 ;
-(void)setPrefixForSuggestions:(id)arg1 ;
-(void)setAutoFillButtonTitle:(id)arg1 ;
-(void)autoFillValuesAfterAuthenticationIfNeeded:(id)arg1 ;
-(void)setShowingKeyboardInputView:(BOOL)arg1 ;
-(void)getTextFieldMetadata:(id*)arg1 formMetadata:(id*)arg2 ;
-(void)fetchFormMetadataWithCompletion:(/*^block*/id)arg1 ;
-(void)autoFillValues:(id)arg1 setAutoFilled:(BOOL)arg2 andFocusFieldAfterFilling:(BOOL)arg3 fieldToFocus:(id)arg4 ;
-(void)autoFillGeneratedPassword:(id)arg1 inForm:(long long)arg2 ;
-(void)annotateForm:(long long)arg1 withValues:(id)arg2 ;
-(void)fillGeneratedPassword:(id)arg1 inField:(id)arg2 ;
-(void)setFormControls:(id)arg1 areAutoFilled:(BOOL)arg2 clearField:(id)arg3 ;
-(BOOL)shouldOfferActionAutoFillCredentials;
-(id)textFieldValue;
@end

