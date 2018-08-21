/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:17 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIViewController.h>

@class UIColor, UIViewController;

@interface _TVModalPageBezelViewController : UIViewController {

	double _bezelCornerRadius;
	UIColor* _bezelBackgroundColor;
	UIViewController* _contentViewController;
	CGSize _contentSize;

}

@property (assign,nonatomic) double bezelCornerRadius;                              //@synthesize bezelCornerRadius=_bezelCornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * bezelBackgroundColor;                        //@synthesize bezelBackgroundColor=_bezelBackgroundColor - In the implementation block
@property (nonatomic,retain) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (assign,nonatomic) CGSize contentSize;                                    //@synthesize contentSize=_contentSize - In the implementation block
-(CGSize)contentSize;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentViewController:(UIViewController *)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(UIViewController *)contentViewController;
-(void)viewDidLoad;
-(void)setBezelCornerRadius:(double)arg1 ;
-(void)setBezelBackgroundColor:(UIColor *)arg1 ;
-(double)bezelCornerRadius;
-(UIColor *)bezelBackgroundColor;
@end
