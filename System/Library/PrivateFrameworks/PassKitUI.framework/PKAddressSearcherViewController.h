/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:31 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UISearchBarDelegate.h>
#import <UIKit/UITableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>
#import <libobjc.A.dylib/PKAddressSearchModelDelegate.h>
#import <libobjc.A.dylib/PKAddressEditorViewControllerDelegate.h>

@protocol PKAddressSearcherViewControllerDelegate;
@class NSArray, UISearchBar, UITableView, _UINavigationControllerPalette, PKAddressSearchModel, CNPostalAddress, NSString;

@interface PKAddressSearcherViewController : UIViewController <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, PKAddressSearchModelDelegate, PKAddressEditorViewControllerDelegate> {

	id<PKAddressSearcherViewControllerDelegate> _delegate;
	NSArray* _requiredKeys;
	UISearchBar* _searchBar;
	UITableView* _tableView;
	_UINavigationControllerPalette* _palette;
	PKAddressSearchModel* _searchModel;
	long long _style;
	CNPostalAddress* _selectedAddress;
	NSArray* _completionSearchResults;
	NSArray* _contactsSearchResults;

}

@property (nonatomic,retain) UISearchBar * searchBar;                                           //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                           //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) _UINavigationControllerPalette * palette;                          //@synthesize palette=_palette - In the implementation block
@property (nonatomic,retain) PKAddressSearchModel * searchModel;                                //@synthesize searchModel=_searchModel - In the implementation block
@property (assign,nonatomic) long long style;                                                   //@synthesize style=_style - In the implementation block
@property (nonatomic,retain) CNPostalAddress * selectedAddress;                                 //@synthesize selectedAddress=_selectedAddress - In the implementation block
@property (nonatomic,retain) NSArray * completionSearchResults;                                 //@synthesize completionSearchResults=_completionSearchResults - In the implementation block
@property (nonatomic,retain) NSArray * contactsSearchResults;                                   //@synthesize contactsSearchResults=_contactsSearchResults - In the implementation block
@property (assign,nonatomic) id<PKAddressSearcherViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * requiredKeys;                                            //@synthesize requiredKeys=_requiredKeys - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id<PKAddressSearcherViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKAddressSearcherViewControllerDelegate>)arg1 ;
-(double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2 ;
-(void)loadView;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(void)viewWillLayoutSubviews;
-(void)setTableView:(UITableView *)arg1 ;
-(BOOL)tableView:(id)arg1 wantsHeaderForSection:(long long)arg2 ;
-(UITableView *)tableView;
-(CGSize)preferredContentSize;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(UISearchBar *)searchBar;
-(id)initWithStyle:(long long)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(NSArray *)requiredKeys;
-(void)_showAddressEditorWithContact:(id)arg1 ;
-(NSArray *)completionSearchResults;
-(NSArray *)contactsSearchResults;
-(void)contactsSearchUpdated:(id)arg1 ;
-(void)mapSearchUpdated:(id)arg1 ;
-(void)selectedAddress:(id)arg1 withError:(id)arg2 ;
-(void)addressEditorViewController:(id)arg1 selectedContact:(id)arg2 ;
-(void)addressEditorViewControllerDidCancel:(id)arg1 ;
-(void)setRequiredKeys:(NSArray *)arg1 ;
-(PKAddressSearchModel *)searchModel;
-(void)setSearchModel:(PKAddressSearchModel *)arg1 ;
-(CNPostalAddress *)selectedAddress;
-(void)setSelectedAddress:(CNPostalAddress *)arg1 ;
-(void)setCompletionSearchResults:(NSArray *)arg1 ;
-(void)setContactsSearchResults:(NSArray *)arg1 ;
-(void)setPalette:(_UINavigationControllerPalette *)arg1 ;
-(_UINavigationControllerPalette *)palette;
@end

