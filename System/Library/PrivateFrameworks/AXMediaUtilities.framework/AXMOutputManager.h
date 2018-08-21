/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AXMediaUtilities/AXMTaskDispatcherDelegate.h>

@protocol OS_dispatch_queue;
@class AXMTaskDispatcher, AXMAudioSession, NSObject, AXMSoundComponent, AXMSpeechComponent, AXMHapticComponent, NSArray, NSString;

@interface AXMOutputManager : NSObject <AXMTaskDispatcherDelegate> {

	AXMTaskDispatcher* _outputRequests;
	AXMAudioSession* _audioSession;
	long long _state;
	NSObject*<OS_dispatch_queue> _queue;
	AXMSoundComponent* _queue_soundComponent;
	AXMSpeechComponent* _queue_speechComponent;
	AXMHapticComponent* _queue_hapticComponent;
	NSArray* _queue_activeComponents;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSString *)description;
-(void)playSound:(long long)arg1 ;
-(void)interruptPolitely;
-(void)dispatcher:(id)arg1 handleTask:(id)arg2 ;
-(void)dispatchRequest:(id)arg1 options:(id)arg2 ;
-(void)enableWithCompletion:(/*^block*/id)arg1 ;
-(void)speak:(id)arg1 ;
-(void)interrupt:(id)arg1 ;
-(void)interruptImmediately;
@end

