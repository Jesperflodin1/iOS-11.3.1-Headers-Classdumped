/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_xpc_object;
@class NSObject;

@interface CMKKeepDaemonAliveAssertion : NSObject {

	NSObject*<OS_xpc_object> _keepaliveConnection;

}
+(id)assertion;
-(void)_setupConnection;
-(id)init;
-(void)dealloc;
-(void)_applicationDidBecomeActive:(id)arg1 ;
-(void)_applicationWillResignActive:(id)arg1 ;
-(void)_tearDownConnection;
-(void)_registerForAppActiveNotifications;
-(void)_unregisterForAppActiveNotifications;
-(void)_setupHeartBeatForConnection:(id)arg1 ;
@end

