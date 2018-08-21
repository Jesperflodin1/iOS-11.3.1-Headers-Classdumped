/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BRContainerHelper, OS_dispatch_queue, OS_dispatch_source, NSObject;
@class NSMutableDictionary, NSMutableSet, NSObject, br_pacer;

@interface BRContainerCache : NSObject {

	id<BRContainerHelper> _helper;
	NSMutableDictionary* _containersByID;
	NSMutableSet* _fetchedContainerIDs;
	BOOL _containerCacheUptodate;
	NSObject*<OS_dispatch_queue> _queue;
	br_pacer* _invalidationPacer;
	NSObject*<OS_dispatch_source> _memoryPressureSource;
	id<NSObject> _containerStatusObserver;

}
+(id)containerCache;
+(id)containerHelper;
+(BOOL)hasDaemonicParts;
-(void)dealloc;
-(id)initWithHelper:(id)arg1 ;
-(id)containerByID:(id)arg1 forURL:(id)arg2 ;
-(id)documentContainers;
-(id)allContainersByID;
-(id)allContainersBlockIfNeeded:(BOOL)arg1 ;
-(void)subscribeToContainerStatusUpdate;
-(void)invalidateAndClearCache:(BOOL)arg1 ;
-(void)_containerListDidChange;
-(void)unsubscribeToContainerStatusUpdate;
-(id)_allContainersByIDNoCopyBlocking:(BOOL)arg1 ;
-(void)_accountWillChange;
-(BOOL)_updateContainersCache;
@end

