/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:54 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapsSupport/MSPReplica.h>

@interface MSPOrderedReplica : MSPReplica
+(id)allowedEditClasses;
+(void)_switchForEdit:(id)arg1 caseIsInsertRecord:(/*^block*/id)arg2 caseIsEditContents:(/*^block*/id)arg3 caseIsEditPosition:(/*^block*/id)arg4 ;
-(void)_mergeSelfRecord:(id)arg1 withRecordFromOtherReplica:(id)arg2 identifier:(id)arg3 options:(id)arg4 edits:(id)arg5 ;
-(BOOL)_containerSerializationRequiresTrackingPositionEdits;
-(id)orderedReplicaByApplyingContainerEdits:(id)arg1 toOldContents:(id)arg2 forNewContents:(id)arg3 recordCreationHandler:(/*^block*/id)arg4 replicaEditApplier:(/*^block*/id)arg5 error:(out id*)arg6 ;
@end
