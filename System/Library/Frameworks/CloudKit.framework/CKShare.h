/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/CloudKit.framework/CloudKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CloudKit/CloudKit-Structs.h>
#import <CloudKit/CKRecord.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableSet, NSMutableArray, CKContainerID, CKRecordID, NSData, NSString, NSArray, CKShareID, NSURL, CKShareParticipant;

@interface CKShare : CKRecord <NSSecureCoding, NSCopying> {

	BOOL _allowsReadOnlyParticipantsToSeeEachOther;
	BOOL _serializePersonalInfo;
	long long _publicPermission;
	NSMutableSet* _addedParticipantIDs;
	NSMutableSet* _removedParticipantIDs;
	NSMutableArray* _lastFetchedParticipants;
	CKContainerID* _containerID;
	CKRecordID* _rootRecordID;
	NSMutableArray* _allParticipants;
	NSData* _invitedProtectionData;
	NSString* _invitedProtectionEtag;
	NSString* _previousInvitedProtectionEtag;
	NSData* _publicProtectionData;
	NSString* _publicProtectionEtag;
	NSString* _previousPublicProtectionEtag;
	NSArray* _invitedKeysToRemove;
	CKShareID* _shareID;

}

@property (nonatomic,retain) NSMutableSet * addedParticipantIDs;                         //@synthesize addedParticipantIDs=_addedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * removedParticipantIDs;                       //@synthesize removedParticipantIDs=_removedParticipantIDs - In the implementation block
@property (nonatomic,retain) NSMutableArray * lastFetchedParticipants;                   //@synthesize lastFetchedParticipants=_lastFetchedParticipants - In the implementation block
@property (nonatomic,retain) CKContainerID * containerID;                                //@synthesize containerID=_containerID - In the implementation block
@property (nonatomic,copy) CKRecordID * rootRecordID;                                    //@synthesize rootRecordID=_rootRecordID - In the implementation block
@property (nonatomic,retain) NSMutableArray * allParticipants;                           //@synthesize allParticipants=_allParticipants - In the implementation block
@property (nonatomic,retain) NSData * publicSharingIdentity; 
@property (nonatomic,retain) NSData * invitedProtectionData;                             //@synthesize invitedProtectionData=_invitedProtectionData - In the implementation block
@property (nonatomic,retain) NSString * invitedProtectionEtag;                           //@synthesize invitedProtectionEtag=_invitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousInvitedProtectionEtag;                   //@synthesize previousInvitedProtectionEtag=_previousInvitedProtectionEtag - In the implementation block
@property (nonatomic,retain) NSData * publicProtectionData;                              //@synthesize publicProtectionData=_publicProtectionData - In the implementation block
@property (nonatomic,retain) NSString * publicProtectionEtag;                            //@synthesize publicProtectionEtag=_publicProtectionEtag - In the implementation block
@property (nonatomic,retain) NSString * previousPublicProtectionEtag;                    //@synthesize previousPublicProtectionEtag=_previousPublicProtectionEtag - In the implementation block
@property (nonatomic,copy) NSURL * mutableURL; 
@property (assign,nonatomic) BOOL allowsReadOnlyParticipantsToSeeEachOther;              //@synthesize allowsReadOnlyParticipantsToSeeEachOther=_allowsReadOnlyParticipantsToSeeEachOther - In the implementation block
@property (nonatomic,retain) NSArray * invitedKeysToRemove;                              //@synthesize invitedKeysToRemove=_invitedKeysToRemove - In the implementation block
@property (assign,nonatomic) BOOL serializePersonalInfo;                                 //@synthesize serializePersonalInfo=_serializePersonalInfo - In the implementation block
@property (nonatomic,copy) CKShareID * shareID;                                          //@synthesize shareID=_shareID - In the implementation block
@property (assign,nonatomic) long long publicPermission;                                 //@synthesize publicPermission=_publicPermission - In the implementation block
@property (nonatomic,copy,readonly) NSURL * URL; 
@property (nonatomic,readonly) NSArray * participants; 
@property (nonatomic,readonly) CKShareParticipant * owner; 
@property (nonatomic,readonly) CKShareParticipant * currentUserParticipant; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg1 ;
-(id)description;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CKShareParticipant *)owner;
-(NSArray *)participants;
-(CKContainerID *)containerID;
-(void)_stripPersonalInfo;
-(void)_commonCKShareInit;
-(void)_addOwnerParticipant;
-(void)_addParticipantBypassingChecks:(id)arg1 ;
-(NSMutableSet *)removedParticipantIDs;
-(void)_removePendingPrivateAndAdminParticipants;
-(void)_removeAllParticipants;
-(void)setLastFetchedParticipants:(NSMutableArray *)arg1 ;
-(NSMutableArray *)lastFetchedParticipants;
-(NSMutableSet *)addedParticipantIDs;
-(void)setAddedParticipantIDs:(NSMutableSet *)arg1 ;
-(void)setRemovedParticipantIDs:(NSMutableSet *)arg1 ;
-(NSString *)previousInvitedProtectionEtag;
-(void)setPreviousInvitedProtectionEtag:(NSString *)arg1 ;
-(id)_knownParticipantEqualToParticipant:(id)arg1 ;
-(void)_removeParticipantBypassingChecks:(id)arg1 ;
-(BOOL)_participantArray:(id)arg1 containsEquivalentWithPermissionsParticipant:(id)arg2 ;
-(BOOL)_participantArray:(id)arg1 isEquivalentToArray:(id)arg2 ;
-(void)clearModifiedParticipants;
-(id)initWithRootRecord:(id)arg1 ;
-(void)_addParticipantEmails:(id)arg1 phoneNumbers:(id)arg2 asReadWrite:(BOOL)arg3 inContainer:(id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(id)_copyWithoutPersonalInfo;
-(void)_getDecryptedShareInContainer:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeParticipant:(id)arg1 ;
-(void)setPublicSharingIdentity:(NSData *)arg1 ;
-(void)CKAssignToContainerWithID:(id)arg1 ;
-(id)initWithRootRecord:(id)arg1 shareID:(id)arg2 ;
-(void)setSerializePersonalInfo:(BOOL)arg1 ;
-(BOOL)serializePersonalInfo;
-(NSArray *)invitedKeysToRemove;
-(BOOL)hasEncryptedData;
-(id)CKDescriptionPropertiesWithPublic:(BOOL)arg1 private:(BOOL)arg2 shouldExpand:(BOOL)arg3 ;
-(void)setContainerID:(CKContainerID *)arg1 ;
-(long long)publicPermission;
-(NSData *)invitedProtectionData;
-(NSData *)publicProtectionData;
-(NSString *)invitedProtectionEtag;
-(CKShareParticipant *)currentUserParticipant;
-(void)setPublicPermission:(long long)arg1 ;
-(NSString *)publicProtectionEtag;
-(id)privateToken;
-(void)setRootRecordID:(CKRecordID *)arg1 ;
-(CKRecordID *)rootRecordID;
-(id)encryptedPublicSharingKey;
-(NSData *)publicSharingIdentity;
-(id)addedParticipants;
-(void)setInvitedProtectionData:(NSData *)arg1 ;
-(void)setInvitedProtectionEtag:(NSString *)arg1 ;
-(void)setPublicProtectionData:(NSData *)arg1 ;
-(void)setPublicProtectionEtag:(NSString *)arg1 ;
-(NSMutableArray *)allParticipants;
-(id)removedParticipants;
-(void)setPreviousPublicProtectionEtag:(NSString *)arg1 ;
-(id)updateFromServerShare:(id)arg1 ;
-(void)setWantsPublicSharingKey:(BOOL)arg1 ;
-(void)addParticipant:(id)arg1 ;
-(id)shareURL;
-(id)copyWithOriginalValues;
-(NSString *)previousPublicProtectionEtag;
-(id)_initWithShareRecordID:(id)arg1 ;
-(void)_setPublicPermissionNoSideEffects:(long long)arg1 ;
-(void)setInvitedKeysToRemove:(NSArray *)arg1 ;
-(void)setAllowsReadOnlyParticipantsToSeeEachOther:(BOOL)arg1 ;
-(void)setAllParticipants:(NSMutableArray *)arg1 ;
-(void)resetFetchedParticipants;
-(void)registerFetchedParticipant:(id)arg1 ;
-(BOOL)allowsReadOnlyParticipantsToSeeEachOther;
-(CKShareID *)shareID;
-(void)setShareID:(CKShareID *)arg1 ;
-(void)encodeSystemFieldsWithCoder:(id)arg1 ;
@end

