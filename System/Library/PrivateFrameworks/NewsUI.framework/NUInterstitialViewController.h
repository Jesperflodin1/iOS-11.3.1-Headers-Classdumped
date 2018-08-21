/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:24:57 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/NUPageable.h>

@protocol NULoadingDelegate;
@class NSString, ADInterstitialAd, UIView;

@interface NUInterstitialViewController : UIViewController <NUPageable> {

	BOOL _hasPresentedInterstitial;
	NSString* _pageIdentifier;
	id<NULoadingDelegate> _loadingDelegate;
	ADInterstitialAd* _interstitial;
	UIView* _interstitialView;

}

@property (nonatomic,readonly) ADInterstitialAd * interstitial;                         //@synthesize interstitial=_interstitial - In the implementation block
@property (nonatomic,retain) UIView * interstitialView;                                 //@synthesize interstitialView=_interstitialView - In the implementation block
@property (assign,nonatomic) BOOL hasPresentedInterstitial;                             //@synthesize hasPresentedInterstitial=_hasPresentedInterstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<NULoadingDelegate> loadingDelegate;              //@synthesize loadingDelegate=_loadingDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * pageIdentifier;                          //@synthesize pageIdentifier=_pageIdentifier - In the implementation block
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSString *)pageIdentifier;
-(void)setInterstitialView:(UIView *)arg1 ;
-(UIView *)interstitialView;
-(id<NULoadingDelegate>)loadingDelegate;
-(BOOL)hasPresentedInterstitial;
-(ADInterstitialAd *)interstitial;
-(void)setHasPresentedInterstitial:(BOOL)arg1 ;
-(void)setLoadingDelegate:(id<NULoadingDelegate>)arg1 ;
-(id)initWithInterstitial:(id)arg1 pageIdentifier:(id)arg2 ;
@end

