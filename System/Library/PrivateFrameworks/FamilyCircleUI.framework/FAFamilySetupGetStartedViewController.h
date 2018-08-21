/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:21:11 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/FAFamilySetupPage.h>

@protocol FAFamilySetupPageDelegate;
@class ACAccount, ACAccountStore, AAFamilyEligibilityResponse, UIScrollView, UIView, UILabel, UIImageView, UIButton, FAFamilySharingFeaturesView, NSString;

@interface FAFamilySetupGetStartedViewController : UIViewController <FAFamilySetupPage> {

	ACAccount* _account;
	ACAccountStore* _accountStore;
	AAFamilyEligibilityResponse* _familyEligibilityResponse;
	UIScrollView* _scrollView;
	UIView* _contentView;
	UILabel* _titleLabel;
	UIImageView* _familySharingLogo;
	UILabel* _descriptionLabel;
	UIButton* _getStartedButton;
	FAFamilySharingFeaturesView* _familyFeaturesView;
	id<FAFamilySetupPageDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FAFamilySetupPageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<FAFamilySetupPageDelegate>)delegate;
-(void)setDelegate:(id<FAFamilySetupPageDelegate>)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(id)initWithAccount:(id)arg1 store:(id)arg2 ;
-(id)initWithAccount:(id)arg1 store:(id)arg2 familyEligibilityResponse:(id)arg3 ;
-(void)_updateFonts;
-(double)_heightForText:(id)arg1 constrainedToWidth:(double)arg2 ;
-(id)_createDescriptionLabelForText:(id)arg1 ;
-(void)_getStartedButtonWasTapped:(id)arg1 ;
@end

