/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:10 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, MSVDistributedNotificationObserverDelegate;
@class NSString, NSObject, NSDictionary;

@interface MSVDistributedNotificationObserver : NSObject {

	int _notifyToken;
	NSString* _distributedName;
	NSString* _localName;
	NSObject*<OS_dispatch_queue> _queue;
	id<MSVDistributedNotificationObserverDelegate> _delegate;
	NSDictionary* _userInfoForLocalNotification;

}

@property (nonatomic,readonly) NSString * distributedName;                                                //@synthesize distributedName=_distributedName - In the implementation block
@property (nonatomic,readonly) NSString * localName;                                                      //@synthesize localName=_localName - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                        //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<MSVDistributedNotificationObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * userInfoForLocalNotification;                                   //@synthesize userInfoForLocalNotification=_userInfoForLocalNotification - In the implementation block
+(id)observerWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(NSString *)localName;
-(id)init;
-(id<MSVDistributedNotificationObserverDelegate>)delegate;
-(void)setDelegate:(id<MSVDistributedNotificationObserverDelegate>)arg1 ;
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_handleDistributedNotificationWithNotifyToken:(int)arg1 ;
-(NSDictionary *)userInfoForLocalNotification;
-(void)setUserInfoForLocalNotification:(NSDictionary *)arg1 ;
-(id)initWithDistributedName:(id)arg1 localName:(id)arg2 queue:(id)arg3 ;
-(NSString *)distributedName;
-(int)notifyToken;
@end

