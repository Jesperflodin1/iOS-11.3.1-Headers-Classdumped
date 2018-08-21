/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UIDragInteractionDelegate <NSObject>
@optional
-(id)dragInteraction:(id)arg1 previewForLiftingItem:(id)arg2 session:(id)arg3;
-(void)dragInteraction:(id)arg1 willAnimateLiftWithAnimator:(id)arg2 session:(id)arg3;
-(id)dragInteraction:(id)arg1 previewForCancellingItem:(id)arg2 withDefault:(id)arg3;
-(void)dragInteraction:(id)arg1 session:(id)arg2 didEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 sessionWillBegin:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 sessionAllowsMoveOperation:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 sessionIsRestrictedToDraggingApplication:(id)arg2;
-(BOOL)dragInteraction:(id)arg1 prefersFullSizePreviewsForSession:(id)arg2;
-(void)dragInteraction:(id)arg1 sessionDidMove:(id)arg2;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willEndWithOperation:(unsigned long long)arg3;
-(void)dragInteraction:(id)arg1 sessionDidTransferItems:(id)arg2;
-(id)dragInteraction:(id)arg1 itemsForAddingToSession:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(id)dragInteraction:(id)arg1 sessionForAddingItems:(id)arg2 withTouchAtPoint:(CGPoint)arg3;
-(void)dragInteraction:(id)arg1 session:(id)arg2 willAddItems:(id)arg3 forInteraction:(id)arg4;
-(void)dragInteraction:(id)arg1 item:(id)arg2 willAnimateCancelWithAnimator:(id)arg3;

@required
-(id)dragInteraction:(id)arg1 itemsForBeginningSession:(id)arg2;

@end

