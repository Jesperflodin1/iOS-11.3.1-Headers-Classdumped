/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:15 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WebUI.framework/WebUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class WBUContactAutoFillValue, UIButton, UILabel;

@interface WBUContactAutoFillTableViewCell : UITableViewCell {

	WBUContactAutoFillValue* _value;
	UIButton* _checkmarkButton;
	UILabel* _categoryLabel;
	UILabel* _optionLabel;
	BOOL _usesDetailAppearance;
	BOOL _checked;

}

@property (assign,nonatomic) BOOL usesDetailAppearance;              //@synthesize usesDetailAppearance=_usesDetailAppearance - In the implementation block
@property (assign,nonatomic) BOOL checked;                           //@synthesize checked=_checked - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setChecked:(BOOL)arg1 ;
-(BOOL)checked;
-(void)setUsesDetailAppearance:(BOOL)arg1 ;
-(void)setValue:(id)arg1 property:(id)arg2 ;
-(void)checkmarkButtonTapped:(id)arg1 ;
-(BOOL)usesDetailAppearance;
@end

