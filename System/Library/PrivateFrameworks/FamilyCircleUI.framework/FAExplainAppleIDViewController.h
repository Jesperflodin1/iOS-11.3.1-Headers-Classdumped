/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIScrollView, UIView, UILabel, UIButton;

@interface FAExplainAppleIDViewController : UIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UILabel* _descriptionLabel;
	UIButton* _goToSettingsButton;
	BOOL _shouldShowInviteeInstructions;

}

@property (assign,nonatomic) BOOL shouldShowInviteeInstructions;              //@synthesize shouldShowInviteeInstructions=_shouldShowInviteeInstructions - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)_updateFonts;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(BOOL)shouldShowInviteeInstructions;
-(void)setShouldShowInviteeInstructions:(BOOL)arg1 ;
@end

