/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIDragInteractionDelegate_Internal.h>

@protocol UIDragSession, _UITableViewDragControllerDelegate;
@class NSMutableOrderedSet, UIDragInteraction, UITableView, UITableViewCell, NSIndexPath, NSMapTable, NSString;

@interface _UITableViewDragController : NSObject <UIDragInteractionDelegate_Internal> {

	BOOL _forceEnabledForReordering;
	long long _clientEnabledState;
	id<UIDragSession> _dragSession;
	NSMutableOrderedSet* _indexPaths;
	UIDragInteraction* _dragInteraction;
	UITableView*<_UITableViewDragControllerDelegate> _tableView;
	UITableViewCell* _initiatingCell;
	NSIndexPath* _initiatingIndexPath;
	UITableViewCell* _tentativeInitiatingCell;
	NSIndexPath* _tentativeInitiatingIndexPath;
	NSMutableOrderedSet* _tentativeIndexPaths;
	NSMapTable* _cellsAnimatingCancel;

}

@property (nonatomic,retain) UIDragInteraction * dragInteraction;                                            //@synthesize dragInteraction=_dragInteraction - In the implementation block
@property (assign,nonatomic,__weak) UITableView*<_UITableViewDragControllerDelegate> tableView;              //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) UITableViewCell * initiatingCell;                                               //@synthesize initiatingCell=_initiatingCell - In the implementation block
@property (nonatomic,retain) NSIndexPath * initiatingIndexPath;                                              //@synthesize initiatingIndexPath=_initiatingIndexPath - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * indexPaths;                                               //@synthesize indexPaths=_indexPaths - In the implementation block
@property (nonatomic,retain) UITableViewCell * tentativeInitiatingCell;                                      //@synthesize tentativeInitiatingCell=_tentativeInitiatingCell - In the implementation block
@property (nonatomic,retain) NSIndexPath * tentativeInitiatingIndexPath;                                     //@synthesize tentativeInitiatingIndexPath=_tentativeInitiatingIndexPath - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * tentativeIndexPaths;                                      //@synthesize tentativeIndexPaths=_tentativeIndexPaths - In the implementation block
@property (nonatomic,retain) id<UIDragSession> dragSession;                                                  //@synthesize dragSession=_dragSession - In the implementation block
@property (nonatomic,retain) NSMapTable * cellsAnimatingCancel;                                              //@synthesize cellsAnimatingCancel=_cellsAnimatingCancel - In the implementation block
@property (assign,nonatomic) long long clientEnabledState;                                                   //@synthesize clientEnabledState=_clientEnabledState - In the implementation block
@property (assign,nonatomic) BOOL forceEnabledForReordering;                                                 //@synthesize forceEnabledForReordering=_forceEnabledForReordering - In the implementation block
@property (getter=isActive,nonatomic,readonly) BOOL active; 
@property (nonatomic,readonly) UITableViewCell * draggedCell; 
@property (nonatomic,readonly) NSIndexPath * draggedIndexPath; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isEnabledByDefault;
-(BOOL)isActive;
-(id)initWithTableView:(id)arg1 ;
-(void)forceReset;
-(void)setTableView:(UITableView*<_UITableViewDragControllerDelegate>)arg1 ;
-(NSIndexPath *)draggedIndexPath;
-(NSMutableOrderedSet *)indexPaths;
-(void)setForceEnabledForReordering:(BOOL)arg1 ;
-(void)setClientEnabledState:(long long)arg1 ;
-(void)uninstallFromTableView;
-(long long)clientEnabledState;
-(id<UIDragSession>)dragSession;
-(UITableViewCell *)draggedCell;
-(void)immediatelyBeginDragWithTouch:(id)arg1 ;
-(UITableView*<_UITableViewDragControllerDelegate>)tableView;
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3 ;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3 ;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForSession:(id)arg2 ;
-(long long)_dragInteraction:(id)arg1 dataOwnerForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2 ;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2 ;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3 ;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4 ;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3 ;
-(void)resetDragState;
-(void)setupDragInteraction;
-(void)setDragInteraction:(UIDragInteraction *)arg1 ;
-(BOOL)forceEnabledForReordering;
-(UIDragInteraction *)dragInteraction;
-(void)updateDragInteractionEnabledState;
-(UITableViewCell *)initiatingCell;
-(NSIndexPath *)initiatingIndexPath;
-(void)setTentativeInitiatingCell:(UITableViewCell *)arg1 ;
-(void)setTentativeInitiatingIndexPath:(NSIndexPath *)arg1 ;
-(void)clearTentativeRows;
-(UITableViewCell *)tentativeInitiatingCell;
-(NSIndexPath *)tentativeInitiatingIndexPath;
-(void)setInitiatingCell:(UITableViewCell *)arg1 ;
-(void)setInitiatingIndexPath:(NSIndexPath *)arg1 ;
-(NSMutableOrderedSet *)tentativeIndexPaths;
-(void)beginDragForTentativeRows;
-(BOOL)canProvideItemsForDragAtPoint:(CGPoint)arg1 ;
-(void)addTentativeRowAtIndexPath:(id)arg1 ;
-(void)setDragSession:(id<UIDragSession>)arg1 ;
-(void)beginDragOfRowsForSession:(id)arg1 notifyDelegate:(BOOL)arg2 ;
-(NSMapTable *)cellsAnimatingCancel;
-(BOOL)_dragInteractionDynamicallyUpdatesPrefersFullSizePreviews:(id)arg1 ;
-(void)setIndexPaths:(NSMutableOrderedSet *)arg1 ;
-(void)setTentativeIndexPaths:(NSMutableOrderedSet *)arg1 ;
-(void)setCellsAnimatingCancel:(NSMapTable *)arg1 ;
@end

