/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@class UIImageView, NSArray, NSString;

@interface CAMIrisButton : UIButton <CAMAccessibilityHUDImageProvider> {

	long long _layoutStyle;
	long long _irisMode;
	UIImageView* __padBackgroundView;
	NSArray* __enablingAnimationImages;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _padBackgroundView;                                                //@synthesize _padBackgroundView=__padBackgroundView - In the implementation block
@property (setter=_setEnablingAnimationImages:,nonatomic,copy) NSArray * _enablingAnimationImages;              //@synthesize _enablingAnimationImages=__enablingAnimationImages - In the implementation block
@property (assign,nonatomic) long long layoutStyle;                                                             //@synthesize layoutStyle=_layoutStyle - In the implementation block
@property (assign,nonatomic) long long irisMode;                                                                //@synthesize irisMode=_irisMode - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                                   //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)irisButtonWithLayoutStyle:(long long)arg1 ;
+(double)enablingAnimationDuration;
-(long long)layoutStyle;
-(void)setLayoutStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBaseImage;
-(void)setIrisMode:(long long)arg1 ;
-(void)_updateForLayoutStyle;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)tappableEdgeInsets;
-(id)imageForAccessibilityHUD;
-(long long)irisMode;
-(void)interruptEnablingAnimation;
-(void)preloadEnablingAnimation;
-(void)performEnablingAnimation;
-(void)_updateTintColorForMode:(long long)arg1 ;
-(void)_commonCAMIrisButtonConfiguration;
-(id)_baseImageForMode:(long long)arg1 ;
-(BOOL)_shouldLoadEnablingAnimationImages;
-(id)_actuallyLoadEnablingAnimationImagesForScale:(double)arg1 ;
-(void)_setEnablingAnimationImages:(id)arg1 ;
-(NSArray *)_enablingAnimationImages;
-(void)_ensureEnablingAnimationImages;
-(UIImageView *)_padBackgroundView;
@end

