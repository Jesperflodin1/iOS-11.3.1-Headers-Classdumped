/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:12 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UITextFieldBackgroundView.h>

@class CAShapeLayer, UIBezierPath;

@interface _UITextFieldPasscodeCutoutBackground : UITextFieldBackgroundView {

	BOOL _customStrokeColor;
	BOOL _customFillColor;
	CAShapeLayer* _lighteningOutline;
	double _outlineAlpha;
	double _cornerRadius;

}

@property (assign,nonatomic) double cornerRadius;                      //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,readonly) UIBezierPath * customPath; 
@property (assign,nonatomic) double outlineAlpha; 
+(Class)layerClass;
+(id)_strokeColor:(BOOL)arg1 ;
+(id)_fillColor:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(double)cornerRadius;
-(void)setBounds:(CGRect)arg1 ;
-(double)lineWidth;
-(void)setLineWidth:(double)arg1 ;
-(id)fillColor;
-(void)setFillColor:(id)arg1 ;
-(void)setStrokeColor:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)_layer;
-(void)setEnabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 active:(BOOL)arg2 ;
-(id)_strokeColor:(BOOL)arg1 ;
-(id)strokeColor;
-(id)_fillColor:(BOOL)arg1 ;
-(void)_updatePath;
-(void)setLineWidth:(double)arg1 updatePath:(BOOL)arg2 ;
-(double)_pathInset;
-(void)_updateLightingOutlinePath;
-(UIBezierPath *)customPath;
-(void)setOutlineAlpha:(double)arg1 ;
-(double)outlineAlpha;
@end

