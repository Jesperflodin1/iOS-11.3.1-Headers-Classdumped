/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CompanionSync.framework/CompanionSync
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CompanionSync/SYSession.h>

@protocol OS_os_activity;
@class NSObject, SYChangeMessage;

@interface SYIncomingTransactionSession : SYSession {

	NSObject*<OS_os_activity> _sessionActivity;
	SYChangeMessage* _message;
	/*^block*/id _completion;
	BOOL canRestart;
	BOOL canRollback;
	long long state;

}
-(unsigned long long)protocolVersion;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(void)cancelWithError:(id)arg1 ;
-(BOOL)canRestart;
-(void)setCanRestart:(BOOL)arg1 ;
-(BOOL)canRollback;
-(void)setCanRollback:(BOOL)arg1 ;
-(void)didCompleteSession;
-(void)_sendComplete;
-(void)_sendChanges;
-(void)_sendCancelled;
-(id)initWithService:(id)arg1 transaction:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)start:(/*^block*/id)arg1 ;
-(BOOL)isSending;
-(BOOL)wasCancelled;
-(BOOL)isResetSync;
@end
