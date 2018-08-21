/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:33 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class UILabel, PKContinuousButton, UIActivityIndicatorView, UIView, PKPeerPaymentAccountResolutionController;

@interface PKPassPeerPaymentAccountResolutionView : UIView {

	UILabel* _titleLabel;
	UILabel* _bodyLabel;
	PKContinuousButton* _button;
	UIActivityIndicatorView* _activityIndicator;
	UIView* _bottomRule;
	PKPeerPaymentAccountResolutionController* _peerPaymentAccountResolutionController;
	unsigned long long _peerPaymentAccountResolution;
	BOOL _showSpinner;

}
-(void)layoutSubviews;
-(id)_button;
-(id)_titleLabel;
-(id)_activityIndicator;
-(void)_showSpinner:(BOOL)arg1 ;
-(id)_titleText;
-(id)_bodyText;
-(id)_buttonText;
-(id)_bodyLabel;
-(id)_bottomRule;
-(id)initWithAccountResolutionController:(id)arg1 ;
-(BOOL)_displaysTitleLabel;
-(void)_handleButtonPressed:(id)arg1 ;
@end
