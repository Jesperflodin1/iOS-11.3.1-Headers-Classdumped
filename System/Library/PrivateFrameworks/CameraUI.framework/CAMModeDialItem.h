/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UIFont, CAShapeLayer, NSAttributedString;

@interface CAMModeDialItem : UIView {

	BOOL _selected;
	BOOL _shouldShadowTitleText;
	NSString* _title;
	UIFont* _font;
	CAShapeLayer* __scalableTextLayer;
	CGSize __textFrameSize;

}

@property (assign,getter=isSelected,nonatomic) BOOL selected;                              //@synthesize selected=_selected - In the implementation block
@property (nonatomic,copy) NSString * title;                                               //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font;                                                //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) NSAttributedString * _attributedTitle; 
@property (nonatomic,readonly) CAShapeLayer * _scalableTextLayer;                          //@synthesize _scalableTextLayer=__scalableTextLayer - In the implementation block
@property (assign,setter=_setTextFrameSize:,nonatomic) CGSize _textFrameSize;              //@synthesize _textFrameSize=__textFrameSize - In the implementation block
@property (assign,nonatomic) BOOL shouldShadowTitleText;                                   //@synthesize shouldShadowTitleText=_shouldShadowTitleText - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGColorRef)_textColor;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)title;
-(void)setFont:(UIFont *)arg1 ;
-(void)tintColorDidChange;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(UIFont *)font;
-(NSAttributedString *)_attributedTitle;
-(void)_commonCAMModeDialItemInitialization;
-(CGSize)_textFrameSize;
-(CAShapeLayer *)_scalableTextLayer;
-(void)_updateScalableTextPathFromAttributedTitle;
-(CGPathRef)_pathForAttributedString:(id)arg1 ;
-(BOOL)shouldShadowTitleText;
-(void)_setTextFrameSize:(CGSize)arg1 ;
-(void)setShouldShadowTitleText:(BOOL)arg1 ;
@end

