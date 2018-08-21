/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/CloudDocsDaemon-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class BRCClientZone, NSMutableSet, NSMutableDictionary, NSMutableIndexSet, NSMutableArray, BRCLocalItem;

@interface BRCSyncUpEnumerator : NSEnumerator {

	unsigned _batchSize;
	unsigned _maxDepth;
	BRCClientZone* _clientZone;
	NSMutableSet* _whitelist;
	NSMutableSet* _itemIDsLostOrThrottled;
	NSMutableSet* _itemIDsNeedingOSUpgrade;
	NSMutableDictionary* _tombstonesEmbargo;
	NSMutableIndexSet* _returned;
	PQLResultSet* _enumerator;
	NSMutableArray* _stack;
	int _stage;
	unsigned long long _retryAfter;
	BRCLocalItem* _itemNeedingPCSChaining;
	NSMutableSet* _chainedParentIDWhitelist;
	NSMutableSet* _shareRecordIDsNeedingDelete;

}

@property (nonatomic,readonly) unsigned batchSize;                                      //@synthesize batchSize=_batchSize - In the implementation block
@property (nonatomic,readonly) unsigned long long retryAfter;                           //@synthesize retryAfter=_retryAfter - In the implementation block
@property (nonatomic,readonly) BRCLocalItem * itemNeedingPCSChaining;                   //@synthesize itemNeedingPCSChaining=_itemNeedingPCSChaining - In the implementation block
@property (nonatomic,readonly) NSMutableSet * chainedParentIDWhitelist;                 //@synthesize chainedParentIDWhitelist=_chainedParentIDWhitelist - In the implementation block
@property (nonatomic,readonly) NSMutableSet * shareRecordIDsNeedingDelete;              //@synthesize shareRecordIDsNeedingDelete=_shareRecordIDsNeedingDelete - In the implementation block
-(void)invalidate;
-(id)nextObject;
-(unsigned)batchSize;
-(id)initWithClientZone:(id)arg1 ;
-(NSMutableSet *)chainedParentIDWhitelist;
-(BRCLocalItem *)itemNeedingPCSChaining;
-(NSMutableSet *)shareRecordIDsNeedingDelete;
-(unsigned long long)retryAfter;
-(void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 descendantBlock:(/*^block*/id)arg4 ;
-(void)_blackListDescendantStack:(id)arg1 parentItem:(id)arg2 andAddToSet:(id)arg3 ;
-(BOOL)_blackListDescendantStackAndItemIfThrottledOrNeedsOSUpgrade:(id)arg1 now:(unsigned long long)arg2 ;
-(BOOL)isBlackListed:(id)arg1 ;
-(BOOL)handleItemForOSUpgrade:(id)arg1 parentItemID:(id)arg2 ;
-(id)_nextLiveItem;
-(id)_nextTombstone;
-(PQLResultSet*)_documentsOrAliasesNeedingSyncUpEnumerator;
-(PQLResultSet*)_liveOrNewDirectoriesNeedingSyncUpEnumerator;
-(PQLResultSet*)_tombstoneLeavesNeedingSyncUpEnumerator;
@end

