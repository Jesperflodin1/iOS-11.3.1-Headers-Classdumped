/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AddressBookUI/AddressBookUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNContactViewControllerPrivateDelegate.h>

@protocol ABNewPersonViewControllerDelegate;
@class CNContactViewController, CNContact, NSString;

@interface ABNewPersonViewController : UIViewController <CNContactViewControllerPrivateDelegate> {

	void* _addressBook;
	void* _displayedPerson;
	id<ABNewPersonViewControllerDelegate> _newPersonViewDelegate;
	const void* _parentGroup;
	CNContactViewController* _cnContactViewController;
	void* _parentSource;
	CNContact* _mergeContact;

}

@property (nonatomic,retain) CNContactViewController * cnContactViewController;                        //@synthesize cnContactViewController=_cnContactViewController - In the implementation block
@property (assign,nonatomic) void* parentSource;                                                       //@synthesize parentSource=_parentSource - In the implementation block
@property (nonatomic,retain) CNContact * mergeContact;                                                 //@synthesize mergeContact=_mergeContact - In the implementation block
@property (assign,nonatomic) BOOL showsCancelButton; 
@property (assign,nonatomic) id<ABNewPersonViewControllerDelegate> newPersonViewDelegate; 
@property (assign,nonatomic) const void* addressBook; 
@property (assign,nonatomic) const void* displayedPerson; 
@property (assign,nonatomic) const void* parentGroup;                                                  //@synthesize parentGroup=_parentGroup - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(void)loadView;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(CGSize)preferredContentSize;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)initWithStyle:(int)arg1 ;
-(void)setShowsCancelButton:(BOOL)arg1 ;
-(BOOL)showsCancelButton;
-(void)save:(id)arg1 ;
-(void)contactViewController:(id)arg1 didCompleteWithContact:(id)arg2 ;
-(const void*)parentGroup;
-(void)setParentGroup:(const void*)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 style:(int)arg3 ;
-(const void*)displayedPerson;
-(void)loadContactViewController;
-(CNContactViewController *)cnContactViewController;
-(void*)parentSource;
-(void)setDisplayedPerson:(const void*)arg1 ;
-(CNContact *)mergeContact;
-(void)setCnContactViewController:(CNContactViewController *)arg1 ;
-(id<ABNewPersonViewControllerDelegate>)newPersonViewDelegate;
-(void)setNewPersonViewDelegate:(id<ABNewPersonViewControllerDelegate>)arg1 ;
-(void)setSavesNewContactOnSuspend:(BOOL)arg1 ;
-(BOOL)savesNewContactOnSuspend;
-(void)setParentSource:(void*)arg1 ;
-(void)setMergeContact:(CNContact *)arg1 ;
-(const void*)addressBook;
-(void)setAddressBook:(const void*)arg1 ;
@end
