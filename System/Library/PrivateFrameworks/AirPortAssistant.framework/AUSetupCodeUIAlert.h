/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AirPortAssistant/AirPortAssistant-Structs.h>
#import <AirPortAssistant/AUTextFieldUIAlert.h>
#import <UIKit/UIAlertViewDelegate.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextRange, NSString;

@interface AUSetupCodeUIAlert : AUTextFieldUIAlert <UIAlertViewDelegate, UITextFieldDelegate> {

	UITextRange* _selectionRange;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)prepareToShow;
-(void)formatSetupCodeWithSender:(id)arg1 ;
@end

