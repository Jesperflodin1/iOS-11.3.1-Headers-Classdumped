/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:01:34 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/ControlCenter/Bundles/TVRemoteModule.bundle/TVRemoteModule
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TVRDaemonClientProtocol <NSObject>
@optional
-(void)connectionDidUpdateDevices:(id)arg1;
-(void)connectedDeviceWithInfo:(id)arg1 removedSupportedButtons:(id)arg2 added:(id)arg3;
-(void)connectedToDeviceWithInfo:(id)arg1;
-(void)connectionRequestStartedForDeviceWithInfo:(id)arg1;
-(void)connectionDidUpdateNetworkState:(unsigned long long)arg1;
-(void)connectionDisconnectedFromDeviceWithInfo:(id)arg1 forReason:(long long)arg2 error:(id)arg3;
-(void)connectedDeviceWithInfo:(id)arg1 changedDeviceName:(id)arg2;
-(void)connectedDeviceWithInfo:(id)arg1 beganTextEditingWithAttributes:(id)arg2;
-(void)connectedDeviceWithInfoEndedTextEditing:(id)arg1;
-(void)connectedDeviceWithInfo:(id)arg1 updatedInputText:(id)arg2;
-(void)connectedDeviceWithInfo:(id)arg1 updatedTextAttributes:(id)arg2;
-(void)connectedDeviceWithInfo:(id)arg1 encounteredAuthenticationChallegeOfType:(long long)arg2;

@end

