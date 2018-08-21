/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>
#import <ASMessagesProvider/ASMessagesProvider.FlowPreviewableView.h>
#import <AppStoreKit/AppStoreKit.OfferLabelPresenterView.h>

@class _TtC18ASMessagesProvider11ArtworkView, UILabel, _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider11OfferButton, _TtC18ASMessagesProvider13SeparatorView;

@interface ASMessagesProvider.MediumLockupCollectionViewCell : UICollectionViewCell <ASMessagesProvider.FlowPreviewableView, AppStoreKit.OfferLabelPresenterView> {

	 artworkView;
	 titleLabel;
	 subtitleLabel;
	 offerLabel;
	 offerLabelPresenter;
	 offerButton;
	 separatorView;
	 separator;

}

@property (readonly,nonatomic) CGRect peekPopPreviewBounds; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * artworkView; 
@property (readonly,nonatomic) CGSize preferredArtworkSize; 
@property (readonly,nonatomic) UILabel * titleLabel; 
@property (readonly,nonatomic) UILabel * subtitleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * offerLabel; 
@property (copy,nonatomic) id offerLabelPresenter; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider11OfferButton * offerButton; 
@property (retain,nonatomic) _TtC18ASMessagesProvider13SeparatorView * separatorView; 
+(CGSize)sizeFor:(id)arg1 fitting:(CGSize)arg2 pageTraits:(id)arg3 isSeparatorHidden:(BOOL)arg4 ;
+(CGSize)estimatedSizeIn:(id)arg1 fitting:(CGSize)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
-(_TtC18ASMessagesProvider11OfferButton *)offerButton;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)offerLabel;
-(id)offerLabelPresenter;
-(void)setOfferLabelPresenter:(id)arg1 ;
-(CGRect)peekPopPreviewBounds;
-(void)hideLoading;
-(void)showWithUpdateError:(id)arg1 ;
-(void)showWithOfferLabelText:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(_TtC18ASMessagesProvider13SeparatorView *)separatorView;
-(void)setSeparatorView:(_TtC18ASMessagesProvider13SeparatorView *)arg1 ;
-(UILabel *)subtitleLabel;
-(void)showLoading;
-(CGSize)preferredArtworkSize;
-(_TtC18ASMessagesProvider11ArtworkView *)artworkView;
@end

