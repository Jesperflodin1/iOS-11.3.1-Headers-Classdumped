/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/BulletinBoardPlugins/PhotoLibraryDataProvider.bundle/PhotoLibraryDataProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, PLButtinBoardDelayedNotificationPostingServiceDelegate;
@class NSObject, PCPersistentTimer;

@interface PLBulletinBoardPersistentTimer : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	PCPersistentTimer* _persistentTimer;
	id<PLButtinBoardDelayedNotificationPostingServiceDelegate> _postingServiceDelegate;

}
-(void)dealloc;
-(void)_uninstallPersistentTimerIfNecessary;
-(void)_persistentTimerFired:(id)arg1 ;
-(void)_setUpPersistentTimerWithBulletinDescription:(id)arg1 ;
-(void)scheduleBulletinForDelayedNotification:(id)arg1 ;
-(id)initWithBulletinPostingServiceDelegate:(id)arg1 ;
-(void)rescheduleImportantMemoryNotificationIfLost;
@end

