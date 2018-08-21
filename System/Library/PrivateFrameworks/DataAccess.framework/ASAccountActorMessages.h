/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:30 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASAccountActorMessages
@required
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11;
-(id)mailboxes;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(void)performFolderChange:(id)arg1 isUserRequested:(BOOL)arg2;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6;
-(int)performMoveRequests:(id)arg1 consumer:(id)arg2;
-(int)supportsDraftFolderSync;
-(int)supportsUniqueServerId;
-(BOOL)reattemptInvitationLinkageForMetaData:(id)arg1 inFolderWithId:(id)arg2;
-(id)unactionableICSRepresentationForMetaData:(id)arg1 inFolderWithId:(id)arg2 outSummary:(id*)arg3;
-(id)folderIDsThatExternalClientsCareAboutForDataclasses:(long long)arg1 withTag:(id*)arg2;
-(oneway void)monitorFoldersForUpdates:(id)arg1 persistent:(BOOL)arg2;
-(oneway void)stopMonitoringAllFolders;
-(int)supportsConversations;
-(oneway void)performSearchQuery:(id)arg1;
-(oneway void)cancelSearchQuery:(id)arg1;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3;
-(oneway void)stopMonitoringFoldersForUpdates:(id)arg1;
-(id)signingIdentityPersistentReference;
-(oneway void)setSigningIdentityPersistentReference:(id)arg1;
-(id)encryptionIdentityPersistentReference;
-(oneway void)setEncryptionIdentityPersistentReference:(id)arg1;
-(int)performResolveRecipientsRequest:(id)arg1 consumer:(id)arg2;
-(int)performFetchMessageSearchResultRequests:(id)arg1 consumer:(id)arg2;
-(int)performFetchAttachmentRequest:(id)arg1 consumer:(id)arg2;
-(oneway void)setCustomSignature:(id)arg1;
-(oneway void)cancelTaskWithID:(int)arg1;
-(oneway void)setAccount:(id)arg1;
-(int)supportsSmartForwardReply;
-(oneway void)setMailNumberOfPastDaysToSync:(int)arg1;
-(oneway void)cancelAllSearchQueries;
-(BOOL)searchQueriesRunning;
-(oneway void)_daemonDiedNotification:(id)arg1;
-(oneway void)_folderUpdatedNotification:(id)arg1;
-(oneway void)_newASPolicyKeyNotification:(id)arg1;
-(oneway void)_folderHierarchyChanged;
-(oneway void)_foldersThatExternalClientsCareAboutChanged;
-(BOOL)generatesBulletins;
-(oneway void)setGeneratesBulletins:(BOOL)arg1;
-(oneway void)monitorFoldersForUpdates:(id)arg1;
-(id)folderIDsThatExternalClientsCareAboutWithTag:(id*)arg1;
-(int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(BOOL)arg8 isUserRequested:(BOOL)arg9 consumer:(id)arg10 context:(id)arg11;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
-(int)performMailboxRequests:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 isUserRequested:(BOOL)arg4 consumer:(id)arg5;
-(int)performMailboxRequest:(id)arg1 mailbox:(id)arg2 previousTag:(id)arg3 clientWinsOnSyncConflict:(BOOL)arg4 isUserRequested:(BOOL)arg5 consumer:(id)arg6;
-(oneway void)_accountPasswordChanged;
-(oneway void)shutdown;
-(oneway void)startup;
-(id)customSignature;

@end

