/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:47 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/BatteryUsageUI.bundle/BatteryUsageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BatteryUsageUI/BatteryUsageUI-Structs.h>
#import <UIKit/UIView.h>

@class NSMutableDictionary, NSMutableArray, UIColor, NSDate;

@interface PLBatteryUIMoveableGraphView : UIView {

	float maxPower;
	float minPower;
	int _errValue;
	double horizontal_label_offset;
	double vertical_label_offset;
	double rectWidth;
	double rectHeight;
	double xInterval;
	double yInterval;
	NSMutableDictionary* defaultTextAttributes;
	NSMutableArray* _dateChangeArray;
	int _graphType;
	double _displayRange;
	double _MaxDataRange;
	NSMutableArray* _inputData;
	UIColor* _labelColor;
	UIColor* _graphBackgroundColor;
	UIColor* _lineColor;
	UIColor* _gridColor;
	NSDate* _startDate;
	NSDate* _endDate;
	CGSize _displaySize;

}

@property (assign,nonatomic) double displayRange;                       //@synthesize displayRange=_displayRange - In the implementation block
@property (assign,nonatomic) CGSize displaySize;                        //@synthesize displaySize=_displaySize - In the implementation block
@property (assign,nonatomic) double MaxDataRange;                       //@synthesize MaxDataRange=_MaxDataRange - In the implementation block
@property (assign,nonatomic) int graphType;                             //@synthesize graphType=_graphType - In the implementation block
@property (nonatomic,copy) NSMutableArray * inputData;                  //@synthesize inputData=_inputData - In the implementation block
@property (nonatomic,copy) UIColor * labelColor;                        //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,copy) UIColor * graphBackgroundColor;              //@synthesize graphBackgroundColor=_graphBackgroundColor - In the implementation block
@property (nonatomic,copy) UIColor * lineColor;                         //@synthesize lineColor=_lineColor - In the implementation block
@property (nonatomic,copy) UIColor * gridColor;                         //@synthesize gridColor=_gridColor - In the implementation block
@property (nonatomic,readonly) NSDate * startDate;                      //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                        //@synthesize endDate=_endDate - In the implementation block
+(int)graphHeight;
-(void)setGraphType:(int)arg1 ;
-(void)setRangesFromArray:(id)arg1 ;
-(int)graphType;
-(void)setDefaultRange;
-(void)drawGrid:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawErrorText:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)setGraphBackgroundColor:(UIColor *)arg1 ;
-(void)setDisplayRange:(double)arg1 ;
-(double)displayRange;
-(void)initGraphAttributes;
-(UIColor *)graphBackgroundColor;
-(UIColor *)gridColor;
-(double)setGridRange:(double)arg1 ;
-(void)drawDayLines:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawFill:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(void)drawLine:(CGContextRef)arg1 andRect:(CGRect)arg2 ;
-(double)MaxDataRange;
-(void)setGridColor:(UIColor *)arg1 ;
-(id)DateChangeArray;
-(void)setMaxDataRange:(double)arg1 ;
-(id)init;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setLabelColor:(UIColor *)arg1 ;
-(UIColor *)labelColor;
-(NSMutableArray *)inputData;
-(void)setInputData:(NSMutableArray *)arg1 ;
-(CGSize)displaySize;
-(void)setDisplaySize:(CGSize)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)setLineColor:(UIColor *)arg1 ;
-(UIColor *)lineColor;
@end
