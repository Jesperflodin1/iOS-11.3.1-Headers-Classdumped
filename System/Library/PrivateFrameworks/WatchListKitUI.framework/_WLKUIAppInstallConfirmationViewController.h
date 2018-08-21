/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:29:02 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/WatchListKitUI.framework/WatchListKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WatchListKitUI/WLKUILoadingViewController.h>

@protocol WLKInstallable;
@class _WLKUIAppInstallConfirmationView, SSLookupItemOffer, NSString, UIButton, _WLKUIAppInstallLockup, UIBarButtonItem;

@interface _WLKUIAppInstallConfirmationViewController : WLKUILoadingViewController {

	id<WLKInstallable> _installable;
	_WLKUIAppInstallConfirmationView* _confirmationView;
	SSLookupItemOffer* _itemOffer;
	NSString* _updateTitle;
	NSString* _updateMessage;
	/*^block*/id _cancelationHandler;
	/*^block*/id _actionHandler;
	/*^block*/id _appStoreHandler;
	/*^block*/id _secondaryLinkHandler;
	UIButton* _actionButton;
	_WLKUIAppInstallLockup* _lockup;
	unsigned long long _state;
	UIBarButtonItem* _barButtonItem;

}

@property (nonatomic,retain) UIBarButtonItem * barButtonItem;              //@synthesize barButtonItem=_barButtonItem - In the implementation block
@property (nonatomic,copy) id cancelationHandler;                          //@synthesize cancelationHandler=_cancelationHandler - In the implementation block
@property (nonatomic,copy) id actionHandler;                               //@synthesize actionHandler=_actionHandler - In the implementation block
@property (nonatomic,copy) id appStoreHandler;                             //@synthesize appStoreHandler=_appStoreHandler - In the implementation block
@property (nonatomic,copy) id secondaryLinkHandler;                        //@synthesize secondaryLinkHandler=_secondaryLinkHandler - In the implementation block
@property (nonatomic,retain) UIButton * actionButton;                      //@synthesize actionButton=_actionButton - In the implementation block
@property (nonatomic,retain) _WLKUIAppInstallLockup * lockup;              //@synthesize lockup=_lockup - In the implementation block
@property (assign,nonatomic) unsigned long long state;                     //@synthesize state=_state - In the implementation block
-(id)init;
-(void)setTitle:(id)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(void)loadView;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(UIBarButtonItem *)barButtonItem;
-(void)setBarButtonItem:(UIBarButtonItem *)arg1 ;
-(void)setMessage:(id)arg1 ;
-(id)cancelationHandler;
-(void)setCancelationHandler:(id)arg1 ;
-(id)itemOffer;
-(void)setLockup:(_WLKUIAppInstallLockup *)arg1 ;
-(_WLKUIAppInstallLockup *)lockup;
-(UIButton *)actionButton;
-(void)setActionButton:(UIButton *)arg1 ;
-(void)_handleCancel;
-(void)setActionHandler:(id)arg1 ;
-(id)actionHandler;
-(id)initWithInstallable:(id)arg1 ;
-(void)setUpdateTitle:(id)arg1 ;
-(void)setUpdateMessage:(id)arg1 ;
-(void)setAppStoreHandler:(id)arg1 ;
-(void)setSecondaryLinkTitle:(id)arg1 ;
-(id)secondaryLinkHandler;
-(void)setSecondaryLinkHandler:(id)arg1 ;
-(void)setPreInstallState;
-(void)setInstallingState;
-(void)_handleAppStore;
-(void)_handleSecondaryLink;
-(void)_handleAction;
-(void)_fetchAppInfo;
-(id)_namedRatingWithRatings:(id)arg1 ;
-(id)_fileSizeWithDeviceSizes:(id)arg1 ;
-(id)appStoreHandler;
@end

