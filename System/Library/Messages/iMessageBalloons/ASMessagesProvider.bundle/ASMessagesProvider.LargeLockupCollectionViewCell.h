/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider11ArtworkView, UILabel;

@interface ASMessagesProvider.LargeLockupCollectionViewCell : UICollectionViewCell {

	 artworkView;
	 preferredArtworkSize;
	 titleLabel;
	 subtitleLabel;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider11ArtworkView * artworkView; 
@property (assign,nonatomic) CGSize preferredArtworkSize; 
@property (readonly,nonatomic) UILabel * titleLabel; 
@property (readonly,nonatomic) UILabel * subtitleLabel; 
+(CGSize)sizeFor:(id)arg1 fitting:(CGSize)arg2 pageTraits:(id)arg3 isSeparatorHidden:(BOOL)arg4 ;
+(CGSize)estimatedSizeIn:(id)arg1 fitting:(CGSize)arg2 layoutMargins:(UIEdgeInsets)arg3 ;
+(CGSize)artworkSizeFor:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(UILabel *)subtitleLabel;
-(CGSize)preferredArtworkSize;
-(void)setPreferredArtworkSize:(CGSize)arg1 ;
-(_TtC18ASMessagesProvider11ArtworkView *)artworkView;
@end

