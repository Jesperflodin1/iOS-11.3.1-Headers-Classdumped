/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <libobjc.A.dylib/PLUserEditableAlbumProtocol.h>
#import <libobjc.A.dylib/PLCloudSharedAlbumProtocol.h>
#import <libobjc.A.dylib/PLIndexMapperDataSource.h>
#import <libobjc.A.dylib/PLIndexMappingCache.h>

@class NSString, NSDictionary, NSDate, NSOrderedSet, NSNumber, NSIndexSet, PLIndexMapper, NSMutableIndexSet, NSMutableOrderedSet, NSPredicate, NSArray, PLManagedAsset, UIImage, NSURL;

@interface PLFilteredAlbum : NSObject <PLUserEditableAlbumProtocol, PLCloudSharedAlbumProtocol, PLIndexMapperDataSource, PLIndexMappingCache> {

	PLIndexMapper* _indexMapper;
	NSMutableIndexSet* _filteredIndexes;
	BOOL _backingAlbumSupportsEdits;
	BOOL _backingAlbumSupportsCloudShared;
	NSMutableOrderedSet* _weak_assets;
	BOOL isObservingContextChanges;
	int filter;
	NSObject* _backingAlbum;
	NSPredicate* predicate;
	NSArray* _filterParameters;

}

@property (nonatomic,retain) NSObject*<PLAlbumProtocol> backingAlbum;                          //@synthesize backingAlbum=_backingAlbum - In the implementation block
@property (assign,nonatomic) int filter; 
@property (nonatomic,retain) NSPredicate * predicate; 
@property (assign,nonatomic) BOOL isObservingContextChanges; 
@property (assign,nonatomic) NSMutableOrderedSet * _assets; 
@property (nonatomic,retain,readonly) NSArray * filterParameters;                              //@synthesize filterParameters=_filterParameters - In the implementation block
@property (nonatomic,retain,readonly) PLIndexMapper * indexMapper; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain,readonly) NSString * uuid; 
@property (nonatomic,retain,readonly) NSString * title; 
@property (nonatomic,copy,readonly) NSString * localizedTitle; 
@property (nonatomic,retain,readonly) NSOrderedSet * assets; 
@property (nonatomic,readonly) unsigned long long approximateCount; 
@property (nonatomic,readonly) unsigned long long assetsCount; 
@property (nonatomic,readonly) unsigned long long photosCount; 
@property (nonatomic,readonly) unsigned long long videosCount; 
@property (nonatomic,readonly) BOOL isEmpty; 
@property (nonatomic,retain) PLManagedAsset * keyAsset; 
@property (nonatomic,retain) PLManagedAsset * secondaryKeyAsset; 
@property (nonatomic,retain) PLManagedAsset * tertiaryKeyAsset; 
@property (nonatomic,readonly) BOOL canShowComments; 
@property (nonatomic,readonly) BOOL canShowAvalancheStacks; 
@property (nonatomic,copy,readonly) NSArray * localizedLocationNames; 
@property (nonatomic,retain,readonly) NSDate * startDate; 
@property (nonatomic,retain,readonly) NSDate * endDate; 
@property (nonatomic,retain,readonly) NSNumber * kind; 
@property (nonatomic,readonly) int kindValue; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * mutableAssets; 
@property (assign,nonatomic) BOOL hasUnseenContentBoolValue; 
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,retain,readonly) UIImage * posterImage; 
@property (nonatomic,readonly) BOOL isLibrary; 
@property (nonatomic,readonly) BOOL isCameraAlbum; 
@property (nonatomic,readonly) BOOL isPanoramasAlbum; 
@property (nonatomic,readonly) BOOL isWallpaperAlbum; 
@property (nonatomic,readonly) BOOL isPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isPendingPhotoStreamAlbum; 
@property (nonatomic,readonly) BOOL isStandInAlbum; 
@property (nonatomic,readonly) BOOL isFolder; 
@property (nonatomic,readonly) BOOL isInTrash; 
@property (nonatomic,readonly) BOOL isOwnedCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isFamilyCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isMultipleContributorCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL isRecentlyAddedAlbum; 
@property (nonatomic,readonly) BOOL isUserLibraryAlbum; 
@property (nonatomic,readonly) BOOL canContributeToCloudSharedAlbum; 
@property (nonatomic,readonly) BOOL shouldDeleteWhenEmpty; 
@property (nonatomic,retain) NSDictionary * slideshowSettings; 
@property (nonatomic,retain) NSString * importSessionID; 
@property (nonatomic,retain,readonly) NSURL * groupURL; 
@property (nonatomic,copy,readonly) id sortingComparator; 
@property (assign,nonatomic) int pendingItemsCount; 
@property (assign,nonatomic) int pendingItemsType; 
@property (assign,nonatomic) unsigned long long batchSize; 
@property (nonatomic,retain,readonly) NSMutableOrderedSet * userEditableAssets; 
@property (nonatomic,retain) NSString * cloudGUID; 
@property (nonatomic,retain) NSDictionary * cloudMetadata; 
@property (nonatomic,retain) NSString * cloudOwnerFirstName; 
@property (nonatomic,retain) NSString * cloudOwnerLastName; 
@property (nonatomic,retain) NSString * cloudOwnerFullName; 
@property (nonatomic,retain) NSString * cloudOwnerEmail; 
@property (nonatomic,retain) NSString * cloudOwnerHashedPersonID; 
@property (assign,nonatomic) BOOL cloudOwnerIsWhitelisted; 
@property (nonatomic,retain) NSDate * cloudSubscriptionDate; 
@property (nonatomic,retain) NSString * publicURL; 
@property (nonatomic,retain) NSOrderedSet * invitationRecords; 
@property (nonatomic,retain) NSNumber * unseenAssetsCount; 
@property (assign) unsigned long long unseenAssetsCountIntegerValue; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabled; 
@property (nonatomic,retain) NSNumber * cloudPublicURLEnabledLocal; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabled; 
@property (nonatomic,retain) NSNumber * cloudMultipleContributorsEnabledLocal; 
@property (nonatomic,retain) NSDate * cloudLastInterestingChangeDate; 
@property (nonatomic,retain) NSDate * cloudCreationDate; 
@property (nonatomic,retain) NSDate * cloudLastContributionDate; 
@property (nonatomic,retain) NSString * cloudPersonID; 
@property (readonly) int cloudRelationshipStateValue; 
@property (readonly) int cloudRelationshipStateLocalValue; 
@property (nonatomic,retain,readonly) NSString * localizedSharedWithLabel; 
@property (nonatomic,retain,readonly) NSOrderedSet * cloudAlbumSubscriberRecords; 
@property (nonatomic,retain,readonly) NSDate * cloudFirstRecentBatchDate; 
@property (assign,nonatomic) BOOL cloudNotificationsEnabled; 
@property (nonatomic,copy,readonly) NSIndexSet * filteredIndexes; 
@property (nonatomic,copy,readonly) id<NSObject><NSCopying> cachedIndexMapState; 
+(NSObject*)filteredAlbum:(NSObject*)arg1 filter:(int)arg2 parameters:(id)arg3 ;
+(id)descriptionForAlbumFilter:(int)arg1 parameters:(id)arg2 ;
+(id)filteredIndexesInAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 filter:(int)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
+(NSObject*)filteredAlbum:(NSObject*)arg1 intersectFilter:(int)arg2 ;
+(NSObject*)unfilteredAlbum:(NSObject*)arg1 ;
+(id)predicateForAlbumFilter:(int)arg1 parameters:(id)arg2 ;
-(unsigned long long)count;
-(void)dealloc;
-(NSString *)description;
-(NSString *)name;
-(NSString *)title;
-(BOOL)isEmpty;
-(NSNumber *)kind;
-(int)filter;
-(void)setFilter:(int)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSString *)localizedTitle;
-(NSString *)uuid;
-(NSArray *)filterParameters;
-(NSObject*<PLAlbumProtocol>)backingAlbum;
-(id)initWithBackingAlbum:(NSObject*)arg1 filter:(int)arg2 parameters:(id)arg3 ;
-(id)initWithBackingAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
-(void)setBackingAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)set_assets:(NSMutableOrderedSet *)arg1 ;
-(NSIndexSet *)filteredIndexes;
-(id)_cloudSharedBackingAlbum;
-(void)setIsObservingContextChanges:(BOOL)arg1 ;
-(void)backingContextDidChange:(id)arg1 ;
-(void)_commonInitWithBackingAlbum:(NSObject*)arg1 predicate:(id)arg2 ;
-(id)_editableBackingAlbum;
-(BOOL)shouldIncludeObjectAtIndex:(unsigned long long)arg1 ;
-(BOOL)mappedDataSourceChanged:(id)arg1 remoteNotificationData:(id)arg2 ;
-(Class)derivedChangeNotificationClass;
-(id<NSObject><NSCopying>)cachedIndexMapState;
-(id)currentStateForChange;
-(PLIndexMapper *)indexMapper;
-(unsigned long long)countOfFilteredAssets;
-(unsigned long long)indexInFilteredAssetsOfObject:(id)arg1 ;
-(id)objectInFilteredAssetsAtIndex:(unsigned long long)arg1 ;
-(id)filteredAssetsAtIndexes:(id)arg1 ;
-(void)getFilteredAssets:(id*)arg1 range:(NSRange)arg2 ;
-(void)insertObject:(id)arg1 inFilteredAssetsAtIndex:(unsigned long long)arg2 ;
-(void)removeObjectFromFilteredAssetsAtIndex:(unsigned long long)arg1 ;
-(void)insertFilteredAssets:(id)arg1 atIndexes:(id)arg2 ;
-(void)removeFilteredAssetsAtIndexes:(id)arg1 ;
-(void)replaceObjectInFilteredAssetsAtIndex:(unsigned long long)arg1 withObject:(id)arg2 ;
-(void)replaceFilteredAssetsAtIndexes:(id)arg1 withFilteredValues:(id)arg2 ;
-(BOOL)isObservingContextChanges;
-(BOOL)canPerformEditOperation:(unsigned long long)arg1 ;
-(BOOL)canShowAvalancheStacks;
-(PLManagedAsset *)keyAsset;
-(unsigned long long)approximateCount;
-(UIImage *)posterImage;
-(NSString *)cloudGUID;
-(NSString *)localizedSharedWithLabel;
-(NSOrderedSet *)assets;
-(unsigned long long)assetsCount;
-(unsigned long long)photosCount;
-(unsigned long long)videosCount;
-(void)setKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)secondaryKeyAsset;
-(void)setSecondaryKeyAsset:(PLManagedAsset *)arg1 ;
-(PLManagedAsset *)tertiaryKeyAsset;
-(void)setTertiaryKeyAsset:(PLManagedAsset *)arg1 ;
-(BOOL)canShowComments;
-(NSArray *)localizedLocationNames;
-(void)reducePendingItemsCountBy:(unsigned long long)arg1 ;
-(void)batchFetchAssets:(id)arg1 ;
-(int)kindValue;
-(NSMutableOrderedSet *)mutableAssets;
-(BOOL)hasUnseenContentBoolValue;
-(void)setHasUnseenContentBoolValue:(BOOL)arg1 ;
-(BOOL)isLibrary;
-(BOOL)isCameraAlbum;
-(BOOL)isPanoramasAlbum;
-(BOOL)isWallpaperAlbum;
-(BOOL)isPhotoStreamAlbum;
-(BOOL)isCloudSharedAlbum;
-(BOOL)isPendingPhotoStreamAlbum;
-(BOOL)isStandInAlbum;
-(BOOL)isFolder;
-(BOOL)isInTrash;
-(BOOL)isOwnedCloudSharedAlbum;
-(BOOL)isFamilyCloudSharedAlbum;
-(BOOL)isMultipleContributorCloudSharedAlbum;
-(BOOL)isRecentlyAddedAlbum;
-(BOOL)isUserLibraryAlbum;
-(BOOL)canContributeToCloudSharedAlbum;
-(BOOL)shouldDeleteWhenEmpty;
-(NSDictionary *)slideshowSettings;
-(void)setSlideshowSettings:(NSDictionary *)arg1 ;
-(NSString *)importSessionID;
-(void)setImportSessionID:(NSString *)arg1 ;
-(NSURL *)groupURL;
-(id)sortingComparator;
-(int)pendingItemsCount;
-(void)setPendingItemsCount:(int)arg1 ;
-(int)pendingItemsType;
-(void)setPendingItemsType:(int)arg1 ;
-(id)localizedSharedByLabelAllowsEmail:(BOOL)arg1 ;
-(id)cloudOwnerDisplayNameIncludingEmail:(BOOL)arg1 allowsEmail:(BOOL)arg2 ;
-(void)updateCloudLastInterestingChangeDateWithDate:(id)arg1 ;
-(void)updateCloudLastContributionDateWithDate:(id)arg1 ;
-(void)getUnseenStartMarkerIndex:(unsigned long long*)arg1 count:(unsigned long long*)arg2 showsProgress:(BOOL*)arg3 ;
-(void)userDeleteSubscriberRecord:(id)arg1 ;
-(void)setCloudGUID:(NSString *)arg1 ;
-(NSDictionary *)cloudMetadata;
-(void)setCloudMetadata:(NSDictionary *)arg1 ;
-(NSString *)cloudOwnerFirstName;
-(void)setCloudOwnerFirstName:(NSString *)arg1 ;
-(NSString *)cloudOwnerLastName;
-(void)setCloudOwnerLastName:(NSString *)arg1 ;
-(NSString *)cloudOwnerFullName;
-(void)setCloudOwnerFullName:(NSString *)arg1 ;
-(NSString *)cloudOwnerEmail;
-(void)setCloudOwnerEmail:(NSString *)arg1 ;
-(NSString *)cloudOwnerHashedPersonID;
-(void)setCloudOwnerHashedPersonID:(NSString *)arg1 ;
-(BOOL)cloudOwnerIsWhitelisted;
-(void)setCloudOwnerIsWhitelisted:(BOOL)arg1 ;
-(NSDate *)cloudSubscriptionDate;
-(void)setCloudSubscriptionDate:(NSDate *)arg1 ;
-(NSString *)publicURL;
-(void)setPublicURL:(NSString *)arg1 ;
-(NSOrderedSet *)invitationRecords;
-(void)setInvitationRecords:(NSOrderedSet *)arg1 ;
-(NSNumber *)unseenAssetsCount;
-(void)setUnseenAssetsCount:(NSNumber *)arg1 ;
-(unsigned long long)unseenAssetsCountIntegerValue;
-(void)setUnseenAssetsCountIntegerValue:(unsigned long long)arg1 ;
-(NSNumber *)cloudPublicURLEnabled;
-(void)setCloudPublicURLEnabled:(NSNumber *)arg1 ;
-(NSNumber *)cloudPublicURLEnabledLocal;
-(void)setCloudPublicURLEnabledLocal:(NSNumber *)arg1 ;
-(NSNumber *)cloudMultipleContributorsEnabled;
-(void)setCloudMultipleContributorsEnabled:(NSNumber *)arg1 ;
-(NSNumber *)cloudMultipleContributorsEnabledLocal;
-(void)setCloudMultipleContributorsEnabledLocal:(NSNumber *)arg1 ;
-(NSDate *)cloudLastInterestingChangeDate;
-(void)setCloudLastInterestingChangeDate:(NSDate *)arg1 ;
-(NSDate *)cloudCreationDate;
-(void)setCloudCreationDate:(NSDate *)arg1 ;
-(NSDate *)cloudLastContributionDate;
-(void)setCloudLastContributionDate:(NSDate *)arg1 ;
-(NSString *)cloudPersonID;
-(void)setCloudPersonID:(NSString *)arg1 ;
-(int)cloudRelationshipStateValue;
-(int)cloudRelationshipStateLocalValue;
-(NSOrderedSet *)cloudAlbumSubscriberRecords;
-(NSDate *)cloudFirstRecentBatchDate;
-(BOOL)cloudNotificationsEnabled;
-(void)setCloudNotificationsEnabled:(BOOL)arg1 ;
-(NSMutableOrderedSet *)_assets;
-(void)insertInternalUserEditableAssets:(id)arg1 atIndexes:(id)arg2 trimmedVideoPathInfo:(id)arg3 commentText:(id)arg4 ;
-(NSMutableOrderedSet *)userEditableAssets;
@end

