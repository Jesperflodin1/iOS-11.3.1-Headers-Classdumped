/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSDictionaryM : NSMutableDictionary {

	SCD_Struct_NS37* storage;
	A{__cow_state_t}* cow;

}
+(id)__new:(const id*)arg1 :(const id*)arg2 :(unsigned long long)arg3 :(BOOL)arg4 :(BOOL)arg5 ;
+(void)initialize;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)__setObject:(id)arg1 forKey:(id)arg2 ;
-(void)_mutate;
-(id)keyOfEntryWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(id)keysOfEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(double)_clumpingFactor;
-(double)_clumpingInterestingThreshold;
-(void)removeEntriesWithOptions:(unsigned long long)arg1 passingTest:(/*^block*/id)arg2 ;
-(void)setObservationInfo:(void*)arg1 ;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS26*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectForKey:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
@end

