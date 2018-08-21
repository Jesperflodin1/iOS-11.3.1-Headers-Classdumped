/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplica.h>
#import <libobjc.A.dylib/MSPContainerStateSnapshot.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/MSPPropertyListReplicaDataSerialization.h>

@class NSString, NSArray, NSData;

@interface MSPHistoryReplica : MSPReplica <MSPContainerStateSnapshot, NSSecureCoding, MSPPropertyListReplicaDataSerialization>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * contents; 
@property (nonatomic,readonly) id propertyListRepresentation; 
@property (nonatomic,readonly) NSData * propertyListDataRepresentation; 
+(BOOL)supportsSecureCoding;
+(id)allowedEditClasses;
+(void)switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditModificationDate:(/*^block*/id)arg4 caseIsDeleteTombstone:(/*^block*/id)arg5 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)contents;
-(id)propertyListRepresentation;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(id)editsToMergeWithReplica:(id)arg1 mergeOptions:(id)arg2 ;
-(id)_sortedHistoryEntriesByApplyingEdits:(id)arg1 invalidEntryIdentifiers:(out id*)arg2 ;
-(id)editsToMergeWithReplica:(id)arg1 knownSyncDateForLeastRecentlySyncedClientIfAny:(id)arg2 ;
-(id)_additionalEditsToUpdateContentsOfRecord:(id)arg1 identifier:(id)arg2 ;
-(id)editsToMergeWithReplica:(id)arg1 ;
-(id)replicaByMergingWithReplica:(id)arg1 mergeOptions:(id)arg2 userVisibleEffectiveContentsChanged:(out BOOL*)arg3 ;
-(NSData *)propertyListDataRepresentation;
-(id)propertyListRepresentationDecoratingRecordsWithBlock:(/*^block*/id)arg1 ;
-(id)initWithPropertyListRepresentation:(id)arg1 recordCreationHandler:(/*^block*/id)arg2 ;
@end
