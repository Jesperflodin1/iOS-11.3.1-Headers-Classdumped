/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class _TtC18ASMessagesProvider23InAppPurchaseLockupView, _TtC18ASMessagesProvider13SeparatorView;

@interface ASMessagesProvider.InAppPurchaseLockupCollectionViewCell : UICollectionViewCell {

	 lockupView;
	 spotlightView;
	 separatorView;
	 separator;
	 isPartOfSpotlightShelf;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider23InAppPurchaseLockupView * lockupView; 
@property (retain,nonatomic) _TtC18ASMessagesProvider13SeparatorView * separatorView; 
+(id)spotlightBackgroundColor;
+(CGSize)sharedSizeFor:(id)arg1 fitting:(CGSize)arg2 pageTraits:(id)arg3 isSeparatorHidden:(BOOL)arg4 ;
+(double)spotlightPadding;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(_TtC18ASMessagesProvider13SeparatorView *)separatorView;
-(void)setSeparatorView:(_TtC18ASMessagesProvider13SeparatorView *)arg1 ;
-(_TtC18ASMessagesProvider23InAppPurchaseLockupView *)lockupView;
@end

