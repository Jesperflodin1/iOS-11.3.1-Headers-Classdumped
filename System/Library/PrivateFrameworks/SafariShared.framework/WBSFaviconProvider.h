/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSSiteMetadataProvider.h>

@protocol OS_dispatch_queue, WBSSiteMetadataProviderDelegate;
@class NSMutableDictionary, NSCache, NSObject, WBSFaviconProviderPersistenceController, NSCalendar, NSURL, NSString;

@interface WBSFaviconProvider : NSObject <WBSSiteMetadataProvider> {

	NSMutableDictionary* _hostsToRequestsMap;
	NSCache* _responseCache;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_queue> _internalSavingQueue;
	NSMutableDictionary* _urlsToFaviconRecordsSavedDuringMigration;
	WBSFaviconProviderPersistenceController* _persistenceController;
	NSCalendar* _calendar;
	double _expirationInterval;
	long long _providerState;
	NSMutableDictionary* _sizeToDefaultFaviconDictionary;
	unsigned long long _privateDataRetentionCount;
	id<WBSSiteMetadataProviderDelegate> _providerDelegate;
	NSURL* _baseURL;
	NSString* _persistenceName;

}

@property (nonatomic,readonly) NSURL * baseURL;                                                        //@synthesize baseURL=_baseURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * persistenceName;                                        //@synthesize persistenceName=_persistenceName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<WBSSiteMetadataProviderDelegate> providerDelegate;              //@synthesize providerDelegate=_providerDelegate - In the implementation block
-(id)init;
-(void)dealloc;
-(NSURL *)baseURL;
-(void)_setProviderState:(long long)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_atomicallySaveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)cleanUpAfterPersistenceSetUpDidSucceed:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUpPersistenceAtPath:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)_isIconDateExpired:(id)arg1 ;
-(void)_atomicallyLinkPageURLs:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3 ;
-(void)_updateOutstandingRequestsForPageURL:(id)arg1 forceDidReceiveNewData:(BOOL)arg2 ;
-(void)_saveImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)_confirmImageDataShouldBeSaved:(id)arg1 pageURL:(id)arg2 includingPrivateData:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)flushPrivateDataFromMemoryWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_registerRequest:(id)arg1 ;
-(id)_cachedResponseForRequest:(id)arg1 ;
-(void)_prepareAndSendResponseForRequests:(id)arg1 forceDidReceiveNewData:(BOOL)arg2 ;
-(id)_hostFromRequest:(id)arg1 ;
-(id)_responseCacheKeyForRequest:(id)arg1 ;
-(id)_responseDictionaryKeyForRequest:(id)arg1 ;
-(void)_removeCachedResponsesForURL:(id)arg1 ;
-(id)_requestsForHost:(id)arg1 ;
-(void)_addCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)_getIconForRequest:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_defaultFaviconForSize:(CGSize)arg1 ;
-(void)imageForRequestDuringPersistenceSetUp:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_linkPageURL:(id)arg1 toIconWithInfo:(id)arg2 isPrivate:(BOOL)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)responseForRequest:(id)arg1 willProvideUpdates:(BOOL*)arg2 ;
-(void)prepareResponseForRequest:(id)arg1 allowDelayedResponse:(BOOL)arg2 ;
-(id<WBSSiteMetadataProviderDelegate>)providerDelegate;
-(void)setProviderDelegate:(id<WBSSiteMetadataProviderDelegate>)arg1 ;
-(void)emptyCaches;
-(id)initWithPersistenceBaseURL:(id)arg1 persistenceName:(id)arg2 ;
-(long long)providerState;
-(void)setDefaultFavicon:(id)arg1 forSize:(CGSize)arg2 ;
-(void)setUpWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)shouldIconDataBeSavedForIconWithPageURL:(id)arg1 originalPageURL:(id)arg2 iconURL:(id)arg3 size:(CGSize)arg4 isPrivate:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)saveFaviconImageData:(id)arg1 iconURL:(id)arg2 pageURL:(id)arg3 originalPageURL:(id)arg4 isPrivate:(BOOL)arg5 completionHandler:(/*^block*/id)arg6 ;
-(void)removeAllIconsForURLStringsNotIn:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeIconForURLString:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)retainPrivateData;
-(void)releasePrivateData;
-(void)_removeCachedResponsesForRequest:(id)arg1 ;
-(NSString *)persistenceName;
-(void)stopWatchingUpdatesForRequest:(id)arg1 ;
-(BOOL)canHandleRequest:(id)arg1 ;
-(void)savePendingChangesBeforeTermination;
-(id)persistenceController;
@end

