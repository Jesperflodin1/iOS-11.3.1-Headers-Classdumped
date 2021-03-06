/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIImageView, UILabel;

@interface ASMessagesProvider.ProductCapabilityCell : UICollectionViewCell {

	 iconImageView;
	 titleLabel;
	 captionLabel;

}

@property (readonly,nonatomic) UIImageView * iconImageView; 
@property (readonly,nonatomic) UILabel * titleLabel; 
@property (readonly,nonatomic) UILabel * captionLabel; 
+(CGSize)sizeWithFitting:(CGSize)arg1 forTitle:(id)arg2 caption:(id)arg3 in:(id)arg4 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(UIImageView *)iconImageView;
-(UILabel *)captionLabel;
@end

