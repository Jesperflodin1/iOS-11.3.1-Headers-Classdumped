/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextField.h>

@interface SBUIPasscodeTextField : UITextField {

	BOOL _previousResponderRequiresKeyboard;
	BOOL _showsSystemKeyboard;

}

@property (assign,nonatomic) BOOL showsSystemKeyboard;              //@synthesize showsSystemKeyboard=_showsSystemKeyboard - In the implementation block
-(void)dealloc;
-(void)_handleKeyUIEvent:(id)arg1 ;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(void)setShowsSystemKeyboard:(BOOL)arg1 ;
-(void)_enableAutomaticAppearance;
-(void)_disableAutomaticAppearance;
-(BOOL)showsSystemKeyboard;
@end

