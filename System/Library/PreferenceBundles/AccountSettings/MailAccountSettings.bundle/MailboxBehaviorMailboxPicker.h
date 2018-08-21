/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/MailAccountSettings.bundle/MailAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>

@protocol MailboxBehaviorMailboxPickerDelegate;
@class AccountPSAdvancedController, MailboxListViewControllerPrefs;

@interface MailboxBehaviorMailboxPicker : PSViewController {

	AccountPSAdvancedController*<MailboxBehaviorMailboxPickerDelegate> _target;
	MailboxListViewControllerPrefs* _mailboxListController;
	int _pickingForType;

}
-(void)mailboxList:(id)arg1 didSelectMailbox:(id)arg2 ;
-(void)selectedLocally:(id)arg1 ;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
@end

