//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug 30 2018 09:46:22).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITabBarController.h>

#import "MPAdViewDelegate-Protocol.h"
#import "SKStoreProductViewControllerDelegate-Protocol.h"
#import "UINavigationControllerDelegate-Protocol.h"
#import "UITabBarControllerDelegate-Protocol.h"

@class AUSmallBannerSuperView, MPAdView, NSString, UINavigationController;

@interface AUBaseTabBarController : UITabBarController <MPAdViewDelegate, UITabBarControllerDelegate, SKStoreProductViewControllerDelegate, UINavigationControllerDelegate>
{
    UINavigationController *_myRingtonesNavigationController;
    UINavigationController *_popularNavigationController;
    UINavigationController *_collectionsNavigationController;
    UINavigationController *_wallpaperNavigationController;
    MPAdView *_adView;
    AUSmallBannerSuperView *_bannerSuperView;
}

+ (id)rootViewController;
@property(retain, nonatomic) AUSmallBannerSuperView *bannerSuperView; // @synthesize bannerSuperView=_bannerSuperView;
@property(retain, nonatomic) MPAdView *adView; // @synthesize adView=_adView;
@property(nonatomic) __weak UINavigationController *wallpaperNavigationController; // @synthesize wallpaperNavigationController=_wallpaperNavigationController;
@property(nonatomic) __weak UINavigationController *collectionsNavigationController; // @synthesize collectionsNavigationController=_collectionsNavigationController;
@property(nonatomic) __weak UINavigationController *popularNavigationController; // @synthesize popularNavigationController=_popularNavigationController;
@property(nonatomic) __weak UINavigationController *myRingtonesNavigationController; // @synthesize myRingtonesNavigationController=_myRingtonesNavigationController;
- (void).cxx_destruct;
- (void)openCollectionByID:(id)arg1;
- (void)openRingtoneByID:(id)arg1;
- (_Bool)handleShortcutItem:(id)arg1;
- (_Bool)processURL:(id)arg1;
- (_Bool)processURLFromExtension:(id)arg1;
- (id)viewControllerForPresentingModalView;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(_Bool)arg3;
- (void)tabBarController:(id)arg1 didSelectViewController:(id)arg2;
- (id)splashView;
- (void)authorizeWithCompletion:(CDUnknownBlockType)arg1;
- (void)obtainEvents;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

