/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>
#import <libobjc.A.dylib/BRCTopLevelShareable.h>

@class BRCAliasItem, BRCDocumentItem, NSString;

@interface BRCDirectoryItem : BRCLocalItem <BRCTopLevelShareable> {

	long long _mtime;

}

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) long long mtime;                              //@synthesize mtime=_mtime - In the implementation block
@property (nonatomic,readonly) NSString * unsaltedBookmarkData; 
-(BOOL)isDirectory;
-(unsigned long long)diffAgainstServerItem:(id)arg1 ;
-(long long)mtime;
-(BRCDirectoryItem *)asDirectory;
-(unsigned long long)childItemCount;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)hasShareIDAndIsOwnedByMe;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2 ;
-(BOOL)hasDeadChildren;
-(BOOL)isDirectoryWithPackageName;
-(id)_initWithRelativePath:(id)arg1 parentGlobalID:(id)arg2 ;
-(id)_initFromPQLResultSet:(id)arg1 session:(id)arg2 db:(id)arg3 error:(id*)arg4 ;
-(BOOL)updateFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2 ;
-(void)markRemovedFromFilesystemForServerEdit:(BOOL)arg1 ;
-(id)asShareableItem;
-(id)_initWithServerItem:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)updateLocationAndMetaFromFSAtPath:(id)arg1 parentGlobalID:(id)arg2 ;
-(void)updateItemMetadataFromServerItem:(id)arg1 appliedSharingPermission:(BOOL)arg2 ;
-(id)clientZonesChildrenNeedingSyncUpAreIn;
-(BOOL)markChildrenLost;
-(BOOL)hasPendingLostChildren;
-(BOOL)_markChildrenLostForDeadParent;
-(BOOL)hasLostChildren;
-(void)_markLostDirectoryAsAlmostDead;
-(void)_retryPostponedIfNeededForDiffs:(unsigned long long)arg1 ;
-(BOOL)hasLiveChildren;
@end

