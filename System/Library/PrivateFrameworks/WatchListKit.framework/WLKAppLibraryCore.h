/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:00 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, PSSSSubscriptionManagerInternal;

@interface WLKAppLibraryCore : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	PSSSSubscriptionManagerInternal* _subscriptionManager;

}
+(id)sharedInstance;
-(id)init;
-(void)_fetchApplicationsInProcess:(/*^block*/id)arg1 ;
-(void)fetchApplications:(/*^block*/id)arg1 ;
-(id)_connection;
@end

