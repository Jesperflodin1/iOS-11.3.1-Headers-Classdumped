/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DocumentManagerUICore.framework/DocumentManagerUICore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DocumentManagerUICore/DocumentManagerUICore-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UICollectionViewDelegateTableLayout.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <libobjc.A.dylib/DOCAddTagTextFieldDelegate.h>
#import <libobjc.A.dylib/DOCTagEditorDelegate.h>
#import <libobjc.A.dylib/DOCTagEditorPresenter.h>

@protocol DOCTagEditorDelegate;
@class NSArray, NSOrderedSet, UICollectionView, UIView, DOCAddTagView, UIInterfaceActionGroupView, NSDictionary, NSLayoutConstraint, NSMutableOrderedSet, NSMutableSet, NSString, UIBarButtonItem;

@interface DOCTagEditorViewController : UIViewController <UICollectionViewDelegateTableLayout, UICollectionViewDataSource, DOCAddTagTextFieldDelegate, DOCTagEditorDelegate, DOCTagEditorPresenter> {

	BOOL _showAddTagConfirmButtons;
	BOOL _useCompactColorPicker;
	BOOL _pinTextFieldToTopBound;
	BOOL _delayResizingUntilAppeared;
	BOOL _isExtremelyVerticallyCompact;
	BOOL _isInfoInPopoverMode;
	BOOL _inTagListMode;
	BOOL _addingTag;
	BOOL _userChangedTags;
	id<DOCTagEditorDelegate> _delegate;
	NSArray* _items;
	NSOrderedSet* _userTags;
	UICollectionView* _collectionView;
	UIView* _addTagTextFieldViewWrapper;
	DOCAddTagView* _addTagTextFieldView;
	UIInterfaceActionGroupView* _confirmButtons;
	NSDictionary* _sizingCells;
	NSLayoutConstraint* _collectionViewHeightConstraint;
	NSMutableOrderedSet* _discoveredTags;
	NSMutableSet* _intersectionSelectedTags;
	NSMutableSet* _unionSelectedTags;
	NSString* _tagsTitle;
	NSString* _addTagTitle;
	NSString* _addNewTagTitle;
	UIBarButtonItem* _doneButton;
	UIBarButtonItem* _cancelButton;

}

