/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:27:50 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UIButton, UILabel, UIImageView, UIControl, NSString, UIImage;

@interface SKUIRedeemITunesPassLearnMoreView : UIView {

	UIButton* _button;
	UILabel* _explanationLabel;
	UIImageView* _headerImageView;

}

@property (nonatomic,readonly) UIControl * button; 
@property (nonatomic,copy) NSString * buttonTitle; 
@property (nonatomic,copy) NSString * explanationString; 
@property (nonatomic,retain) UIImage * headerImage; 
-(void)layoutSubviews;
-(UIControl *)button;
-(void)setBackgroundColor:(id)arg1 ;
-(void)setButtonTitle:(NSString *)arg1 ;
-(NSString *)buttonTitle;
-(UIImage *)headerImage;
-(void)setHeaderImage:(UIImage *)arg1 ;
-(void)setExplanationString:(NSString *)arg1 ;
-(NSString *)explanationString;
@end

