/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:10:26 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Messages/iMessageBalloons/ASMessagesProvider.bundle/ASMessagesProvider
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ASMessagesProvider/ASMessagesProvider-Structs.h>
#import <UIKit/UIView.h>

@class _TtC18ASMessagesProvider16DynamicTypeLabel;

@interface ASMessagesProvider.DeveloperLinkView : UIView {

	 disclosureImageView;
	 primaryLabel;
	 secondaryLabel;
	 tapHandler;

}

@property (copy,nonatomic) id tapHandler; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * accessibilityTitleLabel; 
@property (readonly,nonatomic) _TtC18ASMessagesProvider16DynamicTypeLabel * accessibilitySubtitleLabel; 
-(void)didTapLink:(id)arg1 ;
-(void)applyWithTitle:(id)arg1 tapHandler:(/*^block*/id)arg2 ;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)accessibilityTitleLabel;
-(_TtC18ASMessagesProvider16DynamicTypeLabel *)accessibilitySubtitleLabel;
-(JEMeasurements)measurementsWithFitting:(CGSize)arg1 in:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(id)initWithCoder:(id)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setTapHandler:(id)arg1 ;
-(id)tapHandler;
@end

