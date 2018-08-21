/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol _UICollectionViewDragSourceControllerDelegate <NSObject>
@required
-(void)dragSourceController:(id)arg1 willBeginLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didCompleteLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didCancelLiftForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceControllerSessionWillBegin:(id)arg1;
-(void)dragSourceController:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didSupplyCancellationPreviewForItemAtIndexPath:(id)arg2;
-(void)dragSourceController:(id)arg1 willBeginAnimatingCancelForItemsAtIndexPaths:(id)arg2 withAnimator:(id)arg3;
-(void)dragSourceController:(id)arg1 didCompleteAnimatingCancelForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 willEndForItemsAtIndexPaths:(id)arg2 withDropOperation:(unsigned long long)arg3;
-(void)dragSourceController:(id)arg1 didEndForItemsAtIndexPaths:(id)arg2;
-(void)dragSourceController:(id)arg1 didUpdateItemCountOfSelectedItems:(long long)arg2;

@end
