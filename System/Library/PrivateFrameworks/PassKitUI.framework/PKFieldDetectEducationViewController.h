/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, August 22, 2018 at 12:25:29 AM Central European Summer Time
* Operating System: Version 11.3.1 (Build 15E302)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PassKitUI/PKViewController.h>

@class UIImageView, PKTableHeaderView, UILabel, PKContinuousButton, PKMobileAssetManager, PKPaymentPass, AVPlayerLayer, AVPlayer, AVPlayerItem;

@interface PKFieldDetectEducationViewController : PKViewController {

	UIImageView* _background;
	UIImageView* _passSnapshot;
	PKTableHeaderView* _subheader;
	UILabel* _instructionLabel;
	PKContinuousButton* _continueButton;
	PKMobileAssetManager* _mobileAssetManager;
	PKPaymentPass* _paymentPass;
	AVPlayerLayer* _video;
	AVPlayer* _player;
	AVPlayerItem* _playerItem;
	BOOL _playerStarted;
	BOOL _invalidated;
	/*^block*/id _continueHandler;

}

@property (nonatomic,copy) id continueHandler;              //@synthesize continueHandler=_continueHandler - In the implementation block
+(id)assetBackgroundColor;
+(BOOL)shouldPresent;
-(id)init;
-(void)invalidate;
-(id)initWithCoder:(id)arg1 ;
-(void)dealloc;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillLayoutSubviews;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(id)initWithPaymentPass:(id)arg1 ;
-(void)continueTapped;
-(void)startPlayingVideo;
-(void)didFinishPlaying;
-(void)_removePlayerItem;
-(void)performContinue;
-(id)continueHandler;
-(void)setContinueHandler:(id)arg1 ;
@end

