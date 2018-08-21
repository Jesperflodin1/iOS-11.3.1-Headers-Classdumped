/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:20:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DataAccess/DAAccount.h>
#import <DAEAS/DAValidityCheckConsumer.h>
#import <libobjc.A.dylib/ASSettingsTaskDelegate.h>

@class ASFolderHierarchy, ASProtocol, NSMutableSet, NSLock, NSError, NSString, ASTaskManager;

@interface ASAccount : DAAccount <DAValidityCheckConsumer, ASSettingsTaskDelegate> {

	ASFolderHierarchy* _folderHierarchy;
	ASProtocol* _protocol;
	NSMutableSet* _searchTaskSet;
	NSMutableSet* _autodiscoveryTasks;
	NSLock* _autodiscoverTaskLock;
	NSError* _autodiscovery401Error;
	BOOL _useHTTPForTesting;
	BOOL _useLocalhostForAutodiscoveryTesting;
	BOOL _oneAutodiscoverAtATime;
	BOOL _isValidating;
	int _asAccountVersion;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) ASTaskManager * taskManager; 
@property (assign,nonatomic) int mailNumberOfPastDaysToSync; 
@property (nonatomic,readonly) int mailNumberOfPastDaysToSyncUpperLimit; 
@property (assign,setter=setASAccountVersion:,nonatomic) int asAccountVersion;              //@synthesize asAccountVersion=_asAccountVersion - In the implementation block
+(void)cleanUpFilesForAccountWithId:(id)arg1 ;
-(BOOL)syncDefaultFoldersOnly;
-(void)setProtocolVersion:(id)arg1 ;
-(id)protocolVersion;
-(void)dealloc;
-(id)protocol;
-(void)cancelCalendarDirectorySearchWithID:(id)arg1 ;
-(id)inboxFolder;
-(id)sentItemsFolder;
-(id)deletedItemsFolder;
-(id)draftsFolder;
-(BOOL)isHotmailAccount;
-(BOOL)enabledForDADataclass:(long long)arg1 ;
-(int)supportsMailboxSearch;
-(int)supportsEmailFlagging;
-(int)mailNumberOfPastDaysToSync;
-(int)supportsDraftFolderSync;
-(int)supportsUniqueServerId;
-(int)supportsConversations;
-(BOOL)setFolderIdsThatExternalClientsCareAboutAdded:(id)arg1 deleted:(id)arg2 foldersTag:(id)arg3 ;
-(id)signingIdentityPersistentReference;
-(void)setSigningIdentityPersistentReference:(id)arg1 ;
-(id)encryptionIdentityPersistentReference;
-(void)setEncryptionIdentityPersistentReference:(id)arg1 ;
-(void)cancelTaskWithID:(int)arg1 ;
-(id)emailAddresses;
-(BOOL)isEqualToAccount:(id)arg1 ;
-(int)supportsSmartForwardReply;
-(void)applyNewAccountProperties:(id)arg1 saveIfDifferent:(BOOL)arg2 ;
-(void)setMailNumberOfPastDaysToSync:(int)arg1 ;
-(id)foldersTag;
-(id)folderIdsThatExternalClientsCareAbout;
-(id)folderIdsThatExternalClientsCareAboutForDataclasses:(long long)arg1 ;
-(int)sendMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 useSmartTasksIfPossible:(BOOL)arg8 sourceApplicationBundleIdentifier:(id)arg9 consumer:(id)arg10 context:(id)arg11 ;
-(int)sendSmartMessageWithRFC822Data:(id)arg1 messageID:(id)arg2 outgoingMessageType:(int)arg3 originalMessageFolderID:(id)arg4 originalMessageItemID:(id)arg5 originalMessageLongID:(id)arg6 originalAccountID:(id)arg7 replaceOriginalMime:(BOOL)arg8 sourceApplicationBundleIdentifier:(id)arg9 consumer:(id)arg10 context:(id)arg11 ;
-(id)existingTaskManager;
-(id)policyManager;
-(ASTaskManager *)taskManager;
-(void)autodiscoverTask:(id)arg1 completedWithStatus:(long long)arg2 accountInfo:(id)arg3 shouldRetryWithEmail:(id)arg4 error:(id)arg5 ;
-(void)fetchAttachmentTask:(id)arg1 completedWithStatus:(long long)arg2 dataWasBase64:(BOOL)arg3 error:(id)arg4 ;
-(void)fetchAttachmentTask:(id)arg1 receivedData:(id)arg2 ofContentType:(id)arg3 ;
-(id)calendarConstraintsPath;
-(id)addressBookConstraintsPath;
-(void)searchTask:(id)arg1 returnedResults:(id)arg2 ;
-(void)searchTask:(id)arg1 returnedTotalCount:(id)arg2 ;
-(void)searchTask:(id)arg1 finishedWithError:(id)arg2 ;
-(void)settingsTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 response:(id)arg4 ;
-(BOOL)itemOperationsTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(BOOL)itemOperationsTask:(id)arg1 hasPartialResponses:(id)arg2 ;
-(void)itemOperationsTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 responses:(id)arg4 ;
-(id)initWithBackingAccountInfo:(id)arg1 ;
-(id)_newPolicyManager;
-(void)account:(id)arg1 isValid:(BOOL)arg2 validationError:(id)arg3 ;
-(id)stateString;
-(BOOL)isGoogleAccount;
-(void)setEnabled:(BOOL)arg1 forDADataclass:(long long)arg2 ;
-(BOOL)upgradeAccount;
-(id)_folderHierarchy;
-(void)blowAwayFolderCache;
-(void)resetAccountID;
-(id)_visibleASFolders;
-(id)folderWithId:(id)arg1 ;
-(id)_defaultMailFolderWithDefaultType:(int)arg1 fallbackType:(int)arg2 fallbackName:(id)arg3 ;
-(id)asFolderWithId:(id)arg1 ;
-(id)folderIdsForPersistentPush;
-(id)folderIdsForPersistentPushForClientID:(id)arg1 ;
-(id)folderIdsForPersistentPushForDataclasses:(long long)arg1 clientID:(id)arg2 ;
-(id)defaultContactsFolder;
-(id)defaultEventsFolder;
-(id)defaultToDosFolder;
-(id)defaultNotesFolder;
-(void)_getContextElementsForItemChangeType:(unsigned long long)arg1 dataclass:(long long)arg2 nativeContext:(id)arg3 outContext:(id*)arg4 outServerId:(id*)arg5 ;
-(void)_removeInvitationsForMailboxFolderID:(id)arg1 ;
-(void)_fillOutActionsArray:(id)arg1 responseArray:(id)arg2 withTask:(id)arg3 added:(id)arg4 removed:(id)arg5 modified:(id)arg6 preserved:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(void*)_copyExchangeCalendarStore:(BOOL)arg1 ;
-(void)_explodeEmailAddress:(id)arg1 outUsername:(id*)arg2 outEmailAddress:(id*)arg3 ;
-(BOOL)_submitAutoDV2TaskForEmailAddress:(id)arg1 withConsumer:(id)arg2 ;
-(id)_easEndPointFQDNFromURL:(id)arg1 ;
-(BOOL)_generateAutodiscoverURLsForEmailAddress:(id)arg1 explicitUsername:(id)arg2 withConsumer:(id)arg3 ;
-(void)_silentlyTearDownAutodiscoveryTasks;
-(int)mailNumberOfPastDaysToSyncUpperLimit;
-(id)lastKnownProtocolVersion;
-(BOOL)shouldSavePropertiesForFolderPathsThatClientsCareAbout;
-(BOOL)_shouldSaveLastKnownProtocolVersion;
-(void)setLastKnownProtocolVersion:(id)arg1 save:(BOOL)arg2 ;
-(void)setLastKnownProtocolVersion:(id)arg1 ;
-(void)accountDidUpdateProtocolVersion;
-(BOOL)_shouldEditNotesSupportOnProtocolChange;
-(id)domainOnly;
-(id)usernameWithoutDomain;
-(BOOL)accountHasSignificantPropertyChangesFromOldAccountInfo:(id)arg1 ;
-(void)cleanupAccountFiles;
-(void)discoverInitialPropertiesWithConsumer:(id)arg1 ;
-(void)getOptionsTask:(id)arg1 completedWithStatus:(long long)arg2 supportedCommands:(id)arg3 supportedVersions:(id)arg4 error:(id)arg5 ;
-(int)sniffableTypeForFolder:(id)arg1 ;
-(id)contactsFolders;
-(id)eventsFolders;
-(id)toDosFolders;
-(id)notesFolders;
-(id)asFolderHierarchyTaskManager:(id)arg1 ;
-(id)defaultContainerIdentifierForDADataclass:(long long)arg1 ;
-(BOOL)setFolderIdsForPersistentPushAdded:(id)arg1 deleted:(id)arg2 clientID:(id)arg3 ;
-(BOOL)clearFolderIdsForPersistentPushWithClientID:(id)arg1 ;
-(BOOL)shouldFixOnDiskDeviceId;
-(void)folderItemsSyncTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 newSyncKey:(id)arg4 added:(id)arg5 removed:(id)arg6 modified:(id)arg7 addedResponse:(id)arg8 modifiedResponse:(id)arg9 removedResponse:(id)arg10 fetchedResponse:(id)arg11 ;
-(BOOL)folderItemsSyncTask:(id)arg1 handleStreamOperation:(int)arg2 forCodePage:(int)arg3 tag:(int)arg4 withParentItem:(id)arg5 withData:(char*)arg6 dataLength:(int)arg7 ;
-(BOOL)folderItemsSyncTask:(id)arg1 hasPartialAdded:(id)arg2 removed:(id)arg3 modified:(id)arg4 addedResponse:(id)arg5 modifiedResponse:(id)arg6 removedResponse:(id)arg7 fetchedResponse:(id)arg8 moreAvailable:(BOOL)arg9 ;
-(void)sendMailTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 ;
-(void*)_copyABAccount:(BOOL)arg1 ;
-(void*)_copyDefaultExchangeEventsCalendar:(BOOL)arg1 ;
-(void)moveItemsTask:(id)arg1 completedWithStatus:(long long)arg2 error:(id)arg3 movedItems:(id)arg4 ;
-(void)_reallyCancelSearchQuery:(id)arg1 ;
-(void)_reallyCancelAllSearchQueries;
-(void)_reallyCancelPendingSearchQuery:(id)arg1 ;
-(void)_reallyPerformSearchQuery:(id)arg1 ;
-(BOOL)_reallySearchQueriesRunning;
-(id)performCalendarDirectorySearchForTerms:(id)arg1 recordTypes:(id)arg2 resultLimit:(unsigned long long)arg3 consumer:(id)arg4 ;
-(void)setUseHTTPForTesting:(BOOL)arg1 ;
-(void)setUseLocalhostForAutodiscoveryTesting:(BOOL)arg1 ;
-(void)setOneAutodiscoverAtATime:(BOOL)arg1 ;
-(BOOL)autodiscoverOAuthAccountWithConsumer:(id)arg1 ;
-(void)autodiscoverV2Task:(id)arg1 completedWithStatus:(long long)arg2 authorizationURI:(id)arg3 easEndPoint:(id)arg4 error:(id)arg5 ;
-(BOOL)autodiscoverAccountConfigurationWithConsumer:(id)arg1 ;
-(void)setPrimarySMTPAddress:(id)arg1 emailAddresses:(id)arg2 ;
-(id)savedFolderPathsThatClientsCareAbout;
-(void)setSavedFolderPathsThatClientsCareAbout:(id)arg1 ;
-(void)upgradeWithProtocolVersion:(id)arg1 ;
-(BOOL)isActiveSyncAccount;
-(id)localizedIdenticalAccountFailureMessage;
-(id)localizedInvalidPasswordMessage;
-(id)onBehalfOfBundleIdentifier;
-(int)asAccountVersion;
-(void)setASAccountVersion:(int)arg1 ;
-(id)visibleFolders;
@end
