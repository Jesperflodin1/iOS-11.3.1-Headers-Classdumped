/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:04:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, UIImageView, NSArray;

@interface EKCustomTitleView : UIView {

	BOOL _animating;
	UILabel* _originalTitle;
	UILabel* _title;
	UIImageView* _originalImage;
	UIImageView* _titleImage;
	UILabel* _subTitle;
	NSArray* _changingConstraints;

}

@property (retain) UILabel * originalTitle;                    //@synthesize originalTitle=_originalTitle - In the implementation block
@property (retain) UILabel * title;                            //@synthesize title=_title - In the implementation block
@property (retain) UIImageView * originalImage;                //@synthesize originalImage=_originalImage - In the implementation block
@property (retain) UIImageView * titleImage;                   //@synthesize titleImage=_titleImage - In the implementation block
@property (retain) UILabel * subTitle;                         //@synthesize subTitle=_subTitle - In the implementation block
@property (retain) NSArray * changingConstraints;              //@synthesize changingConstraints=_changingConstraints - In the implementation block
@property (assign) BOOL animating;                             //@synthesize animating=_animating - In the implementation block
-(UILabel *)subTitle;
-(void)setSubTitle:(UILabel *)arg1 ;
-(void)layoutSubviews;
-(void)setTitle:(UILabel *)arg1 ;
-(UILabel *)title;
-(void)setAnimating:(BOOL)arg1 ;
-(BOOL)animating;
-(void)display;
-(UIImageView *)titleImage;
-(UIImageView *)originalImage;
-(NSArray *)changingConstraints;
-(void)setChangingConstraints:(NSArray *)arg1 ;
-(id)initWithTitle:(id)arg1 subTitle:(id)arg2 eventViewController:(id)arg3 ;
-(void)animateInWithCompletionBlock:(/*^block*/id)arg1 ;
-(void)animateOutWithCompletionBlock:(/*^block*/id)arg1 ;
-(UILabel *)originalTitle;
-(void)setOriginalTitle:(UILabel *)arg1 ;
-(void)setOriginalImage:(UIImageView *)arg1 ;
-(void)setTitleImage:(UIImageView *)arg1 ;
@end
