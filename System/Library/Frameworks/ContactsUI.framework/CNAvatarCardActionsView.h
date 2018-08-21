/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UITableViewDataSource.h>
#import <UIKit/UITableViewDelegate.h>
#import <libobjc.A.dylib/CNQuickActionsManagerDelegate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol CNAvatarCardActionsViewDelegate;
@class NSArray, CNQuickActionsManager, CNAvatarCardActionsTableView, NSIndexPath, UIGestureRecognizer, UISelectionFeedbackGenerator, NSString;

@interface CNAvatarCardActionsView : UIView <UITableViewDataSource, UITableViewDelegate, CNQuickActionsManagerDelegate, UIGestureRecognizerDelegate> {

	BOOL _actionsReversed;
	BOOL _bypassActionValidation;
	BOOL _dismissesBeforePerforming;
	BOOL _expanded;
	NSArray* _contacts;
	NSArray* _actionCategories;
	id<CNAvatarCardActionsViewDelegate> _delegate;
	CNQuickActionsManager* _actionsManager;
	NSArray* _actions;
	CNAvatarCardActionsTableView* _tableView;
	NSIndexPath* _highlightedIndexPath;
	UIGestureRecognizer* _rolloverGestureRecognizer;
	UIGestureRecognizer* _selectionGestureRecognizer;
	UISelectionFeedbackGenerator* _retargetBehavior;
	CGPoint _initialLocation;
	CGRect _actionsImageFrame;

}

@property (nonatomic,retain) CNQuickActionsManager * actionsManager;                           //@synthesize actionsManager=_actionsManager - In the implementation block
@property (nonatomic,retain) NSArray * actions;                                                //@synthesize actions=_actions - In the implementation block
@property (nonatomic,retain) CNAvatarCardActionsTableView * tableView;                         //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) NSIndexPath * highlightedIndexPath;                               //@synthesize highlightedIndexPath=_highlightedIndexPath - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * rolloverGestureRecognizer;                  //@synthesize rolloverGestureRecognizer=_rolloverGestureRecognizer - In the implementation block
@property (nonatomic,retain) UIGestureRecognizer * selectionGestureRecognizer;                 //@synthesize selectionGestureRecognizer=_selectionGestureRecognizer - In the implementation block
@property (assign,nonatomic) CGPoint initialLocation;                                          //@synthesize initialLocation=_initialLocation - In the implementation block
@property (assign,nonatomic) BOOL expanded;                                                    //@synthesize expanded=_expanded - In the implementation block
@property (nonatomic,retain) UISelectionFeedbackGenerator * retargetBehavior;                  //@synthesize retargetBehavior=_retargetBehavior - In the implementation block
@property (nonatomic,retain) NSArray * contacts;                                               //@synthesize contacts=_contacts - In the implementation block
@property (nonatomic,copy) NSArray * actionCategories;                                         //@synthesize actionCategories=_actionCategories - In the implementation block
@property (assign,nonatomic) BOOL actionsReversed;                                             //@synthesize actionsReversed=_actionsReversed - In the implementation block
@property (assign,nonatomic) BOOL bypassActionValidation;                                      //@synthesize bypassActionValidation=_bypassActionValidation - In the implementation block
@property (assign,nonatomic) CGRect actionsImageFrame;                                         //@synthesize actionsImageFrame=_actionsImageFrame - In the implementation block
@property (assign,nonatomic,__weak) id<CNAvatarCardActionsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL dismissesBeforePerforming;                                   //@synthesize dismissesBeforePerforming=_dismissesBeforePerforming - In the implementation block
@property (getter=isPerformingAction,nonatomic,readonly) BOOL performingAction; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)requiresConstraintBasedLayout;
-(id)initWithFrame:(CGRect)arg1 ;
-(id<CNAvatarCardActionsViewDelegate>)delegate;
-(void)setActions:(NSArray *)arg1 ;
-(void)setDelegate:(id<CNAvatarCardActionsViewDelegate>)arg1 ;
-(void)reloadData;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2 ;
-(void)scrollViewDidEndDecelerating:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(NSArray *)actions;
-(void)reset;
-(void)willMoveToWindow:(id)arg1 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(BOOL)_gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)setTableView:(CNAvatarCardActionsTableView *)arg1 ;
-(CNAvatarCardActionsTableView *)tableView;
-(void)setExpanded:(BOOL)arg1 ;
-(BOOL)expanded;
-(CGPoint)initialLocation;
-(void)setInitialLocation:(CGPoint)arg1 ;
-(UIGestureRecognizer *)selectionGestureRecognizer;
-(void)setActionsReversed:(BOOL)arg1 ;
-(BOOL)actionsReversed;
-(void)startTrackingRolloverWithGestureRecognizer:(id)arg1 ;
-(void)stopTrackingRollover;
-(id)actionsManager:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3 ;
-(BOOL)bypassActionValidation;
-(id)actionsManager:(id)arg1 presentingViewControllerForAction:(id)arg2 ;
-(void)refreshActions;
-(NSArray *)actionCategories;
-(UISelectionFeedbackGenerator *)retargetBehavior;
-(void)setSelectionGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)setRetargetBehavior:(UISelectionFeedbackGenerator *)arg1 ;
-(void)setDismissesBeforePerforming:(BOOL)arg1 ;
-(BOOL)dismissesBeforePerforming;
-(UIGestureRecognizer *)rolloverGestureRecognizer;
-(CNQuickActionsManager *)actionsManager;
-(void)setActionsManager:(CNQuickActionsManager *)arg1 ;
-(void)setRolloverGestureRecognizer:(UIGestureRecognizer *)arg1 ;
-(void)updateRollover:(id)arg1 ;
-(void)_updateActionsWithBlock:(/*^block*/id)arg1 ;
-(id)_effectiveManagerActions;
-(void)_updateWithActions:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)_stopTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(void)reloadDataWithBlock:(/*^block*/id)arg1 ;
-(void)resetWithBlock:(/*^block*/id)arg1 ;
-(void)_performActionAtIndexPath:(id)arg1 ;
-(id)_indexPathForGestureRecognizer:(id)arg1 ;
-(void)_startTrackingRolloverOnCellAtIndexPath:(id)arg1 withGestureRecognizer:(id)arg2 ;
-(void)_setHighlightedIndexPath:(id)arg1 isChange:(BOOL)arg2 ;
-(BOOL)performHighlightedAction;
-(id)_actionAtIndexPath:(id)arg1 ;
-(void)_updateFromActions:(id)arg1 toActions:(id)arg2 matchingOldIndex:(long long)arg3 toNewActionIndex:(long long)arg4 invertedAnimation:(BOOL)arg5 ;
-(void)_dismissCardAnimated:(BOOL)arg1 ;
-(void)_configureCell:(id)arg1 forAction:(id)arg2 ;
-(void)_updateAllSeparators;
-(void)_updateCellSeparator:(id)arg1 forIndexPath:(id)arg2 ;
-(void)setActionsImageFrame:(CGRect)arg1 ;
-(CGRect)actionsImageFrame;
-(NSIndexPath *)highlightedIndexPath;
-(void)setHighlightedIndexPath:(NSIndexPath *)arg1 ;
-(NSArray *)contacts;
-(void)setContacts:(NSArray *)arg1 ;
-(void)setBypassActionValidation:(BOOL)arg1 ;
-(void)setActionCategories:(NSArray *)arg1 ;
-(BOOL)isPerformingAction;
@end

