/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:03 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@interface _UIScrollViewGradientMaskView : UIView {

	long long _gradientDirection;
	UIEdgeInsets _gradientStartInsets;
	UIEdgeInsets _gradientEndInsets;
	UIEdgeInsets _gradientIntensities;

}

@property (assign,nonatomic) UIEdgeInsets gradientStartInsets;              //@synthesize gradientStartInsets=_gradientStartInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientEndInsets;                //@synthesize gradientEndInsets=_gradientEndInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets gradientIntensities;              //@synthesize gradientIntensities=_gradientIntensities - In the implementation block
@property (assign,nonatomic) long long gradientDirection;                   //@synthesize gradientDirection=_gradientDirection - In the implementation block
+(Class)layerClass;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateWithFrame:(CGRect)arg1 gradientStartInsets:(UIEdgeInsets)arg2 gradientEndInsets:(UIEdgeInsets)arg3 gradientIntensities:(UIEdgeInsets)arg4 ;
-(UIEdgeInsets)gradientStartInsets;
-(UIEdgeInsets)gradientEndInsets;
-(UIEdgeInsets)gradientIntensities;
-(void)setGradientStartInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientEndInsets:(UIEdgeInsets)arg1 ;
-(void)setGradientIntensities:(UIEdgeInsets)arg1 ;
-(long long)gradientDirection;
-(id)gradientLayer;
-(void)setGradientDirection:(long long)arg1 ;
@end

