/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:21 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKit/UIButton.h>

@class UIButton, NSCache, _UILegibilitySettings, NSString;

@interface WGNewWidgetsButton : UIButton {

	UIButton* _vibrantButton;
	UIButton* _overlayButton;
	NSCache* _numberAttributedStringCache;
	unsigned long long _badgeNumber;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _text;
	NSString* _numberText;

}

@property (nonatomic,retain) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * numberText;                                   //@synthesize numberText=_numberText - In the implementation block
@property (assign,nonatomic) unsigned long long badgeNumber;                          //@synthesize badgeNumber=_badgeNumber - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)init;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateButtons;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(id)_textFont;
-(void)_buttonStateChanged:(id)arg1 ;
-(void)_buttonPushed:(id)arg1 ;
-(void)setBadgeNumber:(unsigned long long)arg1 ;
-(void)setNumberText:(NSString *)arg1 ;
-(void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2 ;
-(id)_attributedStringWithColor:(id)arg1 ;
-(id)_numberFont;
-(NSString *)numberText;
-(id)_numberTextAttributes;
-(id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2 ;
-(id)_textAttributesWithColor:(id)arg1 ;
-(id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2 ;
-(CGSize)_numberLabelSizeForText:(id)arg1 ;
-(void)updateForContentCategorySizeChange;
-(unsigned long long)badgeNumber;
@end
