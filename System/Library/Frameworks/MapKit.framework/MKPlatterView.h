/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class _MKUILabel, UIView, NSString, UIFont, UIColor;

@interface MKPlatterView : UIView {

	_MKUILabel* _glyphLabel;
	UIView* _platterView;
	BOOL _highlighted;
	NSString* _glyph;
	UIFont* _glyphFont;
	UIColor* _glyphColor;

}

@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (nonatomic,retain) NSString * glyph;                                   //@synthesize glyph=_glyph - In the implementation block
@property (nonatomic,retain) UIFont * glyphFont;                                 //@synthesize glyphFont=_glyphFont - In the implementation block
@property (nonatomic,retain) UIColor * glyphColor;                               //@synthesize glyphColor=_glyphColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)isHighlighted;
-(void)infoCardThemeChanged:(id)arg1 ;
-(UIFont *)glyphFont;
-(void)setGlyphFont:(UIFont *)arg1 ;
-(void)updateGlyph;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(UIColor *)glyphColor;
-(void)setGlyph:(NSString *)arg1 ;
-(NSString *)glyph;
@end
