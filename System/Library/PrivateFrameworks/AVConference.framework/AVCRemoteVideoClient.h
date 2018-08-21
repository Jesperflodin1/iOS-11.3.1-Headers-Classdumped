/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class CALayer, AVConferenceXPCClient, VideoAttributes, NSDictionary, NSString, NSObject;

@interface AVCRemoteVideoClient : NSObject {

	id _delegate;
	long long _streamToken;
	CALayer* _primaryCameraLayer;
	CALayer* _secondaryCameraLayer;
	CALayer* _screenLayer;
	CALayer* _primaryCameraSubLayer;
	CALayer* _secondaryCameraSubLayer;
	CALayer* _screenSubLayer;
	AVConferenceXPCClient* _connection;
	int _activeVideoMode;
	BOOL _hasReceivedFirstFrame;
	BOOL _isVideoPaused;
	BOOL _isMediaStalled;
	BOOL _isVideoDegraded;
	BOOL _hasReceivedLastFrame;
	BOOL _shouldDisplayVideoInfoLayer;
	VideoAttributes* _remoteScreenAttributes;
	VideoAttributes* _remoteVideoAttributes;
	NSDictionary* _slotsForModes;
	NSString* _connectionTypeString;
	NSObject*<OS_dispatch_queue> _avcRemoteVideoQueue;

}

@property (nonatomic,retain) VideoAttributes * remoteScreenAttributes;                 //@synthesize remoteScreenAttributes=_remoteScreenAttributes - In the implementation block
@property (nonatomic,retain) VideoAttributes * remoteVideoAttributes;                  //@synthesize remoteVideoAttributes=_remoteVideoAttributes - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedFirstFrame;                               //@synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame - In the implementation block
@property (assign,nonatomic) BOOL isVideoPaused;                                       //@synthesize isVideoPaused=_isVideoPaused - In the implementation block
@property (assign,nonatomic) BOOL isMediaStalled;                                      //@synthesize isMediaStalled=_isMediaStalled - In the implementation block
@property (assign,nonatomic) BOOL isVideoDegraded;                                     //@synthesize isVideoDegraded=_isVideoDegraded - In the implementation block
@property (assign,nonatomic) BOOL hasReceivedLastFrame;                                //@synthesize hasReceivedLastFrame=_hasReceivedLastFrame - In the implementation block
@property (assign,nonatomic) BOOL shouldDisplayVideoInfoLayer;                         //@synthesize shouldDisplayVideoInfoLayer=_shouldDisplayVideoInfoLayer - In the implementation block
@property (nonatomic,copy) NSString * connectionTypeString;                            //@synthesize connectionTypeString=_connectionTypeString - In the implementation block
@property (nonatomic,readonly) id<AVCRemoteVideoClientDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) long long streamToken;                                  //@synthesize streamToken=_streamToken - In the implementation block
-(id<AVCRemoteVideoClientDelegate>)delegate;
-(void)dealloc;
-(BOOL)isVideoPaused;
-(void)setIsVideoPaused:(BOOL)arg1 ;
-(void)setRemoteScreenAttributes:(VideoAttributes *)arg1 ;
-(VideoAttributes *)remoteScreenAttributes;
-(void)setRemoteVideoAttributes:(VideoAttributes *)arg1 ;
-(void)registerBlocksForNotifications;
-(void)deregisterBlocksForNotifications;
-(BOOL)isVideoDegraded;
-(void)setIsVideoDegraded:(BOOL)arg1 ;
-(BOOL)isMediaStalled;
-(void)setIsMediaStalled:(BOOL)arg1 ;
-(BOOL)shouldDisplayVideoInfoLayer;
-(void)setVideoLayer:(id)arg1 forMode:(int)arg2 ;
-(void)terminateConnection;
-(void)cleanupSubLayerForMode:(int)arg1 ;
-(void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3 ;
-(void)setActiveVideoLayerForMode:(int)arg1 ;
-(void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2 ;
-(id*)subLayerRefForMode:(int)arg1 ;
-(void)setActiveVideoModeFromRemoteVideoAttribute:(id)arg1 ;
-(void)setHasReceivedLastFrame:(BOOL)arg1 ;
-(void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2 ;
-(NSString *)connectionTypeString;
-(id)subLayerForMode:(int)arg1 ;
-(void)setConnectionTypeString:(NSString *)arg1 ;
-(void)drawText:(id)arg1 inSubLayer:(id)arg2 ;
-(BOOL)hasReceivedLastFrame;
-(void)setShouldDisplayVideoInfoLayer:(BOOL)arg1 ;
-(long long)streamToken;
-(id)initWithStreamToken:(long long)arg1 delegate:(id)arg2 ;
-(id)slotForMode:(int)arg1 ;
-(VideoAttributes *)remoteVideoAttributes;
-(void)setHasReceivedFirstFrame:(BOOL)arg1 ;
-(BOOL)hasReceivedFirstFrame;
@end

