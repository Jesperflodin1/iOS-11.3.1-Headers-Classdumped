/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class TSPObjectContext, NSObject, NSMutableDictionary, NSMutableSet, TSPPersistedObjectUUIDMap;

@interface TSPObjectUUIDMap : NSObject {

	Ai _assertOnReadCount;
	TSPObjectContext* _context;
	NSObject*<OS_dispatch_queue> _accessQueue;
	NSMutableDictionary* _inMemoryUUIDDictionary;
	NSMutableSet* _UUIDsWithSuppressedAssertions;
	TSPPersistedObjectUUIDMap* _persistedUUIDMap;

}
-(void)object:(id)arg1 didChangeUUIDToValue:(id)arg2 fromValue:(id)arg3 ;
-(void)beginAssertOnRead;
-(void)endAssertOnRead;
-(id)objectWithUUID:(id)arg1 onlyIfLoaded:(BOOL)arg2 validateNewObjects:(BOOL)arg3 identifier:(long long*)arg4 ;
-(BOOL)objectUUIDIsInDocument:(id)arg1 ;
-(BOOL)shouldSuppressAssertionForObjectUUID:(id)arg1 ;
-(void)setPersistedUUIDMap:(id)arg1 ;
-(void)objectWasAddedToDocument:(id)arg1 options:(unsigned long long)arg2 ;
-(void)objectWillBeRemovedFromDocument:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
@end

