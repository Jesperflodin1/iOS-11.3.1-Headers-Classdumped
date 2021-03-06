/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:22:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeUI/HUUserTableViewController.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceFooterViewDelegate.h>
#import <libobjc.A.dylib/HUAboutResidentDeviceViewControllerDelegate.h>
#import <libobjc.A.dylib/HUSwitchCellDelegate.h>

@class HFUserItem, HUEditUserItemManager, HUPendingAccessoriesGridViewController, HUAboutResidentDeviceFooterView, NSString;

@interface HUEditUserViewController : HUUserTableViewController <HUAboutResidentDeviceFooterViewDelegate, HUAboutResidentDeviceViewControllerDelegate, HUSwitchCellDelegate> {

	HFUserItem* _userItem;
	HUEditUserItemManager* _editUserItemManager;
	HUPendingAccessoriesGridViewController* _pendingAccessoriesViewController;
	HUAboutResidentDeviceFooterView* _aboutResidentDeviceFooterView;

}

@property (nonatomic,copy,readonly) HFUserItem * userItem;                                                             //@synthesize userItem=_userItem - In the implementation block
@property (nonatomic,readonly) HUEditUserItemManager * editUserItemManager;                                            //@synthesize editUserItemManager=_editUserItemManager - In the implementation block
@property (nonatomic,readonly) HUPendingAccessoriesGridViewController * pendingAccessoriesViewController;              //@synthesize pendingAccessoriesViewController=_pendingAccessoriesViewController - In the implementation block
@property (nonatomic,retain) HUAboutResidentDeviceFooterView * aboutResidentDeviceFooterView;                          //@synthesize aboutResidentDeviceFooterView=_aboutResidentDeviceFooterView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(Class)cellClassForItem:(id)arg1 indexPath:(id)arg2 ;
-(id)childViewControllersToPreload;
-(void)switchCell:(id)arg1 didTurnOn:(BOOL)arg2 ;
-(void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 ;
-(id)initWithItem:(id)arg1 home:(id)arg2 ;
-(HUEditUserItemManager *)editUserItemManager;
-(HUPendingAccessoriesGridViewController *)pendingAccessoriesViewController;
-(BOOL)shouldHideSeparatorsForCell:(id)arg1 indexPath:(id)arg2 ;
-(void)_removeUser;
-(HFUserItem *)userItem;
-(id)_lazyAboutResidentDeviceFooterView;
-(HUAboutResidentDeviceFooterView *)aboutResidentDeviceFooterView;
-(void)setAboutResidentDeviceFooterView:(HUAboutResidentDeviceFooterView *)arg1 ;
-(void)learnMoreLinkTapped:(id)arg1 ;
-(void)aboutResidentDeviceViewControllerDidFinish:(id)arg1 ;
-(id)userID;
@end

