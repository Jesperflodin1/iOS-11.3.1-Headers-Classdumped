/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:09 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/MapsSettings.bundle/MapsSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UILabel.h>
#import <MapsSettings/MapsTheming.h>

@class NSString;

@interface MapsThemeLabel : UILabel <MapsTheming> {

	/*^block*/id _attributedTextProvider;
	/*^block*/id _textColorProvider;

}

@property (nonatomic,copy) id attributedTextProvider;               //@synthesize attributedTextProvider=_attributedTextProvider - In the implementation block
@property (nonatomic,copy) id textColorProvider;                    //@synthesize textColorProvider=_textColorProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateTheme;
-(id)textColorProvider;
-(void)setTextColorProvider:(id)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)_updateAttributedText;
-(id)attributedTextProvider;
-(void)setAttributedTextProvider:(id)arg1 ;
-(void)_updateTextColor;
@end

