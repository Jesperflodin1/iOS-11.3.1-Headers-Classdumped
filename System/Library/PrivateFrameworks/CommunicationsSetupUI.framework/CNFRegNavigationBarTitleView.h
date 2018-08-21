/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:19:40 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <UIKit/UIView.h>

@class UINavigationItem, UILabel, UIActivityIndicatorView;

@interface CNFRegNavigationBarTitleView : UIView {

	UINavigationItem* _item;
	UILabel* _titleLabel;
	UIActivityIndicatorView* _activityIndicator;

}

@property (assign,nonatomic) UINavigationItem * item;              //@synthesize item=_item - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UINavigationItem *)item;
-(void)dealloc;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setItem:(UINavigationItem *)arg1 ;
-(id)_defaultFont;
-(id)initWithNavigationItem:(id)arg1 ;
-(BOOL)_useSilverLookForBarStyle:(long long)arg1 ;
-(id)_currentTextColorForBarStyle:(long long)arg1 ;
-(CGSize)_currentTextShadowOffsetForBarStyle:(long long)arg1 ;
-(id)_currentTextShadowColorForBarStyle:(long long)arg1 ;
-(void)_updateTitleLabel;
-(id)_titleTextColorForBarStyle:(long long)arg1 ;
@end

