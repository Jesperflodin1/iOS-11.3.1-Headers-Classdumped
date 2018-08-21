/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:03:46 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@interface AVStatusBarBackgroundGradientView : UIView {

	BOOL _showsGradientWhenStatusBarVisible;
	double _gradientOpacity;

}

@property (assign,nonatomic) double gradientOpacity;                              //@synthesize gradientOpacity=_gradientOpacity - In the implementation block
@property (assign,nonatomic) BOOL showsGradientWhenStatusBarVisible;              //@synthesize showsGradientWhenStatusBarVisible=_showsGradientWhenStatusBarVisible - In the implementation block
+(Class)layerClass;
-(id)init;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setGradientOpacity:(double)arg1 ;
-(void)setShowsGradientWhenStatusBarVisible:(BOOL)arg1 ;
-(void)_updateGradientOpacity;
-(BOOL)showsGradientWhenStatusBarVisible;
-(double)gradientOpacity;
@end

