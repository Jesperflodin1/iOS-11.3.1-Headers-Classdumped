/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
#import <KeyboardServices/KeyboardServices-Structs.h>
@class NSObject;

@interface _KSReachabilityMonitor : NSObject {

	SCNetworkReachabilityRef _reachabilityRef;
	BOOL _isInternetReachable;
	NSObject*<OS_dispatch_queue> _queue;

}
+(void)startMonitoring;
-(id)init;
-(void)dealloc;
-(void)queryInitialState;
-(void)reachabilityDidChange:(BOOL)arg1 ;
@end

