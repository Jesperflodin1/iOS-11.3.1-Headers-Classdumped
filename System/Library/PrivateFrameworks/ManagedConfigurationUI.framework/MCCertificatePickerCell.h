/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:52 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSTableCell.h>

@class UILabel;

@interface MCCertificatePickerCell : PSTableCell {

	UILabel* _issuedByLabel;
	UILabel* _issuerLabel;
	UILabel* _expiresByLabel;
	UILabel* _expiryDateLabel;

}
+(id)_dateFormatter;
+(float)defaultCellHeight;
+(id)_attributeFont;
+(float)_attributeLabelSpace;
-(void)layoutSubviews;
-(void)setChecked:(BOOL)arg1 ;
-(void)setExpirationDate:(id)arg1 ;
-(id)_labelColor;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3 ;
-(void)setIssuer:(id)arg1 ;
-(id)_attributeLabelCopy;
-(id)_checkmarkView;
@end
