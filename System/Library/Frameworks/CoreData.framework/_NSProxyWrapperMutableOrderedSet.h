/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:07 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/_NSNotifyingWrapperMutableOrderedSet.h>

@class _NSFaultingMutableOrderedSetMutationMethods;

@interface _NSProxyWrapperMutableOrderedSet : _NSNotifyingWrapperMutableOrderedSet {

	_NSFaultingMutableOrderedSetMutationMethods* _mutationMethods;

}
-(void)sortRange:(NSRange)arg1 options:(unsigned long long)arg2 usingComparator:(/*^block*/id)arg3 ;
-(void)addObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)initWithContainer:(id)arg1 key:(id)arg2 mutableOrderedSet:(id)arg3 mutationMethods:(id)arg4 ;
-(void)insertObjects:(id*)arg1 count:(unsigned long long)arg2 atIndex:(unsigned long long)arg3 ;
-(void)insertObjects:(id)arg1 atIndexes:(id)arg2 ;
-(void)addObject:(id)arg1 ;
-(void)dealloc;
-(void)removeAllObjects;
-(void)addObjectsFromArray:(id)arg1 ;
-(void)unionSet:(id)arg1 ;
-(void)intersectSet:(id)arg1 ;
-(void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)sortUsingComparator:(/*^block*/id)arg1 ;
-(void)removeObjectsAtIndexes:(id)arg1 ;
-(void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)removeObjectsInArray:(id)arg1 ;
-(void)sortWithOptions:(unsigned long long)arg1 usingComparator:(/*^block*/id)arg2 ;
-(void)removeObjectAtIndex:(unsigned long long)arg1 ;
-(void)removeObjectsInRange:(NSRange)arg1 ;
-(void)unionOrderedSet:(id)arg1 ;
-(void)minusSet:(id)arg1 ;
-(void)minusOrderedSet:(id)arg1 ;
-(void)intersectOrderedSet:(id)arg1 ;
@end
