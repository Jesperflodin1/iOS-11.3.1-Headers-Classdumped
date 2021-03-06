/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class NSObject;

@interface VCClientRelay : NSObject {

	int _vtpSocket;
	int _idsSocket;
	NSObject*<OS_dispatch_source> _idsReadSource;
	NSObject*<OS_dispatch_queue> _idsReadQueue;
	BOOL _isConnectionResultSet;
	tagCONNRESULT* _connectionResult;
	sockaddr_storage _vtpDestination;
	unsigned _vtpDestinationLength;
	OpaqueFigThreadRef _vtpReceiveTID;
	BOOL _stopVTPReceiveThread;

}

@property (readonly) BOOL stopVTPReceiveThread;              //@synthesize stopVTPReceiveThread=_stopVTPReceiveThread - In the implementation block
-(void)dealloc;
-(int)setupVTPSocket;
-(BOOL)relayIDSPacket;
-(int)stopRelay;
-(id)initWithIDSSocket:(int)arg1 ;
-(void)setConnectionResult:(tagCONNRESULT*)arg1 ;
-(int)startRelay;
-(BOOL)relayVTPPacket;
-(BOOL)stopVTPReceiveThread;
@end

