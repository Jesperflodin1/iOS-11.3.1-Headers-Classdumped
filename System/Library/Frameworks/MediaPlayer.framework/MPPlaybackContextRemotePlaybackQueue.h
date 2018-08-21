/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class MPPlaybackContext;

@interface MPPlaybackContextRemotePlaybackQueue : MPRemotePlaybackQueue {

	MPPlaybackContext* _playbackContext;
	long long _replaceIntent;

}
-(id)description;
-(BOOL)isRequestingImmediatePlayback;
-(id)siriRecommendationIdentifier;
-(long long)replaceIntent;
-(void)setReplaceIntent:(long long)arg1 ;
-(id)initWithPlaybackContext:(id)arg1 ;
-(void)getPlaybackContextWithCompletion:(/*^block*/id)arg1 ;
@end

