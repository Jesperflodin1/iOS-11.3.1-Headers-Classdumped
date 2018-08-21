/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/_TVBgImageLoadingViewController.h>
#import <TVMLKit/_TVSearchTemplateViewDelegate.h>
#import <libobjc.A.dylib/IKAppKeyboardDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <UIKit/UICollectionViewDelegate.h>
#import <UIKit/UICollectionViewDelegateFlowLayout.h>
#import <UIKit/UISearchBarDelegate.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>

@class IKViewElement, IKTextFieldElement, IKAppKeyboard, IKImageElement, _TVSearchTemplateView, UISearchBar, UISystemInputViewController, UIViewController, NSArray, NSIndexPath, UIImage, NSString;

@interface _TVSearchTemplateController : _TVBgImageLoadingViewController <_TVSearchTemplateViewDelegate, IKAppKeyboardDelegate, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout, UISearchBarDelegate, TVAppTemplateImpressionable> {

	IKViewElement* _templateElement;
	IKTextFieldElement* _searchFieldElement;
	IKAppKeyboard* _ikKeyboard;
	IKViewElement* _bannerElement;
	IKViewElement* _scopeElement;
	IKViewElement* _suggestionsElement;
	IKViewElement* _collectionListElement;
	IKImageElement* _bgImageElement;
	IKImageElement* _heroImgElement;
	_TVSearchTemplateView* _searchTemplateView;
	UISearchBar* _searchBar;
	UISystemInputViewController* _systemInputViewController;
	UIViewController* _scopeViewController;
	UIViewController* _suggestionsViewController;
	NSArray* _viewControllers;
	NSArray* _rowSpacingMetricsList;
	NSIndexPath* _focusedViewControllerIndexPath;
	double _impressionThreshold;
	UIImage* _backgroundImage;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_viewControllerFromElement:(id)arg1 existingController:(id)arg2 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3 ;
-(void)loadView;
-(BOOL)_disableAutomaticKeyboardUI;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)_enableAutomaticKeyboardPressDone;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(void)searchBarCancelButtonClicked:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(long long)_blurEffectStyle;
-(id)_viewControllers;
-(void)scrollToTop;
-(void)updateWithViewElement:(id)arg1 ;
-(CGSize)_backgroundImageProxySize;
-(id)_backgroundImageProxy;
-(BOOL)_backgroundImageRequiresBlur;
-(void)_configureWithBgImage:(id)arg1 backdropImage:(id)arg2 ;
-(void)tv_updateViewLayout;
-(void)_cancelImpressionsUpdate;
-(void)textDidChangeForKeyboard:(id)arg1 ;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)searchTemplateView:(id)arg1 didOffsetOriginForCollectionView:(id)arg2 ;
-(id)searchTemplateView:(id)arg1 preferredFocusEnvironmentForKeyboard:(id)arg2 ;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(void)_updateKeyboardText;
-(void)_updateSearchFieldText;
-(void)_updateViewIgnoringSparseUpdates:(BOOL)arg1 ;
-(void)_buildSpacingMetrics;
-(UIEdgeInsets)_adjustedCollectionMargins;
-(void)_doneButtonPressed:(id)arg1 ;
-(BOOL)_shouldShowScope;
-(void)_adjustFrameForScopeView:(id)arg1 inCell:(id)arg2 ;
-(BOOL)_shouldShowSuggestions;
-(void)_adjustOriginForSuggestionsView:(id)arg1 inCell:(id)arg2 ;
-(long long)_viewControllerIndexForSection:(long long)arg1 ;
-(long long)_sectionForViewControllerIndex:(long long)arg1 ;
-(void)_setFocusedIndexPath:(id)arg1 ;
-(TVRowMetrics)_collapsedRowMetricsForViewController:(id)arg1 ;
-(BOOL)_updateCollectionList;
-(CGRect)_visibleRectInRect:(CGRect)arg1 ;
-(void)siri_beginInteractiveTransition;
-(void)siri_endInteractiveTransition;
@end

