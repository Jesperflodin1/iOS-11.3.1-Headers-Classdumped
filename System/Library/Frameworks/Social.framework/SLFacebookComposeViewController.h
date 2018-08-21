/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:08:49 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/Social.framework/Social
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Social/Social-Structs.h>
#import <Social/SLComposeServiceViewController.h>
#import <libobjc.A.dylib/SLFacebookAudienceViewControllerDelegate.h>
#import <libobjc.A.dylib/SLFacebookAlbumChooserViewControllerDelegate.h>
#import <libobjc.A.dylib/SLFacebookVideoOptionsDelegate.h>
#import <libobjc.A.dylib/SLPlaceDataSourceDelegate.h>
#import <libobjc.A.dylib/SLSheetPlaceViewControllerDelegate.h>

@protocol SLFacebookAudienceViewController;
@class SLFacebookSession, ACAccountStore, ACAccount, SLSheetPlaceViewController, UIViewController, SLFacebookAlbumChooserViewController, SLFacebookVideoOptionsViewController, SLFacebookPost, SLFacebookPostPrivacyManager, SLFacebookPlaceManager, SLFacebookAlbumManager, ALAssetsLibrary, SLComposeSheetConfigurationItem, SLVideoQualityOption, CLInUseAssertion, NSString;

@interface SLFacebookComposeViewController : SLComposeServiceViewController <SLFacebookAudienceViewControllerDelegate, SLFacebookAlbumChooserViewControllerDelegate, SLFacebookVideoOptionsDelegate, SLPlaceDataSourceDelegate, SLSheetPlaceViewControllerDelegate> {

	BOOL _hasAccessToAccount;
	BOOL _hasCheckedAccess;
	BOOL _hasShowedLocationDeniedAlert;
	SLFacebookSession* _session;
	ACAccountStore* _accountStore;
	BOOL _didFetchPrivilegedAccount;
	ACAccount* _privilegedAccount;
	SLSheetPlaceViewController* _placeViewController;
	UIViewController*<SLFacebookAudienceViewController> _audienceViewController;
	SLFacebookAlbumChooserViewController* _albumChooserViewController;
	SLFacebookVideoOptionsViewController* _videoOptionsViewController;
	SLFacebookPost* _post;
	SLFacebookPostPrivacyManager* _postPrivacyManager;
	SLFacebookPlaceManager* _placeManager;
	SLFacebookAlbumManager* _albumManager;
	ALAssetsLibrary* _assetsLibrary;
	SLComposeSheetConfigurationItem* _privacyConfigurationItem;
	SLComposeSheetConfigurationItem* _albumConfigurationItem;
	SLComposeSheetConfigurationItem* _placeConfigurationItem;
	SLComposeSheetConfigurationItem* _videoOptionsConfigurationItem;
	SLVideoQualityOption* _selectedVideoQualityOption;
	struct {
		unsigned showAlbumAction : 1;
		unsigned showPrivacyAction : 1;
		unsigned showPlaceAction : 1;
		unsigned showVideoDetailAction : 1;
	}  _actionFlags;
	CLInUseAssertion* _locationInUseAssertion;
	/*^block*/id _completionHandler;

}

@property (retain) ACAccountStore * accountStore; 
@property (readonly) ACAccount * privilegedAccount; 
@property (nonatomic,copy) id completionHandler;                    //@synthesize completionHandler=_completionHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceBundle;
-(id)init;
-(void)didReceiveMemoryWarning;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_hostApplicationDidEnterBackground;
-(void)_hostApplicationWillEnterForeground;
-(ACAccountStore *)accountStore;
-(void)albumChooserViewController:(id)arg1 didSelectAlbum:(id)arg2 ;
-(id)albumManager;
-(void)placeManager:(id)arg1 failedWithError:(id)arg2 ;
-(void)placeManager:(id)arg1 updatedPlaces:(id)arg2 ;
-(void)videoOptionsViewController:(id)arg1 didSelectVideoQualityOption:(id)arg2 ;
-(void)placeViewController:(id)arg1 didSelectPlace:(id)arg2 ;
-(void)audienceViewController:(id)arg1 didSelectPostPrivacySetting:(id)arg2 ;
-(void)_presentAudienceViewController;
-(id)_privacyConfigurationItem;
-(id)_postPrivacyManager;
-(void)_presentPlaceViewController;
-(void)_presentAlbumViewController;
-(id)_albumConfigurationItem;
-(void)_presentVideoOptionsViewController;
-(id)_videoOptionsConfigurationItem;
-(id)_placeConfigurationItem;
-(void)_presentFacebookDisabledAlert;
-(void)handleImagePostWithURL;
-(ACAccount *)privilegedAccount;
-(id)_videoOptionIdentifer;
-(void)_setVideoSizeOptionIdentifier:(id)arg1 ;
-(BOOL)_isLocationAuthorizationDenied;
-(void)_setPlace:(id)arg1 ;
-(void)didSelectPost;
-(id)_videoQualityOption;
-(void)_handlePostPrivacyResultWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(void)_presentNoAccountsAlert;
-(void)_updateAlbumConfigurationItemWithDefaultAlbum;
-(void)_updatePrivacyConfigurationItemWithDefaultPrivacySetting;
-(id)configurationItems;
-(BOOL)isContentValid;
-(BOOL)hasAccountAccess;
-(void)setupCommonUI;
-(void)callCompletionHandlerWithResult:(long long)arg1 ;
-(void)presentationAnimationDidFinish;
-(void)setAccountStore:(ACAccountStore *)arg1 ;
@end

