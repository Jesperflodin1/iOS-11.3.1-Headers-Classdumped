/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@class UIView, NSString, UIButton;

@interface PKPeerPaymentBankAccountCell : UITableViewCell {

	UIView* _bottomSeperator;
	UIView* _topSeperator;
	NSString* _bankName;
	NSString* _accountNumber;
	UIButton* _editButton;

}

@property (nonatomic,copy) NSString * bankName;                    //@synthesize bankName=_bankName - In the implementation block
@property (nonatomic,copy) NSString * accountNumber;               //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,readonly) UIButton * editButton;              //@synthesize editButton=_editButton - In the implementation block
+(double)cellHeight;
-(void)layoutSubviews;
-(id)initWithReuseIdentifier:(id)arg1 ;
-(NSString *)accountNumber;
-(NSString *)bankName;
-(void)setAccountNumber:(NSString *)arg1 ;
-(void)setBankName:(NSString *)arg1 ;
-(UIButton *)editButton;
@end

