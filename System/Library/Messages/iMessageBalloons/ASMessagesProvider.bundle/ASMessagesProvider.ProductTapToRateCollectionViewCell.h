/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider17StarRatingControl, _TtC11AppStoreKit10RateAction;

@interface ASMessagesProvider.ProductTapToRateCollectionViewCell : UICollectionViewCell {

	 separatorView;
	 titleLabel;
	 ratingControl;
	 rateAction;

}

@property (readonly,nonatomic) UIView * separatorView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * titleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider17StarRatingControl * ratingControl; 
@property (retain,nonatomic) _TtC11AppStoreKit10RateAction * rateAction; 
+(BOOL)shouldWrapWith:(id)arg1 fitting:(CGSize)arg2 in:(id)arg3 ;
-(void)setRateAction:(_TtC11AppStoreKit10RateAction *)arg1 ;
-(_TtC11AppStoreKit10RateAction *)rateAction;
-(void)darkerSystemColorsStatusDidChange:(id)arg1 ;
-(void)ratingChangedWithSender:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)titleLabel;
-(UIView *)separatorView;
-(_TtC18ASMessagesProvider17StarRatingControl *)ratingControl;
@end
