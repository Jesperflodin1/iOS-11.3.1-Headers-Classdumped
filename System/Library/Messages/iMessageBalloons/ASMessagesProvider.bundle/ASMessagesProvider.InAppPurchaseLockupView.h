/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider17InAppPurchaseView, _TtC18ASMessagesProvider11ArtworkView, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider11OfferButton;

@interface ASMessagesProvider.InAppPurchaseLockupView : UIView {

	 iconView;
	 theme;
	 titleLabel;
	 subtitleLabel;
	 descriptionLabel;
	 offerButton;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider17InAppPurchaseView * iconView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * mainArtworkView; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * titleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * subtitleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * descriptionLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11OfferButton * offerButton; 
+(CGSize)estimatedSizeIn:(id)arg1 fitting:(CGSize)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
-(_TtC18ASMessagesProvider11OfferButton *)offerButton;
-(_TtC18ASMessagesProvider11ArtworkView *)mainArtworkView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)titleLabel;
-(void)tintColorDidChange;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)subtitleLabel;
-(_TtC18ASMessagesProvider17InAppPurchaseView *)iconView;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)descriptionLabel;
@end

