/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:06:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MPAVController;

@interface MPMovieTVHUDView : UIView {

	long long _currentState;
	UIImageView* _playbackMode;
	MPAVController* _player;

}

@property (nonatomic,retain) MPAVController * player;              //@synthesize player=_player - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)animationDidStop:(id)arg1 ;
-(void)_playbackStateDidChangeNotification:(id)arg1 ;
-(void)_fadeOut;
-(void)_changeState;
-(MPAVController *)player;
-(void)setPlayer:(MPAVController *)arg1 ;
@end

