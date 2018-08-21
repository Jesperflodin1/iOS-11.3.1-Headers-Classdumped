/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_group, OS_dispatch_queue;
@class NSObject;

@interface NACEndpointObserver : NSObject {

	void* _discoverySession;
	void* _callbackToken;
	NSObject*<OS_dispatch_group> _initialFetchGroup;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
+(id)sharedObserver;
-(id)init;
-(void)fetchRouteForOriginIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
@end
