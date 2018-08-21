/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/QLNotificationCenterProtocol.h>

@protocol QLNotificationCenterProtocol;
@class NSPointerArray, NSMutableArray, NSString;

@interface QLNotificationCenter : NSObject <QLNotificationCenterProtocol> {

	id<QLNotificationCenterProtocol> _remoteNotificationCenter;
	NSPointerArray* _observers;
	NSMutableArray* _bufferedNotifications;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(long long)_indexOfObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)postNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)setRemoteNotificationCenter:(id)arg1 ;
-(BOOL)_tryPostingNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_bufferNotificationName:(id)arg1 userInfo:(id)arg2 ;
-(void)_sendEnqueuedNotifications;
@end

