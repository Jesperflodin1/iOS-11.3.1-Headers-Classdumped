/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <QuartzCore/CAShapeLayer.h>

@interface AKBoxLayer : CAShapeLayer {

	double _borderWidthScale;
	double _boxCornerRadius;
	double _nominalBorderWidth;

}

@property (assign) double boxCornerRadius;                         //@synthesize boxCornerRadius=_boxCornerRadius - In the implementation block
@property (assign) double nominalBorderWidth;                      //@synthesize nominalBorderWidth=_nominalBorderWidth - In the implementation block
@property (assign,nonatomic) double borderWidthScale; 
-(void)setBounds:(CGRect)arg1 ;
-(id)initWithBorderWidth:(double)arg1 cornerRadius:(double)arg2 ;
-(void)setBorderWidthScale:(double)arg1 ;
-(void)_updateBoxPath;
-(double)nominalBorderWidth;
-(double)borderWidthScale;
-(double)boxCornerRadius;
-(void)setBoxCornerRadius:(double)arg1 ;
-(void)setNominalBorderWidth:(double)arg1 ;
@end
