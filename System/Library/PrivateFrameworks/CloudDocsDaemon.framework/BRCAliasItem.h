/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudDocsDaemon/BRCLocalItem.h>

@class BRCDirectoryItem, BRCDocumentItem, BRCAppLibrary, BRCClientZone, BRCItemID;

@interface BRCAliasItem : BRCLocalItem

@property (nonatomic,readonly) BRCAliasItem * asBRAlias; 
@property (nonatomic,readonly) BRCDirectoryItem * asDirectory; 
@property (nonatomic,readonly) BRCDocumentItem * asDocument; 
@property (nonatomic,readonly) BRCAppLibrary * targetAppLibrary; 
@property (nonatomic,readonly) BRCClientZone * targetClientZone; 
@property (nonatomic,readonly) BRCItemID * targetItemID; 
+(void)fillStructureRecord:(id)arg1 inZone:(id)arg2 itemID:(id)arg3 ckInfo:(id)arg4 parentID:(id)arg5 targetItemID:(id)arg6 targetZone:(id)arg7 diffs:(unsigned long long)arg8 isFolderShare:(BOOL)arg9 beingDeadInServerTruth:(BOOL)arg10 pcsChained:(BOOL)arg11 ;
+(id)targetReferenceWithItemID:(id)arg1 targetZone:(id)arg2 isFolderShare:(BOOL)arg3 ;
-(BOOL)isBRAlias;
-(BRCAliasItem *)asBRAlias;
-(BOOL)changedAtRelativePath:(id)arg1 scanPackage:(BOOL)arg2 ;
-(BRCItemID *)targetItemID;
-(BRCClientZone *)targetClientZone;
-(BRCAppLibrary *)targetAppLibrary;
-(BOOL)evictInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(void)markNeedsUploadOrSyncingUpWithAliasTarget:(id)arg1 ;
-(BOOL)_insertInDB:(id)arg1 dbRowID:(unsigned long long)arg2 ;
-(BOOL)_updateInDB:(id)arg1 diffs:(unsigned long long)arg2 ;
-(void)targetMovedToThisAppLibrary;
-(void)learnTarget:(id)arg1 ;
-(void)rewriteOrDeleteAliasOnDiskWithTarget:(id)arg1 ;
-(void)markNeedsUploadOrSyncingUp;
-(void)_removeAliasAndMarkDead;
-(BOOL)startDownloadInTask:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)_deleteFromDB:(id)arg1 keepAliases:(BOOL)arg2 ;
-(BOOL)updateXattrInfoFromPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)updateOnDiskWithAliasTarget:(id)arg1 forServerEdit:(BOOL)arg2 ;
-(void)targetMovedToTrashOrDeleted;
-(id)structureRecordBeingDeadInServerTruth:(BOOL)arg1 stageID:(id)arg2 pcsChained:(BOOL)arg3 ;
-(id)targetDocument;
@end

