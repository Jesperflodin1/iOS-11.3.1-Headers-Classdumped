/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MiroPosterEffectPool : NSObject {

	NSMutableDictionary* _pool;
	NSLock* _poolLock;

}
-(id)init;
-(void)clear;
-(void)preloadAndPoolEffectIfNeeded:(id)arg1 ;
-(id)pooledEffectForID:(id)arg1 ;
-(void)returnEffectToPool:(id)arg1 ;
@end

