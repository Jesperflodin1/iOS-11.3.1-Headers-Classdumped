/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MusicCarDisplayUI.framework/MusicCarDisplayUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MusicCarDisplayUI/MusicCarDisplayUI-Structs.h>
#import <UIKit/UIView.h>

@class MCDRepeatButton, MCDPlayModeButton, NSArray;

@interface MCDPlayModeControlView : UIView {

	BOOL _fuseSubscriberLayout;
	MCDRepeatButton* _repeatButton;
	MCDPlayModeButton* _moreButton;
	MCDPlayModeButton* _shuffleButton;
	MCDPlayModeButton* _addToLibraryButton;
	MCDPlayModeButton* _playbackRateButton;
	NSArray* _activeButtonLayoutConstraints;

}

@property (nonatomic,retain) NSArray * activeButtonLayoutConstraints;               //@synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints - In the implementation block
@property (nonatomic,readonly) MCDRepeatButton * repeatButton;                      //@synthesize repeatButton=_repeatButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * moreButton;                      //@synthesize moreButton=_moreButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * shuffleButton;                   //@synthesize shuffleButton=_shuffleButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * addToLibraryButton;              //@synthesize addToLibraryButton=_addToLibraryButton - In the implementation block
@property (nonatomic,readonly) MCDPlayModeButton * playbackRateButton;              //@synthesize playbackRateButton=_playbackRateButton - In the implementation block
@property (assign,nonatomic) BOOL fuseSubscriberLayout;                             //@synthesize fuseSubscriberLayout=_fuseSubscriberLayout - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)intrinsicContentSize;
-(void)_addConstraints;
-(void)addSizeConstraintsForButton:(id)arg1 ;
-(void)_updateButtonLayouts;
-(MCDRepeatButton *)repeatButton;
-(MCDPlayModeButton *)shuffleButton;
-(MCDPlayModeButton *)addToLibraryButton;
-(MCDPlayModeButton *)playbackRateButton;
-(BOOL)fuseSubscriberLayout;
-(void)setFuseSubscriberLayout:(BOOL)arg1 ;
-(NSArray *)activeButtonLayoutConstraints;
-(void)setActiveButtonLayoutConstraints:(NSArray *)arg1 ;
-(MCDPlayModeButton *)moreButton;
@end

