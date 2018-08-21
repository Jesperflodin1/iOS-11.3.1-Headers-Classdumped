/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TSDLayoutManipulatingTracker
@optional
-(void)willBeginDynamicOperationForReps:(id)arg1;
-(void)didChangeCurrentlyTransformingReps;
-(void)didEndDynamicOperationForReps:(id)arg1;
-(id)selectionBehaviorForReps:(id)arg1;

@required
-(BOOL)supportsAlignmentGuides;
-(BOOL)operationShouldBeDynamic;
-(void)commitChangesForReps:(id)arg1;
-(void)changeDynamicLayoutsForReps:(id)arg1;
-(BOOL)shouldOpenCommandGroupToCommitChangesForReps:(id)arg1;

@end

