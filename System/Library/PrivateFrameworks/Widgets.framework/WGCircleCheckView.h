/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, WGCheckView;

@interface WGCircleCheckView : UIView {

	UIImageView* _circleView;
	WGCheckView* _checkView;

}

@property (getter=_circleView,nonatomic,retain) UIImageView * circleView;              //@synthesize circleView=_circleView - In the implementation block
@property (getter=_checkView,nonatomic,retain) WGCheckView * checkView;                //@synthesize checkView=_checkView - In the implementation block
@property (assign,getter=isChecked,nonatomic) BOOL checked; 
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isChecked;
-(void)_setChecked:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(id)_configureCircleViewIfNecessary;
-(void)_configureCheckViewIfNecessary;
-(id)_checkView;
-(void)setCheckView:(WGCheckView *)arg1 ;
-(id)_circleView;
-(BOOL)_isFrozen;
-(void)_setFrozen:(BOOL)arg1 ;
-(void)setCircleView:(UIImageView *)arg1 ;
@end

