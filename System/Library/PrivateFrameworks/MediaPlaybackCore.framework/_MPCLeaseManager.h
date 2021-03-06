/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:04 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class MPCPlaybackEngine;

@interface _MPCLeaseManager : NSObject {

	BOOL _isPreparingForImminentPlaybackIntent;
	MPCPlaybackEngine* _playbackEngine;

}

@property (nonatomic,__weak,readonly) MPCPlaybackEngine * playbackEngine;              //@synthesize playbackEngine=_playbackEngine - In the implementation block
-(void)dealloc;
-(MPCPlaybackEngine *)playbackEngine;
-(void)prepareForPlayback;
-(id)initWithPlaybackEngine:(id)arg1 ;
-(void)_playerDidPauseForPlaybackPreventionNotification:(id)arg1 ;
@end

