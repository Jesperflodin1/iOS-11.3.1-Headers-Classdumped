/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol VCVideoStreamReceiverDelegate
@required
-(void)vcVideoStreamReceiver:(id)arg1 downlinkQualityDidChange:(id)arg2;
-(unsigned)vcVideoStreamReceiver:(id)arg1 receivedTMMBR:(unsigned)arg2;
-(void)vcVideoStreamReceiverRequestKeyFrame:(id)arg1 rtcpPSFBType:(unsigned)arg2;
-(BOOL)vcVideoStreamReceiver:(id)arg1 didReceiveRemoteFrame:(CVBufferRef)arg2 atTime:(SCD_Struct_VC33)arg3 newVideoAttributes:(id)arg4 isFirstFrame:(BOOL)arg5;

@end
