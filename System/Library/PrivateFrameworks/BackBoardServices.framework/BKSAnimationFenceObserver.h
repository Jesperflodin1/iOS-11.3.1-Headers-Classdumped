/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMapTable, NSHashTable;

@interface BKSAnimationFenceObserver : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMapTable* _handleNameToTraceMap;
	NSMapTable* _handleNameToFenceNameMap;
	NSMapTable* _fenceNameToHandleNamesMap;
	NSMapTable* _fenceNameToDeathSentinelMap;
	NSHashTable* _validDeathSentinelsTable;
	unsigned _lastHandleName;
	unsigned _encodeCount;

}
+(int)pidFromEncodeIdentifier:(unsigned long long)arg1 ;
+(unsigned)countFromEncodeIdentifier:(unsigned long long)arg1 ;
+(id)sharedInstance;
-(unsigned long long)addHandle:(id)arg1 ;
-(void)removeHandleWithName:(unsigned long long)arg1 ;
-(unsigned long long)nextEncodeIdentifier;
-(id)init;
-(void)dealloc;
-(id)description;
@end

