/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:48 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MPRemoteCommand.h>

@interface MPChangePlaybackPositionCommand : MPRemoteCommand {

	BOOL _canBeControlledByScrubbing;

}

@property (assign,nonatomic) BOOL canBeControlledByScrubbing;              //@synthesize canBeControlledByScrubbing=_canBeControlledByScrubbing - In the implementation block
-(id)initWithMediaRemoteCommandType:(unsigned)arg1 ;
-(id)_mediaRemoteCommandInfoOptions;
-(void)setCanBeControlledByScrubbing:(BOOL)arg1 ;
-(id)newCommandEventWithPositionTime:(double)arg1 ;
-(BOOL)canBeControlledByScrubbing;
@end
