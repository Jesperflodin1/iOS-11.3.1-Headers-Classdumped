//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "AUEmailViewControllerDelegate-Protocol.h"

@class AUSinusoidPreloader, NSString, UIImageView, UIView;
@protocol AULoginViewControllerDelegate;

@interface AULoginViewController : UIViewController <AUEmailViewControllerDelegate>
{
    UIImageView *_backgroundView;
    UIView *_termsView;
    id <AULoginViewControllerDelegate> _delegate;
    AUSinusoidPreloader *_sinusoidPreloader;
}

@property(retain, nonatomic) AUSinusoidPreloader *sinusoidPreloader; // @synthesize sinusoidPreloader=_sinusoidPreloader;
@property(nonatomic) __weak id <AULoginViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak UIView *termsView; // @synthesize termsView=_termsView;
@property(nonatomic) __weak UIImageView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void).cxx_destruct;
- (void)operationSucceeded;
- (_Bool)hidesBottomBarWhenPushed;
- (void)handleAuthError:(id)arg1;
- (void)showAllertWithTitle:(id)arg1 andMessage:(id)arg2;
- (void)sendFacebookUserInfoToServer;
- (void)openFBSession;
- (void)loginWithEmail:(id)arg1;
- (void)loginWithFB:(id)arg1;
- (void)registerInAudiko:(id)arg1;
- (void)cancel:(id)arg1;
- (void)autorizationSucceeded;
- (void)hideSpinner;
- (void)showSpinner;
- (void)configureBackground;
- (void)chooseServer:(id)arg1 withEvent:(id)arg2;
- (void)configureServerChoosingButton;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)applicationWillEnterForeground;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

