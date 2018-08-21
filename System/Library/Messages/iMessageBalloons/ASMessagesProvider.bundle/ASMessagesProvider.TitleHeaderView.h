/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:25 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UICollectionReusableView.h>

@class _TtC18ASMessagesProvider16DynamicTypeLabel, UIView, NSString;

@interface ASMessagesProvider.TitleHeaderView : UICollectionReusableView {

	 titleLabel;
	 detailLabel;
	 style;
	 accessoryView;
	 accessoryType;
	 accessoryAction;
	 separatorLineView;
	 separatorInset;

}

@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * titleLabel; 
@property (retain,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * detailLabel; 
@property (retain,nonatomic) UIView * accessoryView; 
@property (copy,nonatomic) id accessoryAction; 
@property (readonly,nonatomic) UIView * separatorLineView; 
@property (assign,nonatomic) BOOL hasSeparator; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
+(double)accessoryMargin;
+(double)tallTextLineHeightMultiple;
+(double)largeTitleFourInchDelta;
+(id)pageReuseIdentifier;
+(id)pageWithDetailReuseIdentifier;
+(id)pageWithTrailingSeparatorReuseIdentifier;
-(UIView *)separatorLineView;
-(void)didTapWithAccessoryView:(id)arg1 ;
-(void)darkerSystemColorsStatusDidChange:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)titleLabel;
-(void)prepareForReuse;
-(void)setSeparatorInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)separatorInset;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(UIView *)accessoryView;
-(void)setAccessoryView:(UIView *)arg1 ;
-(void)setAccessoryAction:(id)arg1 ;
-(id)accessoryAction;
-(BOOL)_disableRasterizeInAnimations;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)detailLabel;
-(void)setDetailLabel:(_TtC18ASMessagesProvider16DynamicTypeLabel *)arg1 ;
-(BOOL)hasSeparator;
-(void)setHasSeparator:(BOOL)arg1 ;
@end

