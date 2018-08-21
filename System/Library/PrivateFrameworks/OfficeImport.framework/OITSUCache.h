/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:08 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OfficeImport/OITSUFlushableObject.h>

@class NSString, NSMutableDictionary;

@interface OITSUCache : OITSUFlushableObject {

	NSString* mCacheName;
	NSMutableDictionary* mCache;

}
-(id)init;
-(unsigned long long)count;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)description;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)initWithName:(id)arg1 ;
-(void)unload;
-(BOOL)hasFlushableContent;
-(id)p_createContentsDictionary;
-(id)p_objectForKey:(id)arg1 ;
-(void)p_addEntriesFromDictionary:(id)arg1 ;
-(id)p_objectsForKeys:(id)arg1 notFoundMarker:(id)arg2 ;
@end

