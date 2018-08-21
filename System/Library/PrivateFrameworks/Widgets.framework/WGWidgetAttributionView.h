/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:22 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITextView.h>

@class NSMutableAttributedString, UIColor;

@interface WGWidgetAttributionView : UITextView {

	NSMutableAttributedString* _widgetAttributedString;
	UIColor* _legibilityTextColor;

}

@property (nonatomic,retain) UIColor * legibilityTextColor;              //@synthesize legibilityTextColor=_legibilityTextColor - In the implementation block
+(id)attributedStringForIdentifier:(id)arg1 ;
+(id)widgetAttributionIDsInOrder;
-(void)layoutSubviews;
-(id)initWithWidgetAttributedString:(id)arg1 ;
-(void)setLegibilityTextColor:(UIColor *)arg1 ;
-(void)_configureAttributedString;
-(id)_attributionBackgroundColor;
-(id)_attributionFont;
-(UIColor *)legibilityTextColor;
@end

