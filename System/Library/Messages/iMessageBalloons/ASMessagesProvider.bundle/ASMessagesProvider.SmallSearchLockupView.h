/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <ASMessagesProvider/ASMessagesProvider.BaseLockupView.h>

@class UIButton, _TtC18ASMessagesProvider16ReviewRatingView, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider17EditorsChoiceView, NSString;

@interface ASMessagesProvider.SmallSearchLockupView : ASMessagesProvider.BaseLockupView {

	 adSystemGrayAlternate;
	 adSystemMidGrayAlternate;
	 metadataRegularMargin;
	 metadataSmallMargin;
	 metadataTextSpace;
	 regularWidthColumnSpacing;
	 isAd;
	 adButton;
	 includeRatings;
	 userRatingView;
	 ratingCountLabel;
	 includeEditorsChoice;
	 editorsChoiceView;
	 descriptionLabel;
	 adButtonClickHandler;

}

@property (assign,nonatomic) double regularWidthColumnSpacing; 
@property (assign,nonatomic) BOOL isAd; 
@property (retain,nonatomic) UIButton * adButton; 
@property (assign,nonatomic) BOOL includeRatings; 
@property (retain,nonatomic) _TtC18ASMessagesProvider16ReviewRatingView * userRatingView; 
@property (retain,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * ratingCountLabel; 
@property (assign,nonatomic) BOOL includeEditorsChoice; 
@property (retain,nonatomic) _TtC18ASMessagesProvider17EditorsChoiceView * editorsChoiceView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * descriptionLabel; 
@property (copy,nonatomic) NSString * descriptionText; 
@property (copy,nonatomic) id adButtonClickHandler; 
+(CGSize)estimatedSizeWithTitle:(id)arg1 subtitle:(id)arg2 description:(id)arg3 in:(id)arg4 fitting:(CGSize)arg5 layoutMargins:(UIEdgeInsets)arg6 ;
-(void)setAdButton:(UIButton *)arg1 ;
-(void)setIsAd:(BOOL)arg1 ;
-(BOOL)includeRatings;
-(UIButton *)adButton;
-(void)applyWithSearchLockup:(id)arg1 isAd:(BOOL)arg2 ;
-(double)regularWidthColumnSpacing;
-(void)setRegularWidthColumnSpacing:(double)arg1 ;
-(void)setIncludeRatings:(BOOL)arg1 ;
-(_TtC18ASMessagesProvider16ReviewRatingView *)userRatingView;
-(void)setUserRatingView:(_TtC18ASMessagesProvider16ReviewRatingView *)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)ratingCountLabel;
-(void)setRatingCountLabel:(_TtC18ASMessagesProvider16DynamicTypeLabel *)arg1 ;
-(BOOL)includeEditorsChoice;
-(void)setIncludeEditorsChoice:(BOOL)arg1 ;
-(_TtC18ASMessagesProvider17EditorsChoiceView *)editorsChoiceView;
-(void)setEditorsChoiceView:(_TtC18ASMessagesProvider17EditorsChoiceView *)arg1 ;
-(id)adButtonClickHandler;
-(void)setAdButtonClickHandler:(id)arg1 ;
-(void)adButtonTrampolineWithSender:(id)arg1 ;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)isAd;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)descriptionLabel;
@end
