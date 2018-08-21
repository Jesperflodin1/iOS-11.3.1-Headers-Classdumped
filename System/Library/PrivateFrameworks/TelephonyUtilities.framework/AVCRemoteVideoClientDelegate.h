/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVCRemoteVideoClientDelegate <NSObject>
@optional
-(void)remoteVideoClientDidReceiveFirstFrame:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteVideoDidPause:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 remoteMediaDidStall:(BOOL)arg2;
-(void)remoteVideoClient:(id)arg1 videoDidDegrade:(BOOL)arg2;
-(void)remoteVideoClientDidReceiveLastFrame:(id)arg1;
-(void)remoteVideoServerDidDie:(id)arg1;
-(void)remoteVideoClient:(id)arg1 remoteScreenAttributesDidChange:(id)arg2;
-(void)remoteVideoClient:(id)arg1 remoteVideoAttributesDidChange:(id)arg2;

@end

