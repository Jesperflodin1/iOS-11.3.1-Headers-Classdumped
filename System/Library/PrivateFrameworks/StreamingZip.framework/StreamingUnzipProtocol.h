/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StreamingZip.framework/StreamingZip
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol StreamingUnzipProtocol
@required
-(void)setupUnzipperWithOutputPath:(id)arg1 sandboxExtensionToken:(char*)arg2 options:(id)arg3 withReply:(/*^block*/id)arg4;
-(void)supplyBytes:(id)arg1 withReply:(/*^block*/id)arg2;
-(void)suspendStreamWithReply:(/*^block*/id)arg1;
-(void)finishStreamWithReply:(/*^block*/id)arg1;
-(void)terminateStreamWithReply:(/*^block*/id)arg1;
-(void)setActiveDelegateMethods:(int)arg1;

@end
