/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFMailMessage.h>

@class NSString, NSMutableDictionary, NSMutableSet, MFLock;

@interface MFLibraryMessage : MFMailMessage {

	unsigned _libraryID;
	NSString* _remoteID;
	unsigned _uid;
	unsigned long long _uniqueRemoteId;
	unsigned long long _size;
	unsigned _mailboxID;
	unsigned _originalMailboxID;
	NSString* _messageID;
	unsigned long long _conversationFlags;
	NSMutableDictionary* _metadata;
	NSMutableSet* _metadataChangedKeys;
	MFLock* _metadataLock;

}
+(id)messageWithLibraryID:(unsigned)arg1 ;
-(void)setMessageSize:(unsigned long long)arg1 ;
-(unsigned long long)messageSize;
-(void)setUid:(unsigned)arg1 ;
-(id)messageID;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)path;
-(void)commit;
-(unsigned)uid;
-(void)setMetadataValue:(id)arg1 forKey:(id)arg2 ;
-(id)library;
-(unsigned)libraryID;
-(id)_privacySafeDescription;
-(BOOL)hasTemporaryUid;
-(BOOL)isMessageContentsLocallyAvailable;
-(unsigned)originalMailboxID;
-(id)initWithLibraryID:(unsigned)arg1 ;
-(void)_updateUID;
-(void)setPreferredEncoding:(unsigned)arg1 ;
-(void)setMessageFlagsWithoutCommitting:(unsigned long long)arg1 ;
-(id)copyMessageInfo;
-(void)setMailboxID:(unsigned)arg1 ;
-(void)_initializeMetadata;
-(unsigned)mailboxID;
-(id)_attachmentStorageLocation;
-(void)_forceLoadOfMessageSummaryFromProtectedStore;
-(void)loadCachedHeaderValuesFromHeaders:(id)arg1 ;
-(void)setOriginalMailboxID:(unsigned)arg1 ;
-(id)originalMailboxURL;
-(unsigned long long)uniqueRemoteId;
-(void)setUniqueRemoteId:(unsigned long long)arg1 ;
-(void)setIsPartial:(BOOL)arg1 ;
-(void)setHasTemporaryUid:(BOOL)arg1 ;
-(id)mailboxName;
-(long long)compareByUidWithMessage:(id)arg1 ;
-(void)setMessageFlags:(unsigned long long)arg1 ;
-(void)setMutableInfoFromMessage:(id)arg1 ;
-(id)dataPathForMimePart:(id)arg1 ;
-(void)markAsViewed;
-(void)markAsNotViewed;
-(void)markAsFlagged;
-(void)markAsNotFlagged;
-(void)markAsReplied;
-(void)markAsForwarded;
-(void)setRemoteID:(const char*)arg1 flags:(unsigned long long)arg2 size:(unsigned)arg3 mailboxID:(unsigned)arg4 originalMailboxID:(unsigned)arg5 ;
-(void)setMessageData:(id)arg1 isPartial:(BOOL)arg2 ;
-(id)dataConsumerForMimePart:(id)arg1 ;
-(BOOL)isLibraryMessage;
-(id)metadataValueOfClass:(Class)arg1 forKey:(id)arg2 ;
-(id)attachmentStorageLocation;
-(id)persistentID;
-(unsigned long long)conversationFlags;
-(id)mailbox;
-(id)messageStore;
-(void)setConversationFlags:(unsigned long long)arg1 ;
-(BOOL)isPartial;
-(id)preferredEmailAddressToReplyWith;
-(id)account;
-(void)setSummary:(id)arg1 ;
-(void)setFlags:(unsigned long long)arg1 ;
-(id)remoteID;
-(void)setRemoteID:(id)arg1 ;
@end

