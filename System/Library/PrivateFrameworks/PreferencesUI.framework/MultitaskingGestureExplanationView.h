/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:26:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PreferencesUI.framework/PreferencesUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class UILabel, UnderlineButton, UIColor;

@interface MultitaskingGestureExplanationView : UIView <PSHeaderFooterView> {

	UILabel* _labels[4];
	UnderlineButton* _videoLinkButton;
	double _sized;
	double _width;
	UIColor* _footerTextColor;

}
-(void)layoutSubviews;
-(BOOL)isRTL;
-(double)preferredHeightForWidth:(double)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(id)newRegionSampleLabelUnderlined;
-(id)_accessibilityLabels;
@end

