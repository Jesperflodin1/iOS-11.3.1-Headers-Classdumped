/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <GameKitServices/GameKitServices-Structs.h>
@interface GKSessionGlobals : NSObject {

	unsigned* _activePIDList;
	unsigned long long _activePIDListSize;
	unsigned long long _activePIDListCount;
	opaque_pthread_mutex_t _lock;

}
-(id)init;
-(void)lock;
-(void)unlock;
-(void)unregisterPID:(unsigned)arg1 ;
-(void)registerPID:(unsigned)arg1 ;
-(BOOL)hasActivePID:(unsigned)arg1 ;
@end

