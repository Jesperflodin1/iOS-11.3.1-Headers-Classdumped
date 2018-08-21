/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:27 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Message/MFDAMailAccountConsumer.h>
#import <libobjc.A.dylib/DAMailboxRequestConsumer.h>
#import <libobjc.A.dylib/DAMailboxStreamingContentConsumer.h>

@class NSArray, NSString, MFActivityMonitor, NSMutableData, NSMutableDictionary, NSConditionLock;

@interface MFDAMailAccountSyncConsumer : MFDAMailAccountConsumer <DAMailboxRequestConsumer, DAMailboxStreamingContentConsumer> {

	NSArray* _requests;
	NSArray* _consumers;
	NSString* _tag;
	NSString* _accountID;
	MFActivityMonitor* _monitor;
	id _streamConsumer;
	NSMutableData* _bodyData;
	BOOL _moreAvailable;
	BOOL _receivedFirstItem;
	BOOL _firstSyncBatch;
	int _syncKeyResets;
	int _serverErrors;
	NSMutableDictionary* _syncResponseConsumersByMessageId;
	NSConditionLock* _accountHierarchyLock;

}

@property (nonatomic,readonly) NSString * tag;                  //@synthesize tag=_tag - In the implementation block
@property (nonatomic,retain) id streamConsumer;                 //@synthesize streamConsumer=_streamConsumer - In the implementation block
@property (nonatomic,readonly) BOOL moreAvailable;              //@synthesize moreAvailable=_moreAvailable - In the implementation block
-(void)dealloc;
-(void)reset;
-(NSString *)tag;
-(void)accountHierarchyChanged:(id)arg1 ;
-(id)initWithCurrentTag:(id)arg1 accountID:(id)arg2 requests:(id)arg3 consumers:(id)arg4 ;
-(void)taskFailed:(id)arg1 statusCode:(long long)arg2 error:(id)arg3 ;
-(void)_setTag:(id)arg1 ;
-(id)actionsConsumer;
-(id)originalThreadMonitor;
-(void)handleSyncResponses:(id)arg1 ;
-(void)setStreamConsumer:(id)arg1 ;
-(id)streamConsumer;
-(BOOL)shouldBeginStreamingForMailMessage:(id)arg1 format:(int)arg2 ;
-(void)consumeData:(char*)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(id)arg4 ;
-(void)didEndStreamingForMailMessage:(id)arg1 ;
-(BOOL)refreshFolderHierarchyAndWait:(unsigned long long)arg1 ;
-(void)resultsForMailbox:(id)arg1 newTag:(id)arg2 actions:(id)arg3 responses:(id)arg4 percentComplete:(double)arg5 moreAvailable:(BOOL)arg6 sentBytesCount:(unsigned long long)arg7 receivedBytesCount:(unsigned long long)arg8 ;
-(void)partialResultsForMailbox:(id)arg1 actions:(id)arg2 responses:(id)arg3 percentComplete:(double)arg4 moreAvailable:(BOOL)arg5 ;
-(BOOL)moreAvailable;
@end

