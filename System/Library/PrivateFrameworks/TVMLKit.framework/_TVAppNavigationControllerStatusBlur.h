/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:18 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIVisualEffectView, UIView, UIColor, UIVisualEffect;

@interface _TVAppNavigationControllerStatusBlur : UIView {

	UIVisualEffectView* _visualEffectView;
	UIView* _dimmingView;

}

@property (nonatomic,retain) UIColor * backgroundTintColor; 
@property (nonatomic,retain) UIVisualEffect * visualEffect; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_commonInit;
-(UIVisualEffect *)visualEffect;
-(void)setVisualEffect:(UIVisualEffect *)arg1 ;
-(UIColor *)backgroundTintColor;
-(void)setBackgroundTintColor:(UIColor *)arg1 ;
@end

