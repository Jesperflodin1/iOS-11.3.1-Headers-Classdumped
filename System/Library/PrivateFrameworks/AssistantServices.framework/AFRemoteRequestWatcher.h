/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:45 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface AFRemoteRequestWatcher : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	/*^block*/id _requestHandler;
	int _speechRequestToken;
	/*^block*/id _speechRequestHandler;

}
-(id)init;
-(void)dealloc;
-(void)_setupRequestListener;
-(void)_setupSpeechRequestListener;
-(void)setNewRequestHandler:(/*^block*/id)arg1 ;
-(void)setNewSpeechRequestHandler:(/*^block*/id)arg1 ;
@end

