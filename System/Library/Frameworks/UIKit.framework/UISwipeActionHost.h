/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UISwipeActionHost <NSObject,UITraitEnvironment>
@optional
-(UIEdgeInsets*)swipeActionController:(id)arg1 extraInsetsForItemAtIndexPath:(id)arg2;
-(id)swipeActionController:(id)arg1 backgroundColorForItemAtIndexPath:(id)arg2;
-(BOOL)swipeActionController:(id)arg1 mayBeginSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 willBeginSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 didEndSwipeForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 willPerformAction:(id)arg2 atIndexPath:(id)arg3;
-(void)swipeActionController:(id)arg1 didPerformAction:(id)arg2 canceled:(BOOL)arg3 atIndexPath:(id)arg4;
-(void)swipeActionController:(id)arg1 didCompleteAnimationOfAction:(id)arg2 canceled:(BOOL)arg3 atIndexPath:(id)arg4;

@required
-(id)gestureRecognizerViewForSwipeActionController:(id)arg1;
-(id)itemContainerViewForSwipeActionController:(id)arg1;
-(id)swipeActionController:(id)arg1 viewForItemAtIndexPath:(id)arg2;
-(id)swipeActionController:(id)arg1 indexPathForTouchLocation:(CGPoint)arg2;
-(id)swipeActionController:(id)arg1 leadingSwipeConfigurationForItemAtIndexPath:(id)arg2;
-(id)swipeActionController:(id)arg1 trailingSwipeConfigurationForItemAtIndexPath:(id)arg2;
-(void)swipeActionController:(id)arg1 animateView:(id)arg2 actionsView:(id)arg3 forDestructiveAction:(id)arg4 atIndexPath:(id)arg5 withSwipeInfo:(SCD_Struct_UI27)arg6 completion:(/*^block*/id)arg7;

@end

