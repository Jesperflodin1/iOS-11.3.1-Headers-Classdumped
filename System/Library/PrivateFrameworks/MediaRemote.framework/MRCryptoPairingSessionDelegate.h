/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRCryptoPairingSessionDelegate <NSObject>
@optional
-(void)pairingSession:(id)arg1 showSetupCode:(id)arg2;
-(void)pairingSessionHideSetupCode:(id)arg1;
-(void)pairingSession:(id)arg1 promptForSetupCodeWithDelay:(double)arg2 completion:(/*^block*/id)arg3;
-(void)pairingSession:(id)arg1 didCompleteExchangeWithError:(id)arg2;

@required
-(void)pairingSession:(id)arg1 didPrepareExchangeData:(id)arg2;

@end