@property (nonatomic,retain) UICollectionView * collectionView;                                  //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain) UIView * addTagTextFieldViewWrapper;                                //@synthesize addTagTextFieldViewWrapper=_addTagTextFieldViewWrapper - In the implementation block
@property (nonatomic,retain) DOCAddTagView * addTagTextFieldView;                                //@synthesize addTagTextFieldView=_addTagTextFieldView - In the implementation block
@property (nonatomic,retain) UIInterfaceActionGroupView * confirmButtons;                        //@synthesize confirmButtons=_confirmButtons - In the implementation block
@property (nonatomic,readonly) NSDictionary * sizingCells;                                       //@synthesize sizingCells=_sizingCells - In the implementation block
@property (nonatomic,readonly) NSLayoutConstraint * collectionViewHeightConstraint;              //@synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint - In the implementation block
@property (assign,getter=isAddingTag,nonatomic) BOOL addingTag;                                  //@synthesize addingTag=_addingTag - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * userTags;                                          //@synthesize userTags=_userTags - In the implementation block
@property (nonatomic,readonly) NSMutableOrderedSet * discoveredTags;                             //@synthesize discoveredTags=_discoveredTags - In the implementation block
@property (nonatomic,retain) NSMutableSet * intersectionSelectedTags;                            //@synthesize intersectionSelectedTags=_intersectionSelectedTags - In the implementation block
@property (nonatomic,retain) NSMutableSet * unionSelectedTags;                                   //@synthesize unionSelectedTags=_unionSelectedTags - In the implementation block
@property (assign,nonatomic) BOOL userChangedTags;                                               //@synthesize userChangedTags=_userChangedTags - In the implementation block
@property (nonatomic,retain) NSString * tagsTitle;                                               //@synthesize tagsTitle=_tagsTitle - In the implementation block
@property (nonatomic,retain) NSString * addTagTitle;                                             //@synthesize addTagTitle=_addTagTitle - In the implementation block
@property (nonatomic,retain) NSString * addNewTagTitle;                                          //@synthesize addNewTagTitle=_addNewTagTitle - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * doneButton;                                       //@synthesize doneButton=_doneButton - In the implementation block
@property (nonatomic,retain) UIBarButtonItem * cancelButton;                                     //@synthesize cancelButton=_cancelButton - In the implementation block
@property (assign,nonatomic) BOOL isInfoInPopoverMode;                                           //@synthesize isInfoInPopoverMode=_isInfoInPopoverMode - In the implementation block
@property (assign,nonatomic) BOOL inTagListMode;                                                 //@synthesize inTagListMode=_inTagListMode - In the implementation block
@property (nonatomic,readonly) BOOL isCreatingTag; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) BOOL showAddTagConfirmButtons;                                      //@synthesize showAddTagConfirmButtons=_showAddTagConfirmButtons - In the implementation block
@property (assign,nonatomic) BOOL useCompactColorPicker;                                         //@synthesize useCompactColorPicker=_useCompactColorPicker - In the implementation block
@property (assign,nonatomic) BOOL pinTextFieldToTopBound;                                        //@synthesize pinTextFieldToTopBound=_pinTextFieldToTopBound - In the implementation block
@property (assign,nonatomic) BOOL delayResizingUntilAppeared;                                    //@synthesize delayResizingUntilAppeared=_delayResizingUntilAppeared - In the implementation block
@property (assign,nonatomic) BOOL isExtremelyVerticallyCompact;                                  //@synthesize isExtremelyVerticallyCompact=_isExtremelyVerticallyCompact - In the implementation block
@property (assign,nonatomic,__weak) id<DOCTagEditorDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSArray * items;                                                    //@synthesize items=_items - In the implementation block
-(NSOrderedSet *)userTags;
-(void)setIsInfoInPopoverMode:(BOOL)arg1 ;
-(BOOL)isInfoInPopoverMode;
-(id<DOCTagEditorDelegate>)delegate;
-(void)setDelegate:(id<DOCTagEditorDelegate>)arg1 ;
-(void)dealloc;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didDeselectItemAtIndexPath:(id)arg2 ;
-(void)loadView;
-(NSArray *)items;
-(void)setItems:(NSArray *)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(double)collectionView:(id)arg1 tableLayout:(id)arg2 heightForRowAtIndexPath:(id)arg3 ;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(id)contentScrollView;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)setCancelButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)cancelButton;
-(void)setDoneButton:(UIBarButtonItem *)arg1 ;
-(UIBarButtonItem *)doneButton;
-(void)_updateNavigationItem;
-(id)_tagForIndexPath:(id)arg1 ;
-(void)_updateSelection;
-(void)cancelButtonTapped:(id)arg1 ;
-(NSLayoutConstraint *)collectionViewHeightConstraint;
-(void)doneButtonTapped:(id)arg1 ;
-(void)addTagTextFieldDidBeginEditing:(id)arg1 ;
-(void)addTagTextFieldDidEndEditing:(id)arg1 ;
-(void)addTagTextFieldDidChange:(id)arg1 ;
-(BOOL)addTagTextField:(id)arg1 userDidCreateTagWithName:(id)arg2 ;
-(void)setUseCompactColorPicker:(BOOL)arg1 ;
-(void)setPinTextFieldToTopBound:(BOOL)arg1 ;
-(void)setDelayResizingUntilAppeared:(BOOL)arg1 ;
-(void)setInTagListMode:(BOOL)arg1 ;
-(void)setShowAddTagConfirmButtons:(BOOL)arg1 ;
-(BOOL)isCreatingTag;
-(BOOL)isExtremelyVerticallyCompact;
-(void)setIsExtremelyVerticallyCompact:(BOOL)arg1 ;
-(void)setupCells:(id)arg1 ;
-(void)setTagsTitle:(NSString *)arg1 ;
-(void)setAddTagTitle:(NSString *)arg1 ;
-(void)setAddNewTagTitle:(NSString *)arg1 ;
-(void)tagRegistryDidUpdate;
-(BOOL)delayResizingUntilAppeared;
-(void)_updatePreferredContentSize:(BOOL)arg1 ;
-(BOOL)userChangedTags;
-(void)scheduleSetTagsOperationWithTag:(id)arg1 adding:(BOOL)arg2 ;
-(void)setUserChangedTags:(BOOL)arg1 ;
-(BOOL)isAddingTag;
-(void)updateDiscoveredTags;
-(DOCAddTagView *)addTagTextFieldView;
-(BOOL)pinTextFieldToTopBound;
-(BOOL)showAddTagConfirmButtons;
-(NSMutableSet *)unionSelectedTags;
-(NSMutableSet *)intersectionSelectedTags;
-(void)_updateSelectionForSection:(unsigned long long)arg1 withTags:(id)arg2 ;
-(NSMutableOrderedSet *)discoveredTags;
-(void)_updateMixedSelectionForCell:(id)arg1 ;
-(NSString *)addTagTitle;
-(NSString *)addNewTagTitle;
-(BOOL)inTagListMode;
-(NSString *)tagsTitle;
-(void)updateSelectedTags;
-(void)setIntersectionSelectedTags:(NSMutableSet *)arg1 ;
-(void)setUnionSelectedTags:(NSMutableSet *)arg1 ;
-(UIInterfaceActionGroupView *)confirmButtons;
-(void)setAddTagTextFieldViewWrapper:(UIView *)arg1 ;
-(void)setAddTagTextFieldView:(DOCAddTagView *)arg1 ;
-(UIView *)addTagTextFieldViewWrapper;
-(id)createConfirmButtons;
-(void)setConfirmButtons:(UIInterfaceActionGroupView *)arg1 ;
-(void)tagEditor:(id)arg1 userDidSelectTag:(id)arg2 ;
-(void)tagEditor:(id)arg1 userDidDeselectTag:(id)arg2 ;
-(id)cellForIndexPath:(id)arg1 dequeueCell:(/*^block*/id)arg2 ;
-(double)topEdgeSpacing;
-(double)bottomEdgeSpacing;
-(NSDictionary *)sizingCells;
-(void)setAddingTag:(BOOL)arg1 ;
-(void)tagEditor:(id)arg1 userDidCreateTag:(id)arg2 ;
-(BOOL)useCompactColorPicker;
@end
