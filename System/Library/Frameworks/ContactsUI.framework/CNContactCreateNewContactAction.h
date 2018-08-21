/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, UIViewController, NSString;

@interface CNContactCreateNewContactAction : CNContactAction <CNContactViewControllerDelegate> {

	CNContact* _createdContact;
	UIViewController* _presentingViewController;

}

@property (nonatomic,retain) CNContact * createdContact;                                      //@synthesize createdContact=_createdContact - In the implementation block
@property (assign,nonatomic,__weak) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UIViewController *)presentingViewController;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
-(void)setCreatedContact:(CNContact *)arg1 ;
-(CNContact *)createdContact;
@end

