/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol ICDeviceDelegate <NSObject>
@optional
-(void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
-(void)deviceDidBecomeReady:(id)arg1;
-(void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
-(void)device:(id)arg1 didReceiveStatusInformation:(id)arg2;
-(void)device:(id)arg1 didEncounterError:(id)arg2;

@required
-(void)didRemoveDevice:(id)arg1;

@end

