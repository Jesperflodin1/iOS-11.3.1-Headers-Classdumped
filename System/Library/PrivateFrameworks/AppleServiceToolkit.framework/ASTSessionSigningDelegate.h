/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AppleServiceToolkit.framework/AppleServiceToolkit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ASTSessionSigningDelegate <ASTSessionDelegate>
@optional
-(void)session:(id)arg1 signPayload:(id)arg2 completionHandler:(/*^block*/id)arg3;
-(void)session:(id)arg1 signFile:(id)arg2 completionHandler:(/*^block*/id)arg3;

@required
-(void)session:(id)arg1 generateAuthInfoWithNonce:(id)arg2;

@end

