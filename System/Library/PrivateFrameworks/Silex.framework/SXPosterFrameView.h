/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Silex/Silex-Structs.h>
#import <UIKit/UIImageView.h>

@class SXVideoPlayButton;

@interface SXPosterFrameView : UIImageView {

	SXVideoPlayButton* _playButton;

}

@property (nonatomic,retain) SXVideoPlayButton * playButton;              //@synthesize playButton=_playButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)setImage:(id)arg1 animated:(BOOL)arg2 ;
-(SXVideoPlayButton *)playButton;
-(void)setPlayButton:(SXVideoPlayButton *)arg1 ;
@end

