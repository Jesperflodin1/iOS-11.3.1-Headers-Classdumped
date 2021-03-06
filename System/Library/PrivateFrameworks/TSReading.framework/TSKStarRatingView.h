/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UIControl.h>

@class TSKHorizontalDragRecognizer, TSUColor;

@interface TSKStarRatingView : UIControl {

	long long mRating;
	long long mRatingOnFingerDown;
	int mStyle;
	TSKHorizontalDragRecognizer* mDragGesture;
	BOOL mShowsDots;
	TSUColor* mColor;

}

@property (assign,nonatomic) long long value; 
@property (assign,nonatomic) int style; 
@property (assign,nonatomic) BOOL showsDots; 
@property (nonatomic,copy) TSUColor * color; 
+(CGPathRef)newStarPath:(double)arg1 ;
+(void)renderRating:(long long)arg1 intoContext:(CGContextRef)arg2 rect:(CGRect)arg3 style:(int)arg4 showDots:(BOOL)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(int)style;
-(void)setStyle:(int)arg1 ;
-(void)setValue:(long long)arg1 ;
-(TSUColor *)color;
-(void)setColor:(TSUColor *)arg1 ;
-(long long)value;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)p_horizontalDrag:(id)arg1 ;
-(void)p_tapped:(id)arg1 ;
-(void)p_setupGestureRecognizers;
-(void)setShowsDots:(BOOL)arg1 ;
-(long long)p_starRatingForLocation:(double)arg1 ;
-(long long)p_starRatingForGesture:(id)arg1 ;
-(Class)renderClass;
-(BOOL)showsDots;
@end

