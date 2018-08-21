/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PHPhotoLibraryChangeObserver.h>
#import <libobjc.A.dylib/PHAssetRepresentationDownloadOperationDelegate.h>

@class NSOperationQueue, NSHashTable, NSMapTable, NSMutableArray, NSMutableSet, NSRecursiveLock, Reachability, NSMutableDictionary, PHAssetRepresentation, NSString;

@interface PHAssetRepresentationPersistenceManager : NSObject <PHPhotoLibraryChangeObserver, PHAssetRepresentationDownloadOperationDelegate> {

	BOOL _online;
	BOOL _bulkAssetRegistrationRequestCount;
	unsigned long long _reachabilityStatus;
	unsigned long long _cellularAuthorization;
	NSOperationQueue* _downloadQueue;
	NSHashTable* _universalPersistenceObservers;
	NSMapTable* _assetRepresentationToPersistenceObserverMap;
	NSMapTable* _localIdentifierToAssetRepresentationMap;
	NSMutableArray* _pendingRegistrationLocalIDs;
	NSMutableArray* _fetchResults;
	NSMutableSet* _deletedLocalIdentifiers;
	NSRecursiveLock* _observerLock;
	Reachability* _hostReachability;
	Reachability* _wifiReachability;
	Reachability* _internetReachability;
	NSRecursiveLock* _downloadsLock;
	NSMutableSet* _unreadDownloads;
	NSMutableSet* _recentDownloads;
	NSMutableDictionary* _recentDownloadsDict;
	NSMutableDictionary* _requestedDownloadsDict;
	PHAssetRepresentation* _pendingAssetRepresentation;

}

