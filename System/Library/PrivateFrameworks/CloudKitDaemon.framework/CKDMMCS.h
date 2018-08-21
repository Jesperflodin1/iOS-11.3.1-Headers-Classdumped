/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <CloudKitDaemon/CloudKitDaemon-Structs.h>
@class NSString, CKDAssetCache, CKDClientContext, CKDMMCSEngineContext;

@interface CKDMMCS : NSObject {

	BOOL _didDrop;
	NSString* _path;
	CKDAssetCache* _assetCache;
	CKDClientContext* _clientContext;
	long long _checkoutCount;
	CKDMMCSEngineContext* _MMCSEngineContext;

}

@property (assign,nonatomic) BOOL didDrop;                                                                      //@synthesize didDrop=_didDrop - In the implementation block
@property (assign,nonatomic) long long checkoutCount;                                                           //@synthesize checkoutCount=_checkoutCount - In the implementation block
@property (nonatomic,retain) CKDMMCSEngineContext * MMCSEngineContext;                                          //@synthesize MMCSEngineContext=_MMCSEngineContext - In the implementation block
@property (nonatomic,retain) NSString * path;                                                                   //@synthesize path=_path - In the implementation block
@property (nonatomic,retain) CKDAssetCache * assetCache;                                                        //@synthesize assetCache=_assetCache - In the implementation block
@property (assign,nonatomic,__weak) CKDClientContext * clientContext;                                           //@synthesize clientContext=_clientContext - In the implementation block
@property (getter=getMaxChunkCountForSection,nonatomic,readonly) unsigned maxChunkCountForSection; 
+(id)protocolVersion;
+(id)MMCSWrapperForApplicationBundleID:(id)arg1 assetDirectoryContext:(id)arg2 isUTAccount:(BOOL)arg3 error:(id*)arg4 ;
+(id)zeroSizeFileSignature;
+(id)sharedWrappersByPath;
+(id)protocolHeaders;
+(long long)_commonErrorCodeWithMMCSError:(id)arg1 ;
+(long long)_errorCodeWithMMCSPutError:(id)arg1 ;
+(long long)_errorCodeWithMMCSGetError:(id)arg1 ;
+(long long)_errorCodeWithMMCSRegisterError:(id)arg1 ;
+(id)_userInfoFromMMCSRetryableError:(id)arg1 ;
+(id)_errorWithMMCSError:(id)arg1 path:(id)arg2 description:(id)arg3 operationType:(long long)arg4 ;
+(void)purgeMMCSDirectoryWithPath:(id)arg1 ;
+(id)_errorWithMMCSError:(id)arg1 description:(id)arg2 operationType:(long long)arg3 ;
+(id)sharedMMCSItemReaders;
+(id)sharedItemIDs;
+(void)startTrackingMMCSItemReader:(id)arg1 ;
+(void)stopTrackingMMCSItemReader:(id)arg1 ;
+(void)startTrackingItemIDsForMMCSItems:(id)arg1 ;
+(void)stopTrackingItemIDsForMMCSItems:(id)arg1 ;
+(BOOL)isTrackingItemID:(unsigned long long)arg1 ;
-(void)dealloc;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(BOOL)didDrop;
-(void)setDidDrop:(BOOL)arg1 ;
-(void)setClientContext:(CKDClientContext *)arg1 ;
-(CKDClientContext *)clientContext;
-(id)CKStatusReportArray;
-(void)drop;
-(CKDAssetCache *)assetCache;
-(id)getSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)getItemGroupSet:(id)arg1 operation:(id)arg2 shouldFetchAssetContentInMemory:(BOOL)arg3 options:(id)arg4 progress:(/*^block*/id)arg5 command:(/*^block*/id)arg6 completionHandler:(/*^block*/id)arg7 ;
-(unsigned)getMaxChunkCountForSection;
-(id)registerItemGroupSet:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)putSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)putItemGroupSet:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(long long)checkoutCount;
-(CKDMMCSEngineContext *)MMCSEngineContext;
-(void)setCheckoutCount:(long long)arg1 ;
-(id)initWithMMCSEngineContext:(id)arg1 path:(id)arg2 ;
-(void)setAssetCache:(CKDAssetCache *)arg1 ;
-(id)_referenceIdentifierFromAssetKey:(id)arg1 ;
-(mmcs_engineRef)getMMCSEngine;
-(id)_contextToRegisterItemGroup:(id)arg1 operation:(id)arg2 options:(unsigned long long)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)_logMMCSOptions:(id)arg1 ;
-(id)_contextToGetItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 command:(/*^block*/id)arg5 completionHandler:(/*^block*/id)arg6 ;
-(id)_contextToPutItemGroup:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)performOnRunLoop:(/*^block*/id)arg1 ;
-(BOOL)registeredItemCount:(unsigned long long*)arg1 error:(id*)arg2 ;
-(BOOL)_getRegisteredItemsGreaterThan:(unsigned long long)arg1 itemIds:(unsigned long long*)arg2 itemCount:(unsigned long long*)arg3 error:(id*)arg4 ;
-(void)_unregisterItemIDs:(id)arg1 ;
-(id)_contextToPutSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_contextToGetSectionItem:(id)arg1 operation:(id)arg2 options:(id)arg3 progress:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)showRegisteredItems;
-(void)unregisterItemIDs:(id)arg1 ;
-(void)unregisterItemIDs:(id)arg1 completionBlock:(/*^block*/id)arg2 ;
-(void)setMMCSEngineContext:(CKDMMCSEngineContext *)arg1 ;
@end

