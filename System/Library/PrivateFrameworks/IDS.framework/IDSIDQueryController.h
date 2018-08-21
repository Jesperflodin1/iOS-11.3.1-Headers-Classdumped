/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class _IDSIDQueryController, IDSInternalQueueController;

@interface IDSIDQueryController : NSObject {

	_IDSIDQueryController* _internal;
	IDSInternalQueueController* _queueController;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(BOOL)participantsForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)_setCurrentIDStatus:(long long)arg1 forDestination:(id)arg2 service:(id)arg3 ;
-(BOOL)currentRemoteDevicesForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(long long)_refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(id)_refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(long long)_currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)requestIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(BOOL)requestIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)removeDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)currentIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addDelegate:(id)arg1 forService:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 ;
-(BOOL)currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(id)_currentIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)_warmupQueryCacheForService:(id)arg1 ;
-(BOOL)_flushQueryCacheForService:(id)arg1 ;
-(BOOL)_hasCacheForService:(id)arg1 ;
-(long long)_currentCachedIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 ;
-(BOOL)refreshIDStatusForDestination:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)addListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)removeListenerID:(id)arg1 forService:(id)arg2 ;
-(BOOL)refreshIDStatusForDestinations:(id)arg1 service:(id)arg2 listenerID:(id)arg3 queue:(id)arg4 completionBlock:(/*^block*/id)arg5 ;
-(void)removeDelegate:(id)arg1 ;
-(void)addDelegate:(id)arg1 queue:(id)arg2 ;
@end

