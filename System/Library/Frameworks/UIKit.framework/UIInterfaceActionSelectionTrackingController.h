/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <UIKit/UIFocusedInterfaceActionPressDelegate.h>

@class UIView, UIScrollView, NSArray, UILongPressGestureRecognizer, UIGestureRecognizer, NSMutableSet, _UIInterfaceActionSelectByPressGestureRecognizer, UISelectionFeedbackGenerator, NSPointerArray, NSString;

@interface UIInterfaceActionSelectionTrackingController : NSObject <UIGestureRecognizerDelegate, UIFocusedInterfaceActionPressDelegate> {

	BOOL _selectByPressGestureEnabled;
	BOOL _selectionFeedbackEnabled;
	UIView* _trackableContainerView;
	UIScrollView* _actionsScrollView;
	NSArray* _representationViews;
	UILongPressGestureRecognizer* _selectionGestureRecognizer;
	UIGestureRecognizer* _systemProvidedGestureRecognizer;
	NSMutableSet* _viewsRequiringSelectionGestureDisabling;
	_UIInterfaceActionSelectByPressGestureRecognizer* _selectByPressGestureRecognizer;
	UISelectionFeedbackGenerator* _selectionRetargetFeedbackGenerator;
	NSPointerArray* _weakCooperatingSelectionTrackingControllers;
	id _scrollViewWillBeginDraggingNotificationToken;
	id _scrollViewDidEndDraggingNotificationToken;
	id _scrollViewDidEndDeceleratingNotificationToken;
	CGPoint _actionSelectionInitialLocationInContainerView;

}

