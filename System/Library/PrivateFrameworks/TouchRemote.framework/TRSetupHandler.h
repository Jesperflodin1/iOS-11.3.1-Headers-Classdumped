/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TRSetupHandlerDelegate;
@interface TRSetupHandler : NSObject {

	id<TRSetupHandlerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TRSetupHandlerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<TRSetupHandlerDelegate>)delegate;
-(void)setDelegate:(id<TRSetupHandlerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)registerMessageHandlersForSession:(id)arg1 ;
-(void)_handleCompletionRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleConfigurationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyDeviceRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleProxyAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleCompanionAuthenticationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleHandshakeRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleNetworkRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
-(void)_handleActivationRequest:(id)arg1 withResponseHandler:(/*^block*/id)arg2 ;
@end

