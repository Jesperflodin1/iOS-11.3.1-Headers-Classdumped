/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIViewController.h>
#import <TVMLKit/TVAppTemplateImpressionable.h>
#import <TVMLKit/_TVConfirmationPreviewInteractionControllerDelegate.h>
#import <TVMLKit/_TVCollectionViewDelegate.h>
#import <UIKit/UICollectionViewDataSource.h>
#import <TVMLKit/_TVSubviewPreloading.h>

@class _TVNeedsMoreContentEvaluator, _TVConfirmationPreviewInteractionController, UICollectionView, UIViewController, IKCollectionElement, IKViewElement, NSIndexPath, _TVShadowViewElement, NSDictionary, NSArray, _TVCollectionWrappingView, NSString;

@interface _TVMLCollectionViewController : UIViewController <TVAppTemplateImpressionable, _TVConfirmationPreviewInteractionControllerDelegate, _TVCollectionViewDelegate, UICollectionViewDataSource, _TVSubviewPreloading> {

	BOOL _ignoreNextSelect;
	BOOL _didAppear;
	BOOL _didUpdateFocus;
	double _impressionThreshold;
	_TVNeedsMoreContentEvaluator* _needsMoreContentEvaluator;
	_TVConfirmationPreviewInteractionController* _previewInteractionController;
	UICollectionView* _collectionView;
	UIViewController* _headerViewController;
	IKCollectionElement* _collectionElement;
	IKViewElement* _headerElement;
	NSIndexPath* _lastFocusedIndexPath;
	_TVShadowViewElement* _shadowViewElement;
	NSDictionary* _indexPathsByIndexTitle;
	NSArray* _sortedIndexTitles;
	TVCellMetrics _cellMetrics;

}

@property (nonatomic,retain) UIViewController * headerViewController;                                  //@synthesize headerViewController=_headerViewController - In the implementation block
@property (nonatomic,retain) _TVShadowViewElement * shadowViewElement;                                 //@synthesize shadowViewElement=_shadowViewElement - In the implementation block
@property (nonatomic,copy) NSDictionary * indexPathsByIndexTitle;                                      //@synthesize indexPathsByIndexTitle=_indexPathsByIndexTitle - In the implementation block
@property (nonatomic,copy) NSArray * sortedIndexTitles;                                                //@synthesize sortedIndexTitles=_sortedIndexTitles - In the implementation block
@property (nonatomic,retain,readonly) _TVCollectionWrappingView * collectionWrappingView; 
@property (nonatomic,retain) UICollectionView * collectionView;                                        //@synthesize collectionView=_collectionView - In the implementation block
@property (nonatomic,retain,readonly) IKCollectionElement * collectionElement;                         //@synthesize collectionElement=_collectionElement - In the implementation block
@property (nonatomic,retain,readonly) IKViewElement * headerElement;                                   //@synthesize headerElement=_headerElement - In the implementation block
@property (nonatomic,readonly) TVCellMetrics cellMetrics;                                              //@synthesize cellMetrics=_cellMetrics - In the implementation block
@property (nonatomic,copy) NSIndexPath * lastFocusedIndexPath;                                         //@synthesize lastFocusedIndexPath=_lastFocusedIndexPath - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_shadowViewElementForCollectionElement:(id)arg1 ;
+(id)headerElementFromCollectionElement:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(void)dealloc;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2 ;
-(id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInCollectionView:(id)arg1 ;
-(id)indexTitlesForCollectionView:(id)arg1 ;
-(id)collectionView:(id)arg1 indexPathForIndexTitle:(id)arg2 atIndex:(long long)arg3 ;
-(BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didEndDisplayingCell:(id)arg2 forItemAtIndexPath:(id)arg3 ;
-(void)collectionView:(id)arg1 didUpdateFocusInContext:(id)arg2 withAnimationCoordinator:(id)arg3 ;
-(id)indexPathForPreferredFocusedViewInCollectionView:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(UICollectionView *)collectionView;
-(void)setCollectionView:(UICollectionView *)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_closestIndexPathToIndexPath:(id)arg1 ;
-(UIViewController *)headerViewController;
-(void)setHeaderViewController:(UIViewController *)arg1 ;
-(IKViewElement *)headerElement;
-(void)tv_updateViewLayout;
-(void)_cancelImpressionsUpdate;
-(id)impressionableElementsContainedInDocument:(id)arg1 ;
-(void)updateWithViewElement:(id)arg1 cellMetrics:(TVCellMetrics)arg2 ;
-(void)preloadSubviewsInRect:(CGRect)arg1 ;
-(IKCollectionElement *)collectionElement;
-(TVCellMetrics)cellMetrics;
-(NSIndexPath *)lastFocusedIndexPath;
-(_TVCollectionWrappingView *)collectionWrappingView;
-(void)setLastFocusedIndexPath:(NSIndexPath *)arg1 ;
-(void)dispatchEventOfType:(unsigned long long)arg1 forItemAtIndexPath:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CGSize)expectedCellSizeForElement:(id)arg1 atIndexPath:(id)arg2 ;
-(void)updateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceivePhysicalPlayForItemAtIndexPath:(id)arg2 ;
-(BOOL)collectionView:(id)arg1 shouldHandleLongPressForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg1 didReceiveLongPressForItemAtIndexPath:(id)arg2 ;
-(void)_confirmationPreviewInteractionControllerShouldBegin;
-(BOOL)shouldHeaderFloatByDefault;
-(void)_updateImpressions;
-(void)_recordImpressionsForVisibleView;
-(void)updateVisibleCell:(id)arg1 atIndexPath:(id)arg2 withElement:(id)arg3 ;
-(Class)cellClassForElement:(id)arg1 ;
-(void)updateSupplementaryViewsForSectionAtOldIndex:(long long)arg1 oldElement:(id)arg2 withNewIndex:(long long)arg3 newElement:(id)arg4 requiresReload:(BOOL*)arg5 requiresRelayout:(BOOL*)arg6 ;
-(void)didUpdateCollectionViewByNeedingReload:(BOOL)arg1 focusUpdate:(BOOL)arg2 ;
-(void)_ascertainLastFocusedIndexPathInView;
-(void)setIndexPathsByIndexTitle:(NSDictionary *)arg1 ;
-(NSDictionary *)indexPathsByIndexTitle;
-(void)setSortedIndexTitles:(NSArray *)arg1 ;
-(void)_registerCellClassesInCollectionView:(id)arg1 ;
-(void)_doUpdateViewLayoutAnimated:(BOOL)arg1 relayout:(BOOL)arg2 ;
-(void)_updateHeaderView;
-(NSArray *)sortedIndexTitles;
-(_TVShadowViewElement *)shadowViewElement;
-(void)setShadowViewElement:(_TVShadowViewElement *)arg1 ;
@end