@property (nonatomic,retain) NSOperationQueue * downloadQueue;                                      //@synthesize downloadQueue=_downloadQueue - In the implementation block
@property (nonatomic,retain) NSHashTable * universalPersistenceObservers;                           //@synthesize universalPersistenceObservers=_universalPersistenceObservers - In the implementation block
@property (nonatomic,retain) NSMapTable * assetRepresentationToPersistenceObserverMap;              //@synthesize assetRepresentationToPersistenceObserverMap=_assetRepresentationToPersistenceObserverMap - In the implementation block
@property (nonatomic,retain) NSMapTable * localIdentifierToAssetRepresentationMap;                  //@synthesize localIdentifierToAssetRepresentationMap=_localIdentifierToAssetRepresentationMap - In the implementation block
@property (assign,nonatomic) BOOL bulkAssetRegistrationRequestCount;                                //@synthesize bulkAssetRegistrationRequestCount=_bulkAssetRegistrationRequestCount - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingRegistrationLocalIDs;                          //@synthesize pendingRegistrationLocalIDs=_pendingRegistrationLocalIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * fetchResults;                                         //@synthesize fetchResults=_fetchResults - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedLocalIdentifiers;                                //@synthesize deletedLocalIdentifiers=_deletedLocalIdentifiers - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * observerLock;                                        //@synthesize observerLock=_observerLock - In the implementation block
@property (nonatomic,retain) Reachability * hostReachability;                                       //@synthesize hostReachability=_hostReachability - In the implementation block
@property (nonatomic,retain) Reachability * wifiReachability;                                       //@synthesize wifiReachability=_wifiReachability - In the implementation block
@property (nonatomic,retain) Reachability * internetReachability;                                   //@synthesize internetReachability=_internetReachability - In the implementation block
@property (assign,getter=isOnline,nonatomic) BOOL online;                                           //@synthesize online=_online - In the implementation block
@property (assign,nonatomic) unsigned long long reachabilityStatus;                                 //@synthesize reachabilityStatus=_reachabilityStatus - In the implementation block
@property (nonatomic,retain) NSRecursiveLock * downloadsLock;                                       //@synthesize downloadsLock=_downloadsLock - In the implementation block
@property (nonatomic,retain) NSMutableSet * unreadDownloads;                                        //@synthesize unreadDownloads=_unreadDownloads - In the implementation block
@property (nonatomic,retain) NSMutableSet * recentDownloads;                                        //@synthesize recentDownloads=_recentDownloads - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * recentDownloadsDict;                             //@synthesize recentDownloadsDict=_recentDownloadsDict - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * requestedDownloadsDict;                          //@synthesize requestedDownloadsDict=_requestedDownloadsDict - In the implementation block
@property (nonatomic,retain) PHAssetRepresentation * pendingAssetRepresentation;                    //@synthesize pendingAssetRepresentation=_pendingAssetRepresentation - In the implementation block
@property (assign,nonatomic) unsigned long long cellularAuthorization;                              //@synthesize cellularAuthorization=_cellularAuthorization - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
-(void)reachabilityChanged:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(NSMutableArray *)fetchResults;
-(void)setFetchResults:(NSMutableArray *)arg1 ;
-(void)unregisterObserver:(id)arg1 ;
-(void)cancelAllDownloads;
-(void)photoLibraryDidChange:(id)arg1 ;
-(BOOL)isOnline;
-(unsigned long long)reachabilityStatus;
-(Reachability *)internetReachability;
-(void)setInternetReachability:(Reachability *)arg1 ;
-(void)setObserverLock:(NSRecursiveLock *)arg1 ;
-(void)setDownloadsLock:(NSRecursiveLock *)arg1 ;
-(void)setDownloadQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)downloadQueue;
-(void)setAssetRepresentationToPersistenceObserverMap:(NSMapTable *)arg1 ;
-(void)setLocalIdentifierToAssetRepresentationMap:(NSMapTable *)arg1 ;
-(void)setUniversalPersistenceObservers:(NSHashTable *)arg1 ;
-(void)setDeletedLocalIdentifiers:(NSMutableSet *)arg1 ;
-(void)setCellularAuthorization:(unsigned long long)arg1 ;
-(void)setWifiReachability:(Reachability *)arg1 ;
-(void)setHostReachability:(Reachability *)arg1 ;
-(Reachability *)wifiReachability;
-(Reachability *)hostReachability;
-(void)loadRequestedDownloads;
-(void)issueRequestedDownloads;
-(void)loadRecentDownloads;
-(NSRecursiveLock *)downloadsLock;
-(NSMutableSet *)unreadDownloads;
-(void)setUnreadDownloads:(NSMutableSet *)arg1 ;
-(id)recentDownloadsPath;
-(void)setRecentDownloadsDict:(NSMutableDictionary *)arg1 ;
-(void)saveRecentDownloads;
-(void)setRecentDownloads:(NSMutableSet *)arg1 ;
-(NSMutableDictionary *)recentDownloadsDict;
-(NSMutableSet *)recentDownloads;
-(NSMutableDictionary *)requestedDownloadsDict;
-(void)submitDownloadOperationForAssetRepresentation:(id)arg1 userInitiated:(BOOL)arg2 ;
-(id)requestedDownloadsPath;
-(void)saveRequestedDownloads;
-(void)setRequestedDownloadsDict:(NSMutableDictionary *)arg1 ;
-(void)updateOnlineStatus;
-(void)setReachabilityStatus:(unsigned long long)arg1 ;
-(void)setOnline:(BOOL)arg1 ;
-(unsigned long long)cellularAuthorization;
-(NSMapTable *)localIdentifierToAssetRepresentationMap;
-(NSMutableSet *)deletedLocalIdentifiers;
-(NSRecursiveLock *)observerLock;
-(NSMapTable *)assetRepresentationToPersistenceObserverMap;
-(BOOL)bulkAssetRegistrationRequestCount;
-(NSMutableArray *)pendingRegistrationLocalIDs;
-(void)setPendingRegistrationLocalIDs:(NSMutableArray *)arg1 ;
-(void)setBulkAssetRegistrationRequestCount:(BOOL)arg1 ;
-(void)requestDownloadOfAssetRepresentation:(id)arg1 userInitiated:(BOOL)arg2 ;
-(void)setPendingAssetRepresentation:(PHAssetRepresentation *)arg1 ;
-(PHAssetRepresentation *)pendingAssetRepresentation;
-(void)requestDownloadOfAssetRepresentation:(id)arg1 ;
-(void)markAssetRepresentationAsRecent:(id)arg1 ;
-(void)markAssetRepresentationAsRequested:(id)arg1 ;
-(void)enumerateObserversOfAssetRepresentation:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unmarkAssetRepresentationAsRecent:(id)arg1 ;
-(void)unmarkAssetRepresentationAsRequested:(id)arg1 ;
-(NSHashTable *)universalPersistenceObservers;
-(void)markAssetRepresentationAsUnread:(id)arg1 ;
-(void)setPersistenceState:(unsigned long long)arg1 ofAssetRepresentation:(id)arg2 ;
-(void)downloadOperationDidStart:(id)arg1 ;
-(void)downloadOperationDidFinish:(id)arg1 ;
-(void)downloadOperation:(id)arg1 didProgess:(double)arg2 ;
-(void)clearStaticCaches;
-(id)unreadDownloadedAssetRepresentations;
-(void)resetUnreadDownloads;
-(unsigned long long)numberOfUnreadDownloads;
-(void)beginBulkAssetRegistration;
-(void)endBulkAssetRegistration;
-(void)registerAssetRepresentation:(id)arg1 ;
-(void)unregisterAssetRepresentation:(id)arg1 ;
-(id)recentlyDownloadedAssetRepresentations;
-(void)cancelDownloadOfAssetRepresentation:(id)arg1 ;
-(unsigned long long)numberOfRequestedDownloads;
-(void)registerObserver:(id)arg1 forAssetRepresentation:(id)arg2 ;
-(void)unregisterObserver:(id)arg1 forAssetRepresentation:(id)arg2 ;
@end

