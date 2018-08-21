/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocs/CloudDocs-Structs.h>
#import <libobjc.A.dylib/NSFileProviderItem_Private.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSURL, NSNumber, NSString, BRFileObjectID, NSMutableDictionary, NSDate, NSData, NSError, NSPersonNameComponents, NSDictionary;

@interface BRQueryItem : NSObject <NSFileProviderItem_Private, NSSecureCoding, NSCopying> {

	NSString* _appLibraryID;
	NSString* _parentPath;
	NSString* _logicalName;
	NSString* _physicalName;
	NSString* _bookmarkData;
	BRFileObjectID* _fileObjectID;
	BRFileObjectID* _parentFileObjectID;
	NSNumber* _size;
	NSNumber* _mtime;
	NSNumber* _btime;
	NSNumber* _lastUsedTime;
	NSNumber* _favoriteRank;
	NSNumber* _childItemCount;
	NSURL* _url;
	NSURL* _localRepresentationURL;
	NSNumber* _parentZoneRowID;
	NSNumber* _zoneRowID;
	NSMutableDictionary* _attrs;
	id _replacement;
	SCD_Union_BR4 _flags;
	long long _logicalHandle;
	long long _physicalHandle;
	unsigned long long _parentFileID;
	unsigned short _diffs;
	BOOL _isNetworkOffline;

}

