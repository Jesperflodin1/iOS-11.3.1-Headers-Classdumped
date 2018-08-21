/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LPImage, LPPadding, LPImageViewStyle, LPPointUnit;

@interface LPGlyphStyle : NSObject {

	LPImage* _image;
	LPPadding* _padding;
	double _opacity;
	LPImageViewStyle* _imageStyle;
	LPPointUnit* _baselineOffset;

}

@property (nonatomic,retain) LPImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain,readonly) LPPadding * padding;                 //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) double opacity;                               //@synthesize opacity=_opacity - In the implementation block
@property (nonatomic,readonly) LPImageViewStyle * imageStyle;              //@synthesize imageStyle=_imageStyle - In the implementation block
@property (nonatomic,retain) LPPointUnit * baselineOffset;                 //@synthesize baselineOffset=_baselineOffset - In the implementation block
-(id)init;
-(void)setImage:(LPImage *)arg1 ;
-(LPImage *)image;
-(double)opacity;
-(void)setOpacity:(double)arg1 ;
-(LPPadding *)padding;
-(LPPointUnit *)baselineOffset;
-(void)setBaselineOffset:(LPPointUnit *)arg1 ;
-(id)initSearchGlyph;
-(LPImageViewStyle *)imageStyle;
@end

