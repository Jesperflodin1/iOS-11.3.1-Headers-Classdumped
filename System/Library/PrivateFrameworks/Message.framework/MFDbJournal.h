/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Message/Message-Structs.h>
@class NSString, MFMailboxUid, NSMutableArray;

@interface MFDbJournal : NSObject {

	NSString* _path;
	MFMailboxUid* _mailbox;
	opaque_pthread_mutex_t _lock;
	int _fd;
	NSMutableArray* _journalStatements;
	NSMutableArray* _onMergeEnvelopeUpdates;

}
+(void)initialize;
+(id)legacyJournal;
+(id)journalForMailbox:(id)arg1 ;
+(long long)mergeWithLibrary:(id)arg1 ;
-(void)dealloc;
-(void)clear;
-(id)initWithMailbox:(id)arg1 ;
-(int)_executeStatements:(id)arg1 db:(sqlite3Ref)arg2 ;
-(BOOL)_writeToDisk:(sqlite3Ref)arg1 ;
-(BOOL)_markMailboxForReconciliation:(BOOL)arg1 db:(sqlite3Ref)arg2 ;
-(long long)mergeWithLibrary:(id)arg1 ;
-(int)_processJournalFile:(id)arg1 db:(sqlite3Ref)arg2 ;
-(BOOL)append:(const char*)arg1 mergeUpdateStatement:(const char*)arg2 ;
-(int)commit:(sqlite3Ref)arg1 isProtectedDataAvailable:(BOOL)arg2 ;
@end
