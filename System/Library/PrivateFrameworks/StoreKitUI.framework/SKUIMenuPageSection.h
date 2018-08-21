/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIStorePageSection.h>
#import <libobjc.A.dylib/SKUIMenuViewControllerDelegate.h>
#import <libobjc.A.dylib/SKUIPopupMenuDelegate.h>
#import <libobjc.A.dylib/SKUISortDataRequestDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>

@class UIBarButtonItem, SKUIPillsControl, SKUIMenuViewController, UIPopoverController, SKUIPopupMenuHeaderView, NSMutableIndexSet, SKUIMenuPageComponent, NSString;

@interface SKUIMenuPageSection : SKUIStorePageSection <SKUIMenuViewControllerDelegate, SKUIPopupMenuDelegate, SKUISortDataRequestDelegate, UIPopoverControllerDelegate> {

	UIBarButtonItem* _cancelMenuItem;
	SKUIPillsControl* _pillsControl;
	SKUIMenuViewController* _moreListMenuViewController;
	UIPopoverController* _moreListPopoverController;
	SKUIPopupMenuHeaderView* _popupHeaderView;
	long long _selectedIndex;
	NSMutableIndexSet* _sortRequestIndexSet;

}

@property (nonatomic,readonly) SKUIMenuPageComponent * pageComponent; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(UIEdgeInsets)sectionContentInset;
-(id)initWithPageComponent:(id)arg1 ;
-(id)backgroundColorForIndexPath:(id)arg1 ;
-(void)willAppearInContext:(id)arg1 ;
-(id)cellForIndexPath:(id)arg1 ;
-(CGSize)cellSizeForIndexPath:(id)arg1 ;
-(id)_contentChildView;
-(void)menuViewController:(id)arg1 didSelectItemAtIndex:(long long)arg2 ;
-(void)sortDataRequest:(id)arg1 didFinishWithLockups:(id)arg2 ;
-(void)_cancelMenuAction:(id)arg1 ;
-(void)_setSelectedIndex:(long long)arg1 ;
-(void)_dismissMenuViewController;
-(void)_restorePreviousSelection;
-(void)_showMoreList;
-(id)_pillsControl;
-(id)_popupHeaderView;
-(void)_pillAction:(id)arg1 ;
-(void)_loadSortDataIfNecessaryForMenuIndex:(long long)arg1 reason:(long long)arg2 ;
-(id)_newMenuViewController;
-(void)_showMenuViewController;
-(void)_showPopoverController;
-(void)popupMenuHeader:(id)arg1 didSelectMenuItemAtIndex:(long long)arg2 ;
-(long long)numberOfCells;
@end

