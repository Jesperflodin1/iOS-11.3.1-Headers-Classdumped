/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:12:35 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PreferenceBundles/VideoSubscriberAccountSettings.bundle/VideoSubscriberAccountSettings
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Preferences/PSViewController.h>
#import <VideoSubscriberAccountSettings/VSAccountInfoViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderPickerViewControllerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderRequestManagerDelegate.h>
#import <libobjc.A.dylib/VSIdentityProviderViewControllerDelegate.h>
#import <libobjc.A.dylib/VSRemoteNotifierDelegate.h>

@class VSPersistentStorage, VSRestrictionsCenter, UIViewController, NSOperationQueue, VSRemoteNotifier, VSIdentityProviderRequestManager, NSString;

@interface VSSettingsViewController : PSViewController <VSAccountInfoViewControllerDelegate, VSIdentityProviderPickerViewControllerDelegate, VSIdentityProviderRequestManagerDelegate, VSIdentityProviderViewControllerDelegate, VSRemoteNotifierDelegate> {

	VSPersistentStorage* _storage;
	VSRestrictionsCenter* _restrictionsCenter;
	UIViewController* _currentChildViewController;
	NSOperationQueue* _privateQueue;
	VSRemoteNotifier* _remoteNotifier;
	VSIdentityProviderRequestManager* _requestManager;

}

@property (nonatomic,retain) VSPersistentStorage * storage;                                  //@synthesize storage=_storage - In the implementation block
@property (nonatomic,retain) VSRestrictionsCenter * restrictionsCenter;                      //@synthesize restrictionsCenter=_restrictionsCenter - In the implementation block
@property (nonatomic,retain) UIViewController * currentChildViewController;                  //@synthesize currentChildViewController=_currentChildViewController - In the implementation block
@property (nonatomic,retain) NSOperationQueue * privateQueue;                                //@synthesize privateQueue=_privateQueue - In the implementation block
@property (nonatomic,retain) VSRemoteNotifier * remoteNotifier;                              //@synthesize remoteNotifier=_remoteNotifier - In the implementation block
@property (nonatomic,retain) VSIdentityProviderRequestManager * requestManager;              //@synthesize requestManager=_requestManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)accountInfoViewController:(id)arg1 didSelectEditAccountForAccount:(id)arg2 identityProvider:(id)arg3 ;
-(void)accountInfoViewControllerWantsMoreApps:(id)arg1 ;
-(void)_setupAppropriateChildViewController;
-(void)_confirmDeletionOfAccount:(id)arg1 withAccountInfoViewController:(id)arg2 ;
-(void)_startSigningOutOfAccount:(id)arg1 withAccountInfoViewController:(id)arg2 ;
-(void)_forciblySignOutOfAccount:(id)arg1 ;
-(void)_presentAlertForError:(id)arg1 offeringToDeleteAccount:(id)arg2 ;
-(void)_presentError:(id)arg1 withAccount:(id)arg2 ;
-(void)_updateChildViewController:(id)arg1 searchController:(id)arg2 rightBarButtonItem:(id)arg3 ;
-(void)_loadAppropriateChildViewController;
-(void)_removeCurrentChildViewControllerIfNecessary;
-(void)setCurrentChildViewController:(UIViewController *)arg1 ;
-(UIViewController *)currentChildViewController;
-(void)dealloc;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(VSPersistentStorage *)storage;
-(void)setStorage:(VSPersistentStorage *)arg1 ;
-(NSOperationQueue *)privateQueue;
-(void)setPrivateQueue:(NSOperationQueue *)arg1 ;
-(void)dismissIdentityProviderViewController:(id)arg1 ;
-(void)identityProviderViewControllerDidCancel:(id)arg1 ;
-(VSIdentityProviderRequestManager *)requestManager;
-(void)identityProviderViewController:(id)arg1 didFinishRequest:(id)arg2 withResult:(id)arg3 ;
-(void)identityProviderRequestManager:(id)arg1 finishedRequest:(id)arg2 withResult:(id)arg3 ;
-(void)setRequestManager:(VSIdentityProviderRequestManager *)arg1 ;
-(VSRestrictionsCenter *)restrictionsCenter;
-(void)setRestrictionsCenter:(VSRestrictionsCenter *)arg1 ;
-(void)_presentError:(id)arg1 ;
-(void)identityProviderPickerViewController:(id)arg1 didPickIdentityProvider:(id)arg2 ;
-(void)remoteNotifier:(id)arg1 didReceiveRemoteNotificationWithUserInfo:(id)arg2 ;
-(VSRemoteNotifier *)remoteNotifier;
-(void)setRemoteNotifier:(VSRemoteNotifier *)arg1 ;
@end
