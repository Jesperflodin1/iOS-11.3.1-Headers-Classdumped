/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider16ReviewRatingView, UIProgressView;

@interface ASMessagesProvider.RatingRowView : UIView {

	 ratingView;
	 barView;

}

@property (readonly,nonatomic) CGSize intrinsicContentSize; 
@property (assign,nonatomic) float ratingProportion; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16ReviewRatingView * accessibilityRatingView; 
@property (readonly,nonatomic) UIProgressView * accessibilityBarView; 
-(id)initWithRepresentedRating:(unsigned long long)arg1 ;
-(float)ratingProportion;
-(void)setRatingProportion:(float)arg1 ;
-(_TtC18ASMessagesProvider16ReviewRatingView *)accessibilityRatingView;
-(UIProgressView *)accessibilityBarView;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)intrinsicContentSize;
@end

