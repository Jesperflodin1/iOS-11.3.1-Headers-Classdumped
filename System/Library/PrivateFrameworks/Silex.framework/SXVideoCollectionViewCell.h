/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class SXVideoView, SXPlaybackCoordinator;

@interface SXVideoCollectionViewCell : UICollectionViewCell {

	SXVideoView* _videoView;
	SXPlaybackCoordinator* _playbackCoordinator;

}

@property (nonatomic,readonly) SXVideoView * videoView;                                //@synthesize videoView=_videoView - In the implementation block
@property (nonatomic,retain) SXPlaybackCoordinator * playbackCoordinator;              //@synthesize playbackCoordinator=_playbackCoordinator - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(SXVideoView *)videoView;
-(SXPlaybackCoordinator *)playbackCoordinator;
-(void)setPlaybackCoordinator:(SXPlaybackCoordinator *)arg1 ;
@end
