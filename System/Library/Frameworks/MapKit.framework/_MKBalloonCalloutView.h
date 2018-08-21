/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIColor, CAShapeLayer, CALayer, UIImageView, UIImage;

@interface _MKBalloonCalloutView : UIView {

	UIView* _shadowView;
	UIView* _containerView;
	UIColor* _balloonTintColor;
	UIColor* _strokeColor;
	UIColor* _innerStrokeColor;
	CAShapeLayer* _balloonShape;
	CALayer* _balloonInnerStrokeLayer;
	UIImageView* _balloonBodyImageView;
	UIImageView* _tailView;
	UIView* _innerBackgroundView;
	UIImageView* _imageView;
	CGSize _intrinsicSize;
	CGSize _shadowSize;
	BOOL _originatesAsSmallBalloon;
	double _croppedImageScale;
	UIImageView* _contentViewMaskView;
	UIView* _contentView;
	long long _style;
	UIImage* _image;
	double _smallBalloonScale;

}

@property (nonatomic,readonly) long long style;                          //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) UIImage * image;                              //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIView * contentView;                       //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) BOOL originatesAsSmallBalloon;              //@synthesize originatesAsSmallBalloon=_originatesAsSmallBalloon - In the implementation block
@property (assign,nonatomic) double smallBalloonScale;                   //@synthesize smallBalloonScale=_smallBalloonScale - In the implementation block
@property (nonatomic,copy) UIColor * balloonTintColor;                   //@synthesize balloonTintColor=_balloonTintColor - In the implementation block
@property (nonatomic,copy) UIColor * strokeColor;                        //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,copy) UIColor * innerStrokeColor;                   //@synthesize innerStrokeColor=_innerStrokeColor - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setContentView:(UIView *)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setImage:(UIImage *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)didMoveToWindow;
-(CGSize)intrinsicContentSize;
-(long long)style;
-(UIImage *)image;
-(void)setStrokeColor:(UIColor *)arg1 ;
-(UIColor *)strokeColor;
-(id)initWithStyle:(long long)arg1 ;
-(void)setBalloonTintColor:(UIColor *)arg1 ;
-(UIColor *)balloonTintColor;
-(BOOL)calloutContainsPoint:(CGPoint)arg1 ;
-(CGRect)_centerFrame;
-(double)_innerDiameter;
-(void)setInnerStrokeColor:(UIColor *)arg1 ;
-(id)_generateInnerStrokeImage;
-(void)_updateCroppedImage;
-(void)showCalloutAnimated:(BOOL)arg1 ;
-(void)showCalloutAnimated:(BOOL)arg1 startVerticalOffset:(double)arg2 ;
-(void)hideCalloutAnimated:(BOOL)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)hideCalloutAnimated:(BOOL)arg1 endVerticalOffset:(double)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)originatesAsSmallBalloon;
-(void)setOriginatesAsSmallBalloon:(BOOL)arg1 ;
-(double)smallBalloonScale;
-(void)setSmallBalloonScale:(double)arg1 ;
-(UIColor *)innerStrokeColor;
@end

