/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:28:16 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKit/UIView.h>

@class UIView, _TVRelatedWrappingView;

@interface _TVRelatedContentShelfView : UIView {

	UIView* _lastFocusedView;
	_TVRelatedWrappingView* _relatedWrappingView;
	UIView* _shelfView;
	UIView* _relatedView;
	double _relatedHeight;

}

@property (assign,nonatomic,__weak) UIView * shelfView;              //@synthesize shelfView=_shelfView - In the implementation block
@property (nonatomic,retain) UIView * relatedView;                   //@synthesize relatedView=_relatedView - In the implementation block
@property (assign,nonatomic) double relatedHeight;                   //@synthesize relatedHeight=_relatedHeight - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(void)setShelfView:(UIView *)arg1 ;
-(void)setRelatedHeight:(double)arg1 ;
-(void)setRelatedView:(UIView *)arg1 ;
-(UIView *)relatedView;
-(void)_layoutRelatedView;
-(UIView *)shelfView;
-(double)relatedHeight;
@end
