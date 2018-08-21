/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EventKitUI/EventKitUI-Structs.h>
#import <UIKit/UIView.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/EKDayOccurrenceTravelTimeViewMetricsDelegate.h>

@protocol EKDayOccurrenceViewDelegate;
@class UIImageView, EKDayOccurrenceContentView, EKDayOccurrenceTravelTimeView, UIView, NSObject, EKEvent, UIColor, NSString;

@interface EKDayOccurrenceView : UIView <NSCopying, EKDayOccurrenceTravelTimeViewMetricsDelegate> {

	double _visibleHeight;
	UIImageView* _eventBackgroundView;
	UIImageView* _travelBackgroundView;
	EKDayOccurrenceContentView* _content;
	EKDayOccurrenceTravelTimeView* _travelTimeContentView;
	BOOL _needsContentCalc;
	BOOL _needsBackgroundImageUpdate;
	UIView* _startResizeHandle;
	UIView* _endResizeHandle;
	double _originalXBeforeOffset;
	unsigned _touchKeptInsideOccurrence : 1;
	unsigned _offsetContentForLandscape : 1;
	UIEdgeInsets _padding;
	unsigned long long _bottomPinningState;
	CGRect _unpinnedEventBackgroundFrame;
	CGRect _unpinnedTravelBackgroundFrame;
	UIView* _pinFadeView;
	BOOL _visibleHeightLocked;
	BOOL _selected;
	BOOL _dimmed;
	BOOL _allDayDrawingStyle;
	BOOL _drawsResizeHandles;
	BOOL _hideBackgroundImage;
	BOOL _hideText;
	BOOL _isSelectedCopyView;
	BOOL _isProposedTime;
	BOOL _tentative;
	BOOL _declined;
	BOOL _needsReply;
	BOOL _allDay;
	BOOL _showsTravelTime;
	BOOL _reduceLayoutProcessingForAnimation;
	BOOL _touchesAreBeingTracked;
	int _occurrenceBackgroundStyle;
	NSObject*<EKDayOccurrenceViewDelegate> _delegate;
	EKDayOccurrenceView* _selectedCopy;
	EKEvent* _occurrence;
	double _travelTimeSubviewHeightInPoints;
	UIColor* _color;
	double _cappedColorBarHeight;
	double _travelTime;
	double _bottomPinningProximity;
	double _topYBoundaryForText;
	UIEdgeInsets _margin;

}

