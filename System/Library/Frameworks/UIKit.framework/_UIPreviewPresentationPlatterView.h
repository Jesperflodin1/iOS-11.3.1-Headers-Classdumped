/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _UIPreviewPresentationEffectView;

@interface _UIPreviewPresentationPlatterView : UIView {

	BOOL _dropShadowEnabled;
	UIView* _contentView;
	_UIPreviewPresentationEffectView* _contentEffectView;
	_UIPreviewPresentationEffectView* _contentClipView;
	UIView* _contentTransformView;
	UIView* _contentShadowView;
	CGSize _contentSize;
	CGSize _contentClippingSize;

}

@property (nonatomic,retain) UIView * contentView;                                              //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * contentEffectView;              //@synthesize contentEffectView=_contentEffectView - In the implementation block
@property (nonatomic,retain) _UIPreviewPresentationEffectView * contentClipView;                //@synthesize contentClipView=_contentClipView - In the implementation block
@property (nonatomic,retain) UIView * contentTransformView;                                     //@synthesize contentTransformView=_contentTransformView - In the implementation block
@property (nonatomic,retain) UIView * contentShadowView;                                        //@synthesize contentShadowView=_contentShadowView - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                                //@synthesize contentSize=_contentSize - In the implementation block
@property (assign,nonatomic) CGSize contentClippingSize;                                        //@synthesize contentClippingSize=_contentClippingSize - In the implementation block
@property (assign,nonatomic) double blurRadius; 
@property (assign,nonatomic) double cornerRadius; 
@property (assign,getter=isDropShadowEnabled,nonatomic) BOOL dropShadowEnabled;                 //@synthesize dropShadowEnabled=_dropShadowEnabled - In the implementation block
-(void)setContentView:(UIView *)arg1 ;
-(void)setBlurRadius:(double)arg1 ;
-(void)setContentEffectView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentClipView:(_UIPreviewPresentationEffectView *)arg1 ;
-(void)setContentTransformView:(UIView *)arg1 ;
-(void)setContentShadowView:(UIView *)arg1 ;
-(UIView *)contentTransformView;
-(_UIPreviewPresentationEffectView *)contentClipView;
-(_UIPreviewPresentationEffectView *)contentEffectView;
-(UIView *)contentShadowView;
-(CGSize)contentSize;
-(CGSize)contentClippingSize;
-(double)blurRadius;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(BOOL)isDropShadowEnabled;
-(void)layoutSubviews;
-(UIView *)contentView;
-(id)initWithContentView:(id)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentClippingSize:(CGSize)arg1 ;
-(void)setDropShadowEnabled:(BOOL)arg1 ;
-(BOOL)_shouldEnclosedScrollViewFlashIndicators:(id)arg1 ;
@end

