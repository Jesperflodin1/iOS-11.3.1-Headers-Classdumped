/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:42 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKGraphSeries.h>
#import <libobjc.A.dylib/HKAxisLabelDataSource.h>

@class UIColor, UIImage, NSString;

@interface HKHorizontalSingleLineSeries : HKGraphSeries <HKAxisLabelDataSource> {

	BOOL _shouldConnectPoints;
	double _topInsetPercentage;
	UIColor* _baseColor;
	double _lineWidth;
	double _selectedLineWidth;
	double _markRadius;
	UIImage* _selectedPointMarkerImage;

}

@property (assign,nonatomic) double topInsetPercentage;                       //@synthesize topInsetPercentage=_topInsetPercentage - In the implementation block
@property (assign,nonatomic) BOOL shouldConnectPoints;                        //@synthesize shouldConnectPoints=_shouldConnectPoints - In the implementation block
@property (nonatomic,retain) UIColor * baseColor;                             //@synthesize baseColor=_baseColor - In the implementation block
@property (assign,nonatomic) double lineWidth;                                //@synthesize lineWidth=_lineWidth - In the implementation block
@property (assign,nonatomic) double selectedLineWidth;                        //@synthesize selectedLineWidth=_selectedLineWidth - In the implementation block
@property (assign,nonatomic) double markRadius;                               //@synthesize markRadius=_markRadius - In the implementation block
@property (nonatomic,retain) UIImage * selectedPointMarkerImage;              //@synthesize selectedPointMarkerImage=_selectedPointMarkerImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(void)setBaseColor:(UIColor *)arg1 ;
-(void)drawSeriesWithBlockCoordinates:(id)arg1 axisRect:(CGRect)arg2 zoomLevelConfiguration:(id)arg3 pointTransform:(CGAffineTransform)arg4 renderContext:(CGContextRef)arg5 secondaryRenderContext:(id)arg6 ;
-(id)coordinatesForBlock:(id)arg1 blockPath:(SCD_Struct_HK9)arg2 xAxis:(id)arg3 yAxis:(id)arg4 ;
-(BOOL)supportsMultiTouchSelection;
-(double)distanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)xAxisDistanceFromPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(double)yAxisDifferenceToPoint:(CGPoint)arg1 blockCoordinate:(id)arg2 chartRect:(CGRect)arg3 ;
-(BOOL)blockCoordinate:(id)arg1 lessThan:(id)arg2 ;
-(BOOL)blockCoordinate:(id)arg1 greaterThan:(id)arg2 ;
-(void)setYAxis:(id)arg1 ;
-(id)findAxisLabelsInModelRange:(id)arg1 zoomScale:(double)arg2 ;
-(CGPoint)renderPositionForLabel:(id)arg1 rect:(CGRect)arg2 zoomScale:(double)arg3 contentOffset:(CGPoint)arg4 constantOffset:(double)arg5 isHorizontal:(BOOL)arg6 optionalOffset:(CGPoint)arg7 ;
-(UIImage *)selectedPointMarkerImage;
-(void)setSelectedPointMarkerImage:(UIImage *)arg1 ;
-(double)topInsetPercentage;
-(void)setTopInsetPercentage:(double)arg1 ;
-(void)setShouldConnectPoints:(BOOL)arg1 ;
-(void)setSelectedLineWidth:(double)arg1 ;
-(double)selectedLineWidth;
-(void)setMarkRadius:(double)arg1 ;
-(double)yCoordinateForLevel:(long long)arg1 chartRect:(CGRect)arg2 ;
-(double)markRadius;
-(BOOL)shouldConnectPoints;
-(UIColor *)baseColor;
@end

