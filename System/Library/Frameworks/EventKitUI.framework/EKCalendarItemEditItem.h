/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <libobjc.A.dylib/EKEditItemViewControllerDelegate.h>

@protocol EKEditItemViewControllerProtocol, EKCalendarItemEditItemDelegate, EKStyleProvider;
@class EKEventStore, UIViewController, EKCalendarItem, UIResponder, NSString;

@interface EKCalendarItemEditItem : NSObject <EKEditItemViewControllerDelegate> {

	EKEventStore* _store;
	UIViewController*<EKEditItemViewControllerProtocol> _viewController;
	EKCalendarItem* _calendarItem;
	id<EKCalendarItemEditItemDelegate> _delegate;
	id<EKStyleProvider> _styleProvider;
	UIResponder* _selectedResponder;

}

@property (assign,nonatomic,__weak) id<EKCalendarItemEditItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) id<EKStyleProvider> styleProvider;                               //@synthesize styleProvider=_styleProvider - In the implementation block
@property (nonatomic,retain) UIResponder * selectedResponder;                                 //@synthesize selectedResponder=_selectedResponder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<EKCalendarItemEditItemDelegate>)delegate;
-(void)setDelegate:(id<EKCalendarItemEditItemDelegate>)arg1 ;
-(void)reset;
-(void)applicationDidResume;
-(id)headerTitle;
-(id)footerTitle;
-(id)footerView;
-(id)cellForSubitemAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)numberOfSubitems;
-(double)defaultCellHeightForSubitemAtIndex:(unsigned long long)arg1 forWidth:(double)arg2 ;
-(id)detailViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)addStylingToCell:(id)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)notifySubitemDidSave:(unsigned long long)arg1 ;
-(void)setSelectedResponder:(UIResponder *)arg1 ;
-(void)notifyDidStartEditing;
-(void)notifyDidEndEditing;
-(void)notifyTextChanged;
-(void)editItemViewController:(id)arg1 didCompleteWithAction:(int)arg2 ;
-(BOOL)editItemViewControllerShouldShowDetachAlert;
-(BOOL)editItemViewControllerSave:(id)arg1 ;
-(void)editItemViewControllerWantsKeyboardPinned:(BOOL)arg1 ;
-(BOOL)isInline;
-(BOOL)usesDetailViewControllerForSubitem:(unsigned long long)arg1 ;
-(BOOL)saveAndDismissWithForce:(BOOL)arg1 ;
-(BOOL)editor:(id)arg1 canSelectSubitem:(unsigned long long)arg2 ;
-(void)editor:(id)arg1 didSelectSubitem:(unsigned long long)arg2 ;
-(BOOL)editor:(id)arg1 shouldClearSelectionFromSubitem:(unsigned long long)arg2 ;
-(BOOL)shouldAppearWithVisibility:(int)arg1 ;
-(void)refreshFromCalendarItemAndStore;
-(BOOL)canBeConfiguredForCalendarConstraints:(id)arg1 ;
-(void)editor:(id)arg1 didStartEditingItem:(id)arg2 ;
-(BOOL)configureForCalendarConstraints:(id)arg1 ;
-(BOOL)requiresReconfigurationOnSave;
-(BOOL)forceRefreshInviteesItemOnSave;
-(BOOL)forceRefreshLocationItemOnSave;
-(void)endInlineEditing;
-(void)setCalendarItem:(id)arg1 store:(id)arg2 ;
-(UIResponder *)selectedResponder;
-(void)editor:(id)arg1 didDeselectSubitem:(unsigned long long)arg2 ;
-(BOOL)forceTableReloadOnSave;
-(double)footerHeightForWidth:(double)arg1 ;
-(id)injectableViewControllerWithFrame:(CGRect)arg1 forSubitemAtIndex:(unsigned long long)arg2 ;
-(void)_showViewController:(id)arg1 editor:(id)arg2 animated:(BOOL)arg3 ;
-(BOOL)forceRefreshStartAndEndDatesOnSave;
-(void)editor:(id)arg1 requestsInjectableViewControllerToBeShownForSubitem:(unsigned long long)arg2 ;
-(void)editorDidScroll:(id)arg1 ;
-(void)notifyRequiresHeightChange;
-(BOOL)shouldPinKeyboard;
-(id)viewForActionSheet;
-(id)calendarItem;
-(id<EKStyleProvider>)styleProvider;
-(void)setStyleProvider:(id<EKStyleProvider>)arg1 ;
@end

