/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUItemTableViewController.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UITextViewDelegate.h>
#import <libobjc.A.dylib/HUWallpaperPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/HUWallpaperEditingViewControllerDelegate.h>
#import <libobjc.A.dylib/HUAddPeopleViewControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <libobjc.A.dylib/HFHomeManagerObserver.h>

@protocol HUEditLocationViewControllerPresentationDelegate, HUEditLocationViewControllerAddLocationDelegate;
@class HUHomeUsersCollectionViewController, HFHomeBuilder, HUEditLocationItemManager, HUEditableTextCell, NSString, HUEditableTextViewCell, UIBarButtonItem;

@interface HUEditLocationViewController : HUItemTableViewController <UITextFieldDelegate, UITextViewDelegate, HUWallpaperPickerViewControllerDelegate, HUWallpaperEditingViewControllerDelegate, HUAddPeopleViewControllerDelegate, UIImagePickerControllerDelegate, UINavigationControllerDelegate, HFHomeManagerObserver> {

	HUHomeUsersCollectionViewController* _usersViewController;
	HFHomeBuilder* _homeBuilder;
	id<HUEditLocationViewControllerPresentationDelegate> _presentationDelegate;
	id<HUEditLocationViewControllerAddLocationDelegate> _addLocationDelegate;
	unsigned long long _context;
	HUEditLocationItemManager* _homeItemManager;
	HUEditableTextCell* _nameCell;
	NSString* _editedName;
	HUEditableTextViewCell* _detailNotesCell;
	NSString* _editedNotes;
	UIBarButtonItem* _savedButtonBarItem;

}

@property (assign,nonatomic,__weak) id<HUEditLocationViewControllerPresentationDelegate> presentationDelegate;              //@synthesize presentationDelegate=_presentationDelegate - In the implementation block
@property (assign,nonatomic,__weak) id<HUEditLocationViewControllerAddLocationDelegate> addLocationDelegate;                //@synthesize addLocationDelegate=_addLocationDelegate - In the implementation block
@property (assign,nonatomic,__weak) HUEditLocationItemManager * homeItemManager;                                            //@synthesize homeItemManager=_homeItemManager - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextCell * nameCell;                                                          //@synthesize nameCell=_nameCell - In the implementation block
@property (nonatomic,retain) NSString * editedName;                                                                         //@synthesize editedName=_editedName - In the implementation block
@property (assign,nonatomic,__weak) HUEditableTextViewCell * detailNotesCell;                                               //@synthesize detailNotesCell=_detailNotesCell - In the implementation block
@property (nonatomic,retain) NSString * editedNotes;                                                                        //@synthesize editedNotes=_editedNotes - In the implementation block
@property (nonatomic,readonly) HUHomeUsersCollectionViewController * usersViewController;                                   //@synthesize usersViewController=_usersViewController - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * savedButtonBarItem;                                                          //@synthesize savedButtonBarItem=_savedButtonBarItem - In the implementation block
@property (nonatomic,readonly) HFHomeBuilder * homeBuilder;                                                                 //@synthesize homeBuilder=_homeBuilder - In the implementation block
@property (nonatomic,readonly) unsigned long long context;                                                                  //@synthesize context=_context - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(unsigned long long)context;
-(void)viewDidLoad;
-(void)textViewDidChange:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(void)setPresentationDelegate:(id<HUEditLocationViewControllerPresentationDelegate>)arg1 ;
-(id<HUEditLocationViewControllerPresentationDelegate>)presentationDelegate;
-(void)wallpaperEditing:(id)arg1 didFinishWithWallpaper:(id)arg2 image:(id)arg3 ;
-(void)wallpaperEditingDidCancel:(id)arg1 ;
-(BOOL)shouldManageTextFieldForItem:(id)arg1 ;
-(id)currentTextForTextField:(id)arg1 item:(id)arg2 ;
-(void)textDidChange:(id)arg1 forTextField:(id)arg2 item:(id)arg3 ;
-(void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(BOOL)arg4 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)wallpaperPickerDidFinish:(id)arg1 wallpaper:(id)arg2 image:(id)arg3 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(HFHomeBuilder *)homeBuilder;
-(void)addPeopleViewControllerDidFinish:(id)arg1 ;
-(id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 context:(unsigned long long)arg4 ;
-(void)doneButtonPressed:(id)arg1 ;
-(id<HUEditLocationViewControllerAddLocationDelegate>)addLocationDelegate;
-(void)addButtonPressed:(id)arg1 ;
-(NSString *)editedName;
-(HUEditableTextCell *)nameCell;
-(NSString *)editedNotes;
-(void)setSavedButtonBarItem:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)savedButtonBarItem;
-(HUEditLocationItemManager *)homeItemManager;
-(HUHomeUsersCollectionViewController *)usersViewController;
-(void)setNameCell:(HUEditableTextCell *)arg1 ;
-(void)setDetailNotesCell:(HUEditableTextViewCell *)arg1 ;
-(HUEditableTextViewCell *)detailNotesCell;
-(void)setEditedName:(NSString *)arg1 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)setEditedNotes:(NSString *)arg1 ;
-(void)updateWallpaper:(id)arg1 image:(id)arg2 ;
-(id)initWithHomeBuilder:(id)arg1 presentationDelegate:(id)arg2 addLocationDelegate:(id)arg3 ;
-(unsigned long long)automaticDisablingReasonsForItem:(id)arg1 ;
-(void)setAddLocationDelegate:(id<HUEditLocationViewControllerAddLocationDelegate>)arg1 ;
-(void)setHomeItemManager:(HUEditLocationItemManager *)arg1 ;
@end
