/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:59 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSMutableOrderedSet, NRMutableDeviceCollection, NSMutableArray, NRSwitchRecordCollection, NSMutableDictionary;

@interface NRDeviceCollectionHistory : NSObject <NRMutableStateParentDelegate, NSSecureCoding, NSFastEnumeration> {

	NSMutableOrderedSet* _observers;
	BOOL _dirty;
	NRMutableDeviceCollection* _deviceCollection;
	unsigned long long _startIndex;
	NSMutableArray* _history;
	NRSwitchRecordCollection* _switchRecords;
	NSMutableDictionary* _historyStateCache;
	NSMutableArray* _historyStateCacheMRU;
	NSMutableArray* _historyStateCacheIndex;

}

@property (assign,nonatomic) unsigned long long startIndex;                               //@synthesize startIndex=_startIndex - In the implementation block
@property (nonatomic,retain) NSMutableArray * history;                                    //@synthesize history=_history - In the implementation block
@property (nonatomic,retain) NRSwitchRecordCollection * switchRecords;                    //@synthesize switchRecords=_switchRecords - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * historyStateCache;                     //@synthesize historyStateCache=_historyStateCache - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheMRU;                       //@synthesize historyStateCacheMRU=_historyStateCacheMRU - In the implementation block
@property (nonatomic,retain) NSMutableArray * historyStateCacheIndex;                     //@synthesize historyStateCacheIndex=_historyStateCacheIndex - In the implementation block
@property (nonatomic,readonly) NRMutableDeviceCollection * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,readonly) unsigned long long count; 
@property (nonatomic,readonly) unsigned long long nextIndex; 
@property (nonatomic,readonly) BOOL dirty;                                                //@synthesize dirty=_dirty - In the implementation block
@property (nonatomic,readonly) unsigned switchIndex; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)startIndex;
-(id)init;
-(unsigned long long)count;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(void)removeObserver:(id)arg1 ;
-(BOOL)dirty;
-(unsigned long long)nextIndex;
-(id)deviceIDAtSwitchIndex:(unsigned)arg1 date:(id*)arg2 ;
-(void)_truncateHistory;
-(id)_mostRecentStateBefore:(id)arg1 ;
-(id)applyDiff:(id)arg1 ;
-(void)_updateHistoryCachesWithIndex:(id)arg1 ;
-(unsigned long long)_findIndexInHistoryStateCache:(id)arg1 type:(unsigned long long)arg2 ;
-(void)pruneStateCacheItems:(unsigned long long)arg1 ;
-(id)switchDeviceIDFromDiff:(id)arg1 ;
-(void)notifyObserversWithEntry:(id)arg1 ;
-(id)historyEntryAtIndex:(unsigned long long)arg1 ;
-(BOOL)isEqualToHistory:(id)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(void)purgeWorkingSet;
-(id)addObserverQueue:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(NRMutableDeviceCollection *)deviceCollection;
-(NRSwitchRecordCollection *)switchRecords;
-(void)setSwitchRecords:(NRSwitchRecordCollection *)arg1 ;
-(NSMutableDictionary *)historyStateCache;
-(void)setHistoryStateCache:(NSMutableDictionary *)arg1 ;
-(NSMutableArray *)historyStateCacheMRU;
-(void)setHistoryStateCacheMRU:(NSMutableArray *)arg1 ;
-(NSMutableArray *)historyStateCacheIndex;
-(void)setHistoryStateCacheIndex:(NSMutableArray *)arg1 ;
-(id)stateAtIndex:(unsigned long long)arg1 ;
-(void)setStartIndex:(unsigned long long)arg1 ;
-(void)setHistory:(NSMutableArray *)arg1 ;
-(unsigned)switchIndex;
-(NSMutableArray *)history;
@end

