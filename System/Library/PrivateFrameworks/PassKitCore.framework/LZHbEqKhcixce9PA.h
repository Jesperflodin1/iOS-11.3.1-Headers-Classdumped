/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:28 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/pjRPsXEyBJiXQnH9.h>

@class NSXPCConnection, NSString;

@interface LZHbEqKhcixce9PA : NSObject <pjRPsXEyBJiXQnH9> {

	NSXPCConnection* _connection;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)initWithServiceName:(id)arg1 ;
-(void)computeScoresUsingSettings:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getScoreMessageWithIdentifier:(id)arg1 hostChallenge:(id)arg2 challengeResponse:(id)arg3 seid:(id)arg4 nonce:(id)arg5 completion:(/*^block*/id)arg6 ;
@end
