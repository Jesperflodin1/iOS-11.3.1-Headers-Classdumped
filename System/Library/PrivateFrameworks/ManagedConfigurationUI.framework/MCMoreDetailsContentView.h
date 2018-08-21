/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:51 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfigurationUI.framework/ManagedConfigurationUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ManagedConfigurationUI/ManagedConfigurationUI-Structs.h>
#import <UIKit/UIView.h>

@class UILabel;

@interface MCMoreDetailsContentView : UIView {

	UILabel* _title;
	UILabel* _subtitle1;
	UILabel* _subtitle2;

}
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)setTitleText:(id)arg1 ;
-(void)setPayload:(id)arg1 ;
-(id)_textForLabel:(id)arg1 value:(id)arg2 ;
-(void)setSubtitle1Text:(id)arg1 ;
-(void)setSubtitle2Text:(id)arg1 ;
-(void)setCertificate:(SecCertificateRef)arg1 ;
@end

