/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider16DynamicTypeLabel, _TtC18ASMessagesProvider9StackView;

@interface ASMessagesProvider.BundleView : UIView {

	 cornerRadius;
	 iconStyle;
	 titleLabel;
	 itemStack;
	 itemReusePool;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * titleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider9StackView * itemStack; 
+(long long)maxBundleChildren;
-(_TtC18ASMessagesProvider9StackView *)itemStack;
-(void)addWithBundleChildren:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)titleLabel;
-(void)prepareForReuse;
@end
