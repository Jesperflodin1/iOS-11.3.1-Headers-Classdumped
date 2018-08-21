/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DCIMServices.framework/DCIMServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DCIMServices/DCIMServices-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/CAMBadgeViewDelegate.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@protocol CAMLightingControlDelegate;
@class NSArray, NSDictionary, CAMLightingFrameCache, CAMLightingDialBackground, UIImageView, CAMLightingNameBadge, UIPanGestureRecognizer, UILongPressGestureRecognizer, UITapGestureRecognizer, NSDate, CAMAnimationGenerator, NSTimer, UISelectionFeedbackGenerator, NSString;

@interface CAMLightingControl : UIView <UIGestureRecognizerDelegate, CAMBadgeViewDelegate, CAAnimationDelegate> {

	struct {
		BOOL respondsToWillChangeExpanded;
		BOOL respondsToDidChangeExpanded;
	}  _delegateFlags;
	BOOL _tracking;
	BOOL _expanded;
	BOOL _highlighted;
	BOOL _showAllItemsWhenCollapsed;
	BOOL _nameBadgeHidden;
	id<CAMLightingControlDelegate> _delegate;
	long long _selectedLightingType;
	long long _orientation;
	NSArray* __effectTypes;
	NSDictionary* __effectItemsForType;
	double __selectionAngularOffset;
	unsigned long long __selectionIndex;
	CAMLightingFrameCache* __frameCache;
	NSDictionary* __itemViewsForType;
	NSDictionary* __itemShadowViewsForType;
	NSDictionary* __itemOutlineViewsForType;
	CAMLightingDialBackground* __backgroundView;
	UIImageView* __selectionOverlay;
	UIImageView* __selectionUnderlay;
	CAMLightingNameBadge* __nameBadge;
	UIPanGestureRecognizer* __panGesture;
	UILongPressGestureRecognizer* __pressGesture;
	UITapGestureRecognizer* __tapGesture;
	NSDate* __timeTrackingBegan;
	CAMAnimationGenerator* __animationGenerator;
	NSTimer* __collapseTimer;
	unsigned long long __expandedAnimationCounter;
	UISelectionFeedbackGenerator* __selectionFeedbackGenerator;

}

