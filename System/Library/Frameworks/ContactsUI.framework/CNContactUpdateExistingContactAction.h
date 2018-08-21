/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/CNContactAction.h>
#import <libobjc.A.dylib/CNContactViewControllerDelegate.h>

@class CNContact, NSString;

@interface CNContactUpdateExistingContactAction : CNContactAction <CNContactViewControllerDelegate> {

	CNContact* _existingContact;

}

@property (nonatomic,retain) CNContact * existingContact;              //@synthesize existingContact=_existingContact - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(void)performActionWithSender:(id)arg1 ;
-(CNContact *)existingContact;
-(void)setExistingContact:(CNContact *)arg1 ;
@end

