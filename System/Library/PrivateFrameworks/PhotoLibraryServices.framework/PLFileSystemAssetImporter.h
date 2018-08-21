/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:55 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class PLPhotoLibrary, NSString, NSMutableIndexSet, NSMutableSet, NSMutableDictionary;

@interface PLFileSystemAssetImporter : NSObject {

	PLPhotoLibrary* _photoLibrary;
	NSString* _photoLibraryStoreUUID;
	NSMutableIndexSet* _thumbIndexes;
	BOOL _hasProcessedAnyAssets;
	NSMutableSet* _existingUUIDs;
	NSMutableDictionary* _existingUUIDsByUppercasePath;
	NSMutableDictionary* _existingOIDsByUUID;
	unsigned long long _thumbnailBatchFetchSize;

}

@property (nonatomic,retain) NSMutableSet * existingUUIDs;                                    //@synthesize existingUUIDs=_existingUUIDs - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingUUIDsByUppercasePath;              //@synthesize existingUUIDsByUppercasePath=_existingUUIDsByUppercasePath - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * existingOIDsByUUID;                        //@synthesize existingOIDsByUUID=_existingOIDsByUUID - In the implementation block
@property (assign,nonatomic) unsigned long long thumbnailBatchFetchSize;                      //@synthesize thumbnailBatchFetchSize=_thumbnailBatchFetchSize - In the implementation block
+(id)_mediaDirectoryPath;
-(void)dealloc;
-(void)setExistingUUIDs:(NSMutableSet *)arg1 ;
-(void)setExistingUUIDsByUppercasePath:(NSMutableDictionary *)arg1 ;
-(void)setExistingOIDsByUUID:(NSMutableDictionary *)arg1 ;
-(id)addAssetWithURLs:(id)arg1 forceInsert:(BOOL)arg2 forceUpdate:(BOOL)arg3 fixAddedDate:(BOOL)arg4 ;
-(id)assetURLisInDatabase:(id)arg1 ;
-(id)_addAssetWithURL:(id)arg1 existingOID:(id)arg2 ;
-(BOOL)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 ;
-(BOOL)_setupVideoAsset:(id)arg1 withURL:(id)arg2 ;
-(BOOL)_setupUnknownAsset:(id)arg1 withURL:(id)arg2 ;
-(void)setModificationAndCreationDateOnAsset:(id)arg1 withURL:(id)arg2 ;
-(BOOL)_setupPhotoAsset:(id)arg1 withURL:(id)arg2 unknownType:(BOOL)arg3 ;
-(BOOL)_setupPhotoAssetAsPhotoIrisIfNeeded:(id)arg1 ;
-(BOOL)_setupAdjustmentsFromAdjustmentFileForAsset:(id)arg1 ;
-(unsigned long long)thumbnailBatchFetchSize;
-(void)addAvailableThumbnailIndex:(unsigned long long)arg1 ;
-(unsigned long long)nextThumbnailIndex;
-(NSMutableSet *)existingUUIDs;
-(NSMutableDictionary *)existingUUIDsByUppercasePath;
-(NSMutableDictionary *)existingOIDsByUUID;
-(void)setThumbnailBatchFetchSize:(unsigned long long)arg1 ;
-(id)initWithPhotoLibrary:(id)arg1 ;
@end