@property (nonatomic,readonly) unsigned short diffs; 
@property (nonatomic,readonly) unsigned br_downloadStatus; 
@property (nonatomic,readonly) unsigned br_uploadStatus; 
@property (nonatomic,readonly) unsigned br_shareOptions; 
@property (nonatomic,readonly) BOOL isInTransfer; 
@property (nonatomic,readonly) BOOL isConflicted; 
@property (nonatomic,readonly) BOOL isLive; 
@property (nonatomic,readonly) BOOL isDead; 
@property (nonatomic,readonly) BOOL isDocument; 
@property (nonatomic,readonly) BOOL isDirectory; 
@property (nonatomic,readonly) BOOL isSymlink; 
@property (nonatomic,readonly) BOOL isFinderBookmark; 
@property (assign,nonatomic) BOOL isPreCrash; 
@property (nonatomic,readonly) BOOL isUploadActive; 
@property (nonatomic,readonly) BOOL isDownloadActive; 
@property (nonatomic,readonly) NSNumber * isDownloadRequested; 
@property (nonatomic,readonly) BOOL isBRAlias; 
@property (nonatomic,readonly) BOOL isTrashed; 
@property (nonatomic,readonly) NSString * appLibraryID; 
@property (nonatomic,readonly) NSString * parentPath; 
@property (nonatomic,readonly) NSString * logicalName; 
@property (nonatomic,readonly) NSString * physicalName; 
@property (nonatomic,readonly) BRFileObjectID * fileObjectID; 
@property (nonatomic,readonly) NSNumber * size; 
@property (nonatomic,readonly) NSNumber * mtime; 
@property (nonatomic,readonly) NSNumber * btime; 
@property (nonatomic,readonly) NSNumber * lastUsedTime; 
@property (nonatomic,readonly) NSNumber * favoriteRank; 
@property (nonatomic,readonly) NSURL * url; 
@property (nonatomic,readonly) NSURL * localRepresentationURL; 
@property (nonatomic,readonly) NSString * path; 
@property (assign,nonatomic) BOOL isNetworkOffline; 
@property (assign,nonatomic) id replacement; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSString * itemIdentifier; 
@property (nonatomic,copy,readonly) NSString * parentItemIdentifier; 
@property (nonatomic,copy,readonly) NSString * filename; 
@property (nonatomic,copy,readonly) NSString * typeIdentifier; 
@property (nonatomic,readonly) unsigned long long capabilities; 
@property (nonatomic,copy,readonly) NSNumber * documentSize; 
@property (nonatomic,copy,readonly) NSNumber * childItemCount; 
@property (nonatomic,copy,readonly) NSDate * creationDate; 
@property (nonatomic,copy,readonly) NSDate * contentModificationDate; 
@property (nonatomic,copy,readonly) NSDate * lastUsedDate; 
@property (nonatomic,copy,readonly) NSData * tagData; 
@property (getter=isTrashed,nonatomic,readonly) BOOL trashed; 
@property (getter=isUploaded,nonatomic,readonly) BOOL uploaded; 
@property (getter=isUploading,nonatomic,readonly) BOOL uploading; 
@property (nonatomic,copy,readonly) NSError * uploadingError; 
@property (getter=isDownloaded,nonatomic,readonly) BOOL downloaded; 
@property (getter=isDownloading,nonatomic,readonly) BOOL downloading; 
@property (nonatomic,copy,readonly) NSError * downloadingError; 
@property (getter=isMostRecentVersionDownloaded,nonatomic,readonly) BOOL mostRecentVersionDownloaded; 
@property (getter=isShared,nonatomic,readonly) BOOL shared; 
@property (getter=isSharedByCurrentUser,nonatomic,readonly) BOOL sharedByCurrentUser; 
@property (nonatomic,readonly) NSPersonNameComponents * ownerNameComponents; 
@property (nonatomic,readonly) NSPersonNameComponents * mostRecentEditorNameComponents; 
@property (nonatomic,readonly) NSData * versionIdentifier; 
@property (nonatomic,readonly) NSDictionary * userInfo; 
@property (copy,readonly) NSURL * fileURL; 
@property (copy,readonly) NSNumber * hasUnresolvedConflicts; 
@property (copy,readonly) NSString * containerDisplayName; 
@property (getter=isDownloadRequested,copy,readonly) NSNumber * downloadRequested; 
@property (getter=isHidden,readonly) BOOL hidden; 
@property (copy,readonly) NSString * providerIdentifier; 
@property (copy,readonly) NSString * sharingPermissions; 
@property (copy,readonly) NSString * fp_spotlightDomainIdentifier; 
@property (copy,readonly) NSString * fp_domainIdentifier; 
@property (getter=fp_isUbiquitous,readonly) BOOL fp_ubiquitous; 
@property (copy,readonly) NSString * fp_appContainerBundleIdentifier; 
@property (readonly) BOOL fp_isContainer; 
@property (nonatomic,copy,readonly) NSString * displayName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)askDaemonQueryItemForURL:(id)arg1 andFakeFSEvent:(BOOL)arg2 error:(id*)arg3 ;
+(id)askDaemonQueryItemForURL:(id)arg1 error:(id*)arg2 ;
+(id)containerItemForContainer:(id)arg1 forceScan:(BOOL)arg2 ;
+(id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 ;
+(id)containerItemForContainer:(id)arg1 withDocumentsItem:(id)arg2 zoneRowID:(id)arg3 ;
-(id)attributesForNames:(id)arg1 ;
-(BOOL)isDirectory;
-(BOOL)isLive;
-(BOOL)isDownloaded;
-(BOOL)isUploading;
-(void)setAttribute:(id)arg1 forKey:(id)arg2 ;
-(NSString *)parentItemIdentifier;
-(NSData *)tagData;
-(NSError *)uploadingError;
-(NSError *)downloadingError;
-(BOOL)isMostRecentVersionDownloaded;
-(BOOL)isSharedByCurrentUser;
-(NSPersonNameComponents *)ownerNameComponents;
-(NSPersonNameComponents *)mostRecentEditorNameComponents;
-(NSNumber *)hasUnresolvedConflicts;
-(NSString *)containerDisplayName;
-(NSString *)sharingPermissions;
-(NSString *)fp_spotlightDomainIdentifier;
-(NSString *)fp_appContainerBundleIdentifier;
-(BOOL)fp_isContainer;
-(NSNumber *)size;
-(id)valueForKey:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)dealloc;
-(BOOL)isHidden;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSURL *)url;
-(NSDictionary *)userInfo;
-(NSString *)path;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)fileSize;
-(id)owner;
-(NSString *)typeIdentifier;
-(NSString *)displayName;
-(NSURL *)fileURL;
-(id)filePath;
-(NSString *)filename;
-(BOOL)isUploaded;
-(NSDate *)lastUsedDate;
-(id)attributeForKey:(id)arg1 ;
-(BOOL)isShared;
-(NSDate *)creationDate;
-(BOOL)isTrashed;
-(NSString *)itemIdentifier;
-(NSData *)versionIdentifier;
-(BOOL)isDownloading;
-(BOOL)isInTransfer;
-(void)setIsNetworkOffline:(BOOL)arg1 ;
-(BOOL)isUploadActive;
-(BOOL)isDownloadActive;
-(void)attachLogicalExtension:(id)arg1 physicalExtension:(id)arg2 ;
-(void)mergeProgressUpdate:(id)arg1 ;
-(BOOL)isConflicted;
-(NSURL *)localRepresentationURL;
-(id)sharedItemRole;
-(id)containerIDIfDesktopOrDocuments;
-(id)localizedFileNameIfDesktopOrDocuments;
-(id)initWithQueryItem:(id)arg1 ;
-(BOOL)isEqualToQueryItem:(id)arg1 ;
-(void)_mergeURL:(id)arg1 ;
-(void)_mergeAttrs:(id)arg1 ;
-(id)downloadingStatus;
-(NSNumber *)btime;
-(BOOL)isNetworkOffline;
-(unsigned)br_uploadStatus;
-(unsigned)br_shareOptions;
-(void)clearDiffs;
-(BOOL)isPreCrash;
-(void)setIsPreCrash:(BOOL)arg1 ;
-(BOOL)isSymlink;
-(void)setReplacement:(id)arg1 ;
-(NSDate *)contentModificationDate;
-(NSNumber *)documentSize;
-(id)replacement;
-(BOOL)isDocument;
-(NSString *)parentPath;
-(NSString *)appLibraryID;
-(BRFileObjectID *)fileObjectID;
-(BOOL)isBRAlias;
-(NSString *)logicalName;
-(id)parentFileID;
-(NSNumber *)favoriteRank;
-(NSString *)physicalName;
-(BOOL)isHiddenExt;
-(NSNumber *)mtime;
-(BOOL)isFinderBookmark;
-(BOOL)isDead;
-(NSNumber *)isDownloadRequested;
-(NSNumber *)childItemCount;
-(id)subclassDescription;
-(BOOL)canMerge:(id)arg1 ;
-(void)markDead;
-(unsigned)br_downloadStatus;
-(unsigned short)diffs;
-(NSNumber *)lastUsedTime;
-(unsigned long long)capabilities;
-(id)attributeForName:(id)arg1 ;
-(void)merge:(id)arg1 ;
-(id)attributeNames;
@end

