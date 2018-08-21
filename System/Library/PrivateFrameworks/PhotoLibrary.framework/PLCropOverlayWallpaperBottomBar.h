/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class PLWallpaperButton, _UILegibilityLabel, UIView, _UIBackdropView;

@interface PLCropOverlayWallpaperBottomBar : UIView {

	BOOL _motionToggleHidden;
	BOOL _shouldOnlyShowLockScreenButton;
	BOOL _shouldOnlyShowHomeScreenButton;
	PLWallpaperButton* _doCancelButton;
	PLWallpaperButton* _doSetButton;
	PLWallpaperButton* _doSetHomeScreenButton;
	PLWallpaperButton* _doSetLockScreenButton;
	PLWallpaperButton* _doSetBothScreenButton;
	PLWallpaperButton* _motionToggle;
	_UILegibilityLabel* _titleLabel;
	UIView* _separatorLine;
	_UIBackdropView* _backdropView;
	double _maxToggleWidth;

}

@property (nonatomic,retain) _UILegibilityLabel * titleLabel;                                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIView * separatorLine;                                          //@synthesize separatorLine=_separatorLine - In the implementation block
@property (nonatomic,retain) _UIBackdropView * backdropView;                                  //@synthesize backdropView=_backdropView - In the implementation block
@property (assign,nonatomic) double maxToggleWidth;                                           //@synthesize maxToggleWidth=_maxToggleWidth - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doCancelButton;                     //@synthesize doCancelButton=_doCancelButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetButton;                        //@synthesize doSetButton=_doSetButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetHomeScreenButton;              //@synthesize doSetHomeScreenButton=_doSetHomeScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetLockScreenButton;              //@synthesize doSetLockScreenButton=_doSetLockScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * doSetBothScreenButton;              //@synthesize doSetBothScreenButton=_doSetBothScreenButton - In the implementation block
@property (nonatomic,retain,readonly) PLWallpaperButton * motionToggle;                       //@synthesize motionToggle=_motionToggle - In the implementation block
@property (assign,nonatomic) BOOL motionToggleHidden;                                         //@synthesize motionToggleHidden=_motionToggleHidden - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyShowLockScreenButton;                             //@synthesize shouldOnlyShowLockScreenButton=_shouldOnlyShowLockScreenButton - In the implementation block
@property (assign,nonatomic) BOOL shouldOnlyShowHomeScreenButton;                             //@synthesize shouldOnlyShowHomeScreenButton=_shouldOnlyShowHomeScreenButton - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setText:(id)arg1 ;
-(_UILegibilityLabel *)titleLabel;
-(void)setTitleLabel:(_UILegibilityLabel *)arg1 ;
-(void)setBackdropView:(_UIBackdropView *)arg1 ;
-(_UIBackdropView *)backdropView;
-(void)updateForChangedSettings:(id)arg1 ;
-(PLWallpaperButton *)doCancelButton;
-(PLWallpaperButton *)doSetHomeScreenButton;
-(PLWallpaperButton *)doSetLockScreenButton;
-(PLWallpaperButton *)doSetBothScreenButton;
-(PLWallpaperButton *)motionToggle;
-(PLWallpaperButton *)doSetButton;
-(void)setShouldOnlyShowHomeScreenButton:(BOOL)arg1 ;
-(void)setShouldOnlyShowLockScreenButton:(BOOL)arg1 ;
-(void)setMotionToggleHidden:(BOOL)arg1 ;
-(BOOL)motionToggleHidden;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPad;
-(void)_commonPLCropOverlayWallpaperBottomBarInitializationPhone;
-(double)widthForToggleText;
-(void)setMaxToggleWidth:(double)arg1 ;
-(void)_commonPLCropOverlayWallpaperBottomBarInitialization;
-(void)_layoutSubviewsPad;
-(void)_layoutSubviewsPhone;
-(CGSize)_sizeForString:(id)arg1 ;
-(BOOL)shouldOnlyShowLockScreenButton;
-(BOOL)shouldOnlyShowHomeScreenButton;
-(double)maxToggleWidth;
-(void)setSeparatorLine:(UIView *)arg1 ;
-(UIView *)separatorLine;
@end

