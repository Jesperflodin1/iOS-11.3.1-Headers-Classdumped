/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:20 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ChatKit/ChatKit-Structs.h>
@class NSArray, NSString, IMChat, NSSet, NSAttributedString, CKEntity, CKComposition, IMService;

@interface CKConversation : NSObject {

	NSArray* _recipients;
	NSString* _name;
	IMChat* _chat;
	unsigned _limitToLoad;
	struct {
		unsigned ignoringTypingUpdates : 1;
	}  _conversationFlags;
	BOOL _needsReload;
	BOOL _isReportedAsSpam;
	int _wasDetectedAsSMSSpam;
	NSArray* _pendingHandles;
	NSSet* _pendingRecipients;
	NSAttributedString* _groupName;
	NSString* _previewText;

}

@property (nonatomic,retain) IMChat * chat;                                                          //@synthesize chat=_chat - In the implementation block
@property (nonatomic,retain) NSArray * recipients;                                                   //@synthesize recipients=_recipients - In the implementation block
@property (nonatomic,copy) NSString * previewText;                                                   //@synthesize previewText=_previewText - In the implementation block
@property (nonatomic,retain) NSSet * pendingRecipients;                                              //@synthesize pendingRecipients=_pendingRecipients - In the implementation block
@property (assign,nonatomic) unsigned limitToLoad;                                                   //@synthesize limitToLoad=_limitToLoad - In the implementation block
@property (assign,nonatomic) BOOL isReportedAsSpam;                                                  //@synthesize isReportedAsSpam=_isReportedAsSpam - In the implementation block
@property (nonatomic,readonly) NSArray * frequentReplies; 
@property (nonatomic,readonly) CKEntity * recipient; 
@property (nonatomic,copy,readonly) NSArray * recipientStrings; 
@property (nonatomic,readonly) unsigned long long recipientCount; 
@property (nonatomic,readonly) BOOL isToEmailAddress; 
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) BOOL hasDisplayName; 
@property (assign,nonatomic) NSString * displayName; 
@property (nonatomic,readonly) NSAttributedString * groupName;                                       //@synthesize groupName=_groupName - In the implementation block
@property (nonatomic,readonly) NSString * serviceDisplayName; 
@property (nonatomic,readonly) char buttonColor; 
@property (nonatomic,readonly) BOOL isPreviewTextForAttachment; 
@property (assign,getter=isPinned,nonatomic) BOOL pinned; 
@property (nonatomic,copy,readonly) NSString * senderIdentifier; 
@property (nonatomic,retain) CKComposition * unsentComposition; 
@property (nonatomic,readonly) unsigned long long unreadCount; 
@property (nonatomic,readonly) BOOL hasUnreadMessages; 
@property (getter=isMuted,nonatomic,readonly) BOOL muted; 
@property (getter=shouldSendReadReceipts,nonatomic,readonly) BOOL sendReadReceipts; 
@property (nonatomic,readonly) BOOL needsReload;                                                     //@synthesize needsReload=_needsReload - In the implementation block
@property (nonatomic,readonly) NSString * groupID; 
@property (nonatomic,readonly) NSString * deviceIndependentID; 
@property (nonatomic,readonly) int wasDetectedAsSMSSpam;                                             //@synthesize wasDetectedAsSMSSpam=_wasDetectedAsSMSSpam - In the implementation block
@property (nonatomic,readonly) IMService * sendingService; 
@property (assign,nonatomic) BOOL forceMMS; 
@property (getter=isGroupConversation,nonatomic,readonly) BOOL groupConversation; 
@property (nonatomic,readonly) BOOL canLeave; 
@property (getter=hasLeft,nonatomic,readonly) BOOL left; 
@property (nonatomic,readonly) BOOL supportsMutatingGroupMembers; 
@property (getter=hasLeftGroupChat,nonatomic,readonly) BOOL leftGroupChat; 
@property (nonatomic,readonly) BOOL shouldShowCharacterCount; 
@property (assign,nonatomic) BOOL localUserIsTyping; 
@property (assign,nonatomic) BOOL localUserIsRecording; 
@property (nonatomic,copy) NSString * localUserIsComposing; 
@property (getter=isPending,nonatomic,readonly) BOOL pending; 
@property (nonatomic,copy,readonly) NSArray * pendingEntities; 
@property (nonatomic,copy) NSArray * pendingHandles;                                                 //@synthesize pendingHandles=_pendingHandles - In the implementation block
@property (nonatomic,readonly) NSArray * handles; 
@property (nonatomic,readonly) unsigned long long disclosureAtomStyle; 
@property (assign,getter=isIgnoringTypingUpdates,nonatomic) BOOL ignoringTypingUpdates; 
+(id)newPendingConversation;
+(BOOL)isSMSSpamFilteringEnabled;
+(BOOL)pinnedConversationsEnabled;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 ;
+(double)_sms_maxTrimDurationForMediaType:(int)arg1 ;
+(double)_iMessage_maxTrimDurationForMediaType:(int)arg1 ;
+(BOOL)_sms_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_iMessage_canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
+(BOOL)_sms_canSendComposition:(id)arg1 error:(id*)arg2 ;
+(BOOL)_iMessage_canSendComposition:(id)arg1 error:(id*)arg2 ;
+(id)conversationForAddresses:(id)arg1 allowRetargeting:(BOOL)arg2 candidateConversation:(id)arg3 ;
+(long long)_iMessage_maxAttachmentCount;
+(BOOL)_iMessage_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(id)_iMessage_localizedErrorForReason:(long long)arg1 ;
+(unsigned long long)_iMessage_maxTransferFileSizeForWiFi:(BOOL)arg1 ;
+(long long)_sms_maxAttachmentCount;
+(BOOL)_sms_canSendMessageWithMediaObjectTypes:(int*)arg1 errorCode:(long long*)arg2 ;
+(BOOL)_sms_mediaObjectPassesRestriction:(id)arg1 ;
+(BOOL)_sms_mediaObjectPassesDurationCheck:(id)arg1 ;
+(id)_sms_localizedErrorForReason:(long long)arg1 ;
-(BOOL)hasDisplayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id)date;
-(BOOL)isPlaceholder;
-(BOOL)isPinned;
-(void)setPinned:(BOOL)arg1 ;
-(NSAttributedString *)groupName;
-(NSString *)senderIdentifier;
-(id)shortDescription;
-(NSArray *)handles;
-(NSString *)displayName;
-(id)uniqueIdentifier;
-(NSArray *)recipients;
-(void)setRecipients:(NSArray *)arg1 ;
-(BOOL)isMuted;
-(NSString *)groupID;
-(CKEntity *)recipient;
-(IMService *)sendingService;
-(id)copyForPendingConversation;
-(BOOL)isBusinessConversation;
-(BOOL)canInsertMoreRecipients;
-(BOOL)forceMMS;
-(void)setForceMMS:(BOOL)arg1 ;
-(IMChat *)chat;
-(NSString *)previewText;
-(id)displayNameForMediaObjects:(id)arg1 subject:(id)arg2 ;
-(BOOL)shouldShowCharacterCount;
-(NSArray *)recipientStrings;
-(BOOL)isPending;
-(unsigned long long)recipientCount;
-(char)sendButtonColor;
-(BOOL)canAcceptMediaObjectType:(int)arg1 givenMediaObjects:(id)arg2 ;
-(NSString *)deviceIndependentID;
-(void)_handleChatParticipantsDidChange:(id)arg1 ;
-(void)_handleChatJoinStateDidChange:(id)arg1 ;
-(void)_handlePreferredServiceChangedNotification:(id)arg1 ;
-(void)_chatItemsDidChange:(id)arg1 ;
-(void)_handleEngroupFinishedUpdating:(id)arg1 ;
-(void)_chatPropertiesChanged:(id)arg1 ;
-(id)initWithChat:(id)arg1 ;
-(NSArray *)pendingHandles;
-(void)setPendingHandles:(NSArray *)arg1 ;
-(void)resetCaches;
-(void)setNeedsReload;
-(long long)compareBySequenceNumberAndDateDescending:(id)arg1 ;
-(void)deleteAllMessagesAndRemoveGroup;
-(unsigned long long)unreadCount;
-(CKComposition *)unsentComposition;
-(BOOL)canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)canSendComposition:(id)arg1 error:(id*)arg2 ;
-(id)messagesFromComposition:(id)arg1 ;
-(void)setUnsentComposition:(CKComposition *)arg1 ;
-(void)sendMessage:(id)arg1 newComposition:(BOOL)arg2 ;
-(void)setIgnoringTypingUpdates:(BOOL)arg1 ;
-(double)maxTrimDurationForMediaType:(int)arg1 ;
-(void)acceptTransfer:(id)arg1 ;
-(int)wasDetectedAsSMSSpam;
-(void)loadAllMessages;
-(BOOL)hasLeft;
-(BOOL)hasLeftGroupChat;
-(BOOL)hasReplyEnabled;
-(void)setLocalUserIsComposing:(id)arg1 typingIndicatorIcon:(id)arg2 ;
-(void)setLocalUserIsComposing:(NSString *)arg1 ;
-(void)setLocalUserIsRecording:(BOOL)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(void)deleteAllMessages;
-(BOOL)isGroupConversation;
-(BOOL)isToEmailAddress;
-(void)sendMessage:(id)arg1 onService:(id)arg2 newComposition:(BOOL)arg3 ;
-(BOOL)hasUnreadMessages;
-(BOOL)hasVerifiedBusiness;
-(void)updateDisplayNameIfSMSSpam;
-(unsigned)limitToLoad;
-(void)setLoadedMessageCount:(unsigned long long)arg1 ;
-(id)messageWithComposition:(id)arg1 ;
-(void)markAllMessagesAsRead;
-(BOOL)isAppleConversation;
-(void)setMutedUntilDate:(id)arg1 ;
-(void)unmute;
-(BOOL)canLeave;
-(BOOL)shouldSendReadReceipts;
-(BOOL)isMakoConversation;
-(BOOL)supportsMutatingGroupMembers;
-(void)addRecipientHandles:(id)arg1 ;
-(void)setSendReadReceipts:(BOOL)arg1 ;
-(void)removeRecipientHandles:(id)arg1 ;
-(void)refreshServiceForSending;
-(BOOL)localUserIsRecording;
-(BOOL)localUserIsTyping;
-(void)setChat:(IMChat *)arg1 ;
-(void)resetNameCaches;
-(void)clearConversationLoadFromSpotlight;
-(BOOL)isDowngraded;
-(long long)maximumRecipientsForSendingService;
-(void)setPendingRecipients:(NSSet *)arg1 ;
-(void)enumerateMessagesWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)_clearTypingIndicatorsIfNecessary;
-(BOOL)isReportedAsSpam;
-(void)setIsReportedAsSpam:(BOOL)arg1 ;
-(void)_deleteAllMessagesAndRemoveGroup:(BOOL)arg1 ;
-(BOOL)_earlyReturnHistoryLoad;
-(void)setLimitToLoad:(unsigned)arg1 ;
-(NSArray *)frequentReplies;
-(BOOL)hasLoadedFromSpotlight;
-(void)loadMoreMessagesBeforeFirstMessage;
-(void)reloadIfNeeded;
-(void)setLoadedMessageCount:(unsigned long long)arg1 loadImmediately:(BOOL)arg2 ;
-(BOOL)_sms_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_iMessage_canSendToRecipients:(id)arg1 alertIfUnable:(BOOL)arg2 ;
-(BOOL)_chatSupportsTypingIndicators;
-(NSString *)localUserIsComposing;
-(BOOL)_sms_supportsCharacterCountForAddresses:(id)arg1 ;
-(BOOL)_iMessage_supportsCharacterCountForAddresses:(id)arg1 ;
-(id)_nameForHandle:(id)arg1 ;
-(id)_headerTitleForPendingMediaObjects:(id)arg1 subject:(id)arg2 onService:(id)arg3 ;
-(id)_headerTitleForService:(id)arg1 ;
-(void)willBecomeInactive;
-(void)didBecomeActive;
-(BOOL)isIgnoringTypingUpdates;
-(id)orderedContactsForAvatarView;
-(BOOL)_handleIsForThisConversation:(id)arg1 ;
-(BOOL)noAvailableServices;
-(void)loadAllUnreadMessagesUpToMessageGUID:(id)arg1 ;
-(void)loadMoreMessagesAfterLastMessage;
-(void)loadFrequentReplies;
-(void)loadMoreMessages;
-(id)ensureMessageWithGUIDIsLoaded:(id)arg1 ;
-(void)setPendingComposeRecipients:(id)arg1 ;
-(NSArray *)pendingEntities;
-(void)updateUserActivity;
-(unsigned long long)disclosureAtomStyle;
-(BOOL)isPreviewTextForAttachment;
-(char)buttonColor;
-(char)outgoingBubbleColor;
-(NSString *)serviceDisplayName;
-(BOOL)needsReload;
-(NSSet *)pendingRecipients;
-(void)setPreviewText:(NSString *)arg1 ;
-(BOOL)_sms_willSendMMSByDefaultForAddresses:(id)arg1 ;
-(BOOL)supportsSurf;
@end

