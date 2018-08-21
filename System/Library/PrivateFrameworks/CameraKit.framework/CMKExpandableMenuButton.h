/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraKit/CameraKit-Structs.h>
#import <UIKit/UIControl.h>

@protocol CMKExpandableMenuButtonDelegate;
@class NSMutableArray, UIView, NSIndexSet, NSMutableIndexSet;

@interface CMKExpandableMenuButton : UIControl {

	BOOL _expanded;
	long long _selectedIndex;
	long long _expansionOrientation;
	long long _orientation;
	NSMutableArray* __menuItems;
	UIView* __headerView;
	NSIndexSet* __hiddenIndexesWhileCollapsed;
	NSMutableIndexSet* __highlightedIndexesWhileCollapsed;
	id<CMKExpandableMenuButtonDelegate> _expandableMenuDelegate;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) NSMutableArray * _menuItems;                                                  //@synthesize _menuItems=__menuItems - In the implementation block
@property (nonatomic,readonly) UIView * _headerView;                                                         //@synthesize _headerView=__headerView - In the implementation block
@property (nonatomic,copy,readonly) NSIndexSet * _hiddenIndexesWhileCollapsed;                               //@synthesize _hiddenIndexesWhileCollapsed=__hiddenIndexesWhileCollapsed - In the implementation block
@property (nonatomic,copy,readonly) NSMutableIndexSet * _highlightedIndexesWhileCollapsed;                   //@synthesize _highlightedIndexesWhileCollapsed=__highlightedIndexesWhileCollapsed - In the implementation block
@property (assign,nonatomic,__weak) id<CMKExpandableMenuButtonDelegate> expandableMenuDelegate;              //@synthesize expandableMenuDelegate=_expandableMenuDelegate - In the implementation block
@property (assign,nonatomic) long long selectedIndex;                                                        //@synthesize selectedIndex=_selectedIndex - In the implementation block
@property (getter=isExpanded,nonatomic,readonly) BOOL expanded;                                              //@synthesize expanded=_expanded - In the implementation block
@property (assign,nonatomic) long long expansionOrientation;                                                 //@synthesize expansionOrientation=_expansionOrientation - In the implementation block
@property (assign,nonatomic) long long orientation;                                                          //@synthesize orientation=_orientation - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
+(double)expansionDuration;
-(id)init;
-(void)layoutSubviews;
-(void)reloadData;
-(CGSize)intrinsicContentSize;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(BOOL)isExpanded;
-(long long)selectedIndex;
-(void)setSelectedIndex:(long long)arg1 ;
-(id)headerView;
-(void)setOrientation:(long long)arg1 ;
-(void)setExpansionOrientation:(long long)arg1 ;
-(id)initWithExpansionOrientation:(long long)arg1 ;
-(id)hiddenIndexesWhileCollapsed;
-(CGSize)_layoutForVerticalExpandedPortraitButtonApplyToHeaderView:(BOOL)arg1 applyToSelectedItem:(BOOL)arg2 applyToOtherViews:(BOOL)arg3 ;
-(CGSize)_layoutForHorizontalCollapsedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForHorizontalExpandedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForHorizontalExpandedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForHorizontalCollapsedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForVerticalExpandedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForVerticalExpandedPortraitButton:(BOOL)arg1 ;
-(CGSize)_layoutForVerticalCollapsedLandscapeButton:(BOOL)arg1 ;
-(CGSize)_layoutForVerticalCollapsedPortraitButton:(BOOL)arg1 ;
-(long long)expansionOrientation;
-(CGSize)_layoutForHorizontalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(CGSize)_layoutForVerticalExpansionOrientation:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(NSIndexSet *)_hiddenIndexesWhileCollapsed;
-(void)_handleTapGestureRecognizer:(id)arg1 ;
-(UIView *)_headerView;
-(long long)numberOfMenuItems;
-(id)titleForMenuItemAtIndex:(long long)arg1 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)setExpandableMenuDelegate:(id<CMKExpandableMenuButtonDelegate>)arg1 ;
-(CGSize)intrinsicContentSizeForExpansion:(BOOL)arg1 ;
-(CGRect)frameForAlignmentRect:(CGRect)arg1 expanded:(BOOL)arg2 ;
-(void)startCollapsingWithProposedFrame:(CGRect)arg1 ;
-(void)finishCollapsingAnimated:(BOOL)arg1 ;
-(CGRect)alignmentRectForFrame:(CGRect)arg1 expanded:(BOOL)arg2 ;
-(void)startExpansionWithProposedFrame:(CGRect)arg1 ;
-(void)finishExpansionAnimated:(BOOL)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)collapseMenuAnimated:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 forIndex:(long long)arg2 ;
-(BOOL)wantsSelectedItemToBeVisible;
-(void)prepareHeaderViewForExpanding:(BOOL)arg1 ;
-(BOOL)shouldIgnoreMenuInteraction;
-(void)_updateFromExpansionChangeAnimated:(BOOL)arg1 ;
-(void)_updateFromOrientationChangeAnimated:(BOOL)arg1 ;
-(CGSize)_layoutMenuButton:(BOOL)arg1 expanded:(BOOL)arg2 ;
-(id)_selectedLabel;
-(void)_updateFromSelectedIndexChange;
-(void)_applyMenuItemColorsForCurrentState;
-(void)_applyMenuItemAlphaForCurrentExpansionState;
-(void)_applyMenuItemTextAlignmentAndShadowForCurrentOrientation;
-(void)_applyHeaderViewForCurrentExpansionState;
-(void)_convertAllSubviewsToProposedFrame:(CGRect)arg1 ;
-(NSMutableArray *)_menuItems;
-(id<CMKExpandableMenuButtonDelegate>)expandableMenuDelegate;
-(void)expandMenuAnimated:(BOOL)arg1 ;
-(void)completeExpansionToProposedFrame:(CGRect)arg1 ;
-(NSMutableIndexSet *)_highlightedIndexesWhileCollapsed;
@end

