/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VideoSubscriberAccountUI/VSAppDocumentController.h>
#import <libobjc.A.dylib/VSAutoAuthenticationViewModelDelegate.h>

@class IKViewElement, NSString;

@interface VSAutoAuthenticationAppDocumentController : VSAppDocumentController <VSAutoAuthenticationViewModelDelegate> {

	IKViewElement* _buttonLockupElement;

}

@property (nonatomic,retain) IKViewElement * buttonLockupElement;              //@synthesize buttonLockupElement=_buttonLockupElement - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)_newViewModel;
-(BOOL)_updateViewModel:(id)arg1 error:(id*)arg2 ;
-(id)_autoAuthenticationViewModelWithViewModel:(id)arg1 ;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 error:(id*)arg2 ;
-(IKViewElement *)buttonLockupElement;
-(BOOL)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2 ;
-(void)setButtonLockupElement:(IKViewElement *)arg1 ;
-(void)autoAuthenticationViewModelDidManualSignInButton:(id)arg1 ;
@end