@property (assign,nonatomic) BOOL touchesAreBeingTracked;                                         //@synthesize touchesAreBeingTracked=_touchesAreBeingTracked - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<EKDayOccurrenceViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) EKDayOccurrenceView * selectedCopy;                           //@synthesize selectedCopy=_selectedCopy - In the implementation block
@property (nonatomic,readonly) BOOL visibleHeightLocked;                                          //@synthesize visibleHeightLocked=_visibleHeightLocked - In the implementation block
@property (nonatomic,retain) EKEvent * occurrence;                                                //@synthesize occurrence=_occurrence - In the implementation block
@property (assign,nonatomic) BOOL selected;                                                       //@synthesize selected=_selected - In the implementation block
@property (assign,nonatomic) BOOL dimmed;                                                         //@synthesize dimmed=_dimmed - In the implementation block
@property (assign,nonatomic) BOOL allDayDrawingStyle;                                             //@synthesize allDayDrawingStyle=_allDayDrawingStyle - In the implementation block
@property (assign,nonatomic) BOOL drawsResizeHandles;                                             //@synthesize drawsResizeHandles=_drawsResizeHandles - In the implementation block
@property (assign,nonatomic) BOOL usesSmallText; 
@property (assign,nonatomic) BOOL hideBackgroundImage;                                            //@synthesize hideBackgroundImage=_hideBackgroundImage - In the implementation block
@property (assign,nonatomic) BOOL hideText;                                                       //@synthesize hideText=_hideText - In the implementation block
@property (assign,nonatomic) UIEdgeInsets margin;                                                 //@synthesize margin=_margin - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding; 
@property (assign,nonatomic) BOOL isSelectedCopyView;                                             //@synthesize isSelectedCopyView=_isSelectedCopyView - In the implementation block
@property (assign,nonatomic) double travelTimeSubviewHeightInPoints;                              //@synthesize travelTimeSubviewHeightInPoints=_travelTimeSubviewHeightInPoints - In the implementation block
@property (assign,nonatomic) BOOL isProposedTime;                                                 //@synthesize isProposedTime=_isProposedTime - In the implementation block
@property (nonatomic,copy) UIColor * color;                                                       //@synthesize color=_color - In the implementation block
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) NSString * location; 
@property (assign,getter=isTentative,nonatomic) BOOL tentative;                                   //@synthesize tentative=_tentative - In the implementation block
@property (assign,getter=isDeclined,nonatomic) BOOL declined;                                     //@synthesize declined=_declined - In the implementation block
@property (assign,getter=isCancelled,nonatomic) BOOL cancelled; 
@property (assign,nonatomic) BOOL needsReply;                                                     //@synthesize needsReply=_needsReply - In the implementation block
@property (assign,getter=isAllDay,nonatomic) BOOL allDay;                                         //@synthesize allDay=_allDay - In the implementation block
@property (assign,getter=isBirthday,nonatomic) BOOL birthday; 
@property (assign,nonatomic) double cappedColorBarHeight;                                         //@synthesize cappedColorBarHeight=_cappedColorBarHeight - In the implementation block
@property (assign,nonatomic) BOOL showsTravelTime;                                                //@synthesize showsTravelTime=_showsTravelTime - In the implementation block
@property (assign,nonatomic) double travelTime;                                                   //@synthesize travelTime=_travelTime - In the implementation block
@property (assign,nonatomic) long long routingMode; 
@property (nonatomic,retain) UIColor * titleTextColor; 
@property (nonatomic,retain) UIColor * timeTextColor; 
@property (nonatomic,retain) UIColor * secondaryTextColor; 
@property (nonatomic,retain) UIColor * textBackgroundColor; 
@property (assign,nonatomic) int occurrenceBackgroundStyle;                                       //@synthesize occurrenceBackgroundStyle=_occurrenceBackgroundStyle - In the implementation block
@property (assign,nonatomic) BOOL reduceLayoutProcessingForAnimation;                             //@synthesize reduceLayoutProcessingForAnimation=_reduceLayoutProcessingForAnimation - In the implementation block
@property (assign,nonatomic) double bottomPinningProximity;                                       //@synthesize bottomPinningProximity=_bottomPinningProximity - In the implementation block
@property (nonatomic,readonly) BOOL isPinned; 
@property (assign,nonatomic) double topYBoundaryForText;                                          //@synthesize topYBoundaryForText=_topYBoundaryForText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)enoughHeightForOneLineForEvent:(id)arg1 usingSmallText:(BOOL)arg2 ;
+(double)minNaturalTextHeightForEvent:(id)arg1 usingSmallText:(BOOL)arg2 ;
+(double)barToBarHorizontalDistanceIncludingBarWidth;
+(double)barToBarGapWidth;
+(UIEdgeInsets)defaultPadding;
+(id)occurrenceViewWithFrame:(CGRect)arg1 ;
+(double)colorBarThickness;
+(double)minimumHeightForOrientation:(long long)arg1 isAllDay:(BOOL)arg2 ;
+(double)bottomShadowMargin;
+(double)minimumHeightForOrientation:(long long)arg1 ;
+(id)_viewCache;
+(double)minimumHeightForOrientation:(long long)arg1 isAllDay:(BOOL)arg2 usesSmallText:(BOOL)arg3 ;
+(id)_color:(id)arg1 lightenedToPercentage:(double)arg2 withFinalAlpha:(double)arg3 ;
+(id)framePathForExternalDragOperationWithSize:(CGSize)arg1 ;
+(UIEdgeInsets)defaultMargin;
+(void)_cacheLocation:(id)arg1 forEventID:(id)arg2 ;
+(id)_cachedLocationForEventID:(id)arg1 ;
+(id)_recentlyDisplayedLocations;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 stripeColor:(id)arg3 stripedImageAlpha:(double)arg4 colorBarStyle:(long long)arg5 ;
+(id)_imageForBarColor:(id)arg1 backgroundColor:(id)arg2 colorBarStyle:(long long)arg3 ;
+(id)_lightStripeColorForColor:(id)arg1 ;
+(id)_cachedImageForCalendarColor:(id)arg1 selected:(BOOL)arg2 declined:(BOOL)arg3 cancelled:(BOOL)arg4 tentative:(BOOL)arg5 needsReply:(BOOL)arg6 colorBarStyle:(long long)arg7 dayViewBackgroundStyle:(int)arg8 usesLargeTextLayout:(BOOL)arg9 ;
+(void)_clearViewCache;
+(CGRect)contentStretchRectForFrame:(CGRect)arg1 ;
+(id)imageForExternalDragOperationFromEvent:(id)arg1 ;
+(void)clearCaches;
-(id)time;
-(void)setTime:(id)arg1 ;
-(void)setTravelTime:(double)arg1 ;
-(BOOL)hasIcon;
-(double)travelTime;
-(void)setHidden:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)removeFromSuperview;
-(void)setFrame:(CGRect)arg1 ;
-(void)setUserInteractionEnabled:(BOOL)arg1 ;
-(void)layoutSubviews;
-(NSObject*<EKDayOccurrenceViewDelegate>)delegate;
-(void)setDelegate:(NSObject*<EKDayOccurrenceViewDelegate>)arg1 ;
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)description;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(NSString *)title;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)didMoveToSuperview;
-(id)_backgroundColor;
-(void)prepareForReuse;
-(void)setSelected:(BOOL)arg1 ;
-(BOOL)isCancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)padding;
-(BOOL)isPinned;
-(BOOL)selected;
-(NSString *)location;
-(void)setLocation:(NSString *)arg1 ;
-(void)setMargin:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)margin;
-(void)_updateColors;
-(void)setVisibleHeight:(double)arg1 ;
-(UIColor *)timeTextColor;
-(BOOL)isAllDay;
-(void)setAllDay:(BOOL)arg1 ;
-(void)setBottomPinningProximity:(double)arg1 ;
-(void)setTravelTimeSubviewHeightInPoints:(double)arg1 ;
-(BOOL)usesSmallText;
-(double)viewMaxNaturalTextHeight;
-(double)enoughHeightForOneLine;
-(BOOL)visibleHeightLocked;
-(void)setUsesSmallText:(BOOL)arg1 ;
-(BOOL)isProposedTime;
-(void)setIsProposedTime:(BOOL)arg1 ;
-(double)bottomPinningProximity;
-(EKEvent *)occurrence;
-(void)setReduceLayoutProcessingForAnimation:(BOOL)arg1 ;
-(void)setOccurrence:(EKEvent *)arg1 ;
-(void)setIsSelectedCopyView:(BOOL)arg1 ;
-(void)setTimeTextColor:(UIColor *)arg1 ;
-(void)setTextBackgroundColor:(UIColor *)arg1 ;
-(int)occurrenceBackgroundStyle;
-(void)setOccurrenceBackgroundStyle:(int)arg1 ;
-(BOOL)reduceLayoutProcessingForAnimation;
-(void)setTentative:(BOOL)arg1 ;
-(void)setDeclined:(BOOL)arg1 ;
-(void)setNeedsReply:(BOOL)arg1 ;
-(long long)routingMode;
-(void)setRoutingMode:(long long)arg1 ;
-(long long)compareOccurrenceViewForTabOrdering:(id)arg1 ;
-(BOOL)isSelectedCopyView;
-(void)setTopYBoundaryForText:(double)arg1 ;
-(CGRect)contentRectForPreview;
-(BOOL)isBirthday;
-(BOOL)needsReply;
-(BOOL)isTentative;
-(void)setBirthday:(BOOL)arg1 ;
-(void)setAllDayDrawingStyle:(BOOL)arg1 ;
-(BOOL)hideText;
-(UIColor *)textBackgroundColor;
-(void)setHideText:(BOOL)arg1 ;
-(void)setHideBackgroundImage:(BOOL)arg1 ;
-(BOOL)drawsResizeHandles;
-(void)setDrawsResizeHandles:(BOOL)arg1 ;
-(BOOL)allDayDrawingStyle;
-(BOOL)showsTravelTime;
-(void)setShowsTravelTime:(BOOL)arg1 ;
-(double)travelTimeSubviewHeightInPoints;
-(EKDayOccurrenceView *)selectedCopy;
-(void)setSelectedCopy:(EKDayOccurrenceView *)arg1 ;
-(void)setCappedColorBarHeight:(double)arg1 ;
-(void)_addTravelTimeSubviews;
-(void)_removeTravelTimeSubviews;
-(id)combineLocationStringWithProposeNewTimeString:(id)arg1 ;
-(void)setAllDayDrawingStyle:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)_isTimedOccurrenceDrawingStyle;
-(id)arrayOfResizeHandles;
-(void)_updateResizeHandleLocations;
-(id)_newResizeHandleView;
-(double)_verticalContentInset;
-(double)topYBoundaryForText;
-(CGRect)_computeContentRect;
-(CGRect)_frameMutatedForProximityToHourLine:(CGRect)arg1 ;
-(CGRect)_computeTravelTimeContentRect;
-(void)setTouchesAreBeingTracked:(BOOL)arg1 ;
-(BOOL)touchesAreBeingTracked;
-(void)_resetContentViewPosition;
-(long long)_compareOccurrenceViewTopToBottomLeftToRight:(id)arg1 ;
-(long long)_compareOccurrenceViewForSelectedCopyOrdering:(id)arg1 ;
-(long long)_compareOccurrenceViewTopToBottom:(id)arg1 ;
-(long long)_compareOccurrenceViewLeftToRight:(id)arg1 ;
-(BOOL)_isBelowOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(BOOL)_isAboveOccurrenceView:(id)arg1 overlapToIgnore:(double)arg2 ;
-(BOOL)_isAboveAllDayOccurrenceView:(id)arg1 ;
-(BOOL)_isBelowAllDayOccurrenceView:(id)arg1 ;
-(void)animateToFrame:(CGRect)arg1 isAllDay:(BOOL)arg2 beginFromCurrentState:(BOOL)arg3 whenFinished:(/*^block*/id)arg4 ;
-(CGRect)frameOfOpaqueContent;
-(int)dragTypeFromPoint:(CGPoint)arg1 ;
-(void)bringResizeHandlesToFront;
-(void)fadeInContentViewAt:(double)arg1 minWidth:(double)arg2 animated:(BOOL)arg3 ;
-(BOOL)resetContentViewToOriginalState:(BOOL)arg1 ;
-(void)setHideText:(BOOL)arg1 animate:(BOOL)arg2 ;
-(BOOL)hideBackgroundImage;
-(double)cappedColorBarHeight;
-(UIColor *)titleTextColor;
-(void)setTitleTextColor:(UIColor *)arg1 ;
-(void)_invalidateContentBounds;
-(UIColor *)secondaryTextColor;
-(void)setSecondaryTextColor:(UIColor *)arg1 ;
-(void)setDimmed:(BOOL)arg1 ;
-(BOOL)dimmed;
-(BOOL)isDeclined;
@end

