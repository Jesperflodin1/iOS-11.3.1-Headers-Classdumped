/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSLock;

@interface MFWeakObjectCache : NSObject {

	/*^block*/id _block;
	NSMutableDictionary* _dictionary;
	NSLock* _lock;

}
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeObjectForKey:(id)arg1 ;
-(id)initWithBlock:(/*^block*/id)arg1 ;
-(id)objectForKey:(id)arg1 wasCached:(BOOL*)arg2 ;
-(id)objectForKey:(id)arg1 shouldGenerate:(BOOL)arg2 wasCached:(BOOL*)arg3 ;
-(id)weakObjectCacheRefForKey:(id)arg1 ;
@end

