/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class AVConferenceXPCClient, AVCMediaStreamConfig, NSDictionary, NSObject;

@interface AVCTextStream : NSObject {

	AVConferenceXPCClient* _connection;
	AVCMediaStreamConfig* _configuration;
	id _delegate;
	long long _streamToken;
	NSDictionary* _capabilities;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSDictionary * capabilities;                                      //@synthesize capabilities=_capabilities - In the implementation block
@property (nonatomic,retain) AVCMediaStreamConfig * configuration;                             //@synthesize configuration=_configuration - In the implementation block
@property (assign,nonatomic) long long direction; 
@property (assign,getter=isRTCPEnabled,nonatomic) BOOL rtcpEnabled; 
@property (assign,getter=isRTPTimeOutEnabled,nonatomic) BOOL rtpTimeOutEnabled; 
@property (assign,getter=isRTCPTimeOutEnabled,nonatomic) BOOL rtcpTimeOutEnabled; 
@property (assign,nonatomic) double rtpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpTimeOutIntervalSec; 
@property (assign,nonatomic) double rtcpSendIntervalSec; 
@property (nonatomic,readonly) long long streamToken;                                          //@synthesize streamToken=_streamToken - In the implementation block
@property (assign,nonatomic) id<AVCTextStreamDelegate> delegate;                               //@synthesize delegate=_delegate - In the implementation block
-(id<AVCTextStreamDelegate>)delegate;
-(void)setDelegate:(id<AVCTextStreamDelegate>)arg1 ;
-(void)dealloc;
-(void)setDirection:(long long)arg1 ;
-(long long)direction;
-(void)stop;
-(void)start;
-(void)setConfiguration:(AVCMediaStreamConfig *)arg1 ;
-(void)resume;
-(AVCMediaStreamConfig *)configuration;
-(void)pause;
-(void)refreshLoggingParameters;
-(void)registerBlocksForDelegateNotifications;
-(void)deregisterBlocksForDelegateNotifications;
-(BOOL)initializeServerWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(BOOL)validateResultsDictionary:(id)arg1 error:(id*)arg2 ;
-(id)newNSErrorWithErrorDictionary:(id)arg1 ;
-(NSDictionary *)capabilities;
-(long long)streamToken;
-(id)initWithNetworkSockets:(id)arg1 callID:(id)arg2 error:(id*)arg3 ;
-(BOOL)configure:(id)arg1 error:(id*)arg2 ;
-(void)setRtcpEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPEnabled;
-(void)setRtpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTPTimeOutEnabled;
-(void)setRtcpTimeOutEnabled:(BOOL)arg1 ;
-(BOOL)isRTCPTimeOutEnabled;
-(void)setRtpTimeOutIntervalSec:(double)arg1 ;
-(double)rtpTimeOutIntervalSec;
-(void)setRtcpTimeOutIntervalSec:(double)arg1 ;
-(double)rtcpTimeOutIntervalSec;
-(void)setRtcpSendIntervalSec:(double)arg1 ;
-(double)rtcpSendIntervalSec;
-(void)setCapabilities:(NSDictionary *)arg1 ;
@end

