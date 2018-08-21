/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:14 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FitnessUI.framework/FitnessUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FitnessUI/FitnessUI-Structs.h>
#import <FitnessUI/FIUIChartNumericSeries.h>

@class NSArray, UIColor;

@interface FIUIChartHorizontalLineSeries : FIUIChartNumericSeries {

	NSArray* _dataPoints;
	UIColor* _color;
	double _lineWidth;
	double _sidePadding;

}

@property (nonatomic,retain) UIColor * color;                 //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) double lineWidth;                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double sidePadding;              //@synthesize sidePadding=_sidePadding - In the implementation block
-(void)layoutSubviews;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(void)drawLayer:(id)arg1 inContext:(CGContextRef)arg2 ;
-(double)sidePadding;
-(void)setSidePadding:(double)arg1 ;
@end

