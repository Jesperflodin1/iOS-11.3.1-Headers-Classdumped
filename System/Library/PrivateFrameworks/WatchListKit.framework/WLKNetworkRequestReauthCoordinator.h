/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:01 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKit.framework/WatchListKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSLocking.h>

@class NSLock;

@interface WLKNetworkRequestReauthCoordinator : NSObject <NSLocking> {

	NSLock* _lock;
	BOOL _sessionPrompt;

}

@property (assign) BOOL sessionPrompt;              //@synthesize sessionPrompt=_sessionPrompt - In the implementation block
+(id)coordinator;
-(void)dealloc;
-(id)_init;
-(void)lock;
-(void)unlock;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setSessionPrompt:(BOOL)arg1 ;
-(BOOL)sessionPrompt;
-(void)markPrompt;
-(BOOL)didPrompt;
@end

