/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIControl.h>

@class MTMaterialView, UILabel, MTFontProvider, NSString;

@interface WGShortLookStyleButton : UIControl {

	MTMaterialView* _backgroundView;
	UILabel* _titleLabel;
	MTFontProvider* _fontProvider;
	double _dimension;
	BOOL _backgroundBlurred;

}

@property (nonatomic,copy) NSString * title; 
@property (assign,getter=isBackgroundBlurred,nonatomic) BOOL backgroundBlurred;              //@synthesize backgroundBlurred=_backgroundBlurred - In the implementation block
@property (nonatomic,retain) NSString * groupName; 
-(void)layoutSubviews;
-(void)setTitle:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(NSString *)title;
-(void)setGroupName:(NSString *)arg1 ;
-(NSString *)groupName;
-(double)_minimumScaleFactorForFont:(id)arg1 ;
-(double)_backgroundViewCornerRadius;
-(double)_dimension;
-(void)_setBackgroundViewCornerRadius:(double)arg1 ;
-(void)invalidateCachedGeometry;
-(void)_configureMaskIfNecessary;
-(BOOL)isBackgroundBlurred;
-(void)setBackgroundBlurred:(BOOL)arg1 ;
-(id)_fontProvider;
-(void)_configureTitleLabelIfNecessary;
-(void)_configureBackgroundViewIfNecessary;
-(void)_layoutTitleLabel;
-(void)_updateTitleLabelFont;
@end