@property (setter=_setEffectTypes:,nonatomic,retain) NSArray * _effectTypes;                                                 //@synthesize _effectTypes=__effectTypes - In the implementation block
@property (setter=_setEffectItemsForType:,nonatomic,retain) NSDictionary * _effectItemsForType;                              //@synthesize _effectItemsForType=__effectItemsForType - In the implementation block
@property (assign,setter=_setSelectionAngularOffset:,nonatomic) double _selectionAngularOffset;                              //@synthesize _selectionAngularOffset=__selectionAngularOffset - In the implementation block
@property (nonatomic,readonly) unsigned long long _selectionIndex;                                                           //@synthesize _selectionIndex=__selectionIndex - In the implementation block
@property (nonatomic,readonly) CAMLightingFrameCache * _frameCache;                                                          //@synthesize _frameCache=__frameCache - In the implementation block
@property (setter=_setItemViewsForType:,nonatomic,retain) NSDictionary * _itemViewsForType;                                  //@synthesize _itemViewsForType=__itemViewsForType - In the implementation block
@property (setter=_setItemShadowViewsForType:,nonatomic,retain) NSDictionary * _itemShadowViewsForType;                      //@synthesize _itemShadowViewsForType=__itemShadowViewsForType - In the implementation block
@property (setter=_setItemOutlineViewsForType:,nonatomic,retain) NSDictionary * _itemOutlineViewsForType;                    //@synthesize _itemOutlineViewsForType=__itemOutlineViewsForType - In the implementation block
@property (setter=_setBackgroundView:,nonatomic,retain) CAMLightingDialBackground * _backgroundView;                         //@synthesize _backgroundView=__backgroundView - In the implementation block
@property (setter=_setSelectionOverlay:,nonatomic,retain) UIImageView * _selectionOverlay;                                   //@synthesize _selectionOverlay=__selectionOverlay - In the implementation block
@property (setter=_setSelectionUnderlay:,nonatomic,retain) UIImageView * _selectionUnderlay;                                 //@synthesize _selectionUnderlay=__selectionUnderlay - In the implementation block
@property (setter=_setNameBadge:,nonatomic,retain) CAMLightingNameBadge * _nameBadge;                                        //@synthesize _nameBadge=__nameBadge - In the implementation block
@property (nonatomic,readonly) UIPanGestureRecognizer * _panGesture;                                                         //@synthesize _panGesture=__panGesture - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * _pressGesture;                                                 //@synthesize _pressGesture=__pressGesture - In the implementation block
@property (nonatomic,readonly) UITapGestureRecognizer * _tapGesture;                                                         //@synthesize _tapGesture=__tapGesture - In the implementation block
@property (setter=_setTimeTrackingBegan:,nonatomic,retain) NSDate * _timeTrackingBegan;                                      //@synthesize _timeTrackingBegan=__timeTrackingBegan - In the implementation block
@property (assign,setter=_setTracking:,getter=isTracking,nonatomic) BOOL tracking;                                           //@synthesize tracking=_tracking - In the implementation block
@property (nonatomic,readonly) CAMAnimationGenerator * _animationGenerator;                                                  //@synthesize _animationGenerator=__animationGenerator - In the implementation block
@property (setter=_setCollapseTimer:,nonatomic,retain) NSTimer * _collapseTimer;                                             //@synthesize _collapseTimer=__collapseTimer - In the implementation block
@property (assign,setter=_setExpandedAnimationCounter:,nonatomic) unsigned long long _expandedAnimationCounter;              //@synthesize _expandedAnimationCounter=__expandedAnimationCounter - In the implementation block
@property (nonatomic,readonly) UISelectionFeedbackGenerator * _selectionFeedbackGenerator;                                   //@synthesize _selectionFeedbackGenerator=__selectionFeedbackGenerator - In the implementation block
@property (assign,nonatomic,__weak) id<CAMLightingControlDelegate> delegate;                                                 //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedLightingType;                                                                 //@synthesize selectedLightingType=_selectedLightingType - In the implementation block
@property (nonatomic,readonly) long long defaultLightingType; 
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                                                //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;                                                          //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,nonatomic) BOOL showAllItemsWhenCollapsed;                                                                 //@synthesize showAllItemsWhenCollapsed=_showAllItemsWhenCollapsed - In the implementation block
@property (assign,getter=isNameBadgeHidden,nonatomic) BOOL nameBadgeHidden;                                                  //@synthesize nameBadgeHidden=_nameBadgeHidden - In the implementation block
@property (assign,nonatomic) long long orientation;                                                                          //@synthesize orientation=_orientation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<CAMLightingControlDelegate>)delegate;
-(void)setDelegate:(id<CAMLightingControlDelegate>)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(UISelectionFeedbackGenerator *)_selectionFeedbackGenerator;
-(CAMLightingDialBackground *)_backgroundView;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(long long)orientation;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(BOOL)isTracking;
-(void)_handlePressGesture:(id)arg1 ;
-(void)_setBackgroundView:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)setOrientation:(long long)arg1 ;
-(void)_createBackgroundViewIfNeeded;
-(void)_createSelectionViewsIfNeeded;
-(void)_createNameBadgeIfNeeded;
-(void)_setEffectTypes:(id)arg1 ;
-(void)_loadItemsIfNeeded;
-(void)_createItemViewsIfNeeded;
-(CAMLightingNameBadge *)_nameBadge;
-(double)_dialBadgePaddingExpanded:(BOOL)arg1 ;
-(double)_selectionAngularOffset;
-(double)_rubberBandOffsetAngleForOffsetAngle:(double)arg1 ;
-(void)_layoutItemViewsRadialWithSelectionOffsetAngle:(double)arg1 ;
-(void)_updateItemViewsWithSelectionOffsetAngle:(double)arg1 ;
-(void)_updateSelectionViewsWithSelectionOffsetAngle:(double)arg1 ;
-(void)_layoutItemViewsLinear;
-(void)_layoutBackgroundExpanded:(BOOL)arg1 ;
-(void)_layoutSelectionViewsExpanded:(BOOL)arg1 ;
-(void)_layoutNameBadgeExpanded:(BOOL)arg1 ;
-(double)_safeWidthForWidth:(double)arg1 ;
-(double)_dialCenterDistanceBelowBoundsForWidth:(double)arg1 ;
-(double)_dialRadiusForWidth:(double)arg1 ;
-(CGPoint)_selectionPointForExpanded:(BOOL)arg1 ;
-(NSDictionary *)_itemViewsForType;
-(NSDictionary *)_itemShadowViewsForType;
-(NSDictionary *)_itemOutlineViewsForType;
-(CGPoint)_dialCenter;
-(double)_offsetAngleForItemAtIndex:(unsigned long long)arg1 withSelectionOffset:(double)arg2 ;
-(NSArray *)_effectTypes;
-(double)_offsetXForItemAtIndex:(unsigned long long)arg1 ;
-(double)_dialRadius;
-(double)_dialVisibleHeightExpanded:(BOOL)arg1 ;
-(UIImageView *)_selectionUnderlay;
-(CGPoint)_dialCenterForWidth:(double)arg1 ;
-(double)_angularSpacingForRadialLayout;
-(unsigned long long)_selectionIndex;
-(double)_compressedItemOffsetForFractionalItemOffset:(double)arg1 ;
-(double)_spacingForLinearLayout;
-(double)_angleFromCenterToPoint:(CGPoint)arg1 ;
-(BOOL)_isOverDialedWithSelectionAngularOffset:(double)arg1 selectionIndex:(unsigned long long)arg2 ;
-(void)_setTimeTrackingBegan:(id)arg1 ;
-(void)_setExpanded:(BOOL)arg1 animated:(BOOL)arg2 shouldNotify:(BOOL)arg3 ;
-(void)_cancelDelayedCollapse;
-(NSDate *)_timeTrackingBegan;
-(void)_collapseWithDelay:(double)arg1 ;
-(void)_snapFromSelectionOffsetAngle:(double)arg1 toAngle:(double)arg2 animated:(BOOL)arg3 ;
-(double)_rotationForPanGesture:(id)arg1 ;
-(double)_offsetAngleForRubberBandOffsetAngle:(double)arg1 selectionIndex:(unsigned long long)arg2 ;
-(void)_setSelectedLightingType:(long long)arg1 atIndex:(unsigned long long)arg2 shouldNotify:(BOOL)arg3 shouldSuppressHaptic:(BOOL)arg4 ;
-(unsigned long long)_expandedAnimationCounter;
-(void)_rotateForTapFromSelectionIndex:(unsigned long long)arg1 offset:(double)arg2 toSelectionIndex:(unsigned long long)arg3 ;
-(UIPanGestureRecognizer *)_panGesture;
-(UILongPressGestureRecognizer *)_pressGesture;
-(void)_setSelectionAngularOffset:(double)arg1 ;
-(void)_settleSelectionViewsFromSelectionOffsetAngle:(double)arg1 ;
-(void)_setExpandedAnimationCounter:(unsigned long long)arg1 ;
-(void)_updateNameBadgeAnimated:(BOOL)arg1 ;
-(void)_handleCollapseTimer:(id)arg1 ;
-(void)_setCollapseTimer:(id)arg1 ;
-(NSTimer *)_collapseTimer;
-(void)_handleSnapFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(void)_handleTapRotationFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(CAMLightingFrameCache *)_frameCache;
-(void)_updateSelectionOverlayColorAnimated:(BOOL)arg1 ;
-(void)_handleSettlingSelectionViewsFromOffset:(double)arg1 withProgress:(double)arg2 timingCurve:(id)arg3 ;
-(void)setShowAllItemsWhenCollapsed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSDictionary *)_effectItemsForType;
-(BOOL)showAllItemsWhenCollapsed;
-(BOOL)isNameBadgeHidden;
-(void)_setEffectItemsForType:(id)arg1 ;
-(void)_setItemViewsForType:(id)arg1 ;
-(void)_setItemShadowViewsForType:(id)arg1 ;
-(void)_setItemOutlineViewsForType:(id)arg1 ;
-(void)_setSelectionOverlay:(id)arg1 ;
-(void)_setSelectionUnderlay:(id)arg1 ;
-(void)_setNameBadge:(id)arg1 ;
-(void)_setTracking:(BOOL)arg1 ;
-(UITapGestureRecognizer *)_tapGesture;
-(unsigned long long)_itemCount;
-(void)updateToContentSize:(id)arg1 ;
-(void)setShowAllItemsWhenCollapsed:(BOOL)arg1 ;
-(void)preloadEffectChangeAnimation;
-(void)setNameBadgeHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(long long)defaultLightingType;
-(void)setSelectedLightingType:(long long)arg1 ;
-(long long)selectedLightingType;
-(void)badgeViewDidChangeIntrinsicContentSize:(id)arg1 ;
-(void)_performFeedback;
-(void)_prepareFeedback;
-(CAMAnimationGenerator *)_animationGenerator;
-(void)setNameBadgeHidden:(BOOL)arg1 ;
-(void)ppt_selectLightingType:(long long)arg1 ;
-(void)setExpanded:(BOOL)arg1 animated:(BOOL)arg2 ;
-(double)contentHeightForWidth:(double)arg1 ;
-(UIImageView *)_selectionOverlay;
@end

