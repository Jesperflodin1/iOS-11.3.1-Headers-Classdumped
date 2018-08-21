/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, NSObject;

@interface _MPCPlayerPathCache : NSObject {

	NSMutableDictionary* _playerPathResolutions;
	NSMutableDictionary* _observers;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;

}

@property (nonatomic,readonly) NSMutableDictionary * playerPathResolutions;              //@synthesize playerPathResolutions=_playerPathResolutions - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * observers;                          //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> accessQueue;                 //@synthesize accessQueue=_accessQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> calloutQueue;                //@synthesize calloutQueue=_calloutQueue - In the implementation block
+(id)sharedCache;
-(void)dealloc;
-(id)_init;
-(NSMutableDictionary *)observers;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(id)resolvedPlayerPathForPlayerPath:(id)arg1 ;
-(void)_onQueue_registerForInvalidationWithUnresolvedPlayerPath:(id)arg1 invalidationPlayerPath:(void*)arg2 ;
-(NSMutableDictionary *)playerPathResolutions;
-(NSObject*<OS_dispatch_queue>)accessQueue;
@end

