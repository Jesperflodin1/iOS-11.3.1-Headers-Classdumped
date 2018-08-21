/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue, NPKExpressPassBookmarkControllerDelegate;
@class NSObject, NPSDomainAccessor, NPSManager, NSDictionary;

@interface NPKExpressPassBookmarkController : NSObject {

	NSObject*<OS_dispatch_queue> _internalQueue;
	int _bookmarkDidChangeToken;
	int _deviceDidPairToken;
	id<NPKExpressPassBookmarkControllerDelegate> _delegate;
	NPSDomainAccessor* _domainAccessor;
	NPSManager* _preferenceSyncManager;

}

@property (nonatomic,retain) NPSDomainAccessor * domainAccessor;                       //@synthesize domainAccessor=_domainAccessor - In the implementation block
@property (nonatomic,readonly) NPSManager * preferenceSyncManager;                     //@synthesize preferenceSyncManager=_preferenceSyncManager - In the implementation block
@property (nonatomic,readonly) NSDictionary * allBookmarkDictionariesMap; 
@property (__weak) id<NPKExpressPassBookmarkControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)init;
-(id<NPKExpressPassBookmarkControllerDelegate>)delegate;
-(void)setDelegate:(id<NPKExpressPassBookmarkControllerDelegate>)arg1 ;
-(void)dealloc;
-(void)setBookmark:(id)arg1 ;
-(id)initWithDomainAccessor:(id)arg1 preferenceSyncManager:(id)arg2 ;
-(void)_registerDefaultExpressPassDidUpdateDarwinNotification;
-(void)_registerDeviceRegistryDeviceDidPairNotificationDarwinNotification;
-(NSDictionary *)allBookmarkDictionariesMap;
-(NPSDomainAccessor *)domainAccessor;
-(void)_queueBackwardCompatibilitySetDefaultExpressFelicaTransitBookmark:(id)arg1 ;
-(void)_synchronizeDomainAccessorWithExpressPassType:(long long)arg1 ;
-(id)_bookmarkWithDictionary:(id)arg1 ;
-(id)_queueAllBookmarks;
-(void)_queueBackwardCompatibilityRemoveDefaultExpressFelicaTransitBookmark;
-(id)_backwardCompatibilityDefaultExpressFelicaTransitBookmark;
-(NPSManager *)preferenceSyncManager;
-(void)_postDefaultExpressPassDidUpdateDarwinNotification;
-(id)bookmarkForExpressMode:(id)arg1 ;
-(id)allBookmarks;
-(id)bookmarksWithPassUniqueIdentifier:(id)arg1 ;
-(void)removeBookmarkWithPassUniqueIdentifier:(id)arg1 expressMode:(id)arg2 ;
-(void)setDomainAccessor:(NPSDomainAccessor *)arg1 ;
@end

