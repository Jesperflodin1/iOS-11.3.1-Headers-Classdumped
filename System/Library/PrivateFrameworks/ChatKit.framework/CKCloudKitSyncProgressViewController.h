/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:14:19 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/IMCloudKitEventHandler.h>

@protocol CKAKAccountManager, CKAKAppleIDAuthenticationContext, CKCloudKitSyncProgressViewControllerDelegate;
@class CKDeviceToDeviceEncryptionHelper, UILabel, UIButton, UIProgressView, UIStackView, IMCloudKitHooks, IMCloudKitSyncProgress, NSString;

@interface CKCloudKitSyncProgressViewController : UIViewController <IMCloudKitEventHandler> {

	BOOL _hidden;
	id<CKAKAccountManager> _accountManager;
	id<CKAKAppleIDAuthenticationContext> _authenticationContext;
	CKDeviceToDeviceEncryptionHelper* _deviceToDeviceEncryptionHelper;
	id<CKCloudKitSyncProgressViewControllerDelegate> _delegate;
	UILabel* _progressLabel;
	UILabel* _userMessageLabel;
	UIButton* _actionButton;
	UIProgressView* _progressBar;
	UIStackView* _verticalStackView;
	UIStackView* _horizontalStackView;
	IMCloudKitHooks* _cloudKitHooks;
	IMCloudKitSyncProgress* _lastProgress;

}

@property (nonatomic,readonly) UILabel * progressLabel;                                                      //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,readonly) UILabel * userMessageLabel;                                                   //@synthesize userMessageLabel=_userMessageLabel - In the implementation block
@property (nonatomic,readonly) UIButton * actionButton;                                                      //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressBar;                                                 //@synthesize progressBar=_progressBar - In the implementation block
@property (nonatomic,retain) UIStackView * verticalStackView;                                                //@synthesize verticalStackView=_verticalStackView - In the implementation block
@property (nonatomic,retain) UIStackView * horizontalStackView;                                              //@synthesize horizontalStackView=_horizontalStackView - In the implementation block
@property (nonatomic,readonly) id<CKAKAccountManager> accountManager;                                        //@synthesize accountManager=_accountManager - In the implementation block
@property (nonatomic,readonly) id<CKAKAppleIDAuthenticationContext> authenticationContext;                   //@synthesize authenticationContext=_authenticationContext - In the implementation block
@property (nonatomic,retain) CKDeviceToDeviceEncryptionHelper * deviceToDeviceEncryptionHelper;              //@synthesize deviceToDeviceEncryptionHelper=_deviceToDeviceEncryptionHelper - In the implementation block
@property (nonatomic,readonly) BOOL accountNeedsRepair; 
@property (nonatomic,readonly) IMCloudKitHooks * cloudKitHooks;                                              //@synthesize cloudKitHooks=_cloudKitHooks - In the implementation block
@property (nonatomic,retain) IMCloudKitSyncProgress * lastProgress;                                          //@synthesize lastProgress=_lastProgress - In the implementation block
@property (assign,nonatomic,__weak) id<CKCloudKitSyncProgressViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isHidden,nonatomic) BOOL hidden;                                                    //@synthesize hidden=_hidden - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)setHidden:(BOOL)arg1 ;
-(id<CKCloudKitSyncProgressViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKCloudKitSyncProgressViewControllerDelegate>)arg1 ;
-(BOOL)isHidden;
-(void)loadView;
-(void)viewWillLayoutSubviews;
-(void)viewDidLoad;
-(UIStackView *)verticalStackView;
-(UIProgressView *)progressBar;
-(id)initWithCloudKitHooks:(id)arg1 ;
-(BOOL)accountNeedsRepair;
-(id)_createLabel;
-(void)_actionButtonWasPressed:(id)arg1 ;
-(void)updateViewIfNeeded;
-(UILabel *)progressLabel;
-(UIButton *)actionButton;
-(UILabel *)userMessageLabel;
-(IMCloudKitSyncProgress *)lastProgress;
-(id<CKAKAccountManager>)accountManager;
-(id<CKAKAppleIDAuthenticationContext>)authenticationContext;
-(IMCloudKitHooks *)cloudKitHooks;
-(CKDeviceToDeviceEncryptionHelper *)deviceToDeviceEncryptionHelper;
-(void)handleDeviceToDeviceEncryptionStateRepairCompleted:(BOOL)arg1 error:(id)arg2 ;
-(void)performDeviceToDeviceEncryptionStateRepair;
-(void)setLastProgress:(IMCloudKitSyncProgress *)arg1 ;
-(void)cloudKitEventNotificationManager:(id)arg1 syncProgressDidUpdate:(id)arg2 ;
-(void)addToToolbar:(id)arg1 ;
-(void)setDeviceToDeviceEncryptionHelper:(CKDeviceToDeviceEncryptionHelper *)arg1 ;
-(void)setVerticalStackView:(UIStackView *)arg1 ;
-(UIStackView *)horizontalStackView;
-(void)setHorizontalStackView:(UIStackView *)arg1 ;
@end

