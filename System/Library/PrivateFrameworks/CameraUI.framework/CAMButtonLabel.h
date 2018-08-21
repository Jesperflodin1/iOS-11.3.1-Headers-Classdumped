/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CameraUI/CameraUI-Structs.h>
#import <UIKit/UIView.h>

@class NSString, UILabel, UIColor;

@interface CAMButtonLabel : UIView {

	BOOL _wantsLegibilityShadow;
	NSString* _text;
	UILabel* __label;
	CGSize _contentSize;

}

@property (nonatomic,retain,readonly) UILabel * _label;               //@synthesize _label=__label - In the implementation block
@property (nonatomic,copy) NSString * text;                           //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) UIColor * textColor; 
@property (assign,nonatomic) long long textAlignment; 
@property (assign,nonatomic) BOOL wantsLegibilityShadow;              //@synthesize wantsLegibilityShadow=_wantsLegibilityShadow - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                    //@synthesize contentSize=_contentSize - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setTextAlignment:(long long)arg1 ;
-(CGSize)contentSize;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(CGSize)intrinsicContentSize;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(UILabel *)_label;
-(UIColor *)textColor;
-(long long)textAlignment;
-(id)highlightedTextColor;
-(void)setHighlightedTextColor:(id)arg1 ;
-(void)updateToContentSize:(id)arg1 ;
-(BOOL)wantsLegibilityShadow;
-(void)_updateAttributedText;
-(void)_updateInternalContentSize;
-(void)setWantsLegibilityShadow:(BOOL)arg1 ;
@end

