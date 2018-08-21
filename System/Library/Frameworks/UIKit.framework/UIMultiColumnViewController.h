/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIViewController.h>

@protocol UIMultiColumnViewControllerDelegate;
@class UIBarButtonItem, NSMutableArray, NSArray, UIImage;

@interface UIMultiColumnViewController : UIViewController {

	unsigned long long _lastColumnCount;
	unsigned long long _animatingTargetColumnCount;
	UIBarButtonItem* _showSecondColumnBarButtonItem;
	UIBarButtonItem* _hideSecondColumnBarButtonItem;
	struct {
		unsigned updatingNavControllerChildren : 1;
		unsigned animatingItem1LeftBarButton : 1;
	}  _mcvcFlags;
	NSMutableArray* _borderViews;
	CGRect _lastFrameInWindow;
	id<UIMultiColumnViewControllerDelegate> _delegate;
	NSArray* _viewControllers;
	NSArray* _navControllers;
	NSArray* _columnWidths;
	double _keyboardInset;
	UIImage* __columnToggleButtonImage;

}

@property (nonatomic,retain) NSArray * viewControllers;                                                           //@synthesize viewControllers=_viewControllers - In the implementation block
@property (nonatomic,retain) NSArray * navControllers;                                                            //@synthesize navControllers=_navControllers - In the implementation block
@property (nonatomic,retain) NSArray * columnWidths;                                                              //@synthesize columnWidths=_columnWidths - In the implementation block
@property (assign,nonatomic) double keyboardInset;                                                                //@synthesize keyboardInset=_keyboardInset - In the implementation block
@property (setter=_setColumnToggleButtonImage:,nonatomic,retain) UIImage * _columnToggleButtonImage;              //@synthesize _columnToggleButtonImage=__columnToggleButtonImage - In the implementation block
@property (assign,nonatomic,__weak) id<UIMultiColumnViewControllerDelegate> delegate;                             //@synthesize delegate=_delegate - In the implementation block
-(id<UIMultiColumnViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIMultiColumnViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id)title;
-(void)viewWillLayoutSubviews;
-(void)_updateLayoutForStatusBarAndInterfaceOrientation;
-(UIEdgeInsets)_edgeInsetsForChildViewController:(id)arg1 insetsAreAbsolute:(BOOL*)arg2 ;
-(void)_marginInfoForChild:(id)arg1 leftMargin:(double*)arg2 rightMargin:(double*)arg3 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(id)_preferredContentSizes;
-(void)showViewController:(id)arg1 sender:(id)arg2 ;
-(void)_setAllowNestedNavigationControllers:(BOOL)arg1 ;
-(id)separateSecondaryViewControllerForSplitViewController:(id)arg1 ;
-(id)_navigationBarForDragAffordance;
-(void)_splitViewControllerWillCollapseOntoPrimaryViewController:(id)arg1 ;
-(void)_collapseSecondaryViewController:(id)arg1 forSplitViewController:(id)arg2 withTransitionCoordinator:(id)arg3 ;
-(NSArray *)viewControllers;
-(double)keyboardInset;
-(void)setViewControllers:(NSArray *)arg1 ;
-(void)_navigationControllerChangedViewControllers:(id)arg1 ;
-(BOOL)_allowMultipleColumns;
-(id)_possibleContentSizes;
-(BOOL)_canShowColumnIndex:(unsigned long long)arg1 ;
-(void)_willShowColumnCount:(unsigned long long)arg1 ;
-(NSArray *)navControllers;
-(id)_effectiveColumnWidths;
-(void)_adjustNonOverlayScrollViewsForKeyboardInfo:(id)arg1 ;
-(void)setKeyboardInset:(double)arg1 ;
-(void)_moveViewControllersForColumnCount:(unsigned long long)arg1 ;
-(id)_contentSizesForColumnWidths:(id)arg1 ;
-(void)_updateButtonsForColumnCount:(unsigned long long)arg1 animatingChange:(BOOL)arg2 ;
-(BOOL)_currentSizeMightAllowMultipleColumns;
-(UIImage *)_columnToggleButtonImage;
-(void)_setColumnToggleButtonImage:(id)arg1 ;
-(NSArray *)columnWidths;
-(id)_liveVCs;
-(id)_showSecondColumnBarButtonItem;
-(id)_hideSecondColumnBarButtonItem;
-(void)_showSecondColumn:(id)arg1 ;
-(void)_hideSecondColumn:(id)arg1 ;
-(void)_animateSplitToWidth:(double)arg1 ;
-(id)initWithNavController:(id)arg1 viewControllers:(id)arg2 columnWidths:(id)arg3 ;
-(void)_splitViewControllerDidUpdate:(id)arg1 ;
-(id)_splitViewControllerImageForDisplayModeButtonToShowLeading:(id)arg1 ;
-(void)setNavControllers:(NSArray *)arg1 ;
-(void)setColumnWidths:(NSArray *)arg1 ;
@end

