/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreLocation.framework/CoreLocation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class CLTilesManagerClientInternal;

@interface CLTilesManagerClient : NSObject {

	CLTilesManagerClientInternal* _internal;

}
+(void)initialize;
+(id)sharedClient;
-(void)onNotificationReceived:(id)arg1 ;
-(void)sendNotificationRegistrationMessage:(id)arg1 isRegister:(BOOL)arg2 ;
-(BOOL)executeAsynchronousQuery:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)precacheHint:(id)arg1 onQueue:(id)arg2 responseBlock:(/*^block*/id)arg3 ;
-(BOOL)registerTo:(id)arg1 onQueue:(id)arg2 block:(/*^block*/id)arg3 ;
-(BOOL)unregisterFrom:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)reconnect;
@end
