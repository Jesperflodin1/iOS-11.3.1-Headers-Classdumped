/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PKXPCServiceDelegate <NSObject>
@optional
-(void)remoteServiceDidResume:(id)arg1;
-(void)remoteServiceDidSuspend:(id)arg1;

@required
-(void)remoteService:(id)arg1 didEstablishConnection:(id)arg2;
-(void)remoteService:(id)arg1 didInterruptConnection:(id)arg2;

@end

