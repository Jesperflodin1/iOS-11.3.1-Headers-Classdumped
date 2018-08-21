/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MailAccount.h>

@interface LocalAccount : MailAccount
+(id)localAccount;
+(id)accountTypeIdentifier;
+(id)accountTypeString;
+(id)csAccountTypeString;
+(id)legacyPathNameForAccountWithHostname:(id)arg1 username:(id)arg2 ;
-(void)setHostname:(id)arg1 ;
-(BOOL)isActive;
-(id)uniqueId;
-(id)displayName;
-(BOOL)canGoOffline;
-(id)initWithLibrary:(id)arg1 persistentAccount:(id)arg2 ;
-(void)resetSpecialMailboxes;
-(id)_copyMailboxUidWithParent:(id)arg1 name:(id)arg2 attributes:(unsigned)arg3 existingMailboxUid:(id)arg4 dictionary:(id)arg5 ;
-(id)_URLScheme;
-(id)mailboxUidForRelativePath:(id)arg1 create:(BOOL)arg2 withOption:(int)arg3 ;
-(id)primaryMailboxUid;
-(Class)storeClass;
-(void)_synchronouslyLoadListingForParent:(id)arg1 ;
-(BOOL)renameMailbox:(id)arg1 newName:(id)arg2 parent:(id)arg3 ;
-(id)mailboxPathExtension;
-(id)_infoForMatchingURL:(id)arg1 ;
-(id)pushedMailboxUids;
-(BOOL)_setChildren:(id)arg1 forMailboxUid:(id)arg2 ;
-(id)transientDraftsFolderShouldCreate:(BOOL)arg1 ;
-(id)legacySQLExpressionToMatchAllMailboxes;
-(BOOL)canFetch;
-(BOOL)_shouldConfigureMailboxCache;
-(BOOL)supportsPurge;
-(id)mailboxUidForFileSystemPath:(id)arg1 ;
-(id)transientDraftsFolder;
-(BOOL)deleteInPlaceForMailbox:(id)arg1 ;
-(BOOL)supportsAppend;
-(BOOL)supportsArchiving;
-(void)setUsername:(id)arg1 ;
-(void)setPassword:(id)arg1 ;
@end
