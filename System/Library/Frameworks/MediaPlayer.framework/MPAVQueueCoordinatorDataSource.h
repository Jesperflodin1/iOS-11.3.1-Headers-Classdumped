/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPAVQueueCoordinatorDataSource <NSObject>
@optional
-(void)queueCoordinator:(id)arg1 failedToLoadItem:(id)arg2;
-(void)queueCoordinator:(id)arg1 willInsertItem:(id)arg2 afterItem:(id)arg3;
-(void)queueCoordinatorDidChangeItems:(id)arg1;

@required
-(id)queueCoordinator:(id)arg1 itemToFollowItem:(id)arg2;

@end

