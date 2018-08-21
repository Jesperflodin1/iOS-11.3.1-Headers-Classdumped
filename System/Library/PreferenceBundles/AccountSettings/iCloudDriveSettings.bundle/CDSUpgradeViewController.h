/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:11:41 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/AccountSettings/iCloudDriveSettings.bundle/iCloudDriveSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AccountsUI/ACUIViewController.h>

@protocol CDSUpgradeViewControllerDelegate;
@class UIScrollView, UIView, UIImageView, UILabel, UIButton, UIActivityIndicatorView, NSArray, NSDictionary;

@interface CDSUpgradeViewController : ACUIViewController {

	UIScrollView* _scrollView;
	UIView* _contentView;
	UIImageView* _cloudDriveLogo;
	UILabel* _titleLabel;
	UILabel* _warningLabel;
	UIButton* _upgradeButton;
	UIActivityIndicatorView* _spinner;
	NSArray* _devicesThatNeedUpgrade;
	NSArray* _devicesThatCannotUpgrade;
	NSDictionary* _plainTextAttributes;
	NSDictionary* _boldTextAttributes;
	NSDictionary* _compactBoldTextAttributes;
	id<CDSUpgradeViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CDSUpgradeViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_upgradeWarningText;
-(id)_warningForAllDevicesBeingIneligibleForUpgrade;
-(id)_warningForSomeDevicesBeingEligibleForUpgrade;
-(id)_commaSeparatedStringWithBoldNamesForDevices:(id)arg1 ;
-(void)_loadListOfDevicesImpactedByMigration;
-(void)_upgradeButtonWasTapped:(id)arg1 ;
-(double)_heightForText:(id)arg1 withFont:(id)arg2 constrainedToWidth:(double)arg3 ;
-(double)_heightForAttributedTextInLabel:(id)arg1 ;
-(void)_showFailedUpgradeAlert;
-(void)_handleSaveCompletionForAccount:(id)arg1 success:(BOOL)arg2 error:(id)arg3 ;
-(id)init;
-(id<CDSUpgradeViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CDSUpgradeViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(void)_dismiss;
-(void)cancelButtonTapped:(id)arg1 ;
-(id)specifiers;
@end

