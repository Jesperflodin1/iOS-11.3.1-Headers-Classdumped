/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NotesShared/ICCloudSyncingObject.h>
#import <libobjc.A.dylib/ICCloudObject.h>

@class NSString, ICAttachment, NSData;

@interface ICMedia : ICCloudSyncingObject <ICCloudObject>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) ICAttachment * attachment; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSData * assetCryptoInitializationVector; 
@property (nonatomic,retain) NSData * assetCryptoTag; 
+(void)purgeAllMediaInContext:(id)arg1 ;
+(id)keyPathsForValuesAffectingParentCloudObject;
+(id)existingCloudObjectForRecordID:(id)arg1 context:(id)arg2 ;
+(id)newCloudObjectForRecord:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithAttachment:(id)arg1 forData:(id)arg2 filename:(id)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)mediaIdentifiersForAccount:(id)arg1 ;
+(void)purgeMediaFilesForIdentifiers:(id)arg1 ;
+(id)allMediaInContext:(id)arg1 ;
+(id)mediaWithIdentifier:(id)arg1 context:(id)arg2 ;
+(id)newMediaWithIdentifier:(id)arg1 context:(id)arg2 ;
+(void)purgeMedia:(id)arg1 ;
+(id)newMediaWithAttachment:(id)arg1 context:(id)arg2 ;
+(id)mediaDirectoryURL;
+(id)containerDirectoryURLForMediaWithIdentifier:(id)arg1 ;
+(id)exportableContainerDirectoryURLForMediaWithIdentifier:(id)arg1 ;
+(id)mediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 ;
+(id)exportableMediaURLForMediaWithIdentifier:(id)arg1 filename:(id)arg2 ;
+(id)exportableMediaDirectoryURL;
+(void)purgeAllMediaFiles;
+(id)newMediaWithAttachment:(id)arg1 forFileWrapper:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(id)newMediaWithAttachment:(id)arg1 forURL:(id)arg2 context:(id)arg3 error:(id*)arg4 ;
+(void)deleteMedia:(id)arg1 ;
+(void)undeleteMedia:(id)arg1 ;
-(void)setFilename:(NSString *)arg1 ;
-(BOOL)isValid;
-(id)data;
-(NSString *)filename;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)prepareForDeletion;
-(id)mediaURL;
-(id)recordZoneName;
-(id)recordType;
-(id)ic_loggingValues;
-(void)deleteFromLocalDatabase;
-(void)saveAndClearDecryptedData;
-(id)parentEncryptableObject;
-(id)parentCloudObject;
-(void)updateFlagToExcludeFromBackup;
-(void)updateFlagToExcludeFromBackupTouchFileIfNecessary:(BOOL)arg1 ;
-(BOOL)needsToBePushedToCloud;
-(id)dataWithoutImageMarkupMetadata:(BOOL)arg1 ;
-(BOOL)supportsDeletionByTTL;
-(void)fixBrokenReferences;
-(void)mergeDataFromRecord:(id)arg1 ;
-(BOOL)isInICloudAccount;
-(id)objectsToBeDeletedBeforeThisObject;
-(BOOL)hasAllMandatoryFields;
-(id)newlyCreatedRecord;
-(BOOL)shouldFallBackToCheckAllCryptoKeys;
-(void)resetUniqueIdentifier;
-(id)encryptedMediaURL;
-(id)exportableMediaURLWithUpdatedFileIfNecessary;
-(BOOL)writeDataFromAsset:(id)arg1 isArchivedDirectory:(BOOL)arg2 error:(id*)arg3 ;
-(id)mediaArchiveURL;
-(id)mediaTarArchiveURL;
-(BOOL)makeSureMediaDirectoryExists:(id*)arg1 ;
-(id)containerDirectoryURL;
-(id)exportableContainerDirectoryURL;
-(BOOL)writeDataWithBlock:(/*^block*/id)arg1 error:(id*)arg2 ;
-(BOOL)writeDataFromFileURL:(id)arg1 error:(id*)arg2 ;
-(BOOL)isArchivedDirectory;
-(void)deleteExportableMedia;
-(id)exportableMediaURL;
-(BOOL)makeSureExportableMediaDirectoryExists:(id*)arg1 ;
-(void)writeDataFromItemProvider:(id)arg1 checkForMarkupData:(BOOL)arg2 completionBlock:(/*^block*/id)arg3 ;
-(BOOL)writeDataFromFileWrapper:(id)arg1 error:(id*)arg2 ;
-(BOOL)writeData:(id)arg1 error:(id*)arg2 ;
-(BOOL)hasFile;
-(id)decryptedData;
@end

