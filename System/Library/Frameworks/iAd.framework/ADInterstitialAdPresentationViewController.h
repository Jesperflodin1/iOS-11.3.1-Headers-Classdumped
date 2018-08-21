/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:09:58 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/Frameworks/iAd.framework/iAd
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iAd/iAd-Structs.h>
#import <UIKit/UIViewController.h>

@class ADInterstitialAd, ADCountdownButton;

@interface ADInterstitialAdPresentationViewController : UIViewController {

	ADInterstitialAd* _interstitialAd;
	ADCountdownButton* _closeButton;

}

@property (nonatomic,__weak,readonly) ADInterstitialAd * interstitialAd; 
@property (nonatomic,retain) ADCountdownButton * closeButton;                         //@synthesize closeButton=_closeButton - In the implementation block
-(void)dealloc;
-(void)loadView;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)prefersStatusBarHidden;
-(void)setCloseButton:(ADCountdownButton *)arg1 ;
-(ADCountdownButton *)closeButton;
-(BOOL)shouldTestVisibilityAtPoint:(CGPoint)arg1 ;
-(id)initForInterstitialAd:(id)arg1 ;
-(ADInterstitialAd *)interstitialAd;
@end

