/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <VisualAlert/AXLocalNotificationHandler.h>

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {

	SEL* _possibleHandlers;
	unsigned long long _possibleHandlersCount;

}
-(void)dealloc;
-(void)_startObserving;
-(void)_stopObserving;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 possibleHandlers:(SEL)arg4 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(id)_notificationTypeDescription;
-(id)_forwardDistributedNotificationNameForHandler:(SEL)arg1 ;
-(id)_prefixForForwardDistributedNotificationName;
-(BOOL)_handleForwardDistributedNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

