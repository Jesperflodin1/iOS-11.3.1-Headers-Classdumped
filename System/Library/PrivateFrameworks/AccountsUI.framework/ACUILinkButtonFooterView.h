/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:13:13 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/AccountsUI.framework/AccountsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class ACUILinkButton;

@interface ACUILinkButtonFooterView : UIView <PSHeaderFooterView> {

	ACUILinkButton* _linkButton;
	long long _desiredTextAlignment;

}

@property (assign,nonatomic) long long alignment;              //@synthesize desiredTextAlignment=_desiredTextAlignment - In the implementation block
-(void)layoutSubviews;
-(void)setAlignment:(long long)arg1 ;
-(long long)alignment;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithButton:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
@end

