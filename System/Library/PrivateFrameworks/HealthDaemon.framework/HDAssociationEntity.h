/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:37 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDHealthEntity.h>

@interface HDAssociationEntity : HDHealthEntity
+(id)databaseTable;
+(id)columnsDefinition;
+(long long)protectionClass;
+(id)propertyForSyncProvenance;
+(id)uniquedColumns;
+(id)indices;
+(BOOL)associateSampleUUIDs:(id)arg1 withSampleUUID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)insertEntriesWithAssociationUUID:(id)arg1 objectUUIDsData:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)joinClausesForProperty:(id)arg1 ;
+(id)privateSubEntities;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 enforceSameSource:(BOOL)arg4 permitPendingAssociations:(BOOL)arg5 profile:(id)arg6 error:(id*)arg7 ;
+(BOOL)_insertEntriesWithParentUUID:(id)arg1 childUUIDsData:(id)arg2 provenance:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
+(id)_insertAssociationEntryWithAssociationID:(long long)arg1 objectID:(long long)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertPendingAssociationsForParentUUID:(id)arg1 childUUIDData:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(BOOL)_insertPendingAssociationForParentUUID:(id)arg1 childUUID:(id)arg2 provenance:(long long)arg3 database:(id)arg4 error:(id*)arg5 ;
+(id)tableAliases;
+(id)associationPropertyForEntityClass:(Class)arg1 ;
+(BOOL)insertEntriesWithAssociation:(id)arg1 objects:(id)arg2 enforceSameSource:(BOOL)arg3 profile:(id)arg4 database:(id)arg5 error:(id*)arg6 ;
+(BOOL)copyAssociationsFromObject:(id)arg1 toObject:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(BOOL)copyAssociationsFromObjectID:(id)arg1 toObjectID:(id)arg2 profile:(id)arg3 error:(id*)arg4 ;
+(id)journalEntryForAssociation:(id)arg1 objects:(id)arg2 ;
+(BOOL)realizePendingAssociationsWithDatabase:(id)arg1 error:(id*)arg2 ;
+(id)objectIDsForAssociationEntityWithPersistentID:(long long)arg1 profile:(id)arg2 error:(id*)arg3 ;
+(id)deleteStatementForAssociationWithDatabase:(id)arg1 ;
+(id)deleteStatementForObjectAssociationsWithDatabase:(id)arg1 ;
+(BOOL)_enumerateAssociationsWithPredicate:(id)arg1 session:(id)arg2 syncAnchorRange:(HDSyncAnchorRange)arg3 lastSyncAnchor:(long long*)arg4 healthDatabase:(id)arg5 error:(id*)arg6 block:(/*^block*/id)arg7 ;
@end

