/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MapKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, UIImageView, UIMotionEffect;

@interface _MKCalloutBackgroundMaskView : UIView {

	UIView* _baseView;
	UIImageView* _topArrow;
	UIImageView* _bottomArrow;
	UIImageView* _leftArrow;
	UIImageView* _rightArrow;
	UIView* _currentArrowContainer;
	UIMotionEffect* _arrowMotionEffect;

}

@property (nonatomic,readonly) UIView * baseView;                           //@synthesize baseView=_baseView - In the implementation block
@property (nonatomic,readonly) UIImageView * topArrow;                      //@synthesize topArrow=_topArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * bottomArrow;                   //@synthesize bottomArrow=_bottomArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * leftArrow;                     //@synthesize leftArrow=_leftArrow - In the implementation block
@property (nonatomic,readonly) UIImageView * rightArrow;                    //@synthesize rightArrow=_rightArrow - In the implementation block
@property (nonatomic,readonly) UIView * currentArrowContainer;              //@synthesize currentArrowContainer=_currentArrowContainer - In the implementation block
@property (nonatomic,copy) UIMotionEffect * arrowMotionEffect;              //@synthesize arrowMotionEffect=_arrowMotionEffect - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setArrowMotionEffect:(UIMotionEffect *)arg1 ;
-(UIView *)baseView;
-(UIImageView *)rightArrow;
-(UIImageView *)leftArrow;
-(UIImageView *)topArrow;
-(UIImageView *)bottomArrow;
-(UIView *)currentArrowContainer;
-(void)_removeArrows;
-(UIMotionEffect *)arrowMotionEffect;
-(void)_setupViews;
@end

