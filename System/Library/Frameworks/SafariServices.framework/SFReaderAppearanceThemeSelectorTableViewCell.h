/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:07:24 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UITableViewCell.h>

@protocol SFReaderAppearanceThemeSelectorTableViewCellDelegate;
@class UIStackView, UIButton;

@interface SFReaderAppearanceThemeSelectorTableViewCell : UITableViewCell {

	UIStackView* _stackView;
	UIButton* _whiteButton;
	UIButton* _sepiaButton;
	UIButton* _grayButton;
	UIButton* _nightButton;
	id<SFReaderAppearanceThemeSelectorTableViewCellDelegate> _delegate;
	long long _selectedTheme;

}

@property (assign,nonatomic,__weak) id<SFReaderAppearanceThemeSelectorTableViewCellDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) long long selectedTheme;                                                               //@synthesize selectedTheme=_selectedTheme - In the implementation block
+(double)requiredHeight;
-(id<SFReaderAppearanceThemeSelectorTableViewCellDelegate>)delegate;
-(void)setDelegate:(id<SFReaderAppearanceThemeSelectorTableViewCellDelegate>)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)setSelectedTheme:(long long)arg1 ;
-(long long)selectedTheme;
-(void)_createThemeButtons;
-(void)_updateSelectedTheme;
-(id)_buttonForTheme:(long long)arg1 ;
-(id)_imageForTheme:(long long)arg1 selected:(BOOL)arg2 ;
-(void)_themeButtonAction:(id)arg1 ;
-(id)_themeButtonImageWithFillColor:(id)arg1 strokeColor:(id)arg2 selected:(BOOL)arg3 ;
-(long long)_themeForButton:(id)arg1 ;
-(void)_changeSelectionForTheme:(long long)arg1 selected:(BOOL)arg2 ;
@end

