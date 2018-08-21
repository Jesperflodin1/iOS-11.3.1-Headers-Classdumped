/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVConferencePreviewClientDelegate, OS_dispatch_queue;
#import <AVConference/AVConference-Structs.h>
@class AVConferenceXPCClient, CALayer, VideoAttributes, NSObject, NSString;

@interface AVConferencePreview : NSObject {

	BOOL clientWantsPreview;
	unsigned connectionAttempts;
	AVConferenceXPCClient* connection;
	CALayer* caLayerFront;
	CALayer* caLayerBack;
	VideoAttributes* localVideoAttributes;
	CGSize localScreenPortraitAspectRatio;
	CGSize localScreenLandscapeAspectRatio;
	NSObject*<AVConferencePreviewClientDelegate> delegate;
	NSObject*<OS_dispatch_queue> avConferencePreviewQueue;
	NSObject*<OS_dispatch_queue> avConferencePreviewNotificationQueue;
	BOOL _isPreviewRunning;
	NSString* _localCameraUID;

}

@property (nonatomic,retain) NSObject*<AVConferencePreviewClientDelegate> delegate; 
+(id)AVConferencePreviewSingleton;
-(id)init;
-(oneway void)release;
-(id)autorelease;
-(id)retain;
-(NSObject*<AVConferencePreviewClientDelegate>)delegate;
-(void)setDelegate:(NSObject*<AVConferencePreviewClientDelegate>)arg1 ;
-(void)dealloc;
-(unsigned long long)retainCount;
-(id)allocWithZone:(NSZone*)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)localScreenAttributesForVideoAttributes:(id)arg1 ;
-(void)setLocalScreenAttributes:(id)arg1 ;
-(void)startPreview;
-(BOOL)isPreviewRunning;
-(void)registerBlocksForDelegateNotifications;
-(id)localVideoAttributes;
-(void)pausePreview;
-(void)stopPreview;
-(void)setLocalVideoAttributes:(id)arg1 ;
-(void)beginPreviewToPIPAnimation;
-(void)endPreviewToPIPAnimation;
-(void)beginPIPToPreviewAnimation;
-(void)endPIPToPreviewAnimation;
-(void)didReceiveErrorFromCameraUniqueID:(id)arg1 error:(id)arg2 ;
-(void)didReceiveFirstPreviewFrameFromCameraUniqueID:(id)arg1 ;
-(void)didChangeLocalVideoAttributes:(id)arg1 ;
-(void)didChangeLocalScreenAttributes:(id)arg1 ;
-(void)didStartPreview;
-(void)didPausePreview;
-(void)didStopPreview;
-(void)startPreviewUnpausing:(BOOL)arg1 ;
-(void)didReceiveCommError;
-(void)didGetSnapshot:(id)arg1 ;
-(void)cameraDidBecomeAvailableForUniqueID:(id)arg1 ;
-(void)setLocalVideoLayer:(id)arg1 front:(BOOL)arg2 ;
-(void)connectLayer:(id)arg1 withSlot:(unsigned)arg2 ;
-(void)setLocalCameraWithUID:(id)arg1 ;
-(id)localVideoLayer:(BOOL)arg1 ;
-(void)setLocalCamera:(unsigned)arg1 ;
-(void)setLocalCameraWithPosition:(int)arg1 ;
-(unsigned)localCamera;
-(id)localCameraUID;
-(void)getSnapshot;
@end
