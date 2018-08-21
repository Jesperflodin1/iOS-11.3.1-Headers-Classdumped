/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNContactPickerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <libobjc.A.dylib/PKAddressSearcherViewControllerDelegate.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>

@class PKPassSnapshotter, UITextField, NSIndexPath, PKPaymentPreferenceButtonCell, PKPaymentPass, NSArray, UITableView, NSString;

@interface PKPaymentPreferencesViewController : UIViewController <CNContactPickerDelegate, UITextFieldDelegate, PKAddressSearcherViewControllerDelegate, PKAddressEditorViewControllerDelegate, UITableViewDataSource, UITableViewDelegate> {

	PKPassSnapshotter* _passSnapshotter;
	UITextField* _currentEditingField;
	NSIndexPath* _currentEditingIndexPath;
	PKPaymentPreferenceButtonCell* _sizingButtonCell;
	PKPaymentPass* _paymentPassForBillingErrors;
	PKPaymentPass* _currentlySelectedPaymentPass;
	NSArray* _preferences;
	long long _style;
	UITableView* _tableView;
	/*^block*/id _handler;
	/*^block*/id _pickedContactPropertyHandler;
	/*^block*/id _pickedContactHandler;

}

@property (nonatomic,copy) id pickedContactPropertyHandler;              //@synthesize pickedContactPropertyHandler=_pickedContactPropertyHandler - In the implementation block
@property (nonatomic,copy) id pickedContactHandler;                      //@synthesize pickedContactHandler=_pickedContactHandler - In the implementation block
@property (nonatomic,retain) NSArray * preferences;                      //@synthesize preferences=_preferences - In the implementation block
@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) UITableView * tableView;                  //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,copy) id handler;                                   //@synthesize handler=_handler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 editActionsForRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2 ;
-(BOOL)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3 ;
-(long long)style;
-(void)viewWillLayoutSubviews;
-(void)tableViewDidFinishReload:(id)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UITableView *)tableView;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)_keyboardWillHide:(id)arg1 ;
-(void)setPreferences:(NSArray *)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg1 ;
-(BOOL)textFieldShouldEndEditing:(id)arg1 ;
-(void)textFieldDidEndEditing:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(NSArray *)preferences;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)_keyboardDidShow:(id)arg1 ;
-(void)_updatePreferredContentSize;
-(void)contactPickerDidCancel:(id)arg1 ;
-(void)contactPicker:(id)arg1 didSelectContact:(id)arg2 ;
-(void)contactPicker:(id)arg1 didSelectContactProperty:(id)arg2 ;
-(id)pk_childrenForAppearance;
-(id)initWithStyle:(long long)arg1 preferences:(id)arg2 title:(id)arg3 handler:(/*^block*/id)arg4 ;
-(void)addressSearcherViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressSearcherViewControllerDidCancel:(id)arg1 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(void)setErrors:(id)arg1 pass:(id)arg2 animated:(BOOL)arg3 ;
-(void)clearErrorsForPreference:(Class)arg1 ;
-(void)setErrors:(id)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isViewTranslucent;
-(BOOL)_isPaymentStyle;
-(void)_updateNavigationBarButtons;
-(void)hideTextField:(id)arg1 ;
-(void)_updateContactAndForceSelection:(BOOL)arg1 ;
-(void)_cleanupInlineEdits;
-(id)_cellOfClass:(Class)arg1 ;
-(id)_cellForNamePreference:(id)arg1 row:(unsigned long long)arg2 ;
-(id)_cellForPreference:(id)arg1 row:(unsigned long long)arg2 ;
-(void)_showAddressPickerForPreference:(id)arg1 ;
-(void)_startInlineEditingForPreference:(id)arg1 inSection:(unsigned long long)arg2 ;
-(void)_showContactsPickerForPreference:(id)arg1 ;
-(void)_editPreferenceAtIndexPath:(id)arg1 ;
-(id)_requiredKeysForPreference:(id)arg1 contact:(id)arg2 ;
-(void)_showAddressEditorForContact:(id)arg1 title:(id)arg2 requiredKeys:(id)arg3 highlightedKeys:(id)arg4 errors:(id)arg5 ;
-(void)_presentMeCardAlertControllerWithContact:(id)arg1 contactKey:(id)arg2 handler:(/*^block*/id)arg3 ;
-(BOOL)_saveUpdatedContact:(id)arg1 contactKey:(id)arg2 preference:(id)arg3 atIndex:(long long)arg4 ;
-(BOOL)_updateMeCardWithNewContact:(id)arg1 oldContact:(id)arg2 forKey:(id)arg3 usingPreference:(id)arg4 ;
-(void)_setContactHandlersForPreference:(id)arg1 ;
-(void)_savePickedContact:(id)arg1 inPreference:(id)arg2 ;
-(void)setPickedContactHandler:(id)arg1 ;
-(void)setPickedContactPropertyHandler:(id)arg1 ;
-(id)pickedContactPropertyHandler;
-(id)pickedContactHandler;
@end

