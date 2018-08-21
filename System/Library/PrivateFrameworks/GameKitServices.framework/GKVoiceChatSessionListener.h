/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/GameKitServices.framework/GameKitServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, GKSessionInternal, GKRWLock;

@interface GKVoiceChatSessionListener : NSObject {

	NSMutableArray* _conferenceList;
	GKSessionInternal* _gkSession;
	GKRWLock* _rwlock;

}
-(void)dealloc;
-(id)currentSessions;
-(void)removeSession:(id)arg1 ;
-(id)initWithSession:(id)arg1 ;
-(void)receivedNewVoiceChatOOBMessage:(id)arg1 fromPeerID:(id)arg2 ;
-(void)registerNewGKVoiceChatSession:(id)arg1 ;
-(void)session:(id)arg1 peer:(id)arg2 didChangeState:(int)arg3 ;
@end

