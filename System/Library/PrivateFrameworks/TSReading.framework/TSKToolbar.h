/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKit/UINavigationBar.h>

@class UINavigationItem, CALayer, TSKToolbarTitleView, NSString, UIColor;

@interface TSKToolbar : UINavigationBar {

	UINavigationItem* _navigationItem;
	CALayer* _shadowLayer;
	BOOL _shadowEnabled;
	TSKToolbarTitleView* _navigationTitleView;
	double _leftToolbarItemsInset;
	double _rightToolbarItemsInset;
	double _leftToolbarItemsMaximumWidth;
	double _rightToolbarItemsMaximumWidth;

}

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIColor * titleColor; 
@property (nonatomic,retain) TSKToolbarTitleView * navigationTitleView;              //@synthesize navigationTitleView=_navigationTitleView - In the implementation block
@property (assign,nonatomic) BOOL shadowEnabled;                                     //@synthesize shadowEnabled=_shadowEnabled - In the implementation block
@property (assign,nonatomic) double leftToolbarItemsInset;                           //@synthesize leftToolbarItemsInset=_leftToolbarItemsInset - In the implementation block
@property (assign,nonatomic) double rightToolbarItemsInset;                          //@synthesize rightToolbarItemsInset=_rightToolbarItemsInset - In the implementation block
@property (assign,nonatomic) double leftToolbarItemsMaximumWidth;                    //@synthesize leftToolbarItemsMaximumWidth=_leftToolbarItemsMaximumWidth - In the implementation block
@property (assign,nonatomic) double rightToolbarItemsMaximumWidth;                   //@synthesize rightToolbarItemsMaximumWidth=_rightToolbarItemsMaximumWidth - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)dealloc;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setShadowEnabled:(BOOL)arg1 ;
-(BOOL)shadowEnabled;
-(void)setTitleColor:(UIColor *)arg1 ;
-(UIColor *)titleColor;
-(void)setItems:(id)arg1 animated:(BOOL)arg2 height:(double)arg3 isLeft:(BOOL)arg4 ;
-(double)leftToolbarItemsMaximumWidth;
-(double)rightToolbarItemsMaximumWidth;
-(double)leftToolbarItemsInset;
-(double)rightToolbarItemsInset;
-(id)itemWithTag:(long long)arg1 ;
-(void)setLeftItems:(id)arg1 title:(id)arg2 rightItems:(id)arg3 duration:(double)arg4 ;
-(void)setNavigationTitleView:(TSKToolbarTitleView *)arg1 ;
-(TSKToolbarTitleView *)navigationTitleView;
-(void)setLeftToolbarItemsInset:(double)arg1 ;
-(void)setRightToolbarItemsInset:(double)arg1 ;
-(void)setLeftToolbarItemsMaximumWidth:(double)arg1 ;
-(void)setRightToolbarItemsMaximumWidth:(double)arg1 ;
@end
