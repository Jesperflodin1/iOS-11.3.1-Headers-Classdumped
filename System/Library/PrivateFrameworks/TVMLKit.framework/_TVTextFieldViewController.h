/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <TVMLKit/_TVSearchBarDelegate.h>

@class IKTextFieldElement, UITextField, NSString;

@interface _TVTextFieldViewController : UIViewController <IKAppKeyboardDelegate, _TVSearchBarDelegate> {

	IKTextFieldElement* _viewElement;

}

@property (nonatomic,retain,readonly) IKTextFieldElement * viewElement;              //@synthesize viewElement=_viewElement - In the implementation block
@property (nonatomic,retain,readonly) UITextField * textField; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)loadView;
-(UITextField *)textField;
-(IKTextFieldElement *)viewElement;
-(void)updateWithViewElement:(id)arg1 ;
-(void)searchBarDidChangeText:(id)arg1 ;
-(void)_updateKeyboardWithUserText;
-(void)_updateViewLayout;
-(void)_updateUserText;
-(void)textDidChangeForKeyboard:(id)arg1 ;
@end
