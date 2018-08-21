/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <IMFoundation/IMFoundation-Structs.h>
@class NSMutableDictionary;

@interface IMWeakObjectCache : NSObject {

	NSMutableDictionary* _weakObjectCache;
	opaque_pthread_mutex_t _tableLock;

}
+(id)sharedInstance;
-(id)init;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(id)copyObjectForKey:(id)arg1 ;
-(id)copyOrSetObject:(id)arg1 forKey:(id)arg2 ;
-(void)removeObject:(id)arg1 key:(id)arg2 ;
@end

