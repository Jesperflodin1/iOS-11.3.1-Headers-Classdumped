/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class OS_dispatch_queue;

@interface ASMessagesProvider.DeviceLibraryAppStateDataSource : NSObject {

	 delegate;
	 accessQueue;
	 expectedAppStates;
	 appLibrary;
	 previouslyInstalledLibraryItems;
	 availableUpdatesCache;

}

@property (readonly,nonatomic) OS_dispatch_queue * accessQueue; 
-(void)didReceiveUpdateFromProductPage:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(OS_dispatch_queue *)accessQueue;
@end

