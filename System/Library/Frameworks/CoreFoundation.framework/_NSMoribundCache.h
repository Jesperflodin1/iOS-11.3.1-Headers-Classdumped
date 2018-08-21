/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSCache.h>

@interface _NSMoribundCache : NSCache
-(unsigned long long)totalCostLimit;
-(BOOL)evictsObjectsWithDiscardedContent;
-(void)setObject:(id)arg1 forKey:(id)arg2 cost:(unsigned long long)arg3 ;
-(void)setTotalCostLimit:(unsigned long long)arg1 ;
-(id)copy;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(id)delegate;
-(id)objectForKey:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(unsigned long long)retainCount;
-(void)setName:(id)arg1 ;
-(id)name;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setCountLimit:(unsigned long long)arg1 ;
-(unsigned long long)countLimit;
-(void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1 ;
@end

