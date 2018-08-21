/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class UIView;

@interface ASMessagesProvider.DividerView : UICollectionReusableView {

	 separatorView;
	 separatorInset;
	 style;

}

@property (readonly,nonatomic) UIView * separatorView; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
+(double)separatorHeight;
-(void)darkerSystemColorsStatusDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInset;
-(UIView *)separatorView;
@end
