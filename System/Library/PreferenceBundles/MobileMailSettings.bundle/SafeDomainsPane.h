/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MobileMailSettings.bundle/MobileMailSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSListController.h>

@class UITextField, PSListController;

@interface SafeDomainsPane : PSListController {

	UITextField* _textField;
	PSListController* _parentListController;

}

@property (assign,nonatomic) PSListController * parentListController;              //@synthesize parentListController=_parentListController - In the implementation block
-(void)setParentListController:(PSListController *)arg1 ;
-(PSListController *)parentListController;
-(void)_setDomainsList:(id)arg1 withSpecifier:(id)arg2 ;
-(id)_domainsListWithSpecifier:(id)arg1 ;
-(void)dealloc;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)specifiers;
@end
