/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:38 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/SOS.framework/SOS
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SOSInternalClientProtocol <SOSClientProtocol>
@required
-(void)updateClientCurrentSOSInitiationState:(long long)arg1;
-(void)updateClientCurrentSOSInteractiveState:(long long)arg1;
-(void)dismissClientSOSWithCompletion:(/*^block*/id)arg1;
-(void)didDismissClientSOSBeforeSOSCall:(long long)arg1;

@end