@property (nonatomic,readonly) CGPoint actionSelectionInitialLocationInContainerView;                                        //@synthesize actionSelectionInitialLocationInContainerView=_actionSelectionInitialLocationInContainerView - In the implementation block
@property (nonatomic,readonly) UILongPressGestureRecognizer * selectionGestureRecognizer;                                    //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * systemProvidedGestureRecognizer;                                        //@synthesize systemProvidedGestureRecognizer=_systemProvidedGestureRecognizer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * viewsRequiringSelectionGestureDisabling;                                       //@synthesize viewsRequiringSelectionGestureDisabling=_viewsRequiringSelectionGestureDisabling - In the implementation block
@property (nonatomic,retain) _UIInterfaceActionSelectByPressGestureRecognizer * selectByPressGestureRecognizer;              //@synthesize selectByPressGestureRecognizer=_selectByPressGestureRecognizer - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * selectionRetargetFeedbackGenerator;                              //@synthesize selectionRetargetFeedbackGenerator=_selectionRetargetFeedbackGenerator - In the implementation block
@property (nonatomic,retain) NSPointerArray * weakCooperatingSelectionTrackingControllers;                                   //@synthesize weakCooperatingSelectionTrackingControllers=_weakCooperatingSelectionTrackingControllers - In the implementation block
@property (nonatomic,retain) id scrollViewWillBeginDraggingNotificationToken;                                                //@synthesize scrollViewWillBeginDraggingNotificationToken=_scrollViewWillBeginDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDraggingNotificationToken;                                                   //@synthesize scrollViewDidEndDraggingNotificationToken=_scrollViewDidEndDraggingNotificationToken - In the implementation block
@property (nonatomic,retain) id scrollViewDidEndDeceleratingNotificationToken;                                               //@synthesize scrollViewDidEndDeceleratingNotificationToken=_scrollViewDidEndDeceleratingNotificationToken - In the implementation block
@property (assign,nonatomic,__weak) UIView * trackableContainerView;                                                         //@synthesize trackableContainerView=_trackableContainerView - In the implementation block
@property (assign,nonatomic,__weak) UIScrollView * actionsScrollView;                                                        //@synthesize actionsScrollView=_actionsScrollView - In the implementation block
@property (assign,nonatomic) BOOL selectByPressGestureEnabled;                                                               //@synthesize selectByPressGestureEnabled=_selectByPressGestureEnabled - In the implementation block
@property (assign,nonatomic) BOOL selectionFeedbackEnabled;                                                                  //@synthesize selectionFeedbackEnabled=_selectionFeedbackEnabled - In the implementation block
@property (nonatomic,retain) NSArray * representationViews;                                                                  //@synthesize representationViews=_representationViews - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)_setSystemProvidedGestureRecognizer:(id)arg1 ;
-(void)beginTrackingSessionByTakingOverForSystemProvidedGestureRecognizer:(id)arg1 ;
-(BOOL)selectionFeedbackEnabled;
-(void)_initializeSelectionGestureRecognizer;
-(void)_registerForScrollViewNotifications;
-(void)_unregisterForScrollViewNotifications;
-(void)setWeakCooperatingSelectionTrackingControllers:(NSPointerArray *)arg1 ;
-(void)setSelectByPressGestureRecognizer:(_UIInterfaceActionSelectByPressGestureRecognizer *)arg1 ;
-(UIView *)trackableContainerView;
-(void)setSelectionRetargetFeedbackGenerator:(UISelectionFeedbackGenerator *)arg1 ;
-(id)_interfaceActionOfFocusedRepresentationView;
-(id)_allActionViewsIncludingCooperatingActionViews;
-(void)_invokeHandlerForInterfaceAction:(id)arg1 ;
-(void)_handleActionSelectionGestureRecognizer:(id)arg1 ;
-(id)_allGestureRecognizers;
-(void)_handleSystemProvidedGestureRecognizer:(id)arg1 ;
-(BOOL)_isPresentedAndVisible;
-(BOOL)_allowSelectionForCurrentGestureLocationWithGestureRecognizer:(id)arg1 ;
-(id)_actionViewIncludingCooperatingActionViewsAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(UISelectionFeedbackGenerator *)selectionRetargetFeedbackGenerator;
-(void)_clearSystemProvidedGestureRecognizer;
-(id)_actionViewAtCurrentLocationForGestureRecognizer:(id)arg1 ;
-(void)_performRecursivelyWithVisitedCooperatingControllers:(id)arg1 block:(/*^block*/id)arg2 ;
-(void)_noteScrollView:(id)arg1 isUserScrolling:(BOOL)arg2 ;
-(BOOL)_shouldDisableSelectionTrackingIfScrollingScrollView:(id)arg1 ;
-(void)handlePressedFocusedInterfaceAction:(id)arg1 ;
-(id)focusedInterfaceAction;
-(id)initWithTrackableContainerView:(id)arg1 actionsScrollView:(id)arg2 ;
-(void)setCooperatingSelectionTrackingControllers:(id)arg1 ;
-(void)setSelectByPressGestureEnabled:(BOOL)arg1 ;
-(void)setSelectionFeedbackEnabled:(BOOL)arg1 ;
-(void)setTrackableContainerView:(UIView *)arg1 ;
-(UIScrollView *)actionsScrollView;
-(void)setActionsScrollView:(UIScrollView *)arg1 ;
-(BOOL)selectByPressGestureEnabled;
-(NSArray *)representationViews;
-(void)setRepresentationViews:(NSArray *)arg1 ;
-(CGPoint)actionSelectionInitialLocationInContainerView;
-(UILongPressGestureRecognizer *)selectionGestureRecognizer;
-(UIGestureRecognizer *)systemProvidedGestureRecognizer;
-(NSMutableSet *)viewsRequiringSelectionGestureDisabling;
-(_UIInterfaceActionSelectByPressGestureRecognizer *)selectByPressGestureRecognizer;
-(NSPointerArray *)weakCooperatingSelectionTrackingControllers;
-(id)scrollViewWillBeginDraggingNotificationToken;
-(void)setScrollViewWillBeginDraggingNotificationToken:(id)arg1 ;
-(id)scrollViewDidEndDraggingNotificationToken;
-(void)setScrollViewDidEndDraggingNotificationToken:(id)arg1 ;
-(id)scrollViewDidEndDeceleratingNotificationToken;
-(void)setScrollViewDidEndDeceleratingNotificationToken:(id)arg1 ;
@end

