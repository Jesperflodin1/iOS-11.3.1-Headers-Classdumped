/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:53 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/VisualVoicemail.framework/VisualVoicemail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject, NSProgress, NSOrderedSet, VMClientWrapper, VMVoicemailCapabilities, NSMutableSet, NSArray;

@interface VMVoicemailManager : NSObject {

	BOOL _messageWaiting;
	BOOL _online;
	BOOL _subscribed;
	BOOL _syncInProgress;
	BOOL _transcribing;
	BOOL _transcriptionEnabled;
	int _token;
	NSObject*<OS_dispatch_queue> _completionQueue;
	unsigned long long _storageUsage;
	NSProgress* _transcriptionProgress;
	NSOrderedSet* _voicemails;
	VMClientWrapper* _client;
	VMVoicemailCapabilities* _capabilities;
	NSMutableSet* _trashedMessages;
	NSObject*<OS_dispatch_queue> _concurrentDispatchQueue;

}

@property (getter=isTranscriptionEnabled,nonatomic,readonly) BOOL transcriptionEnabled; 
@property (assign,getter=isOnline,nonatomic) BOOL online;                                            //@synthesize online=_online - In the implementation block
@property (assign,getter=isSubscribed,nonatomic) BOOL subscribed;                                    //@synthesize subscribed=_subscribed - In the implementation block
@property (assign,getter=isMessageWaiting,nonatomic) BOOL messageWaiting;                            //@synthesize messageWaiting=_messageWaiting - In the implementation block
@property (assign,getter=isSyncInProgress,nonatomic) BOOL syncInProgress;                            //@synthesize syncInProgress=_syncInProgress - In the implementation block
@property (assign,getter=isTranscribing,nonatomic) BOOL transcribing;                                //@synthesize transcribing=_transcribing - In the implementation block
@property (nonatomic,copy) NSOrderedSet * voicemails;                                                //@synthesize voicemails=_voicemails - In the implementation block
@property (nonatomic,retain) VMClientWrapper * client;                                               //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) VMVoicemailCapabilities * capabilities;                                 //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) NSMutableSet * trashedMessages;                                         //@synthesize trashedMessages=_trashedMessages - In the implementation block
@property (assign,nonatomic) unsigned long long storageUsage;                                        //@synthesize storageUsage=_storageUsage - In the implementation block
@property (assign,nonatomic) int token;                                                              //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> completionQueue;                         //@synthesize completionQueue=_completionQueue - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> concurrentDispatchQueue;                 //@synthesize concurrentDispatchQueue=_concurrentDispatchQueue - In the implementation block
@property (nonatomic,readonly) NSArray * allVoicemails; 
@property (nonatomic,readonly) long long unreadCount; 
@property (nonatomic,readonly) BOOL canChangePassword; 
@property (nonatomic,readonly) BOOL canChangeGreeting; 
@property (getter=isTranscriptionEnabled,nonatomic,readonly) BOOL transcriptionEnabled;              //@synthesize transcriptionEnabled=_transcriptionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL mailboxRequiresSetup; 
@property (nonatomic,readonly) long long mailboxGreetingState; 
@property (nonatomic,readonly) double maximumGreetingDuration; 
@property (nonatomic,readonly) NSProgress * transcriptionProgress;                                   //@synthesize transcriptionProgress=_transcriptionProgress - In the implementation block
@property (nonatomic,readonly) unsigned long long minimumPasswordLength; 
@property (nonatomic,readonly) unsigned long long maximumPasswordLength; 
-(id)init;
-(void)synchronize;
-(void)dealloc;
-(int)token;
-(void)setToken:(int)arg1 ;
-(void)setSubscribed:(BOOL)arg1 ;
-(BOOL)isSubscribed;
-(id)serverConnection;
-(BOOL)isOnline;
-(long long)unreadCount;
-(void)setMessageWaiting:(BOOL)arg1 ;
-(BOOL)mailboxRequiresSetup;
-(BOOL)isMessageWaiting;
-(double)maximumGreetingDuration;
-(unsigned long long)minimumPasswordLength;
-(unsigned long long)maximumPasswordLength;
-(BOOL)isSyncInProgress;
-(void)_requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg1 ;
-(id)serverConnectionWithErrorHandler:(/*^block*/id)arg1 ;
-(id)synchronousServerConnectionWithErrorHandler:(/*^block*/id)arg1 ;
-(NSObject*<OS_dispatch_queue>)concurrentDispatchQueue;
-(BOOL)canChangePassword;
-(BOOL)canChangeGreeting;
-(long long)mailboxGreetingState;
-(NSOrderedSet *)voicemails;
-(NSArray *)allVoicemails;
-(id)voicemailsPassingTest:(/*^block*/id)arg1 ;
-(id)deleteVoicemails:(id)arg1 ;
-(id)markVoicemailsAsRead:(id)arg1 ;
-(id)trashVoicemails:(id)arg1 ;
-(id)removeVoicemailsFromTrash:(id)arg1 ;
-(void)setVoicemails:(NSOrderedSet *)arg1 ;
-(void)requestInitialStateIfNecessaryAndSendNotifications:(BOOL)arg1 ;
-(BOOL)isTranscribing;
-(void)retrieveGreetingWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)saveGreeting:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)retrieveDataForVoicemail:(id)arg1 ;
-(id)dataForVoicemailWithIdentifier:(unsigned long long)arg1 ;
-(id)uniqueIdentifierForVoiceMail:(id)arg1 ;
-(id)deleteVoicemail:(id)arg1 ;
-(id)trashVoicemail:(id)arg1 ;
-(id)removeVoicemailFromTrash:(id)arg1 ;
-(void)changePassword:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)voicemailsUpdated:(id)arg1 ;
-(void)setTranscribing:(BOOL)arg1 ;
-(void)setStorageUsage:(unsigned long long)arg1 ;
-(BOOL)isTranscriptionEnabled;
-(BOOL)isTranscriptionEnabled;
-(unsigned long long)storageUsage;
-(NSProgress *)transcriptionProgress;
-(NSMutableSet *)trashedMessages;
-(void)setTrashedMessages:(NSMutableSet *)arg1 ;
-(void)reportTranscriptionProblemForVoicemail:(id)arg1 ;
-(void)reportTranscriptionRatedAccurate:(BOOL)arg1 forVoicemail:(id)arg2 ;
-(id)voicemailWithIdentifier:(unsigned long long)arg1 ;
-(id)markVoicemailAsRead:(id)arg1 ;
-(unsigned long long)countOfVoicemailsPassingTest:(/*^block*/id)arg1 ;
-(void)setSyncInProgress:(BOOL)arg1 ;
-(VMClientWrapper *)client;
-(NSObject*<OS_dispatch_queue>)completionQueue;
-(void)setClient:(VMClientWrapper *)arg1 ;
-(VMVoicemailCapabilities *)capabilities;
-(void)setCapabilities:(VMVoicemailCapabilities *)arg1 ;
-(void)setOnline:(BOOL)arg1 ;
-(id)initWithClient:(id)arg1 ;
@end

