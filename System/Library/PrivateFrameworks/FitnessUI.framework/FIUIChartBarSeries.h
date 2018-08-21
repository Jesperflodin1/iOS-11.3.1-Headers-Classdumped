/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartNumericSeries.h>

@class UIColor, NSArray;

@interface FIUIChartBarSeries : FIUIChartNumericSeries {

	BOOL _fadeZeroBars;
	double _barWidth;
	double _barSpacing;
	double _roundedCornerRadius;
	UIColor* _strokeColor;
	double _strokeWidth;
	UIColor* _backgroundStrokeColor;
	double _backgroundStrokeWidth;
	NSArray* _barColors;
	CGGradientRef _barGradient;
	UIColor* _barColor;
	UIColor* _fadedBarColor;
	NSArray* _labelAttributes;
	NSArray* _plotPoints;
	NSArray* _barLabels;

}

@property (nonatomic,retain) NSArray * plotPoints;                         //@synthesize plotPoints=_plotPoints - In the implementation block
@property (nonatomic,retain) NSArray * barLabels;                          //@synthesize barLabels=_barLabels - In the implementation block
@property (assign,nonatomic) double barWidth;                              //@synthesize barWidth=_barWidth - In the implementation block
@property (assign,nonatomic) double barSpacing;                            //@synthesize barSpacing=_barSpacing - In the implementation block
@property (assign,nonatomic) double roundedCornerRadius;                   //@synthesize roundedCornerRadius=_roundedCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * strokeColor;                        //@synthesize strokeColor=_strokeColor - In the implementation block
@property (assign,nonatomic) double strokeWidth;                           //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,retain) UIColor * backgroundStrokeColor;              //@synthesize backgroundStrokeColor=_backgroundStrokeColor - In the implementation block
@property (assign,nonatomic) double backgroundStrokeWidth;                 //@synthesize backgroundStrokeWidth=_backgroundStrokeWidth - In the implementation block
@property (nonatomic,retain) NSArray * barColors;                          //@synthesize barColors=_barColors - In the implementation block
@property (assign,nonatomic) CGGradientRef barGradient;                    //@synthesize barGradient=_barGradient - In the implementation block
@property (nonatomic,retain) UIColor * barColor;                           //@synthesize barColor=_barColor - In the implementation block
@property (assign,nonatomic) BOOL fadeZeroBars;                            //@synthesize fadeZeroBars=_fadeZeroBars - In the implementation block
@property (nonatomic,retain) UIColor * fadedBarColor;                      //@synthesize fadedBarColor=_fadedBarColor - In the implementation block
@property (nonatomic,retain) NSArray * labelAttributes;                    //@synthesize labelAttributes=_labelAttributes - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(UIColor *)strokeColor;
-(double)roundedCornerRadius;
-(void)setBarSpacing:(double)arg1 ;
-(void)setRoundedCornerRadius:(double)arg1 ;
-(void)setBarGradient:(CGGradientRef)arg1 ;
-(double)barSpacing;
-(CGGradientRef)barGradient;
-(NSArray *)plotPoints;
-(void)setPlotPoints:(NSArray *)arg1 ;
-(void)_translateColorThresholds;
-(void)_strokeRect:(CGRect)arg1 context:(CGContextRef)arg2 color:(CGColorRef)arg3 width:(double)arg4 ;
-(id)_chartColorForChartYValue:(double)arg1 ;
-(UIColor *)backgroundStrokeColor;
-(void)setBackgroundStrokeColor:(UIColor *)arg1 ;
-(double)backgroundStrokeWidth;
-(void)setBackgroundStrokeWidth:(double)arg1 ;
-(NSArray *)barColors;
-(void)setBarColors:(NSArray *)arg1 ;
-(UIColor *)barColor;
-(void)setBarColor:(UIColor *)arg1 ;
-(BOOL)fadeZeroBars;
-(void)setFadeZeroBars:(BOOL)arg1 ;
-(UIColor *)fadedBarColor;
-(void)setFadedBarColor:(UIColor *)arg1 ;
-(NSArray *)labelAttributes;
-(void)setLabelAttributes:(NSArray *)arg1 ;
-(NSArray *)barLabels;
-(void)setBarLabels:(NSArray *)arg1 ;
-(double)barWidth;
-(void)setBarWidth:(double)arg1 ;
-(void)setStrokeWidth:(double)arg1 ;
-(double)strokeWidth;
@end

