/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <MusicCarDisplayUI/MCDPlayModeButton.h>

@class UIImage;

@interface MCDRepeatButton : MCDPlayModeButton {

	UIImage* _repeatImage;
	UIImage* _repeatOneImage;

}

@property (nonatomic,retain) UIImage * repeatImage;                 //@synthesize repeatImage=_repeatImage - In the implementation block
@property (nonatomic,retain) UIImage * repeatOneImage;              //@synthesize repeatOneImage=_repeatOneImage - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setRepeatType:(long long)arg1 ;
-(UIImage *)repeatOneImage;
-(UIImage *)repeatImage;
-(void)setRepeatImage:(UIImage *)arg1 ;
-(void)setRepeatOneImage:(UIImage *)arg1 ;
@end

