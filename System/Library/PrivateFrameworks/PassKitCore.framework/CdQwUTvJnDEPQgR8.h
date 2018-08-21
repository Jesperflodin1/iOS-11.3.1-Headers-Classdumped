/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSMutableDictionary, jprL7AuZZkLkFoBK, NSObject, NSString, NSError;

@interface CdQwUTvJnDEPQgR8 : NSObject {

	BOOL _callbackDone;
	BOOL _prepared;
	NSMutableDictionary* _identifier2UUID;
	jprL7AuZZkLkFoBK* _context;
	/*^block*/id _handler;
	NSObject*<OS_dispatch_queue> _callback_queue;
	NSObject*<OS_dispatch_queue> _score_id_queue;
	NSString* _lastScoreIdentifier;
	NSError* _prepareError;

}

@property (nonatomic,retain) jprL7AuZZkLkFoBK * context;                               //@synthesize context=_context - In the implementation block
@property (nonatomic,copy) id handler;                                                 //@synthesize handler=_handler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> callback_queue;              //@synthesize callback_queue=_callback_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> score_id_queue;              //@synthesize score_id_queue=_score_id_queue - In the implementation block
@property (nonatomic,retain) NSString * lastScoreIdentifier;                           //@synthesize lastScoreIdentifier=_lastScoreIdentifier - In the implementation block
@property (nonatomic,retain) NSError * prepareError;                                   //@synthesize prepareError=_prepareError - In the implementation block
+(id)scorerWithContext:(id)arg1 ;
-(jprL7AuZZkLkFoBK *)context;
-(void)stop;
-(void)setContext:(jprL7AuZZkLkFoBK *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(id)handler;
-(void)setHandler:(id)arg1 ;
-(void)prepareScoreMessage;
-(void)scoreWithScoreRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)settingsFromContext:(id)arg1 ;
-(void)scoreWithNonce:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_safeCallbackWithMessage:(id)arg1 uuid:(id)arg2 error:(id)arg3 ;
-(id)_decryptScores:(id)arg1 error:(id*)arg2 ;
-(void)scoreMessageWithNonce:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(NSObject*<OS_dispatch_queue>)callback_queue;
-(void)setCallback_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)score_id_queue;
-(void)setScore_id_queue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSString *)lastScoreIdentifier;
-(void)setLastScoreIdentifier:(NSString *)arg1 ;
-(NSError *)prepareError;
-(void)setPrepareError:(NSError *)arg1 ;
@end

