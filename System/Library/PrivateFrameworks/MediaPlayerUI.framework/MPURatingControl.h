/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:23:05 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/MediaPlayerUI.framework/MediaPlayerUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlayerUI/MediaPlayerUI-Structs.h>
#import <UIKit/UIControl.h>

@protocol MPURatingControlDelegate;
@class UITapGestureRecognizer, UIPanGestureRecognizer, NSMutableArray;

@interface MPURatingControl : UIControl {

	UITapGestureRecognizer* _tapGestureRecognizer;
	UIPanGestureRecognizer* _panGestureRecognizer;
	NSMutableArray* _imageViews;
	id<MPURatingControlDelegate> _delegate;
	double _rating;
	UIEdgeInsets _hitTestEdgeInsets;

}

@property (assign,nonatomic,__weak) id<MPURatingControlDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hitTestEdgeInsets;                            //@synthesize hitTestEdgeInsets=_hitTestEdgeInsets - In the implementation block
@property (assign,nonatomic) double rating;                                             //@synthesize rating=_rating - In the implementation block
+(id)ratingStarImage;
+(id)ratingDotImage;
-(double)rating;
-(void)setRating:(double)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id<MPURatingControlDelegate>)delegate;
-(void)setDelegate:(id<MPURatingControlDelegate>)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)_handlePanGesture:(id)arg1 ;
-(void)_handleTapGesture:(id)arg1 ;
-(void)viewDidMoveToSuperview;
-(UIEdgeInsets)hitTestEdgeInsets;
-(void)setHitTestEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)_updateImageViewsForRatingAnimated:(BOOL)arg1 ;
-(double)ratingValueForLocationInView:(CGPoint)arg1 ;
-(void)setRating:(double)arg1 animated:(BOOL)arg2 ;
-(void)_updateImageView:(id)arg1 proposedImage:(id)arg2 filled:(BOOL)arg3 ;
@end

