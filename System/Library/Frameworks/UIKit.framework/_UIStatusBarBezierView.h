/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/_UIStatusBarDisplayable.h>

@class UIBezierPath, UIColor, CAShapeLayer, NSString, UIAccessibilityHUDItem;

@interface _UIStatusBarBezierView : UIView <_UIStatusBarDisplayable> {

	UIBezierPath* _bezierPath;
	UIColor* _fillColor;
	UIColor* _strokeColor;
	UIEdgeInsets _alignmentRectInsets;

}

@property (nonatomic,readonly) CAShapeLayer * shapeLayer; 
@property (assign,nonatomic) UIEdgeInsets alignmentRectInsets;                                       //@synthesize alignmentRectInsets=_alignmentRectInsets - In the implementation block
@property (nonatomic,retain) UIBezierPath * bezierPath;                                              //@synthesize bezierPath=_bezierPath - In the implementation block
@property (nonatomic,copy) UIColor * fillColor;                                                      //@synthesize fillColor=_fillColor - In the implementation block
@property (nonatomic,copy) UIColor * strokeColor;                                                    //@synthesize strokeColor=_strokeColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) double baselineOffset; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)alignmentRectInsets;
-(UIBezierPath *)bezierPath;
-(UIColor *)fillColor;
-(void)setFillColor:(UIColor *)arg1 ;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setAlignmentRectInsets:(UIEdgeInsets)arg1 ;
-(CAShapeLayer *)shapeLayer;
-(UIColor *)strokeColor;
-(void)setBezierPath:(UIBezierPath *)arg1 ;
@end

